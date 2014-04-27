#!/usr/bin/env python

import rospy
from traffic_lights.msg import Light
import random

def talker():
    pub= rospy.Publisher('/traffic/light', Light)
    rospy.init_node('talker', anonymous=True)
    rate = rospy.Rate(0.5)

    colors={1:"red", 2:"yellow", 3:"green"}

    
    while not rospy.is_shutdown():
        i = random.randint(1,3)
        curr = colors[i]
	rospy.loginfo(curr)
	pub.publish(curr)
	rate.sleep()

if __name__=='__main__':
    try:
	talker()
    except rospy.ROSInterruptException: pass

