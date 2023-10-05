// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from tutorial_interfaces:srv/Money.idl
// generated code does not contain a copyright notice
#include "tutorial_interfaces/srv/detail/money__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
tutorial_interfaces__srv__Money_Request__init(tutorial_interfaces__srv__Money_Request * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    tutorial_interfaces__srv__Money_Request__fini(msg);
    return false;
  }
  // money
  return true;
}

void
tutorial_interfaces__srv__Money_Request__fini(tutorial_interfaces__srv__Money_Request * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // money
}

bool
tutorial_interfaces__srv__Money_Request__are_equal(const tutorial_interfaces__srv__Money_Request * lhs, const tutorial_interfaces__srv__Money_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // money
  if (lhs->money != rhs->money) {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__srv__Money_Request__copy(
  const tutorial_interfaces__srv__Money_Request * input,
  tutorial_interfaces__srv__Money_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // money
  output->money = input->money;
  return true;
}

tutorial_interfaces__srv__Money_Request *
tutorial_interfaces__srv__Money_Request__create()
{
  tutorial_interfaces__srv__Money_Request * msg = (tutorial_interfaces__srv__Money_Request *)malloc(sizeof(tutorial_interfaces__srv__Money_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__Money_Request));
  bool success = tutorial_interfaces__srv__Money_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__Money_Request__destroy(tutorial_interfaces__srv__Money_Request * msg)
{
  if (msg) {
    tutorial_interfaces__srv__Money_Request__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__srv__Money_Request__Sequence__init(tutorial_interfaces__srv__Money_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__srv__Money_Request * data = NULL;
  if (size) {
    data = (tutorial_interfaces__srv__Money_Request *)calloc(size, sizeof(tutorial_interfaces__srv__Money_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__Money_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__Money_Request__fini(&data[i - 1]);
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
tutorial_interfaces__srv__Money_Request__Sequence__fini(tutorial_interfaces__srv__Money_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__srv__Money_Request__fini(&array->data[i]);
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

tutorial_interfaces__srv__Money_Request__Sequence *
tutorial_interfaces__srv__Money_Request__Sequence__create(size_t size)
{
  tutorial_interfaces__srv__Money_Request__Sequence * array = (tutorial_interfaces__srv__Money_Request__Sequence *)malloc(sizeof(tutorial_interfaces__srv__Money_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__Money_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__Money_Request__Sequence__destroy(tutorial_interfaces__srv__Money_Request__Sequence * array)
{
  if (array) {
    tutorial_interfaces__srv__Money_Request__Sequence__fini(array);
  }
  free(array);
}

bool
tutorial_interfaces__srv__Money_Request__Sequence__are_equal(const tutorial_interfaces__srv__Money_Request__Sequence * lhs, const tutorial_interfaces__srv__Money_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__srv__Money_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__srv__Money_Request__Sequence__copy(
  const tutorial_interfaces__srv__Money_Request__Sequence * input,
  tutorial_interfaces__srv__Money_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__srv__Money_Request);
    tutorial_interfaces__srv__Money_Request * data =
      (tutorial_interfaces__srv__Money_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__srv__Money_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__srv__Money_Request__fini(&data[i]);
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
    if (!tutorial_interfaces__srv__Money_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
tutorial_interfaces__srv__Money_Response__init(tutorial_interfaces__srv__Money_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // money
  return true;
}

void
tutorial_interfaces__srv__Money_Response__fini(tutorial_interfaces__srv__Money_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // money
}

bool
tutorial_interfaces__srv__Money_Response__are_equal(const tutorial_interfaces__srv__Money_Response * lhs, const tutorial_interfaces__srv__Money_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // money
  if (lhs->money != rhs->money) {
    return false;
  }
  return true;
}

bool
tutorial_interfaces__srv__Money_Response__copy(
  const tutorial_interfaces__srv__Money_Response * input,
  tutorial_interfaces__srv__Money_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // money
  output->money = input->money;
  return true;
}

tutorial_interfaces__srv__Money_Response *
tutorial_interfaces__srv__Money_Response__create()
{
  tutorial_interfaces__srv__Money_Response * msg = (tutorial_interfaces__srv__Money_Response *)malloc(sizeof(tutorial_interfaces__srv__Money_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(tutorial_interfaces__srv__Money_Response));
  bool success = tutorial_interfaces__srv__Money_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
tutorial_interfaces__srv__Money_Response__destroy(tutorial_interfaces__srv__Money_Response * msg)
{
  if (msg) {
    tutorial_interfaces__srv__Money_Response__fini(msg);
  }
  free(msg);
}


bool
tutorial_interfaces__srv__Money_Response__Sequence__init(tutorial_interfaces__srv__Money_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  tutorial_interfaces__srv__Money_Response * data = NULL;
  if (size) {
    data = (tutorial_interfaces__srv__Money_Response *)calloc(size, sizeof(tutorial_interfaces__srv__Money_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = tutorial_interfaces__srv__Money_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        tutorial_interfaces__srv__Money_Response__fini(&data[i - 1]);
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
tutorial_interfaces__srv__Money_Response__Sequence__fini(tutorial_interfaces__srv__Money_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      tutorial_interfaces__srv__Money_Response__fini(&array->data[i]);
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

tutorial_interfaces__srv__Money_Response__Sequence *
tutorial_interfaces__srv__Money_Response__Sequence__create(size_t size)
{
  tutorial_interfaces__srv__Money_Response__Sequence * array = (tutorial_interfaces__srv__Money_Response__Sequence *)malloc(sizeof(tutorial_interfaces__srv__Money_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = tutorial_interfaces__srv__Money_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
tutorial_interfaces__srv__Money_Response__Sequence__destroy(tutorial_interfaces__srv__Money_Response__Sequence * array)
{
  if (array) {
    tutorial_interfaces__srv__Money_Response__Sequence__fini(array);
  }
  free(array);
}

bool
tutorial_interfaces__srv__Money_Response__Sequence__are_equal(const tutorial_interfaces__srv__Money_Response__Sequence * lhs, const tutorial_interfaces__srv__Money_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!tutorial_interfaces__srv__Money_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
tutorial_interfaces__srv__Money_Response__Sequence__copy(
  const tutorial_interfaces__srv__Money_Response__Sequence * input,
  tutorial_interfaces__srv__Money_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(tutorial_interfaces__srv__Money_Response);
    tutorial_interfaces__srv__Money_Response * data =
      (tutorial_interfaces__srv__Money_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!tutorial_interfaces__srv__Money_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          tutorial_interfaces__srv__Money_Response__fini(&data[i]);
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
    if (!tutorial_interfaces__srv__Money_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
