// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from village_interfaces:msg/Book.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__MSG__DETAIL__BOOK__BUILDER_HPP_
#define VILLAGE_INTERFACES__MSG__DETAIL__BOOK__BUILDER_HPP_

#include "village_interfaces/msg/detail/book__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace village_interfaces
{

namespace msg
{

namespace builder
{

class Init_Book_image
{
public:
  explicit Init_Book_image(::village_interfaces::msg::Book & msg)
  : msg_(msg)
  {}
  ::village_interfaces::msg::Book image(::village_interfaces::msg::Book::_image_type arg)
  {
    msg_.image = std::move(arg);
    return std::move(msg_);
  }

private:
  ::village_interfaces::msg::Book msg_;
};

class Init_Book_content
{
public:
  Init_Book_content()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Book_image content(::village_interfaces::msg::Book::_content_type arg)
  {
    msg_.content = std::move(arg);
    return Init_Book_image(msg_);
  }

private:
  ::village_interfaces::msg::Book msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::village_interfaces::msg::Book>()
{
  return village_interfaces::msg::builder::Init_Book_content();
}

}  // namespace village_interfaces

#endif  // VILLAGE_INTERFACES__MSG__DETAIL__BOOK__BUILDER_HPP_
