#include <functional>
#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "tutorial_interfaces/srv/money.hpp"
#include <iostream>

using std::placeholders::_1;

class MinimalClienter : public rclcpp::Node
{
public:
  MinimalClienter(): Node("client_launch_test")
  {
    money_client = this->create_client<tutorial_interfaces::srv::Money>("service_launch_node");
  }

  void send_client()
  {

    RCLCPP_INFO(this->get_logger(), "ready to get the request!!!");
    // 请求上线
    while (!money_client->wait_for_service(std::chrono::seconds(1)))
    {
      RCLCPP_WARN(this->get_logger(), "waitting for the service!");
    }
    // 请求数据
    auto request = std::make_shared<tutorial_interfaces::srv::Money::Request>();
    request->name = service_name;
    request->money = service_money;
    // 发送异步请求
    money_client->async_send_request(request, std::bind(&MinimalClienter::client_callback,this,_1));
    std::exit(0);
  }

private:
  void client_callback(rclcpp::Client<tutorial_interfaces::srv::Money>::SharedFuture response)
  {
    auto result = response.get();
    RCLCPP_INFO(this->get_logger(), "result_success = %d\n result_money = %d", result->success, result->money);

    if(result->success)
    {
      RCLCPP_INFO(this->get_logger(), "get the money successfully!!!");
    }else
    {
      RCLCPP_INFO(this->get_logger(), "get the money failed!!!");
    }
    
  }
  std::string service_name = this->declare_parameter("service_launch_name", "noname");
  std::uint32_t service_money  = this->declare_parameter("service_launch_money", 0);

  rclcpp::Client<tutorial_interfaces::srv::Money>::SharedPtr money_client;
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  auto node = std::make_shared<MinimalClienter>();
  node->send_client();
  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}