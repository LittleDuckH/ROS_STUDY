#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"
// #include "tutorial_interfaces/msg/num.hpp"        
#include <chrono>
#include <functional>
#include <memory>
#include <string>


using std::placeholders::_1;
using namespace std::chrono_literals;



class li_test: public rclcpp::Node
{
private:
    // rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_book;
    // rclcpp::TimerBase::SharedPtr timer_;

    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr pub_book;
    size_t count_;
    void book_callback();
    // void timer_callback()
    // {
    //   auto message = std_msgs::msg::String();
    //   message.data = "Hello, world! " + std::to_string(count_++);
    //   RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    //   pub_book->publish(message);
    // }
public:
    li_test(std::string node_name);
};

li_test::li_test(std::string node_name):Node(node_name), count_(0)
{
    RCLCPP_INFO(this->get_logger(), "hello, I'm %s_test!", node_name.c_str());

    pub_book = this->create_publisher<std_msgs::msg::String>("huang_book", 10);
    // timer_ = this->create_wall_timer(500ms, std::bind(&li_test::book_callback, this, _1));
    timer_ = this->create_wall_timer(500ms, std::bind(&li_test::book_callback, this));
    
    
}

void li_test::book_callback()
{

    auto message = std_msgs::msg::String();
    message.data = "huang_book " + std::to_string(count_++);
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
    pub_book->publish(message);
}   


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<li_test>("li");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

// #include <chrono>
// #include <functional>
// #include <memory>
// #include <string>

// #include "rclcpp/rclcpp.hpp"
// #include "std_msgs/msg/string.hpp"

// using namespace std::chrono_literals;
// /* This example creates a subclass of Node and uses std::bind() to register a
// * member function as a callback from the timer. */

// class li_test : public rclcpp::Node
// {
//   public:
//     li_test()
//     : Node("li"), count_(0)
//     {
//       publisher_ = this->create_publisher<std_msgs::msg::String>("huang_book", 10);
//       timer_ = this->create_wall_timer(500ms, std::bind(&li_test::book_callback, this));
//     }

//   private:
//     void book_callback()
//     {
//       auto message = std_msgs::msg::String();
//       message.data = "Hello, world! " + std::to_string(count_++);
//       RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message.data.c_str());
//       publisher_->publish(message);
//     }
//     rclcpp::TimerBase::SharedPtr timer_;
//     rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
//     size_t count_;
// };

// int main(int argc, char * argv[])
// {
//   rclcpp::init(argc, argv);
//   rclcpp::spin(std::make_shared<li_test>());
//   rclcpp::shutdown();
//   return 0;
// }