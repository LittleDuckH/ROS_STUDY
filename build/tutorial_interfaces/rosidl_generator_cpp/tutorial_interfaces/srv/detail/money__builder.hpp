// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:srv/Money.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__MONEY__BUILDER_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__MONEY__BUILDER_HPP_

#include "tutorial_interfaces/srv/detail/money__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Money_Request_money
{
public:
  explicit Init_Money_Request_money(::tutorial_interfaces::srv::Money_Request & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::Money_Request money(::tutorial_interfaces::srv::Money_Request::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Money_Request msg_;
};

class Init_Money_Request_name
{
public:
  Init_Money_Request_name()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Money_Request_money name(::tutorial_interfaces::srv::Money_Request::_name_type arg)
  {
    msg_.name = std::move(arg);
    return Init_Money_Request_money(msg_);
  }

private:
  ::tutorial_interfaces::srv::Money_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Money_Request>()
{
  return tutorial_interfaces::srv::builder::Init_Money_Request_name();
}

}  // namespace tutorial_interfaces


namespace tutorial_interfaces
{

namespace srv
{

namespace builder
{

class Init_Money_Response_money
{
public:
  explicit Init_Money_Response_money(::tutorial_interfaces::srv::Money_Response & msg)
  : msg_(msg)
  {}
  ::tutorial_interfaces::srv::Money_Response money(::tutorial_interfaces::srv::Money_Response::_money_type arg)
  {
    msg_.money = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::srv::Money_Response msg_;
};

class Init_Money_Response_success
{
public:
  Init_Money_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Money_Response_money success(::tutorial_interfaces::srv::Money_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_Money_Response_money(msg_);
  }

private:
  ::tutorial_interfaces::srv::Money_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::srv::Money_Response>()
{
  return tutorial_interfaces::srv::builder::Init_Money_Response_success();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__MONEY__BUILDER_HPP_
