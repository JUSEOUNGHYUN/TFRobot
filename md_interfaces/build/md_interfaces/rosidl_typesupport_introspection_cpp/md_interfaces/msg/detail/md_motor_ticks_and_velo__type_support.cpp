// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from md_interfaces:msg/MdMotorTicksAndVelo.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "md_interfaces/msg/detail/md_motor_ticks_and_velo__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace md_interfaces
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MdMotorTicksAndVelo_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) md_interfaces::msg::MdMotorTicksAndVelo(_init);
}

void MdMotorTicksAndVelo_fini_function(void * message_memory)
{
  auto typed_message = static_cast<md_interfaces::msg::MdMotorTicksAndVelo *>(message_memory);
  typed_message->~MdMotorTicksAndVelo();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MdMotorTicksAndVelo_message_member_array[4] = {
  {
    "left_ticks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(md_interfaces::msg::MdMotorTicksAndVelo, left_ticks),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "left_rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(md_interfaces::msg::MdMotorTicksAndVelo, left_rpm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_ticks",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(md_interfaces::msg::MdMotorTicksAndVelo, right_ticks),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "right_rpm",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(md_interfaces::msg::MdMotorTicksAndVelo, right_rpm),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MdMotorTicksAndVelo_message_members = {
  "md_interfaces::msg",  // message namespace
  "MdMotorTicksAndVelo",  // message name
  4,  // number of fields
  sizeof(md_interfaces::msg::MdMotorTicksAndVelo),
  MdMotorTicksAndVelo_message_member_array,  // message members
  MdMotorTicksAndVelo_init_function,  // function to initialize message memory (memory has to be allocated)
  MdMotorTicksAndVelo_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MdMotorTicksAndVelo_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MdMotorTicksAndVelo_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace md_interfaces


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<md_interfaces::msg::MdMotorTicksAndVelo>()
{
  return &::md_interfaces::msg::rosidl_typesupport_introspection_cpp::MdMotorTicksAndVelo_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, md_interfaces, msg, MdMotorTicksAndVelo)() {
  return &::md_interfaces::msg::rosidl_typesupport_introspection_cpp::MdMotorTicksAndVelo_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
