#!/usr/bin/env python


import cv2
import rospy
from cv_bridge import CvBridge,CvBridgeError 
from sensor_msgs.msg import Image
#import image_transport 

def i1_cb(image):
    bridge = CvBridge()
    a = bridge.imgmsg_to_cv2(image)
    cv2.imshow('camera',a)
    cv2.waitKey(3)
    #print "hello"

input_1 = rospy.Subscriber("iris_2/camera_iris/image_raw",Image,i1_cb)


def object_detection():
    rospy.init_node('obj_node', anonymous=True)
    #rate = rospy.Rate(20.0)
    while not rospy.is_shutdown():
        pass


if __name__ == '__main__':
    try:
        object_detection()
    except rospy.ROSInterruptException:
        pass

