// Generated by gencpp from file dji_sdk/RCChannels.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_RCCHANNELS_H
#define DJI_SDK_MESSAGE_RCCHANNELS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace dji_sdk
{
template <class ContainerAllocator>
struct RCChannels_
{
  typedef RCChannels_<ContainerAllocator> Type;

  RCChannels_()
    : header()
    , ts(0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , throttle(0.0)
    , mode(0.0)
    , gear(0.0)  {
    }
  RCChannels_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , ts(0)
    , roll(0.0)
    , pitch(0.0)
    , yaw(0.0)
    , throttle(0.0)
    , mode(0.0)
    , gear(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _ts_type;
  _ts_type ts;

   typedef float _roll_type;
  _roll_type roll;

   typedef float _pitch_type;
  _pitch_type pitch;

   typedef float _yaw_type;
  _yaw_type yaw;

   typedef float _throttle_type;
  _throttle_type throttle;

   typedef float _mode_type;
  _mode_type mode;

   typedef float _gear_type;
  _gear_type gear;




  typedef boost::shared_ptr< ::dji_sdk::RCChannels_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::RCChannels_<ContainerAllocator> const> ConstPtr;

}; // struct RCChannels_

typedef ::dji_sdk::RCChannels_<std::allocator<void> > RCChannels;

typedef boost::shared_ptr< ::dji_sdk::RCChannels > RCChannelsPtr;
typedef boost::shared_ptr< ::dji_sdk::RCChannels const> RCChannelsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::RCChannels_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::RCChannels_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/ubuntu/cc/rosdji_sdk/src/Onboard-SDK-ROS-3.1/dji_sdk/msg', '/home/ubuntu/cc/rosdji_sdk/devel/share/dji_sdk/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::RCChannels_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::RCChannels_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::RCChannels_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::RCChannels_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::RCChannels_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::RCChannels_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::RCChannels_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6c42f5c30aa4b241b68bd1be86dd3fec";
  }

  static const char* value(const ::dji_sdk::RCChannels_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6c42f5c30aa4b241ULL;
  static const uint64_t static_value2 = 0xb68bd1be86dd3fecULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::RCChannels_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/RCChannels";
  }

  static const char* value(const ::dji_sdk::RCChannels_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::RCChannels_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# RC Map\n\
#\n\
#  mode:\n\
#\n\
# +8000 <--->  0  <---> -8000\n\
#  API  <---> ATT <--->  POS\n\
#\n\
# CH3(throttle) +10000            CH1(pitch) +10000\n\
#             ^                            ^\n\
#             |                            |                  / -10000\n\
#  CH2(yaw)   |                CH0(roll)   |                 /\n\
# -10000 <-----------> +10000 -10000 <-----------> +10000   H(gear)\n\
#             |                            |                 \\\n\
#             |                            |                  \\ -4545\n\
#             V                            V\n\
#          -10000                       -10000\n\
#\n\
Header header\n\
int32 ts\n\
float32 roll\n\
float32 pitch\n\
float32 yaw\n\
float32 throttle\n\
float32 mode\n\
float32 gear\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::dji_sdk::RCChannels_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::RCChannels_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.ts);
      stream.next(m.roll);
      stream.next(m.pitch);
      stream.next(m.yaw);
      stream.next(m.throttle);
      stream.next(m.mode);
      stream.next(m.gear);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RCChannels_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::RCChannels_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::RCChannels_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "ts: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ts);
    s << indent << "roll: ";
    Printer<float>::stream(s, indent + "  ", v.roll);
    s << indent << "pitch: ";
    Printer<float>::stream(s, indent + "  ", v.pitch);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
    s << indent << "throttle: ";
    Printer<float>::stream(s, indent + "  ", v.throttle);
    s << indent << "mode: ";
    Printer<float>::stream(s, indent + "  ", v.mode);
    s << indent << "gear: ";
    Printer<float>::stream(s, indent + "  ", v.gear);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_RCCHANNELS_H
