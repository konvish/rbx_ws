#!/usr/bin/env python

import rospy
import numpy as np
import tf2_ros
import message_filters
from nav_msgs.msg import Path
import TfMessageFilter
from sensor_msgs.msg import LaserScan
from math import *

class Scan2:
    def __init__(self,calib_odom) -> None:
        rospy.init_node('message_filter_node')
        rospy.on_shutdown(self.shutdown)
        self.calib_odom = calib_odom
        self.m_prevLDP = None
        self.m_PIICPParams
        self.m_OutputResult
        self.scan_pos_cal
        self.odom_pos_cal
        self.odom_increments = []
        self.odom_frames_ = rospy.get_param('odom_frame','odom')
        self.base_frames_ = rospy.get_param('base_frame','base_link')
        self.buffer = tf2_ros.Buffer()
        self.tf_ = tf2_ros.TransformListener(self.buffer)
        self.calib_flag_sub_ = rospy.Subscriber('calib_flag',Scan2,queue_size=5,callback=self.calibFlagCallback)
        self.odom_path_pub_ = rospy.Publisher('odoom_path_pub_',Path,queue_size=1)
        self.scan_path_pub_ = rospy.Publisher('scan_path_pub_',Path,queue_size=1)
        self.calib_path_pub_ = rospy.Publisher('calib_path_pub_',Path,queue_size=1)
        self.path_odom = Path()
        self.path_scan = Path()
        self.current_time = rospy.Time.now()
        self.path_odom.header.stamp = self.current_time
        self.path_scan.header.stamp = self.current_time
        self.path_odom.header.frame_id = 'odom'
        self.path_scan.header.frame_id='odom'
        self.scan_filter_sub_ = message_filters.Subscriber('/sick_scan',LaserScan)
        self.scan_filter_ = TfMessageFilter(self.scan_filter_sub_,self.buffer,self.odom_frames_,queue_size = 10)
        self.scan_filter_.registerCallback(self.scanCallback,Scan2)
        print('init over,wait for data!!!')

    def calibFlagCallback(self,msg):
        correct_matrix = self.calib_odom.solve()
        print("correct_matrix:"+correct_matrix)
        calib_path_eigen = []
        calib_pose = np.array(0,0,0)
        for i in range(len(self.odom_increments)):
            odom_inc = self.odom_increments[i]
            correct_inc = correct_matrix * odom_inc
            tmp_transform_matrix = np.array(cos(calib_pose(2)),-sin(calib_odom(2)),0,sin(calib_odom(2)),cos(calib_odom(2)),0,0,0,1)
            calib_pose += tmp_transform_matrix * correct_inc
            calib_path_eigen.append(calib_pose)
        
        self.publishPathEigen(calib_path_eigen,self.calib_path_pub_)
        self.scan_filter_sub_.unsubscribe()
        print("calibration over!!")
    
    def scanCallback(self,scan2):
        pass
        
        

    def shutdown(self):
        rospy.loginfo("Stopping the robot...")
        # Unregister the subscriber to stop cmd_vel publishing
        rospy.sleep(1)

class calib_odom:
    def __init__(self,data_len) -> None:
        self.data_len = data_len
        self.now_len = 0
        self.A = np.array([1,2,3])
        self.b = np.array([2,2])

    def set_data_len(self,ds_len):
        self.data_len = ds_len
        self.A.clear()
    
    def add_data(self,odom,scan):
        pass

    def solve(self):
        pass

    def is_full(self):
        pass

    def set_data_zero(self):
        pass

if __name__ == '__name__':
    try:
       calib_odom()
       rospy.spin()
    except rospy.ROSInitException:
        rospy.INFO('error')
