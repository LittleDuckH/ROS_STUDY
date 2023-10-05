from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    client_launch_test = Node(
        package="ros_service_launch",
        executable="client_launch_node",
        parameters=[{'service_launch_name': "huang"}, {'service_launch_money': 10086}]
    )
    launch_description = LaunchDescription([client_launch_test])
    return launch_description