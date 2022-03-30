// Generated by gencpp from file manipulation_msgs/GraspPlanningActionFeedback.msg
// DO NOT EDIT!


#ifndef MANIPULATION_MSGS_MESSAGE_GRASPPLANNINGACTIONFEEDBACK_H
#define MANIPULATION_MSGS_MESSAGE_GRASPPLANNINGACTIONFEEDBACK_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <actionlib_msgs/GoalStatus.h>
#include <manipulation_msgs/GraspPlanningFeedback.h>

namespace manipulation_msgs
{
template <class ContainerAllocator>
struct GraspPlanningActionFeedback_
{
  typedef GraspPlanningActionFeedback_<ContainerAllocator> Type;

  GraspPlanningActionFeedback_()
    : header()
    , status()
    , feedback()  {
    }
  GraspPlanningActionFeedback_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , status(_alloc)
    , feedback(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::actionlib_msgs::GoalStatus_<ContainerAllocator>  _status_type;
  _status_type status;

   typedef  ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator>  _feedback_type;
  _feedback_type feedback;





  typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> const> ConstPtr;

}; // struct GraspPlanningActionFeedback_

typedef ::manipulation_msgs::GraspPlanningActionFeedback_<std::allocator<void> > GraspPlanningActionFeedback;

typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningActionFeedback > GraspPlanningActionFeedbackPtr;
typedef boost::shared_ptr< ::manipulation_msgs::GraspPlanningActionFeedback const> GraspPlanningActionFeedbackConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator1> & lhs, const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.status == rhs.status &&
    lhs.feedback == rhs.feedback;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator1> & lhs, const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manipulation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "25a75a7c3117e1e7efda49b65ff22a06";
  }

  static const char* value(const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x25a75a7c3117e1e7ULL;
  static const uint64_t static_value2 = 0xefda49b65ff22a06ULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manipulation_msgs/GraspPlanningActionFeedback";
  }

