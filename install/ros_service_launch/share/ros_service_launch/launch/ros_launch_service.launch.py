from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    service_launch_test = Node(
        package="ros_service_launch",
        executable="service_launch_node"
    )
    client_launch_test = Node(
        package="ros_service_launch",
        executable="client_launch_node",
        parameters=[{'service_launch_name': "huang"}, {'service_launch_money': 10086}]
    )
    launch_description = LaunchDescription([service_launch_test, client_launch_test])
    return launch_description