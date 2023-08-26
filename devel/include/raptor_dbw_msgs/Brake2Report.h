// Generated by gencpp from file raptor_dbw_msgs/Brake2Report.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_BRAKE2REPORT_H
#define RAPTOR_DBW_MSGS_MESSAGE_BRAKE2REPORT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace raptor_dbw_msgs
{
template <class ContainerAllocator>
struct Brake2Report_
{
  typedef Brake2Report_<ContainerAllocator> Type;

  Brake2Report_()
    : header()
    , brake_pressure(0.0)
    , estimated_road_slope(0.0)
    , speed_set_point(0.0)  {
    }
  Brake2Report_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , brake_pressure(0.0)
    , estimated_road_slope(0.0)
    , speed_set_point(0.0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef float _brake_pressure_type;
  _brake_pressure_type brake_pressure;

   typedef float _estimated_road_slope_type;
  _estimated_road_slope_type estimated_road_slope;

   typedef float _speed_set_point_type;
  _speed_set_point_type speed_set_point;





  typedef boost::shared_ptr< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> const> ConstPtr;

}; // struct Brake2Report_

typedef ::raptor_dbw_msgs::Brake2Report_<std::allocator<void> > Brake2Report;

typedef boost::shared_ptr< ::raptor_dbw_msgs::Brake2Report > Brake2ReportPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::Brake2Report const> Brake2ReportConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.brake_pressure == rhs.brake_pressure &&
    lhs.estimated_road_slope == rhs.estimated_road_slope &&
    lhs.speed_set_point == rhs.speed_set_point;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
{
  static const char* value()
  {
    return "91c57e75406042c8cada9e740cceeb96";
  }

  static const char* value(const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x91c57e75406042c8ULL;
  static const uint64_t static_value2 = 0xcada9e740cceeb96ULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/Brake2Report";
  }

  static const char* value(const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"\n"
"float32 brake_pressure # units are bars, gauge pressure\n"
"\n"
"float32 estimated_road_slope # degrees\n"
"\n"
"float32 speed_set_point # m/s\n"
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
;
  }

  static const char* value(const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.brake_pressure);
      stream.next(m.estimated_road_slope);
      stream.next(m.speed_set_point);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Brake2Report_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::Brake2Report_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "brake_pressure: ";
    Printer<float>::stream(s, indent + "  ", v.brake_pressure);
    s << indent << "estimated_road_slope: ";
    Printer<float>::stream(s, indent + "  ", v.estimated_road_slope);
    s << indent << "speed_set_point: ";
    Printer<float>::stream(s, indent + "  ", v.speed_set_point);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_BRAKE2REPORT_H