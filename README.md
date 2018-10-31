# homework_181029

![rqt_graph](https://github.com/DmitriZhao/dianracing_assignments/blob/master/.screenshots/homework_181029::rqt_graph.png)

## Compile

        cd ./dianracing_assignments
        catkin_make

## Usage

        # in the first terminal
        **roscore**
        # <Ctrl> + <Shift> + <T>

        # in the second terminal
        **source ./devel/setup.bash**   #or setup.zsh, for zsh
        **rosrun homework_181029 int_generator**
        # <Ctrl> + <Shift> + <T>

        # in the third terminal
        **source ./devel/setup.bash**
        **rosrun homework_181029 int_evaluator**
        # <Ctrl> + <Shift> + <T>

        # in the fourth terminal
        **source ./devel/setup.bash**
        **rosrun homework_181029 int_receiver**
        # <Ctrl> + <Shift> + <T>

        # in the fifth terminal
        **rosrun rqt_graph rqt_graph**