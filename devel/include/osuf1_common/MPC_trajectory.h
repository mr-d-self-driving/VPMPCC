// Generated by gencpp from file osuf1_common/MPC_trajectory.msg
// DO NOT EDIT!


#ifndef OSUF1_COMMON_MESSAGE_MPC_TRAJECTORY_H
#define OSUF1_COMMON_MESSAGE_MPC_TRAJECTORY_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <osuf1_common/MPC_prediction.h>

namespace osuf1_common
{
template <class ContainerAllocator>
struct MPC_trajectory_
{
  typedef MPC_trajectory_<ContainerAllocator> Type;

  MPC_trajectory_()
    : header()
    , trajectory()  {
    }
  MPC_trajectory_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , trajectory(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::vector< ::osuf1_common::MPC_prediction_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::osuf1_common::MPC_prediction_<ContainerAllocator> >> _trajectory_type;
  _trajectory_type trajectory;





  typedef boost::shared_ptr< ::osuf1_common::MPC_trajectory_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::osuf1_common::MPC_trajectory_<ContainerAllocator> const> ConstPtr;

}; // struct MPC_trajectory_

typedef ::osuf1_common::MPC_trajectory_<std::allocator<void> > MPC_trajectory;

typedef boost::shared_ptr< ::osuf1_common::MPC_trajectory > MPC_trajectoryPtr;
typedef boost::shared_ptr< ::osuf1_common::MPC_trajectory const> MPC_trajectoryConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::osuf1_common::MPC_trajectory_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::osuf1_common::MPC_trajectory_<ContainerAllocator1> & lhs, const ::osuf1_common::MPC_trajectory_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.trajectory == rhs.trajectory;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::osuf1_common::MPC_trajectory_<ContainerAllocator1> & lhs, const ::osuf1_common::MPC_trajectory_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace osuf1_common

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::osuf1_common::MPC_trajectory_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::osuf1_common::MPC_trajectory_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::osuf1_common::MPC_trajectory_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8a90cfb2e0bdfbd585e0991609a108cb";
  }

  static const char* value(const ::osuf1_common::MPC_trajectory_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8a90cfb2e0bdfbd5ULL;
  static const uint64_t static_value2 = 0x85e0991609a108cbULL;
};

template<class ContainerAllocator>
struct DataType< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "osuf1_common/MPC_trajectory";
  }

  static const char* value(const ::osuf1_common::MPC_trajectory_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"MPC_prediction[] trajectory\n"
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
"MSG: osuf1_common/MPC_prediction\n"
"float32[] state\n"
"float32[] inputs\n"
;
  }

  static const char* value(const ::osuf1_common::MPC_trajectory_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.trajectory);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MPC_trajectory_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::osuf1_common::MPC_trajectory_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::osuf1_common::MPC_trajectory_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "trajectory[]" << std::endl;
    for (size_t i = 0; i < v.trajectory.size(); ++i)
    {
      s << indent << "  trajectory[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::osuf1_common::MPC_prediction_<ContainerAllocator> >::stream(s, indent + "    ", v.trajectory[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OSUF1_COMMON_MESSAGE_MPC_TRAJECTORY_H
