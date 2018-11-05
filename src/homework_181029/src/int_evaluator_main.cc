#include "ros/ros.h"
#include "homework_181029/TwoInts.h"
#include "std_msgs/builtin_int64.h"
#include "int_evaluator.h"

int main(int argc, char **argv)
{
    ros::init(argc, argv, "int_evaluator");
    IntEvaluator eval;
    ros::spin();
    return 0;
}