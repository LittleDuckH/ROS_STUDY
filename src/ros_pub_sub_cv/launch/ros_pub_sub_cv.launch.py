from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    pub = Node(
        package="ros_pub_sub_cv",
        executable="pub_node",
    )
    sub = Node(
        package="ros_pub_sub_cv",
        executable="sub_node",
    )

    launch_description = LaunchDescription([pub, sub])
    return launch_description