// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from village_interfaces:msg/Book.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__MSG__DETAIL__BOOK__TRAITS_HPP_
#define VILLAGE_INTERFACES__MSG__DETAIL__BOOK__TRAITS_HPP_

#include "village_interfaces/msg/detail/book__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const village_interfaces::msg::Book & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: content
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "content: ";
    value_to_yaml(msg.content, out);
    out << "\n";
  }

  // member: image
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "image:\n";
    to_yaml(msg.image, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const village_interfaces::msg::Book & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<village_interfaces::msg::Book>()
{
  return "village_interfaces::msg::Book";
}

template<>
inline const char * name<village_interfaces::msg::Book>()
{
  return "village_interfaces/msg/Book";
}

template<>
struct has_fixed_size<village_interfaces::msg::Book>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<village_interfaces::msg::Book>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<village_interfaces::msg::Book>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // VILLAGE_INTERFACES__MSG__DETAIL__BOOK__TRAITS_HPP_
