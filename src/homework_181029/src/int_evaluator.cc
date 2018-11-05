#include "ros/ros.h"
#include "homework_181029/TwoInts.h"
#include "std_msgs/builtin_int64.h"
#include "int_evaluator.h"

IntEvaluator::IntEvaluator()
{
    this->sub = this->n.subscribe<homework_181029::TwoInts>("hw181029_data", 1000, boost::bind(&IntEvaluator::dataReceivingCallback, this, _1, this));
}

inline void IntEvaluator::dataReceivingCallback(const homework_181029::TwoInts::ConstPtr &ints, IntEvaluator *pThis)
{
    std_msgs::Int64 result = pThis->evalReceivedData(ints);
    pThis->publishResult(result);
}

inline std_msgs::Int64 IntEvaluator::evalReceivedData(const homework_181029::TwoInts::ConstPtr &ints)
{
    std_msgs::Int64 result;
    result.data = ints->a + ints->b;
    ROS_INFO("Received %ld and %ld, the result is %ld", ints->a, ints->b, result.data);
    return result;
}

inline void IntEvaluator::publishResult(std_msgs::Int64 a)
{
    pub.publish(a);
    ROS_INFO("Result published");
}