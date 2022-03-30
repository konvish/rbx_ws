#!/usr/bin/env python

from json.tool import main
from multiprocessing.spawn import _main
import rospy
from geometry_msgs.msg import Twist
import math

class TimeOutBack:
    def __init__(self) -> None:
        rospy.init_node("time_out_and_back",anonymous=False)
        
        rospy.on_shutdown(self.shutdown)

        self.cmd_vel = rospy.Publisher("/cmd_vel",Twist,queue_size=1)

        rate = 50
        r = rospy.Rate(rate)

        goal_distance = 1.0
        goal_angle = math.pi

        linear_speed = 0.2
        angular_speed = 1.0

        distance_duration = goal_distance / linear_speed
        augle_duration = goal_angle / angular_speed

        for i in range(2):
            move_cmd = Twist()
            
            move_cmd.linear.x = linear_speed
            ticks = int(distance_duration * rate)

            for t in range(ticks):
                self.cmd_vel.publish(move_cmd)
                r.sleep()
            
            move_cmd = Twist()
            self.cmd_vel.publish(move_cmd)
            rospy.sleep(1)

            ticks = int(augle_duration * rate)
            move_cmd.angular.z = angular_speed
            for t in range(ticks):
                self.cmd_vel.publish(move_cmd)
                r.sleep()
            
            move_cmd = Twist()
            self.cmd_vel.publish(move_cmd)
            rospy.sleep(1)
        
        self.cmd_vel.publish(Twist())

    def shutdown(self):
        rospy.loginfo('stop the robot...')
        self.cmd_vel.publish(Twist())
        rospy.sleep(1)

if __name__ == "__main__":
    try:
        TimeOutBack()
    except:
        rospy.logerr('init nodes errors')


