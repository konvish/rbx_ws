// Generated by gencpp from file household_objects_database_msgs/DatabaseReturnCode.msg
// DO NOT EDIT!


#ifndef HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_DATABASERETURNCODE_H
#define HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_DATABASERETURNCODE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace household_objects_database_msgs
{
template <class ContainerAllocator>
struct DatabaseReturnCode_
{
  typedef DatabaseReturnCode_<ContainerAllocator> Type;

  DatabaseReturnCode_()
    : code(0)  {
    }
  DatabaseReturnCode_(const ContainerAllocator& _alloc)
    : code(0)  {
  (void)_alloc;
    }



   typedef int32_t _code_type;
  _code_type code;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(UNKNOWN_ERROR)
  #undef UNKNOWN_ERROR
#endif
#if defined(_WIN32) && defined(DATABASE_NOT_CONNECTED)
  #undef DATABASE_NOT_CONNECTED
#endif
#if defined(_WIN32) && defined(DATABASE_QUERY_ERROR)
  #undef DATABASE_QUERY_ERROR
#endif
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif

  enum {
    UNKNOWN_ERROR = 1,
    DATABASE_NOT_CONNECTED = 2,
    DATABASE_QUERY_ERROR = 3,
    SUCCESS = -1,
  };


  typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> const> ConstPtr;

}; // struct DatabaseReturnCode_

typedef ::household_objects_database_msgs::DatabaseReturnCode_<std::allocator<void> > DatabaseReturnCode;

typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseReturnCode > DatabaseReturnCodePtr;
typedef boost::shared_ptr< ::household_objects_database_msgs::DatabaseReturnCode const> DatabaseReturnCodeConstPtr;

// constants requiring out of line definition

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator2> & rhs)
{
  return lhs.code == rhs.code;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator1> & lhs, const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace household_objects_database_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b649fd6fa3a4e3bf8e3f4b4e648fa0f1";
  }

  static const char* value(const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb649fd6fa3a4e3bfULL;
  static const uint64_t static_value2 = 0x8e3f4b4e648fa0f1ULL;
};

template<class ContainerAllocator>
struct DataType< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "household_objects_database_msgs/DatabaseReturnCode";
  }

  static const char* value(const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# return codes for database-related services\n"
"\n"
"int32 UNKNOWN_ERROR = 1\n"
"int32 DATABASE_NOT_CONNECTED = 2\n"
"int32 DATABASE_QUERY_ERROR = 3\n"
"int32 SUCCESS = -1\n"
"\n"
"int32 code\n"
;
  }

  static const char* value(const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct DatabaseReturnCode_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::household_objects_database_msgs::DatabaseReturnCode_<ContainerAllocator>& v)
  {
    s << indent << "code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // HOUSEHOLD_OBJECTS_DATABASE_MSGS_MESSAGE_DATABASERETURNCODE_H
