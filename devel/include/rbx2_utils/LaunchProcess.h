// Generated by gencpp from file rbx2_utils/LaunchProcess.msg
// DO NOT EDIT!


#ifndef RBX2_UTILS_MESSAGE_LAUNCHPROCESS_H
#define RBX2_UTILS_MESSAGE_LAUNCHPROCESS_H

#include <ros/service_traits.h>


#include <rbx2_utils/LaunchProcessRequest.h>
#include <rbx2_utils/LaunchProcessResponse.h>


namespace rbx2_utils
{

struct LaunchProcess
{

typedef LaunchProcessRequest Request;
typedef LaunchProcessResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct LaunchProcess
} // namespace rbx2_utils


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::rbx2_utils::LaunchProcess > {
  static const char* value()
  {
    return "15f55f5751b44d06bcad0321b1a88466";
  }

  static const char* value(const ::rbx2_utils::LaunchProcess&) { return value(); }
};

template<>
struct DataType< ::rbx2_utils::LaunchProcess > {
  static const char* value()
  {
    return "rbx2_utils/LaunchProcess";
  }

  static const char* value(const ::rbx2_utils::LaunchProcess&) { return value(); }
};


// service_traits::MD5Sum< ::rbx2_utils::LaunchProcessRequest> should match
// service_traits::MD5Sum< ::rbx2_utils::LaunchProcess >
template<>
struct MD5Sum< ::rbx2_utils::LaunchProcessRequest>
{
  static const char* value()
  {
    return MD5Sum< ::rbx2_utils::LaunchProcess >::value();
  }
  static const char* value(const ::rbx2_utils::LaunchProcessRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::rbx2_utils::LaunchProcessRequest> should match
// service_traits::DataType< ::rbx2_utils::LaunchProcess >
template<>
struct DataType< ::rbx2_utils::LaunchProcessRequest>
{
  static const char* value()
  {
    return DataType< ::rbx2_utils::LaunchProcess >::value();
  }
  static const char* value(const ::rbx2_utils::LaunchProcessRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::rbx2_utils::LaunchProcessResponse> should match
// service_traits::MD5Sum< ::rbx2_utils::LaunchProcess >
template<>
struct MD5Sum< ::rbx2_utils::LaunchProcessResponse>
{
  static const char* value()
  {
    return MD5Sum< ::rbx2_utils::LaunchProcess >::value();
  }
  static const char* value(const ::rbx2_utils::LaunchProcessResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::rbx2_utils::LaunchProcessResponse> should match
// service_traits::DataType< ::rbx2_utils::LaunchProcess >
template<>
struct DataType< ::rbx2_utils::LaunchProcessResponse>
{
  static const char* value()
  {
    return DataType< ::rbx2_utils::LaunchProcess >::value();
  }
  static const char* value(const ::rbx2_utils::LaunchProcessResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // RBX2_UTILS_MESSAGE_LAUNCHPROCESS_H