// Generated by gencpp from file dji_sdk/AttitudeControlRequest.msg
// DO NOT EDIT!


#ifndef DJI_SDK_MESSAGE_ATTITUDECONTROLREQUEST_H
#define DJI_SDK_MESSAGE_ATTITUDECONTROLREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dji_sdk
{
template <class ContainerAllocator>
struct AttitudeControlRequest_
{
  typedef AttitudeControlRequest_<ContainerAllocator> Type;

  AttitudeControlRequest_()
    : flag(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , yaw(0.0)  {
    }
  AttitudeControlRequest_(const ContainerAllocator& _alloc)
    : flag(0)
    , x(0.0)
    , y(0.0)
    , z(0.0)
    , yaw(0.0)  {
  (void)_alloc;
    }



   typedef uint8_t _flag_type;
  _flag_type flag;

   typedef float _x_type;
  _x_type x;

   typedef float _y_type;
  _y_type y;

   typedef float _z_type;
  _z_type z;

   typedef float _yaw_type;
  _yaw_type yaw;




  typedef boost::shared_ptr< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> const> ConstPtr;

}; // struct AttitudeControlRequest_

typedef ::dji_sdk::AttitudeControlRequest_<std::allocator<void> > AttitudeControlRequest;

typedef boost::shared_ptr< ::dji_sdk::AttitudeControlRequest > AttitudeControlRequestPtr;
typedef boost::shared_ptr< ::dji_sdk::AttitudeControlRequest const> AttitudeControlRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dji_sdk

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'nav_msgs': ['/opt/ros/indigo/share/nav_msgs/cmake/../msg'], 'dji_sdk': ['/home/ubuntu/cc/rosdji_sdk/src/Onboard-SDK-ROS-3.1/dji_sdk/msg', '/home/ubuntu/cc/rosdji_sdk/devel/share/dji_sdk/msg'], 'actionlib_msgs': ['/opt/ros/indigo/share/actionlib_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/indigo/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/indigo/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a3f099167feb75c2a47a9001cacdfe10";
  }

  static const char* value(const ::dji_sdk::AttitudeControlRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa3f099167feb75c2ULL;
  static const uint64_t static_value2 = 0xa47a9001cacdfe10ULL;
};

template<class ContainerAllocator>
struct DataType< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dji_sdk/AttitudeControlRequest";
  }

  static const char* value(const ::dji_sdk::AttitudeControlRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 flag\n\
float32 x\n\
float32 y\n\
float32 z\n\
float32 yaw\n\
";
  }

  static const char* value(const ::dji_sdk::AttitudeControlRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.flag);
      stream.next(m.x);
      stream.next(m.y);
      stream.next(m.z);
      stream.next(m.yaw);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AttitudeControlRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dji_sdk::AttitudeControlRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dji_sdk::AttitudeControlRequest_<ContainerAllocator>& v)
  {
    s << indent << "flag: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.flag);
    s << indent << "x: ";
    Printer<float>::stream(s, indent + "  ", v.x);
    s << indent << "y: ";
    Printer<float>::stream(s, indent + "  ", v.y);
    s << indent << "z: ";
    Printer<float>::stream(s, indent + "  ", v.z);
    s << indent << "yaw: ";
    Printer<float>::stream(s, indent + "  ", v.yaw);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DJI_SDK_MESSAGE_ATTITUDECONTROLREQUEST_H
