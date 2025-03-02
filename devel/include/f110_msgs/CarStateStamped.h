// Generated by gencpp from file f110_msgs/CarStateStamped.msg
// DO NOT EDIT!


#ifndef F110_MSGS_MESSAGE_CARSTATESTAMPED_H
#define F110_MSGS_MESSAGE_CARSTATESTAMPED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <f110_msgs/CarState.h>

namespace f110_msgs
{
template <class ContainerAllocator>
struct CarStateStamped_
{
  typedef CarStateStamped_<ContainerAllocator> Type;

  CarStateStamped_()
    : header()
    , state()  {
    }
  CarStateStamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::f110_msgs::CarState_<ContainerAllocator>  _state_type;
  _state_type state;





  typedef boost::shared_ptr< ::f110_msgs::CarStateStamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::f110_msgs::CarStateStamped_<ContainerAllocator> const> ConstPtr;

}; // struct CarStateStamped_

typedef ::f110_msgs::CarStateStamped_<std::allocator<void> > CarStateStamped;

typedef boost::shared_ptr< ::f110_msgs::CarStateStamped > CarStateStampedPtr;
typedef boost::shared_ptr< ::f110_msgs::CarStateStamped const> CarStateStampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::f110_msgs::CarStateStamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::f110_msgs::CarStateStamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::f110_msgs::CarStateStamped_<ContainerAllocator1> & lhs, const ::f110_msgs::CarStateStamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.state == rhs.state;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::f110_msgs::CarStateStamped_<ContainerAllocator1> & lhs, const ::f110_msgs::CarStateStamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace f110_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::f110_msgs::CarStateStamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::f110_msgs::CarStateStamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::f110_msgs::CarStateStamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bd673c15842396b7ea0972d6080e327c";
  }

  static const char* value(const ::f110_msgs::CarStateStamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbd673c15842396b7ULL;
  static const uint64_t static_value2 = 0xea0972d6080e327cULL;
};

template<class ContainerAllocator>
struct DataType< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f110_msgs/CarStateStamped";
  }

  static const char* value(const ::f110_msgs::CarStateStamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header  header\n"
"CarState state\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: f110_msgs/CarState\n"
"geometry_msgs/Pose  slam_pose\n"
"geometry_msgs/Twist ekf_twist\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Twist\n"
"# This expresses velocity in free space broken into its linear and angular parts.\n"
"Vector3  linear\n"
"Vector3  angular\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::f110_msgs::CarStateStamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CarStateStamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::f110_msgs::CarStateStamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::f110_msgs::CarStateStamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    s << std::endl;
    Printer< ::f110_msgs::CarState_<ContainerAllocator> >::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // F110_MSGS_MESSAGE_CARSTATESTAMPED_H
