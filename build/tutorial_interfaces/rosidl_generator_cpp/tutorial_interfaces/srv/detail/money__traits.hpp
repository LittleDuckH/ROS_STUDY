// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from tutorial_interfaces:srv/Money.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__SRV__DETAIL__MONEY__TRAITS_HPP_
#define TUTORIAL_INTERFACES__SRV__DETAIL__MONEY__TRAITS_HPP_

#include "tutorial_interfaces/srv/detail/money__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tutorial_interfaces::srv::Money_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    value_to_yaml(msg.name, out);
    out << "\n";
  }

  // member: money
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "money: ";
    value_to_yaml(msg.money, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tutorial_interfaces::srv::Money_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tutorial_interfaces::srv::Money_Request>()
{
  return "tutorial_interfaces::srv::Money_Request";
}

template<>
inline const char * name<tutorial_interfaces::srv::Money_Request>()
{
  return "tutorial_interfaces/srv/Money_Request";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Money_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Money_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<tutorial_interfaces::srv::Money_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const tutorial_interfaces::srv::Money_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }

  // member: money
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "money: ";
    value_to_yaml(msg.money, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const tutorial_interfaces::srv::Money_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<tutorial_interfaces::srv::Money_Response>()
{
  return "tutorial_interfaces::srv::Money_Response";
}

template<>
inline const char * name<tutorial_interfaces::srv::Money_Response>()
{
  return "tutorial_interfaces/srv/Money_Response";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Money_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Money_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<tutorial_interfaces::srv::Money_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<tutorial_interfaces::srv::Money>()
{
  return "tutorial_interfaces::srv::Money";
}

template<>
inline const char * name<tutorial_interfaces::srv::Money>()
{
  return "tutorial_interfaces/srv/Money";
}

template<>
struct has_fixed_size<tutorial_interfaces::srv::Money>
  : std::integral_constant<
    bool,
    has_fixed_size<tutorial_interfaces::srv::Money_Request>::value &&
    has_fixed_size<tutorial_interfaces::srv::Money_Response>::value
  >
{
};

template<>
struct has_bounded_size<tutorial_interfaces::srv::Money>
  : std::integral_constant<
    bool,
    has_bounded_size<tutorial_interfaces::srv::Money_Request>::value &&
    has_bounded_size<tutorial_interfaces::srv::Money_Response>::value
  >
{
};

template<>
struct is_service<tutorial_interfaces::srv::Money>
  : std::true_type
{
};

template<>
struct is_service_request<tutorial_interfaces::srv::Money_Request>
  : std::true_type
{
};

template<>
struct is_service_response<tutorial_interfaces::srv::Money_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // TUTORIAL_INTERFACES__SRV__DETAIL__MONEY__TRAITS_HPP_
