#!/usr/bin/env python3

import rospy
from std_msgs.msg import String

def ir_state_callback(msg):
    if msg.data == "00100":
        led_pub.publish("forward")
    elif msg.data == "00010":
        led_pub.publish("right")
    elif msg.data == "01000":
        led_pub.publish("left")
    elif msg.data == "00001":
        led_pub.publish("cright")
    elif msg.data == "10000":
        led_pub.publish("ceft")
    elif msg.data == "00011":
        led_pub.publish("sright")
    elif msg.data == "11000":
        led_pub.publish("sleft")
    elif msg.data == "00110":
        led_pub.publish("mright")
    elif msg.data == "01100":
        led_pub.publish("mleft")
    elif msg.data == "00000":
        led_pub.publish("stop")

rospy.init_node('arduino_led_control')

rospy.Subscriber('/ir_state', String, ir_state_callback)
led_pub = rospy.Publisher('/mov_state', String, queue_size=10)

rospy.spin()

