#include "ros/ros.h"
#include "homework_181029/TwoInts.h"
#include <random>

int main(int argc, char **argv)
{
    ros::init(argc, argv, "int_generator");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<homework_181029::TwoInts>("hw181029_data", 1000);
    ros::Rate loop_rate(1);

    std::random_device rd;
    std::default_random_engine e(rd());
    std::uniform_int_distribution<> u(0, 100);

    homework_181029::TwoInts ints;

    while (ros::ok())
    {
        ints.a = u(e);
        ints.b = u(e);

        pub.publish(ints);

        ROS_INFO("%ld and %ld are sent to the next node", ints.a, ints.b);

        ros::spinOnce();

        loop_rate.sleep();
    }
    return 0;
}
