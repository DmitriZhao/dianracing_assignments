#ifndef INT_EVALUATOR_H
#define INT_EVALUATOR_H

class IntEvaluator
{
  public:
    IntEvaluator();
    static IntEvaluator * pThis;

  private:
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("hw181029_data", 1000, dataReceivingCallback);
    ros::Publisher pub = n.advertise<std_msgs::Int64>("hw181029_result", 1000);
    static inline void dataReceivingCallback(const homework_181029::TwoInts::ConstPtr &ints);
    static inline std_msgs::Int64 evalReceivedData(const homework_181029::TwoInts::ConstPtr &ints);
    inline void publishResult(std_msgs::Int64);
};

#endif