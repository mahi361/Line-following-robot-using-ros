

#include <ros.h>
#include <std_msgs/String.h>

ros::NodeHandle nh;

const int irPin1 = 2;
const int irPin2 = 3;
const int irPin3 = 4;
const int irPin4 = 5;
const int irPin5 = 6;

const int ena = 11;
const int enb = 10;

const int ledPin = 13;     // LED pin

std_msgs::String str_msg;
ros::Publisher ir_pub("/ir_state", &str_msg);

void movCallback(const std_msgs::String& cmd_msg) {
  String command = cmd_msg.data;

  if (command == "forward") {
    digitalWrite(7, 0);
    digitalWrite(8, 1);
    digitalWrite(9, 0);
    digitalWrite(12, 1);
  } else if (command == "right") {
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(12, 1);
  } else if (command == "left") {
    digitalWrite(7, 0);
    digitalWrite(8, 1);
    digitalWrite(9, 0);
    digitalWrite(12, 0);
  } else if (command == "cright") {
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(12, 1);
  } else if (command == "cleft") {
    digitalWrite(7, 0);
    digitalWrite(8, 1);
    digitalWrite(9, 0);
    digitalWrite(12, 0);
  } else if (command == "sright") {
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(12, 1);
  } else if (command == "sleft") {
    digitalWrite(7, 0);
    digitalWrite(8, 1);
    digitalWrite(9, 0);
    digitalWrite(12, 0);
  } else if (command == "mright") {
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(12, 1);
  } else if (command == "mleft") {
    digitalWrite(7, 0);
    digitalWrite(8, 1);
    digitalWrite(9, 0);
    digitalWrite(12, 0);
  } else if (command == "stop") {
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(12, 0);
  } else {
    digitalWrite(7, 0);
    digitalWrite(8, 0);
    digitalWrite(9, 0);
    digitalWrite(12, 0);
    digitalWrite(10, 0);

  }
}

ros::Subscriber<std_msgs::String> sub("mov_state", &movCallback);

void setup() {
  pinMode(irPin1, INPUT);
  pinMode(irPin2, INPUT);
  pinMode(irPin3, INPUT);
  pinMode(irPin4, INPUT);
  pinMode(irPin5, INPUT);

  pinMode(ledPin, OUTPUT);

  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);

  nh.initNode();
  nh.advertise(ir_pub);
  nh.subscribe(sub);
}

void loop() {
  analogWrite(ena,150);
  analogWrite(enb,150);

  int irState1 = digitalRead(irPin1);
  int irState2 = digitalRead(irPin2);
  int irState3 = digitalRead(irPin3);
  int irState4 = digitalRead(irPin4);
  int irState5 = digitalRead(irPin5);

  if (irState1 && irState2 && !irState3 && irState4 && irState5 ) {
    str_msg.data = "00100";
  } else if (irState1 && irState2 && irState3 && !irState4 && irState5 ) {
    str_msg.data = "00010";
  } else if (irState1 && !irState2 && irState3 && irState4 && irState5 ) {
    str_msg.data = "01000";
  } else if (!irState1 && !irState2 && !irState3 && !irState4 && !irState5 ) {
    str_msg.data = "11111";
  } else if (!irState1 && irState2 && irState3 && irState4 && irState5 ) {
    str_msg.data = "10000";
  } else if (irState1 && irState2 && irState3 && irState4 && !irState5 ) {
    str_msg.data = "00001";
  } else if (!irState1 && !irState2 && irState3 && irState4 && irState5 ) {
    str_msg.data = "11000";
  } else if (irState1 && irState2 && irState3 && !irState4 && !irState5 ) {
    str_msg.data = "00011";
  } else if (irState1 && !irState2 && !irState3 && irState4 && irState5 ) {
    str_msg.data = "01100";
  } else if (irState1 && irState2 && !irState3 && !irState4 && irState5 ) {
    str_msg.data = "00110";
  } else {
    str_msg.data = "00000";
  }

  ir_pub.publish(&str_msg);
  nh.spinOnce();

  // Wait for incoming messages from ROS
  delay(100);
}
