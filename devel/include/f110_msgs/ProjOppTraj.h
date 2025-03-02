// Generated by gencpp from file f110_msgs/ProjOppTraj.msg
// DO NOT EDIT!


#ifndef F110_MSGS_MESSAGE_PROJOPPTRAJ_H
#define F110_MSGS_MESSAGE_PROJOPPTRAJ_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <f110_msgs/ProjOppPoint.h>

namespace f110_msgs
{
template <class ContainerAllocator>
struct ProjOppTraj_
{
  typedef ProjOppTraj_<ContainerAllocator> Type;

  ProjOppTraj_()
    : lapcount(0.0)
    , nrofpoints(0.0)
    , opp_is_on_trajectory(false)
    , detections()  {
    }
  ProjOppTraj_(const ContainerAllocator& _alloc)
    : lapcount(0.0)
    , nrofpoints(0.0)
    , opp_is_on_trajectory(false)
    , detections(_alloc)  {
  (void)_alloc;
    }



   typedef double _lapcount_type;
  _lapcount_type lapcount;

   typedef double _nrofpoints_type;
  _nrofpoints_type nrofpoints;

   typedef uint8_t _opp_is_on_trajectory_type;
  _opp_is_on_trajectory_type opp_is_on_trajectory;

   typedef std::vector< ::f110_msgs::ProjOppPoint_<ContainerAllocator> , typename std::allocator_traits<ContainerAllocator>::template rebind_alloc< ::f110_msgs::ProjOppPoint_<ContainerAllocator> >> _detections_type;
  _detections_type detections;





  typedef boost::shared_ptr< ::f110_msgs::ProjOppTraj_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::f110_msgs::ProjOppTraj_<ContainerAllocator> const> ConstPtr;

}; // struct ProjOppTraj_

typedef ::f110_msgs::ProjOppTraj_<std::allocator<void> > ProjOppTraj;

typedef boost::shared_ptr< ::f110_msgs::ProjOppTraj > ProjOppTrajPtr;
typedef boost::shared_ptr< ::f110_msgs::ProjOppTraj const> ProjOppTrajConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::f110_msgs::ProjOppTraj_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::f110_msgs::ProjOppTraj_<ContainerAllocator1> & lhs, const ::f110_msgs::ProjOppTraj_<ContainerAllocator2> & rhs)
{
  return lhs.lapcount == rhs.lapcount &&
    lhs.nrofpoints == rhs.nrofpoints &&
    lhs.opp_is_on_trajectory == rhs.opp_is_on_trajectory &&
    lhs.detections == rhs.detections;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::f110_msgs::ProjOppTraj_<ContainerAllocator1> & lhs, const ::f110_msgs::ProjOppTraj_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace f110_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::f110_msgs::ProjOppTraj_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::f110_msgs::ProjOppTraj_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::f110_msgs::ProjOppTraj_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
{
  static const char* value()
  {
    return "499738ff330d861f27f97c2965929bae";
  }

  static const char* value(const ::f110_msgs::ProjOppTraj_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x499738ff330d861fULL;
  static const uint64_t static_value2 = 0x27f97c2965929baeULL;
};

template<class ContainerAllocator>
struct DataType< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f110_msgs/ProjOppTraj";
  }

  static const char* value(const ::f110_msgs::ProjOppTraj_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float64 lapcount\n"
"float64 nrofpoints\n"
"bool opp_is_on_trajectory\n"
"ProjOppPoint[] detections\n"
"================================================================================\n"
"MSG: f110_msgs/ProjOppPoint\n"
"#Velocities are projected onto ego race line\n"
"\n"
"float64 s\n"
"float64 d                       \n"
"float64 vs\n"
"float64 vd\n"
"bool is_static\n"
"bool is_visible\n"
"float64 time\n"
"float64 s_var\n"
"float64 d_var\n"
"float64 vs_var\n"
"float64 vd_var\n"
;
  }

  static const char* value(const ::f110_msgs::ProjOppTraj_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.lapcount);
      stream.next(m.nrofpoints);
      stream.next(m.opp_is_on_trajectory);
      stream.next(m.detections);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct ProjOppTraj_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::f110_msgs::ProjOppTraj_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::f110_msgs::ProjOppTraj_<ContainerAllocator>& v)
  {
    s << indent << "lapcount: ";
    Printer<double>::stream(s, indent + "  ", v.lapcount);
    s << indent << "nrofpoints: ";
    Printer<double>::stream(s, indent + "  ", v.nrofpoints);
    s << indent << "opp_is_on_trajectory: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.opp_is_on_trajectory);
    s << indent << "detections[]" << std::endl;
    for (size_t i = 0; i < v.detections.size(); ++i)
    {
      s << indent << "  detections[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::f110_msgs::ProjOppPoint_<ContainerAllocator> >::stream(s, indent + "    ", v.detections[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // F110_MSGS_MESSAGE_PROJOPPTRAJ_H