  static const char* value(const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"Header header\n"
"actionlib_msgs/GoalStatus status\n"
"GraspPlanningFeedback feedback\n"
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
"MSG: actionlib_msgs/GoalStatus\n"
"GoalID goal_id\n"
"uint8 status\n"
"uint8 PENDING         = 0   # The goal has yet to be processed by the action server\n"
"uint8 ACTIVE          = 1   # The goal is currently being processed by the action server\n"
"uint8 PREEMPTED       = 2   # The goal received a cancel request after it started executing\n"
"                            #   and has since completed its execution (Terminal State)\n"
"uint8 SUCCEEDED       = 3   # The goal was achieved successfully by the action server (Terminal State)\n"
"uint8 ABORTED         = 4   # The goal was aborted during execution by the action server due\n"
"                            #    to some failure (Terminal State)\n"
"uint8 REJECTED        = 5   # The goal was rejected by the action server without being processed,\n"
"                            #    because the goal was unattainable or invalid (Terminal State)\n"
"uint8 PREEMPTING      = 6   # The goal received a cancel request after it started executing\n"
"                            #    and has not yet completed execution\n"
"uint8 RECALLING       = 7   # The goal received a cancel request before it started executing,\n"
"                            #    but the action server has not yet confirmed that the goal is canceled\n"
"uint8 RECALLED        = 8   # The goal received a cancel request before it started executing\n"
"                            #    and was successfully cancelled (Terminal State)\n"
"uint8 LOST            = 9   # An action client can determine that a goal is LOST. This should not be\n"
"                            #    sent over the wire by an action server\n"
"\n"
"#Allow for the user to associate a string with GoalStatus for debugging\n"
"string text\n"
"\n"
"\n"
"================================================================================\n"
"MSG: actionlib_msgs/GoalID\n"
"# The stamp should store the time at which this goal was requested.\n"
"# It is used by an action server when it tries to preempt all\n"
"# goals that were requested before a certain time\n"
"time stamp\n"
"\n"
"# The id provides a way to associate feedback and\n"
"# result message with specific goal requests. The id\n"
"# specified must be unique.\n"
"string id\n"
"\n"
"\n"
"================================================================================\n"
"MSG: manipulation_msgs/GraspPlanningFeedback\n"
"# ====== DO NOT MODIFY! AUTOGENERATED FROM AN ACTION DEFINITION ======\n"
"\n"
"# grasps planned so far\n"
"Grasp[] grasps\n"
"\n"
"\n"
"\n"
"================================================================================\n"
"MSG: manipulation_msgs/Grasp\n"
"# A name for this grasp\n"
"string id\n"
"\n"
"# The internal posture of the hand for the pre-grasp\n"
"# only positions are used\n"
"sensor_msgs/JointState pre_grasp_posture\n"
"\n"
"# The internal posture of the hand for the grasp\n"
"# positions and efforts are used\n"
"sensor_msgs/JointState grasp_posture\n"
"\n"
"# The position of the end-effector for the grasp \n"
"geometry_msgs/PoseStamped grasp_pose\n"
"\n"
"# The estimated probability of success for this grasp, or some other\n"
"# measure of how \"good\" it is.\n"
"float64 grasp_quality\n"
"\n"
"# The approach motion\n"
"GripperTranslation approach\n"
"\n"
"# The retreat motion\n"
"GripperTranslation retreat\n"
"\n"
"# the maximum contact force to use while grasping (<=0 to disable)\n"
"float32 max_contact_force\n"
"\n"
"# an optional list of obstacles that we have semantic information about\n"
"# and that can be touched/pushed/moved in the course of grasping\n"
"string[] allowed_touch_objects\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/JointState\n"
"# This is a message that holds data to describe the state of a set of torque controlled joints. \n"
"#\n"
"# The state of each joint (revolute or prismatic) is defined by:\n"
"#  * the position of the joint (rad or m),\n"
"#  * the velocity of the joint (rad/s or m/s) and \n"
"#  * the effort that is applied in the joint (Nm or N).\n"
"#\n"
"# Each joint is uniquely identified by its name\n"
"# The header specifies the time at which the joint states were recorded. All the joint states\n"
"# in one message have to be recorded at the same time.\n"
"#\n"
"# This message consists of a multiple arrays, one for each part of the joint state. \n"
"# The goal is to make each of the fields optional. When e.g. your joints have no\n"
"# effort associated with them, you can leave the effort array empty. \n"
"#\n"
"# All arrays in this message should have the same size, or be empty.\n"
"# This is the only way to uniquely associate the joint name with the correct\n"
"# states.\n"
"\n"
"\n"
"Header header\n"
"\n"
"string[] name\n"
"float64[] position\n"
"float64[] velocity\n"
"float64[] effort\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"MSG: manipulation_msgs/GripperTranslation\n"
"# defines a translation for the gripper, used in pickup or place tasks\n"
"# for example for lifting an object off a table or approaching the table for placing\n"
"\n"
"# the direction of the translation\n"
"geometry_msgs/Vector3Stamped direction\n"
"\n"
"# the desired translation distance\n"
"float32 desired_distance\n"
"\n"
"# the min distance that must be considered feasible before the\n"
"# grasp is even attempted\n"
"float32 min_distance\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3Stamped\n"
"# This represents a Vector3 with reference coordinate frame and timestamp\n"
"Header header\n"
"Vector3 vector\n"
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

  static const char* value(const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.status);
      stream.next(m.feedback);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspPlanningActionFeedback_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manipulation_msgs::GraspPlanningActionFeedback_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "status: ";
    s << std::endl;
    Printer< ::actionlib_msgs::GoalStatus_<ContainerAllocator> >::stream(s, indent + "  ", v.status);
    s << indent << "feedback: ";
    s << std::endl;
    Printer< ::manipulation_msgs::GraspPlanningFeedback_<ContainerAllocator> >::stream(s, indent + "  ", v.feedback);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANIPULATION_MSGS_MESSAGE_GRASPPLANNINGACTIONFEEDBACK_H
