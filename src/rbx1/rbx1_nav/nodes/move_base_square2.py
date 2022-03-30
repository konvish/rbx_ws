#!/usr/bin/env python

import rospy
from math import pi
from tf.transformations import quaternion_from_euler
from geometry_msgs.msg import Quaternion,Pose,Point,Twist
import actionlib
from actionlib_msgs.msg import *
from move_base_msgs.msg import MoveBaseAction,MoveBaseGoal
from visualization_msgs.msg import Marker

class MBSquare:
    def __init__(self) -> None:
        rospy.init_node('mbs')
        rospy.on_shutdown(self.shutdown)
        square_size = rospy.get_param('~square_size',1.0)
        quaternions = list()
        euler_angle = [pi/2,pi,3*pi/2,0]
        for angle in euler_angle:
            # 把角度转换成四元数
            q_angle = quaternion_from_euler(0,0,angle,axes='sxyz')
            q = Quaternion(q_angle)
            quaternions.append(q)

        waypoints = []
        waypoints.append(Pose(Point(square_size,0.0,0.0),quaternions[0]))
        waypoints.append(Pose(Point(square_size,square_size,0.0),quaternions[1]))
        waypoints.append(Pose(Point(0.0,square_size,0.0),quaternions[2]))
        waypoints.append(Pose(Point(0.0,0.0,0.0),quaternions[3]))

        # 初始化makers，主要用于rviz
        self.init_markers()

        for waypoint in waypoints:
            p = Point()
            p = waypoint.position
            self.markers.points.append(p)
        
        self.cmd_vel_pub = rospy.Publisher('cmd_vel',Twist,queue_size=5)
        self.move_base = actionlib.SimpleActionClient('move_base',MoveBaseAction)

        rospy.loginfo('waiting for move_base action server...')

        self.move_base.wait_for_server(rospy.Duration(60))

        rospy.loginfo('Connected to move base server...')
        rospy.loginfo('starting navigation test')

        i = 0
        while i < 4 and not rospy.is_shutdown():
            self.markers_pub.publish(self.markers)
            goal = MoveBaseGoal()
            goal.target_pose.header.frame_id='map'
            goal.target_pose.header.stamp = rospy.Time.now()
            goal.target_pose.pose = waypoints[i]
            self.move(goal)
            i+=1

    
    def move(self,goal):
        self.move_base.send_goal(goal)
        finished_within_time = self.move_base.wait_for_result(rospy.Duration(60))
        if not finished_within_time:
            self.move_base.cancel_goal()
            rospy.loginfo('Timed out achieving goal')
        else:
            state = self.move_base.get_state()
            if state == GoalStatus.SUCCEEDED:
                rospy.loginfo('Goal successed!')
    

    def init_markers(self):
        marker_scale = 0.15
        marker_lifetime = 0
        marker_ns = 'waypoints'
        marker_id = 0
        marker_color = {'r':1.0,'g':0.0,'b':0.0,'a':1.0}
        self.markers_pub = rospy.Publisher('waypoint_markers',Marker,queue_size=5)
        self.markers = Marker()
        self.markers.ns = marker_ns
        self.markers.id = marker_id
        self.markers.scale.x = marker_scale
        self.markers.scale.y = marker_scale
        self.markers.lifetime = rospy.Duration(marker_lifetime)
        self.markers.action = Marker.ADD
        self.markers.type = Marker.CUBE_LIST
        self.markers.color.r = marker_color['r']
        self.markers.color.g = marker_color['g']
        self.markers.color.b = marker_color['b']
        self.markers.color.a = marker_color['a']

        self.markers.header.frame_id='map'
        self.markers.header.stamp = rospy.Time.now()
        self.markers.points = []

    def shutdown(self):
        rospy.loginfo('Stopping the robot...')
        self.move_base.cancel_goal()
        rospy.sleep(2)
        self.cmd_vel_pub.publish(Twist())
        rospy.sleep(1)

if __name__ == '__main__':
    try:
        MBSquare()
    except rospy.ROSInterruptException:
        rospy.loginfo("Navigation test finished.")
