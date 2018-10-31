#include "ros/ros.h"
#include "homework_181029/TwoInts.h"
#include "std_msgs/builtin_int64.h"

void resultReceivingCallback(const std_msgs::Int64::ConstPtr i);

int main(int argc, char **argv)
{
    ros::init(argc, argv, "int_receiver");
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("hw181029_result", 1000, resultReceivingCallback);
    ros::spin();
    return 0;
}

void resultReceivingCallback(const std_msgs::Int64::ConstPtr i)
{
    ROS_INFO("Result is %ld", i->data);
}