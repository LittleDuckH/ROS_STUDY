// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from tutorial_interfaces:msg/Picture.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__PICTURE__BUILDER_HPP_
#define TUTORIAL_INTERFACES__MSG__DETAIL__PICTURE__BUILDER_HPP_

#include "tutorial_interfaces/msg/detail/picture__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace tutorial_interfaces
{

namespace msg
{

namespace builder
{

class Init_Picture_image
{
public:
  Init_Picture_image()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::tutorial_interfaces::msg::Picture image(::tutorial_interfaces::msg::Picture::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::tutorial_interfaces::msg::Picture msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::tutorial_interfaces::msg::Picture>()
{
  return tutorial_interfaces::msg::builder::Init_Picture_image();
}

}  // namespace tutorial_interfaces

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__PICTURE__BUILDER_HPP_
