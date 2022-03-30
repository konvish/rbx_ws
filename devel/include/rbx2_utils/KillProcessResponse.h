// Generated by gencpp from file rbx2_utils/KillProcessResponse.msg
// DO NOT EDIT!


#ifndef RBX2_UTILS_MESSAGE_KILLPROCESSRESPONSE_H
#define RBX2_UTILS_MESSAGE_KILLPROCESSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace rbx2_utils
{
template <class ContainerAllocator>
struct KillProcessResponse_
{
  typedef KillProcessResponse_<ContainerAllocator> Type;

  KillProcessResponse_()
    : success(false)  {
    }
  KillProcessResponse_(const ContainerAllocator& _alloc)
    : success(false)  {
  (void)_alloc;
    }



   typedef uint8_t _success_type;
  _success_type success;





  typedef boost::shared_ptr< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> const> ConstPtr;

}; // struct KillProcessResponse_

typedef ::rbx2_utils::KillProcessResponse_<std::allocator<void> > KillProcessResponse;

typedef boost::shared_ptr< ::rbx2_utils::KillProcessResponse > KillProcessResponsePtr;
typedef boost::shared_ptr< ::rbx2_utils::KillProcessResponse const> KillProcessResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rbx2_utils::KillProcessResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::rbx2_utils::KillProcessResponse_<ContainerAllocator1> & lhs, const ::rbx2_utils::KillProcessResponse_<ContainerAllocator2> & rhs)
{
  return lhs.success == rhs.success;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::rbx2_utils::KillProcessResponse_<ContainerAllocator1> & lhs, const ::rbx2_utils::KillProcessResponse_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace rbx2_utils

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "358e233cde0c8a8bcfea4ce193f8fc15";
  }

  static const char* value(const ::rbx2_utils::KillProcessResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x358e233cde0c8a8bULL;
  static const uint64_t static_value2 = 0xcfea4ce193f8fc15ULL;
};

template<class ContainerAllocator>
struct DataType< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rbx2_utils/KillProcessResponse";
  }

  static const char* value(const ::rbx2_utils::KillProcessResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bool success\n"
"\n"
"\n"
;
  }

  static const char* value(const ::rbx2_utils::KillProcessResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.success);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct KillProcessResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rbx2_utils::KillProcessResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rbx2_utils::KillProcessResponse_<ContainerAllocator>& v)
  {
    s << indent << "success: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.success);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RBX2_UTILS_MESSAGE_KILLPROCESSRESPONSE_H
