// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from md_interfaces:msg/MdMotorTicksAndVelo.idl
// generated code does not contain a copyright notice
#include "md_interfaces/msg/detail/md_motor_ticks_and_velo__rosidl_typesupport_fastrtps_cpp.hpp"
#include "md_interfaces/msg/detail/md_motor_ticks_and_velo__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace md_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
cdr_serialize(
  const md_interfaces::msg::MdMotorTicksAndVelo & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: left_ticks
  cdr << ros_message.left_ticks;
  // Member: left_rpm
  cdr << ros_message.left_rpm;
  // Member: right_ticks
  cdr << ros_message.right_ticks;
  // Member: right_rpm
  cdr << ros_message.right_rpm;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  md_interfaces::msg::MdMotorTicksAndVelo & ros_message)
{
  // Member: left_ticks
  cdr >> ros_message.left_ticks;

  // Member: left_rpm
  cdr >> ros_message.left_rpm;

  // Member: right_ticks
  cdr >> ros_message.right_ticks;

  // Member: right_rpm
  cdr >> ros_message.right_rpm;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
get_serialized_size(
  const md_interfaces::msg::MdMotorTicksAndVelo & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: left_ticks
  {
    size_t item_size = sizeof(ros_message.left_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: left_rpm
  {
    size_t item_size = sizeof(ros_message.left_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_ticks
  {
    size_t item_size = sizeof(ros_message.right_ticks);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: right_rpm
  {
    size_t item_size = sizeof(ros_message.right_rpm);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
max_serialized_size_MdMotorTicksAndVelo(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: left_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: left_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: right_ticks
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: right_rpm
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  return current_alignment - initial_alignment;
}

static bool _MdMotorTicksAndVelo__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const md_interfaces::msg::MdMotorTicksAndVelo *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _MdMotorTicksAndVelo__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<md_interfaces::msg::MdMotorTicksAndVelo *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _MdMotorTicksAndVelo__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const md_interfaces::msg::MdMotorTicksAndVelo *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _MdMotorTicksAndVelo__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_MdMotorTicksAndVelo(full_bounded, 0);
}

static message_type_support_callbacks_t _MdMotorTicksAndVelo__callbacks = {
  "md_interfaces::msg",
  "MdMotorTicksAndVelo",
  _MdMotorTicksAndVelo__cdr_serialize,
  _MdMotorTicksAndVelo__cdr_deserialize,
  _MdMotorTicksAndVelo__get_serialized_size,
  _MdMotorTicksAndVelo__max_serialized_size
};

static rosidl_message_type_support_t _MdMotorTicksAndVelo__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_MdMotorTicksAndVelo__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace md_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_md_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<md_interfaces::msg::MdMotorTicksAndVelo>()
{
  return &md_interfaces::msg::typesupport_fastrtps_cpp::_MdMotorTicksAndVelo__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, md_interfaces, msg, MdMotorTicksAndVelo)() {
  return &md_interfaces::msg::typesupport_fastrtps_cpp::_MdMotorTicksAndVelo__handle;
}

#ifdef __cplusplus
}
#endif
