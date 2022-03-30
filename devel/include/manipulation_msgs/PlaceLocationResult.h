// Generated by gencpp from file manipulation_msgs/PlaceLocationResult.msg
// DO NOT EDIT!


#ifndef MANIPULATION_MSGS_MESSAGE_PLACELOCATIONRESULT_H
#define MANIPULATION_MSGS_MESSAGE_PLACELOCATIONRESULT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace manipulation_msgs
{
template <class ContainerAllocator>
struct PlaceLocationResult_
{
  typedef PlaceLocationResult_<ContainerAllocator> Type;

  PlaceLocationResult_()
    : result_code(0)
    , continuation_possible(false)  {
    }
  PlaceLocationResult_(const ContainerAllocator& _alloc)
    : result_code(0)
    , continuation_possible(false)  {
  (void)_alloc;
    }



   typedef int32_t _result_code_type;
  _result_code_type result_code;

   typedef uint8_t _continuation_possible_type;
  _continuation_possible_type continuation_possible;



// reducing the odds to have name collisions with Windows.h 
#if defined(_WIN32) && defined(SUCCESS)
  #undef SUCCESS
#endif
#if defined(_WIN32) && defined(PLACE_OUT_OF_REACH)
  #undef PLACE_OUT_OF_REACH
#endif
#if defined(_WIN32) && defined(PLACE_IN_COLLISION)
  #undef PLACE_IN_COLLISION
#endif
#if defined(_WIN32) && defined(PLACE_UNFEASIBLE)
  #undef PLACE_UNFEASIBLE
#endif
#if defined(_WIN32) && defined(PREPLACE_OUT_OF_REACH)
  #undef PREPLACE_OUT_OF_REACH
#endif
#if defined(_WIN32) && defined(PREPLACE_IN_COLLISION)
  #undef PREPLACE_IN_COLLISION
#endif
#if defined(_WIN32) && defined(PREPLACE_UNFEASIBLE)
  #undef PREPLACE_UNFEASIBLE
#endif
#if defined(_WIN32) && defined(RETREAT_OUT_OF_REACH)
  #undef RETREAT_OUT_OF_REACH
#endif
#if defined(_WIN32) && defined(RETREAT_IN_COLLISION)
  #undef RETREAT_IN_COLLISION
#endif
#if defined(_WIN32) && defined(RETREAT_UNFEASIBLE)
  #undef RETREAT_UNFEASIBLE
#endif
#if defined(_WIN32) && defined(MOVE_ARM_FAILED)
  #undef MOVE_ARM_FAILED
#endif
#if defined(_WIN32) && defined(PLACE_FAILED)
  #undef PLACE_FAILED
#endif
#if defined(_WIN32) && defined(RETREAT_FAILED)
  #undef RETREAT_FAILED
#endif

  enum {
    SUCCESS = 1,
    PLACE_OUT_OF_REACH = 2,
    PLACE_IN_COLLISION = 3,
    PLACE_UNFEASIBLE = 4,
    PREPLACE_OUT_OF_REACH = 5,
    PREPLACE_IN_COLLISION = 6,
    PREPLACE_UNFEASIBLE = 7,
    RETREAT_OUT_OF_REACH = 8,
    RETREAT_IN_COLLISION = 9,
    RETREAT_UNFEASIBLE = 10,
    MOVE_ARM_FAILED = 11,
    PLACE_FAILED = 12,
    RETREAT_FAILED = 13,
  };


  typedef boost::shared_ptr< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> const> ConstPtr;

}; // struct PlaceLocationResult_

typedef ::manipulation_msgs::PlaceLocationResult_<std::allocator<void> > PlaceLocationResult;

typedef boost::shared_ptr< ::manipulation_msgs::PlaceLocationResult > PlaceLocationResultPtr;
typedef boost::shared_ptr< ::manipulation_msgs::PlaceLocationResult const> PlaceLocationResultConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator1> & lhs, const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator2> & rhs)
{
  return lhs.result_code == rhs.result_code &&
    lhs.continuation_possible == rhs.continuation_possible;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator1> & lhs, const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manipulation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "8dd9edc3a2a98cab298ca81031224cda";
  }

  static const char* value(const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x8dd9edc3a2a98cabULL;
  static const uint64_t static_value2 = 0x298ca81031224cdaULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manipulation_msgs/PlaceLocationResult";
  }

  static const char* value(const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 SUCCESS = 1\n"
"int32 PLACE_OUT_OF_REACH = 2\n"
"int32 PLACE_IN_COLLISION = 3\n"
"int32 PLACE_UNFEASIBLE = 4\n"
"int32 PREPLACE_OUT_OF_REACH = 5\n"
"int32 PREPLACE_IN_COLLISION = 6\n"
"int32 PREPLACE_UNFEASIBLE = 7\n"
"int32 RETREAT_OUT_OF_REACH = 8\n"
"int32 RETREAT_IN_COLLISION = 9\n"
"int32 RETREAT_UNFEASIBLE = 10\n"
"int32 MOVE_ARM_FAILED = 11\n"
"int32 PLACE_FAILED = 12\n"
"int32 RETREAT_FAILED = 13\n"
"int32 result_code\n"
"\n"
"# whether the state of the world was disturbed by this attempt. generally, this flag\n"
"# shows if another task can be attempted, or a new sensed world model is recommeded\n"
"# before proceeding\n"
"bool continuation_possible\n"
;
  }

  static const char* value(const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result_code);
      stream.next(m.continuation_possible);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct PlaceLocationResult_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manipulation_msgs::PlaceLocationResult_<ContainerAllocator>& v)
  {
    s << indent << "result_code: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result_code);
    s << indent << "continuation_possible: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.continuation_possible);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANIPULATION_MSGS_MESSAGE_PLACELOCATIONRESULT_H