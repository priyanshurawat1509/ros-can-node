// Generated by gencpp from file raptor_dbw_msgs/Ignition.msg
// DO NOT EDIT!


#ifndef RAPTOR_DBW_MSGS_MESSAGE_IGNITION_H
#define RAPTOR_DBW_MSGS_MESSAGE_IGNITION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace raptor_dbw_msgs
{
template <class ContainerAllocator>
struct Ignition_
{
  typedef Ignition_<ContainerAllocator> Type;

  Ignition_()
    : status(0)  {
    }
  Ignition_(const ContainerAllocator& _alloc)
    : status(0)  {
  (void)_alloc;
    }



   typedef uint8_t _status_type;
  _status_type status;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(NO_REQUEST)
  #undef NO_REQUEST
#endif
#if defined(_WIN32) && defined(FORCE_OFF)
  #undef FORCE_OFF
#endif
#if defined(_WIN32) && defined(ACCESSORY)
  #undef ACCESSORY
#endif
#if defined(_WIN32) && defined(RUN)
  #undef RUN
#endif
#if defined(_WIN32) && defined(CRANK)
  #undef CRANK
#endif

  enum {
    NO_REQUEST = 0u,
    FORCE_OFF = 1u,
    ACCESSORY = 2u,
    RUN = 3u,
    CRANK = 4u,
  };


  typedef boost::shared_ptr< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> const> ConstPtr;

}; // struct Ignition_

typedef ::raptor_dbw_msgs::Ignition_<std::allocator<void> > Ignition;

typedef boost::shared_ptr< ::raptor_dbw_msgs::Ignition > IgnitionPtr;
typedef boost::shared_ptr< ::raptor_dbw_msgs::Ignition const> IgnitionConstPtr;

// constants requiring out of line definition

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::raptor_dbw_msgs::Ignition_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::raptor_dbw_msgs::Ignition_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::Ignition_<ContainerAllocator2> & rhs)
{
  return lhs.status == rhs.status;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::raptor_dbw_msgs::Ignition_<ContainerAllocator1> & lhs, const ::raptor_dbw_msgs::Ignition_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace raptor_dbw_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "0f311d817ddde0f9d192a6d5e9ac26ba";
  }

  static const char* value(const ::raptor_dbw_msgs::Ignition_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x0f311d817ddde0f9ULL;
  static const uint64_t static_value2 = 0xd192a6d5e9ac26baULL;
};

template<class ContainerAllocator>
struct DataType< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "raptor_dbw_msgs/Ignition";
  }

  static const char* value(const ::raptor_dbw_msgs::Ignition_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 status\n"
"\n"
"uint8 NO_REQUEST = 0\n"
"uint8 FORCE_OFF = 1\n"
"uint8 ACCESSORY = 2\n"
"uint8 RUN = 3\n"
"uint8 CRANK = 4\n"
;
  }

  static const char* value(const ::raptor_dbw_msgs::Ignition_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.status);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Ignition_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::raptor_dbw_msgs::Ignition_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::raptor_dbw_msgs::Ignition_<ContainerAllocator>& v)
  {
    s << indent << "status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.status);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RAPTOR_DBW_MSGS_MESSAGE_IGNITION_H