// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from village_interfaces:msg/Book.idl
// generated code does not contain a copyright notice
#include "village_interfaces/msg/detail/book__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `content`
#include "rosidl_runtime_c/string_functions.h"
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
village_interfaces__msg__Book__init(village_interfaces__msg__Book * msg)
{
  if (!msg) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__init(&msg->content)) {
    village_interfaces__msg__Book__fini(msg);
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    village_interfaces__msg__Book__fini(msg);
    return false;
  }
  return true;
}

void
village_interfaces__msg__Book__fini(village_interfaces__msg__Book * msg)
{
  if (!msg) {
    return;
  }
  // content
  rosidl_runtime_c__String__fini(&msg->content);
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
village_interfaces__msg__Book__are_equal(const village_interfaces__msg__Book * lhs, const village_interfaces__msg__Book * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->content), &(rhs->content)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->image), &(rhs->image)))
  {
    return false;
  }
  return true;
}

bool
village_interfaces__msg__Book__copy(
  const village_interfaces__msg__Book * input,
  village_interfaces__msg__Book * output)
{
  if (!input || !output) {
    return false;
  }
  // content
  if (!rosidl_runtime_c__String__copy(
      &(input->content), &(output->content)))
  {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__copy(
      &(input->image), &(output->image)))
  {
    return false;
  }
  return true;
}

village_interfaces__msg__Book *
village_interfaces__msg__Book__create()
{
  village_interfaces__msg__Book * msg = (village_interfaces__msg__Book *)malloc(sizeof(village_interfaces__msg__Book));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(village_interfaces__msg__Book));
  bool success = village_interfaces__msg__Book__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
village_interfaces__msg__Book__destroy(village_interfaces__msg__Book * msg)
{
  if (msg) {
    village_interfaces__msg__Book__fini(msg);
  }
  free(msg);
}


bool
village_interfaces__msg__Book__Sequence__init(village_interfaces__msg__Book__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  village_interfaces__msg__Book * data = NULL;
  if (size) {
    data = (village_interfaces__msg__Book *)calloc(size, sizeof(village_interfaces__msg__Book));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = village_interfaces__msg__Book__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        village_interfaces__msg__Book__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
village_interfaces__msg__Book__Sequence__fini(village_interfaces__msg__Book__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      village_interfaces__msg__Book__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

village_interfaces__msg__Book__Sequence *
village_interfaces__msg__Book__Sequence__create(size_t size)
{
  village_interfaces__msg__Book__Sequence * array = (village_interfaces__msg__Book__Sequence *)malloc(sizeof(village_interfaces__msg__Book__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = village_interfaces__msg__Book__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
village_interfaces__msg__Book__Sequence__destroy(village_interfaces__msg__Book__Sequence * array)
{
  if (array) {
    village_interfaces__msg__Book__Sequence__fini(array);
  }
  free(array);
}

bool
village_interfaces__msg__Book__Sequence__are_equal(const village_interfaces__msg__Book__Sequence * lhs, const village_interfaces__msg__Book__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!village_interfaces__msg__Book__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
village_interfaces__msg__Book__Sequence__copy(
  const village_interfaces__msg__Book__Sequence * input,
  village_interfaces__msg__Book__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(village_interfaces__msg__Book);
    village_interfaces__msg__Book * data =
      (village_interfaces__msg__Book *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!village_interfaces__msg__Book__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          village_interfaces__msg__Book__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!village_interfaces__msg__Book__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
