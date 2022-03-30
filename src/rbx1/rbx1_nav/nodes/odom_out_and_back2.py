#!/usr/bin/env python

import rospy
from geometry_msgs.msg import Twist,Point,Quaternion
import math
import tf2_ros as tf
from rbx1_nav.transform_utils import normalize_angle,quat_to_angle

class OdomOutBack:
    def __init__(self) -> None:
        rospy.init_node("time_out_and_back",anonymous=False)
        
        rospy.on_shutdown(self.shutdown)

        self.cmd_vel = rospy.Publisher("/cmd_vel",Twist,queue_size=1)

        rate = 20
        r = rospy.Rate(rate)

        goal_distance = 1.0
        goal_angle = math.pi

        linear_speed = 0.15
        angular_speed = 1.0
        angular_tolerance = math.radians(2.5)
        self.tf_buffer = tf.Buffer()
        self.tf_listener = tf.TransformListener(self.tf_buffer)
        rospy.sleep(2)
        self.odom_frame='/odom'

        try:
            self.tf_buffer.lookup_transform(self.odom_frame,'/base_footprint',rospy.Time(),rospy.Duration(1.0))
            self.base_frame = '/base_footprint'
        except:
            try:
                self.tf_buffer.lookup_transform(self.odom_frame,'/base_link',rospy.Time(),rospy.Duration(1.0))
                self.base_frame = '/base_link'
            except:
                rospy.loginfo('cannot find transform between /odom and /base_link or /base_footprint')
                rospy.signal_shutdown('tf exception')
        
        position = Point()
        for i in range(2):
            move_cmd = Twist()
            
            move_cmd.linear.x = linear_speed
            (position,rotation) = self.get_odom()

            x_start = position.x
            y_start = position.y

            distance = 0

            while distance < goal_distance and not rospy.is_shutdown():
                self.cmd_vel.publish(move_cmd)
                r.sleep()
                (position,rotation) = self.get_odom()
                distance = math.sqrt(math.pow(position.x - x_start,2) + math.pow(position.y - y_start,2))
  
            move_cmd = Twist()
            self.cmd_vel.publish(move_cmd)
            rospy.sleep(1)
            
            move_cmd.angular.z = angular_speed
            last_angle = rotation
            turn_angle = 0

            while math.abs(last_angle+turn_angle) < math.abs(goal_angle) and rospy.is_shutdown():
                self.cmd_vel.publish(move_cmd)
                r.sleep()

                (position,rotation) = self.get_odom()
                delta_angle = normalize_angle(rotation - last_angle)

                turn_angle += delta_angle
                last_angle = rotation

            move_cmd = Twist()
            self.cmd_vel.publish(move_cmd)
            rospy.sleep(1)
        
        self.cmd_vel.publish(Twist())

    def get_odom(self):
        try:
            (trans,rot) = self.tf_buffer.lookup_transform(self.odom_frame,self.base_frame,rospy.Time(0))
        except:
            rospy.loginfo('tf exception')
            return
        return (Point(*trans),quat_to_angle(Quaternion(*rot)))

    def shutdown(self):
        rospy.loginfo('stop the robot...')
        self.cmd_vel.publish(Twist())
        rospy.sleep(1)

if __name__ == '__main__':
    try:
        OdomOutBack()
    except:
        rospy.logerr('init nodes errors')


