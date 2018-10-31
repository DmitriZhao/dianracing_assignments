cmake_minimum_required(VERSION 2.8.3)
project(homework_181029)
find_package(catkin REQUIRED COMPONENTS
  roscpp std_msgs message_generation
)

add_message_files(FILES TwoInts.msg)

generate_messages(DEPENDENCIES std_msgs)

catkin_package(
  INCLUDE_DIRS include
  LIBRARIES homework_181029
  CATKIN_DEPENDS roscpp std_msgs message_runtime
  DEPENDS
)
include_directories(include ${catkin_INCLUDE_DIRS})

add_executable(int_generator src/int_generator.cc)
target_link_libraries(int_generator ${catkin_LIBRARIES})
add_dependencies(int_generator ${catkin_EXPORTED_TARGETS})

add_executable(int_evaluator src/int_evaluator.cc)
target_link_libraries(int_evaluator ${catkin_LIBRARIES})
add_dependencies(int_evaluator ${catkin_EXPORTED_TARGETS})

add_executable(int_receiver src/int_receiver.cc)
target_link_libraries(int_receiver ${catkin_LIBRARIES})
add_dependencies(int_receiver ${catkin_EXPORTED_TARGETS})