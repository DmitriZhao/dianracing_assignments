#ifndef INT_EVALUATOR_H
#define INT_EVALUATOR_H

class IntEvaluator
{
public:
  IntEvaluator();

private:
  ros::NodeHandle n;
  ros::Subscriber sub;
  ros::Publisher pub = n.advertise<std_msgs::Int64>("hw181029_result", 1000);

  inline void dataReceivingCallback(const homework_181029::TwoInts::ConstPtr &, IntEvaluator *);
  inline std_msgs::Int64 evalReceivedData(const homework_181029::TwoInts::ConstPtr &);
  inline void publishResult(std_msgs::Int64);
};

#endif