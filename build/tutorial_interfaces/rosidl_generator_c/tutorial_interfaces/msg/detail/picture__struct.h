// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from tutorial_interfaces:msg/Picture.idl
// generated code does not contain a copyright notice

#ifndef TUTORIAL_INTERFACES__MSG__DETAIL__PICTURE__STRUCT_H_
#define TUTORIAL_INTERFACES__MSG__DETAIL__PICTURE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'image'
#include "sensor_msgs/msg/detail/image__struct.h"

// Struct defined in msg/Picture in the package tutorial_interfaces.
typedef struct tutorial_interfaces__msg__Picture
{
  sensor_msgs__msg__Image image;
} tutorial_interfaces__msg__Picture;

// Struct for a sequence of tutorial_interfaces__msg__Picture.
typedef struct tutorial_interfaces__msg__Picture__Sequence
{
  tutorial_interfaces__msg__Picture * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} tutorial_interfaces__msg__Picture__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TUTORIAL_INTERFACES__MSG__DETAIL__PICTURE__STRUCT_H_
