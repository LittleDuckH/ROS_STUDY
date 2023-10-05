// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:msg/Picture.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/msg/detail/picture__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `image`
#include "sensor_msgs/msg/detail/image__functions.h"

bool
tutorial_interfaces__msg__Picture__init(tutorial_interfaces__msg__Picture * msg)
{
  if (!msg) {
    return false;
  }
  // image
  if (!sensor_msgs__msg__Image__init(&msg->image)) {
    tutorial_interfaces__msg__Picture__fini(msg);
    return false;
  }
  return true;
}

void
tutorial_interfaces__msg__Picture__fini(tutorial_interfaces__msg__Picture * msg)
{
  if (!msg) {
    return;
  }
  // image
  sensor_msgs__msg__Image__fini(&msg->image);
}

bool
tutorial_interfaces__msg__Picture__are_equal(const tutorial_interfaces__msg__Picture * lhs, const tutorial_interfaces__msg__Picture * rhs)
{
  if (!lhs || !rhs) {
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
tutorial_interfaces__msg__Picture__copy(
  const tutorial_interfaces__msg__Picture * input,
  tutorial_interfaces__msg__Picture * output)
{
  if (!input || !output) {
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

tutorial_interfaces__msg__Picture *
tutorial_interfaces__msg__Picture__create()
{
  tutorial_interfaces__msg__Picture * msg = (tutorial_interfaces__msg__Picture *)malloc(sizeof(tutorial_interfaces__msg__Picture));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__msg__Picture));
  bool success = tutorial_interfaces__msg__Picture__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__msg__Picture__destroy(tutorial_interfaces__msg__Picture * msg)
{
  if (msg) {
    tutorial_interfaces__msg__Picture__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__msg__Picture__Sequence__init(tutorial_interfaces__msg__Picture__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__msg__Picture * data = NULL;
  if (size) {
    data = (tutorial_interfaces__msg__Picture *)calloc(size, sizeof(tutorial_interfaces__msg__Picture));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__msg__Picture__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__msg__Picture__fini(&data[i - 1]);
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
tutorial_interfaces__msg__Picture__Sequence__fini(tutorial_interfaces__msg__Picture__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__msg__Picture__fini(&array->data[i]);
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

tutorial_interfaces__msg__Picture__Sequence *
tutorial_interfaces__msg__Picture__Sequence__create(size_t size)
{
  tutorial_interfaces__msg__Picture__Sequence * array = (tutorial_interfaces__msg__Picture__Sequence *)malloc(sizeof(tutorial_interfaces__msg__Picture__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__msg__Picture__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__msg__Picture__Sequence__destroy(tutorial_interfaces__msg__Picture__Sequence * array)
{
  if (array) {
    tutorial_interfaces__msg__Picture__Sequence__fini(array);
  }
  free(array);
}

bool
tutorial_interfaces__msg__Picture__Sequence__are_equal(const tutorial_interfaces__msg__Picture__Sequence * lhs, const tutorial_interfaces__msg__Picture__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__msg__Picture__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__msg__Picture__Sequence__copy(
  const tutorial_interfaces__msg__Picture__Sequence * input,
  tutorial_interfaces__msg__Picture__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__msg__Picture);
    tutorial_interfaces__msg__Picture * data =
      (tutorial_interfaces__msg__Picture *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__msg__Picture__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__msg__Picture__fini(&data[i]);
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
    if (!tutorial_interfaces__msg__Picture__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
