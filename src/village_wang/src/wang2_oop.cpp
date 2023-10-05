#include "rclcpp/rclcpp.hpp"

class wang2_test: public rclcpp::Node
{
private:
    /* data */
public:
    wang2_test(std::string node_name);
};

wang2_test::wang2_test(std::string node_name):Node(node_name)
{
    RCLCPP_INFO(this->get_logger(), "hello, I'm %s_test!", node_name.c_str());
}



int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<wang2_test>("wang2");

    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

