#!/usr/bin/env python
import rospy
from traffic_lights.msg import Light

def callback(data):
    rospy.loginfo(rospy.get_caller_id()+"Traffic lights color is %s", data.color)

def listener():
    rospy.init_node('listener', anonymous=True)
    rospy.Subscriber('/traffic/light', Light, callback)

    rospy.spin()

if __name__=='__main__':
    listener()
