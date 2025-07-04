# generated from rosidl_generator_py/resource/_idl.py.em
# with input from md_interfaces:msg/PosVelTimestamped.idl
# generated code does not contain a copyright notice


# Import statements for member types

import rosidl_parser.definition  # noqa: E402, I100


class Metaclass_PosVelTimestamped(type):
    """Metaclass of message 'PosVelTimestamped'."""

    _CREATE_ROS_MESSAGE = None
    _CONVERT_FROM_PY = None
    _CONVERT_TO_PY = None
    _DESTROY_ROS_MESSAGE = None
    _TYPE_SUPPORT = None

    __constants = {
    }

    @classmethod
    def __import_type_support__(cls):
        try:
            from rosidl_generator_py import import_type_support
            module = import_type_support('md_interfaces')
        except ImportError:
            import logging
            import traceback
            logger = logging.getLogger(
                'md_interfaces.msg.PosVelTimestamped')
            logger.debug(
                'Failed to import needed modules for type support:\n' +
                traceback.format_exc())
        else:
            cls._CREATE_ROS_MESSAGE = module.create_ros_message_msg__msg__pos_vel_timestamped
            cls._CONVERT_FROM_PY = module.convert_from_py_msg__msg__pos_vel_timestamped
            cls._CONVERT_TO_PY = module.convert_to_py_msg__msg__pos_vel_timestamped
            cls._TYPE_SUPPORT = module.type_support_msg__msg__pos_vel_timestamped
            cls._DESTROY_ROS_MESSAGE = module.destroy_ros_message_msg__msg__pos_vel_timestamped

            from builtin_interfaces.msg import Time
            if Time.__class__._TYPE_SUPPORT is None:
                Time.__class__.__import_type_support__()

    @classmethod
    def __prepare__(cls, name, bases, **kwargs):
        # list constant names here so that they appear in the help text of
        # the message class under "Data and other attributes defined here:"
        # as well as populate each message instance
        return {
        }


class PosVelTimestamped(metaclass=Metaclass_PosVelTimestamped):
    """Message class 'PosVelTimestamped'."""

    __slots__ = [
        '_motor_pos1',
        '_motor_vel1',
        '_motor_pos2',
        '_motor_vel2',
        '_stamp',
    ]

    _fields_and_field_types = {
        'motor_pos1': 'int32',
        'motor_vel1': 'int16',
        'motor_pos2': 'int32',
        'motor_vel2': 'int32',
        'stamp': 'builtin_interfaces/Time',
    }

    SLOT_TYPES = (
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int16'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.BasicType('int32'),  # noqa: E501
        rosidl_parser.definition.NamespacedType(['builtin_interfaces', 'msg'], 'Time'),  # noqa: E501
    )

    def __init__(self, **kwargs):
        assert all('_' + key in self.__slots__ for key in kwargs.keys()), \
            'Invalid arguments passed to constructor: %s' % \
            ', '.join(sorted(k for k in kwargs.keys() if '_' + k not in self.__slots__))
        self.motor_pos1 = kwargs.get('motor_pos1', int())
        self.motor_vel1 = kwargs.get('motor_vel1', int())
        self.motor_pos2 = kwargs.get('motor_pos2', int())
        self.motor_vel2 = kwargs.get('motor_vel2', int())
        from builtin_interfaces.msg import Time
        self.stamp = kwargs.get('stamp', Time())

    def __repr__(self):
        typename = self.__class__.__module__.split('.')
        typename.pop()
        typename.append(self.__class__.__name__)
        args = []
        for s, t in zip(self.__slots__, self.SLOT_TYPES):
            field = getattr(self, s)
            fieldstr = repr(field)
            # We use Python array type for fields that can be directly stored
            # in them, and "normal" sequences for everything else.  If it is
            # a type that we store in an array, strip off the 'array' portion.
            if (
                isinstance(t, rosidl_parser.definition.AbstractSequence) and
                isinstance(t.value_type, rosidl_parser.definition.BasicType) and
                t.value_type.typename in ['float', 'double', 'int8', 'uint8', 'int16', 'uint16', 'int32', 'uint32', 'int64', 'uint64']
            ):
                if len(field) == 0:
                    fieldstr = '[]'
                else:
                    assert fieldstr.startswith('array(')
                    prefix = "array('X', "
                    suffix = ')'
                    fieldstr = fieldstr[len(prefix):-len(suffix)]
            args.append(s[1:] + '=' + fieldstr)
        return '%s(%s)' % ('.'.join(typename), ', '.join(args))

    def __eq__(self, other):
        if not isinstance(other, self.__class__):
            return False
        if self.motor_pos1 != other.motor_pos1:
            return False
        if self.motor_vel1 != other.motor_vel1:
            return False
        if self.motor_pos2 != other.motor_pos2:
            return False
        if self.motor_vel2 != other.motor_vel2:
            return False
        if self.stamp != other.stamp:
            return False
        return True

    @classmethod
    def get_fields_and_field_types(cls):
        from copy import copy
        return copy(cls._fields_and_field_types)

    @property
    def motor_pos1(self):
        """Message field 'motor_pos1'."""
        return self._motor_pos1

    @motor_pos1.setter
    def motor_pos1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_pos1' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_pos1' field must be an integer in [-2147483648, 2147483647]"
        self._motor_pos1 = value

    @property
    def motor_vel1(self):
        """Message field 'motor_vel1'."""
        return self._motor_vel1

    @motor_vel1.setter
    def motor_vel1(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_vel1' field must be of type 'int'"
            assert value >= -32768 and value < 32768, \
                "The 'motor_vel1' field must be an integer in [-32768, 32767]"
        self._motor_vel1 = value

    @property
    def motor_pos2(self):
        """Message field 'motor_pos2'."""
        return self._motor_pos2

    @motor_pos2.setter
    def motor_pos2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_pos2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_pos2' field must be an integer in [-2147483648, 2147483647]"
        self._motor_pos2 = value

    @property
    def motor_vel2(self):
        """Message field 'motor_vel2'."""
        return self._motor_vel2

    @motor_vel2.setter
    def motor_vel2(self, value):
        if __debug__:
            assert \
                isinstance(value, int), \
                "The 'motor_vel2' field must be of type 'int'"
            assert value >= -2147483648 and value < 2147483648, \
                "The 'motor_vel2' field must be an integer in [-2147483648, 2147483647]"
        self._motor_vel2 = value

    @property
    def stamp(self):
        """Message field 'stamp'."""
        return self._stamp

    @stamp.setter
    def stamp(self, value):
        if __debug__:
            from builtin_interfaces.msg import Time
            assert \
                isinstance(value, Time), \
                "The 'stamp' field must be a sub message of type 'Time'"
        self._stamp = value
