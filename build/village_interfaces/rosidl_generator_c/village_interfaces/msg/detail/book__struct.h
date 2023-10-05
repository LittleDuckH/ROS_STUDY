// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from village_interfaces:msg/Book.idl
// generated code does not contain a copyright notice

#ifndef VILLAGE_INTERFACES__MSG__DETAIL__BOOK__STRUCT_H_
#define VILLAGE_INTERFACES__MSG__DETAIL__BOOK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'content'
#include "rosidl_runtime_c/string.h"
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/Book in the package village_interfaces.
typedef struct village_interfaces__msg__Book
{
  rosidl_runtime_c__String content;
  sensor_msgs__msg__Image image;
} village_interfaces__msg__Book;

// Struct for a sequence of village_interfaces__msg__Book.
typedef struct village_interfaces__msg__Book__Sequence
{
  village_interfaces__msg__Book * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} village_interfaces__msg__Book__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // VILLAGE_INTERFACES__MSG__DETAIL__BOOK__STRUCT_H_
