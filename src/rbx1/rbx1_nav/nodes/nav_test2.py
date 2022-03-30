#!/usr/bin/env python

import math
from random import sample
from sre_constants import SUCCESS
import rospy
from geometry_msgs.msg import Pose,Point,Quaternion,Twist,PoseWithCovarianceStamped
import actionlib
from actionlib_msgs.msg import *
from move_base_msgs.msg import MoveBaseAction,MoveBaseGoal

class NavT:
    def __init__(self) -> None:
        rospy.init_node('nav_test')
        rospy.on_shutdown(self.shutdown)
        self.rest_time = rospy.get_param('~rest_time',10)
        self.fake_test = rospy.get_param('~fake_time',False)

        goal_states = ['PENDING','ACTIVE','PREEMPTED','SUCCEEDED','ABORTED','REJECTED','PREEMPTING','RECALLING','RECALLED','LOST']
        locations = dict()
        locations['hall_foyer'] = Pose(Point(0.643,4.720,0.000),Quaternion(0.000,0.000,0.223,0.975))
        locations['hall_kitchen'] = Pose(Point(-1.994,4.382,0.000),Quaternion(0.000,0.000,-0.670,0.743))
        locations['hall_bedroom'] = Pose(Point(-3.719,4.401,0.000),Quaternion(0.000,0.000,0.733,0.680))
        locations['living_room_1'] = Pose(Point(0.720,2.229,0.000),Quaternion(0.000,0.000,0.786,0.618))
        locations['living_room_2'] = Pose(Point(1.471,1.007,0.000),Quaternion(0.000,0.000,0.480,0.877))
        locations['dining_room_1'] = Pose(Point(-0.861,-0.019,0.000),Quaternion(0.000,0.000,0.892,-0.451))

        self.cmd_vel_pub = rospy.Publisher('cmd_vel',Twist,queue_size=5)

        self.move_base = actionlib.SimpleActionClient('move_base',MoveBaseAction)
        rospy.loginfo('Waiting for move_base action server...')
        self.move_base.wait_for_server(rospy.Duration(60))
        rospy.loginfo('Connected to move_base server')

        initial_pose = PoseWithCovarianceStamped()
        n_locations = len(locations)
        n_goal = 0
        n_successes = 0
        i = n_locations
        distance_traveled = 0
        start_time = rospy.Time.now()
        running_time = 0
        location=''
        last_location=''
        rospy.loginfo('Click on the map in RViz to set the initial pose...')
        rospy.wait_for_message('initialpose',PoseWithCovarianceStamped)
        self.last_location = Pose()
        rospy.Subscriber('initialpose',PoseWithCovarianceStamped,self.update_initial_pose)
        while initial_pose.header.stamp == '':
            rospy.sleep(1)
        
        rospy.loginfo('Starting navigation test')

        while not rospy.is_shutdown():
            if i == n_locations:
                i= 0
                sequence = sample(locations,n_locations)
                if sequence[0] == last_location:
                    i = 1
            location = sequence[i]

            if initial_pose.header.stamp == '':
                distance = math.sqrt(math.pow(locations[location].position.x-locations[last_location].position.x,2)+math.pow(locations[location].position.y-locations[last_location].position.y,2))
            else:
                rospy.loginfo('Updating current pose.')
                distance = math.sqrt(math.pow(locations[location].position.x-initial_pose.position.x,2)+math.pow(locations[location].position.y-initial_pose.position.y,2))
                initial_pose.header.stamp = ''
        
            last_location = location
            i += 1
            n_goal += 1
            self.goal = MoveBaseGoal()
            self.goal.target_pose.pose = locations[location]
            self.goal.target_pose.header.frame_id = 'map'
            self.goal.target_pose.header.stamp = rospy.Time.now()

            rospy.loginfo('Going to:'+str(location))
            self.move_base.send_goal(self.goal)
            finished_within_time = self.move_base.wait_for_result(rospy.Duration(300))

            if not finished_within_time:
                self.move_base.cancel_goal()
                rospy.loginfo('Timed out achieving goal')
            else:
                state = self.move_base.get_state()
                if state == GoalStatus.SUCCEEDED:
                    rospy.loginfo('Goal succeeded!')
                    n_successes += 1
                    distance_traveled += distance
                else:
                    rospy.loginfo('Goal failed with error code:'+str(goal_states[state]))
        
            running_time = rospy.Time.now()-start_time
            running_time = running_time.secs / 60.0

            rospy.loginfo('Success so far: '+str(n_successes) + '/'+str(n_goal) + ' - '+str(100+n_successes/n_goal)+'%')
            rospy.loginfo('Running time: '+str(math.trunc(running_time,1))+' min Distance: '+str(math.trunc(distance_traveled,1))+' m')
            rospy.sleep(self.rest_time)
    
    def update_initial_pose(self,initial_pose):
        self.initial_pose = initial_pose

    def shutdown(self):
        rospy.loginfo('Stopping the robot...')
        self.move_base.cancel_goal()
        rospy.sleep(2)
        self.cmd_vel_pub.publish(Twist())
        rospy.sleep(1)
    
def trunc(f,n):
    slen = len('%.*f' % (n, f))
    return float(str(f)[:slen])


if __name__ == '__main__':
    try:
        NavT()
        rospy.spin()
    except rospy.ROSInterruptException:
        rospy.loginfo("AMCL navigation test finished.")
