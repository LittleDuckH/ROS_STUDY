import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    config = os.path.join(
        get_package_share_directory('ros_service_launch'), 'config', 'ros_launch_test.yaml')
    
    client_launch_test = Node(
        package="ros_service_launch",
        executable="client_launch_node",
        parameters=[config]
    )
    launch_description = LaunchDescription([client_launch_test])
    return launch_description