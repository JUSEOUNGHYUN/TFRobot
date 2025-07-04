// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from md_interfaces:msg/PosVelTimestamped.idl
// generated code does not contain a copyright notice
#include "md_interfaces/msg/detail/pos_vel_timestamped__rosidl_typesupport_fastrtps_cpp.hpp"
#include "md_interfaces/msg/detail/pos_vel_timestamped__struct.hpp"

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
namespace builtin_interfaces
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const builtin_interfaces::msg::Time &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  builtin_interfaces::msg::Time &);
size_t get_serialized_size(
  const builtin_interfaces::msg::Time &,
  size_t current_alignment);
size_t
max_serialized_size_Time(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace builtin_interfaces


namespace md_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
cdr_serialize(
  const md_interfaces::msg::PosVelTimestamped & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: motor_pos1
  cdr << ros_message.motor_pos1;
  // Member: motor_vel1
  cdr << ros_message.motor_vel1;
  // Member: motor_pos2
  cdr << ros_message.motor_pos2;
  // Member: motor_vel2
  cdr << ros_message.motor_vel2;
  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.stamp,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  md_interfaces::msg::PosVelTimestamped & ros_message)
{
  // Member: motor_pos1
  cdr >> ros_message.motor_pos1;

  // Member: motor_vel1
  cdr >> ros_message.motor_vel1;

  // Member: motor_pos2
  cdr >> ros_message.motor_pos2;

  // Member: motor_vel2
  cdr >> ros_message.motor_vel2;

  // Member: stamp
  builtin_interfaces::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.stamp);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
get_serialized_size(
  const md_interfaces::msg::PosVelTimestamped & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: motor_pos1
  {
    size_t item_size = sizeof(ros_message.motor_pos1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_vel1
  {
    size_t item_size = sizeof(ros_message.motor_vel1);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_pos2
  {
    size_t item_size = sizeof(ros_message.motor_pos2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motor_vel2
  {
    size_t item_size = sizeof(ros_message.motor_vel2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: stamp

  current_alignment +=
    builtin_interfaces::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.stamp, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_md_interfaces
max_serialized_size_PosVelTimestamped(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: motor_pos1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_vel1
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: motor_pos2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: motor_vel2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: stamp
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        builtin_interfaces::msg::typesupport_fastrtps_cpp::max_serialized_size_Time(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _PosVelTimestamped__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const md_interfaces::msg::PosVelTimestamped *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PosVelTimestamped__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<md_interfaces::msg::PosVelTimestamped *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PosVelTimestamped__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const md_interfaces::msg::PosVelTimestamped *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PosVelTimestamped__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PosVelTimestamped(full_bounded, 0);
}

static message_type_support_callbacks_t _PosVelTimestamped__callbacks = {
  "md_interfaces::msg",
  "PosVelTimestamped",
  _PosVelTimestamped__cdr_serialize,
  _PosVelTimestamped__cdr_deserialize,
  _PosVelTimestamped__get_serialized_size,
  _PosVelTimestamped__max_serialized_size
};

static rosidl_message_type_support_t _PosVelTimestamped__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PosVelTimestamped__callbacks,
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
get_message_type_support_handle<md_interfaces::msg::PosVelTimestamped>()
{
  return &md_interfaces::msg::typesupport_fastrtps_cpp::_PosVelTimestamped__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, md_interfaces, msg, PosVelTimestamped)() {
  return &md_interfaces::msg::typesupport_fastrtps_cpp::_PosVelTimestamped__handle;
}

#ifdef __cplusplus
}
#endif
