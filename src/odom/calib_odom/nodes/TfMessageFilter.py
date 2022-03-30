#! /usr/bin/env python

import queue
import rospy
from message_filters import SimpleFilter

class TfMessageFilter(SimpleFilter):

    def __init__(self,input_filter,buffer,target_frame,queue_size=500):
        SimpleFilter.__init__(self)
        self.connectInput(input_filter)
        self.base_frame = input_filter.getTopic()
        self.target_frame = target_frame
        self.message_queue = queue.Queue(maxsize=queue_size)
        self.buffer = buffer
        self.max_queue_size = queue_size
        self._max_queue_size_so_far = 0

    
    def connectInput(self,input_filter):
        self.incoming_connection = input_filter.registerCallback(self.input_callback)
    

    def poll_transform(self,latest_msg_tstamp):
        tmp_queue = queue.Queue(self.max_queue_size)
        first_iter = True
        while not self.message_queue.empty():
            msg = self.message_queue.get()
            tstamp = msg.header.stamp
            if (first_iter and self.message_queue.qsize() > self._max_queue_size_so_far):
                first_iter = False
                self._max_queue_size_so_far= self.message_queue.qsize
                rospy.logdebug("Queue(%d) time range: %f-%f" % (self.message_queue.qsize,tstamp.secs,latest_msg_tstamp.secs))
                (trans,quat)= self.buffer.lookup_transform(self.base_frame,self.target_frame,tstamp)
                self.signalMessage(msg,(trans,quat))
                return
            else:
                tmp_queue.put(msg)
        
        self.message_queue = tmp_queue
    
    def input_callback(self,msg):
        if self.message_queue.full():
            rospy.logwarn("Queue too small. If you this message too often consider increasing queue_size")
            self.message_queue.get()
        self.message_queue.put(msg)
        self.poll_transform(msg.header.stamp)