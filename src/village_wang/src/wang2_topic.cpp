#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

using std::placeholders::_1;

class node_test: public rclcpp::Node
{
private:
    // 声明订阅
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr sub_book;

    // 声明回调
    void book_callback(const std_msgs::msg::String::SharedPtr book);
public:
    node_test(std::string node_name);
};

node_test::node_test(std::string node_name):Node(node_name)
{
    RCLCPP_INFO(this->get_logger(), "hello, I'm %s_test!", node_name.c_str());
    // 创建订阅者
    sub_book = this->create_subscription<std_msgs::msg::String>("huang_book", 10, std::bind(&node_test::book_callback, this, _1));
}

void node_test::book_callback(const std_msgs::msg::String::SharedPtr book)
{
    RCLCPP_INFO(this->get_logger(), "%s was looked!!", book->data.c_str());
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<node_test>("wang2");

    
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

