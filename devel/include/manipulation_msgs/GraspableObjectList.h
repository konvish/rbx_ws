// Generated by gencpp from file manipulation_msgs/GraspableObjectList.msg
// DO NOT EDIT!


#ifndef MANIPULATION_MSGS_MESSAGE_GRASPABLEOBJECTLIST_H
#define MANIPULATION_MSGS_MESSAGE_GRASPABLEOBJECTLIST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <manipulation_msgs/GraspableObject.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/CameraInfo.h>
#include <shape_msgs/Mesh.h>
#include <geometry_msgs/Pose.h>

namespace manipulation_msgs
{
template <class ContainerAllocator>
struct GraspableObjectList_
{
  typedef GraspableObjectList_<ContainerAllocator> Type;

  GraspableObjectList_()
    : graspable_objects()
    , image()
    , camera_info()
    , meshes()
    , reference_to_camera()  {
    }
  GraspableObjectList_(const ContainerAllocator& _alloc)
    : graspable_objects(_alloc)
    , image(_alloc)
    , camera_info(_alloc)
    , meshes(_alloc)
    , reference_to_camera(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::manipulation_msgs::GraspableObject_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::manipulation_msgs::GraspableObject_<ContainerAllocator> >::other >  _graspable_objects_type;
  _graspable_objects_type graspable_objects;

   typedef  ::sensor_msgs::Image_<ContainerAllocator>  _image_type;
  _image_type image;

   typedef  ::sensor_msgs::CameraInfo_<ContainerAllocator>  _camera_info_type;
  _camera_info_type camera_info;

   typedef std::vector< ::shape_msgs::Mesh_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::shape_msgs::Mesh_<ContainerAllocator> >::other >  _meshes_type;
  _meshes_type meshes;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _reference_to_camera_type;
  _reference_to_camera_type reference_to_camera;





  typedef boost::shared_ptr< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> const> ConstPtr;

}; // struct GraspableObjectList_

typedef ::manipulation_msgs::GraspableObjectList_<std::allocator<void> > GraspableObjectList;

typedef boost::shared_ptr< ::manipulation_msgs::GraspableObjectList > GraspableObjectListPtr;
typedef boost::shared_ptr< ::manipulation_msgs::GraspableObjectList const> GraspableObjectListConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator1> & lhs, const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator2> & rhs)
{
  return lhs.graspable_objects == rhs.graspable_objects &&
    lhs.image == rhs.image &&
    lhs.camera_info == rhs.camera_info &&
    lhs.meshes == rhs.meshes &&
    lhs.reference_to_camera == rhs.reference_to_camera;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator1> & lhs, const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace manipulation_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d67571f2982f1b7115de1e0027319109";
  }

  static const char* value(const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd67571f2982f1b71ULL;
  static const uint64_t static_value2 = 0x15de1e0027319109ULL;
};

template<class ContainerAllocator>
struct DataType< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manipulation_msgs/GraspableObjectList";
  }

  static const char* value(const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
{
  static const char* value()
  {
    return "manipulation_msgs/GraspableObject[] graspable_objects\n"
"\n"
"#Information required for visualization\n"
"\n"
"sensor_msgs/Image image\n"
"sensor_msgs/CameraInfo camera_info\n"
"\n"
"#Holds a single mesh for each recognized graspable object, an empty mesh otherwise\n"
"shape_msgs/Mesh[] meshes\n"
"\n"
"#pose to transform the frame of the clusters/object poses into camera coordinates\n"
"geometry_msgs/Pose reference_to_camera\n"
"\n"
"================================================================================\n"
"MSG: manipulation_msgs/GraspableObject\n"
"# an object that the object_manipulator can work on\n"
"\n"
"# a graspable object can be represented in multiple ways. This message\n"
"# can contain all of them. Which one is actually used is up to the receiver\n"
"# of this message. When adding new representations, one must be careful that\n"
"# they have reasonable lightweight defaults indicating that that particular\n"
"# representation is not available.\n"
"\n"
"# the tf frame to be used as a reference frame when combining information from\n"
"# the different representations below\n"
"string reference_frame_id\n"
"\n"
"# potential recognition results from a database of models\n"
"# all poses are relative to the object reference pose\n"
"household_objects_database_msgs/DatabaseModelPose[] potential_models\n"
"\n"
"# the point cloud itself\n"
"sensor_msgs/PointCloud cluster\n"
"\n"
"# a region of a PointCloud2 of interest\n"
"SceneRegion region\n"
"\n"
"# the name that this object has in the collision environment\n"
"string collision_name\n"
"================================================================================\n"
"MSG: household_objects_database_msgs/DatabaseModelPose\n"
"# Informs that a specific model from the Model Database has been \n"
"# identified at a certain location\n"
"\n"
"# the database id of the model\n"
"int32 model_id\n"
"\n"
"# if the object was recognized by the ORK pipeline, its type will be in here\n"
"# if this is not empty, then the string in here will be converted to a household_objects_database id\n"
"# leave this empty if providing an id in the model_id field\n"
"object_recognition_msgs/ObjectType type\n"
"\n"
"# the pose that it can be found in\n"
"geometry_msgs/PoseStamped pose\n"
"\n"
"# a measure of the confidence level in this detection result\n"
"float32 confidence\n"
"\n"
"# the name of the object detector that generated this detection result\n"
"string detector_name\n"
"\n"
"================================================================================\n"
"MSG: object_recognition_msgs/ObjectType\n"
"################################################## OBJECT ID #########################################################\n"
"\n"
"# Contains information about the type of a found object. Those two sets of parameters together uniquely define an\n"
"# object\n"
"\n"
"# The key of the found object: the unique identifier in the given db\n"
"string key\n"
"\n"
"# The db parameters stored as a JSON/compressed YAML string. An object id does not make sense without the corresponding\n"
"# database. E.g., in object_recognition, it can look like: \"{'type':'CouchDB', 'root':'http://localhost'}\"\n"
"# There is no conventional format for those parameters and it's nice to keep that flexibility.\n"
"# The object_recognition_core as a generic DB type that can read those fields\n"
"# Current examples:\n"
"# For CouchDB:\n"
"#   type: 'CouchDB'\n"
"#   root: 'http://localhost:5984'\n"
"#   collection: 'object_recognition'\n"
"# For SQL household database:\n"
"#   type: 'SqlHousehold'\n"
"#   host: 'wgs36'\n"
"#   port: 5432\n"
"#   user: 'willow'\n"
"#   password: 'willow'\n"
"#   name: 'household_objects'\n"
"#   module: 'tabletop'\n"
"string db\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/PoseStamped\n"
"# A Pose with reference coordinate frame and timestamp\n"
"Header header\n"
"Pose pose\n"
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
"MSG: sensor_msgs/PointCloud\n"
"# This message holds a collection of 3d points, plus optional additional\n"
"# information about each point.\n"
"\n"
"# Time of sensor data acquisition, coordinate frame ID.\n"
"Header header\n"
"\n"
"# Array of 3d points. Each Point32 should be interpreted as a 3d point\n"
"# in the frame given in the header.\n"
"geometry_msgs/Point32[] points\n"
"\n"
"# Each channel should have the same number of elements as points array,\n"
"# and the data in each channel should correspond 1:1 with each point.\n"
"# Channel names in common practice are listed in ChannelFloat32.msg.\n"
"ChannelFloat32[] channels\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point32\n"
"# This contains the position of a point in free space(with 32 bits of precision).\n"
"# It is recommeded to use Point wherever possible instead of Point32.  \n"
"# \n"
"# This recommendation is to promote interoperability.  \n"
"#\n"
"# This message is designed to take up less space when sending\n"
"# lots of points at once, as in the case of a PointCloud.  \n"
"\n"
"float32 x\n"
"float32 y\n"
"float32 z\n"
"================================================================================\n"
"MSG: sensor_msgs/ChannelFloat32\n"
"# This message is used by the PointCloud message to hold optional data\n"
"# associated with each point in the cloud. The length of the values\n"
"# array should be the same as the length of the points array in the\n"
"# PointCloud, and each value should be associated with the corresponding\n"
"# point.\n"
"\n"
"# Channel names in existing practice include:\n"
"#   \"u\", \"v\" - row and column (respectively) in the left stereo image.\n"
"#              This is opposite to usual conventions but remains for\n"
"#              historical reasons. The newer PointCloud2 message has no\n"
"#              such problem.\n"
"#   \"rgb\" - For point clouds produced by color stereo cameras. uint8\n"
"#           (R,G,B) values packed into the least significant 24 bits,\n"
"#           in order.\n"
"#   \"intensity\" - laser or pixel intensity.\n"
"#   \"distance\"\n"
"\n"
"# The channel name should give semantics of the channel (e.g.\n"
"# \"intensity\" instead of \"value\").\n"
"string name\n"
"\n"
"# The values array should be 1-1 with the elements of the associated\n"
"# PointCloud.\n"
"float32[] values\n"
"\n"
"================================================================================\n"
"MSG: manipulation_msgs/SceneRegion\n"
"# Point cloud\n"
"sensor_msgs/PointCloud2 cloud\n"
"\n"
"# Indices for the region of interest\n"
"int32[] mask\n"
"\n"
"# One of the corresponding 2D images, if applicable\n"
"sensor_msgs/Image image\n"
"\n"
"# The disparity image, if applicable\n"
"sensor_msgs/Image disparity_image\n"
"\n"
"# Camera info for the camera that took the image\n"
"sensor_msgs/CameraInfo cam_info\n"
"\n"
"# a 3D region of interest for grasp planning\n"
"geometry_msgs/PoseStamped  roi_box_pose\n"
"geometry_msgs/Vector3 	   roi_box_dims\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointCloud2\n"
"# This message holds a collection of N-dimensional points, which may\n"
"# contain additional information such as normals, intensity, etc. The\n"
"# point data is stored as a binary blob, its layout described by the\n"
"# contents of the \"fields\" array.\n"
"\n"
"# The point cloud data may be organized 2d (image-like) or 1d\n"
"# (unordered). Point clouds organized as 2d images may be produced by\n"
"# camera depth sensors such as stereo or time-of-flight.\n"
"\n"
"# Time of sensor data acquisition, and the coordinate frame ID (for 3d\n"
"# points).\n"
"Header header\n"
"\n"
"# 2D structure of the point cloud. If the cloud is unordered, height is\n"
"# 1 and width is the length of the point cloud.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# Describes the channels and their layout in the binary data blob.\n"
"PointField[] fields\n"
"\n"
"bool    is_bigendian # Is this data bigendian?\n"
"uint32  point_step   # Length of a point in bytes\n"
"uint32  row_step     # Length of a row in bytes\n"
"uint8[] data         # Actual point data, size is (row_step*height)\n"
"\n"
"bool is_dense        # True if there are no invalid points\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/PointField\n"
"# This message holds the description of one point entry in the\n"
"# PointCloud2 message format.\n"
"uint8 INT8    = 1\n"
"uint8 UINT8   = 2\n"
"uint8 INT16   = 3\n"
"uint8 UINT16  = 4\n"
"uint8 INT32   = 5\n"
"uint8 UINT32  = 6\n"
"uint8 FLOAT32 = 7\n"
"uint8 FLOAT64 = 8\n"
"\n"
"string name      # Name of field\n"
"uint32 offset    # Offset from start of point struct\n"
"uint8  datatype  # Datatype enumeration, see above\n"
"uint32 count     # How many elements in the field\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/Image\n"
"# This message contains an uncompressed image\n"
"# (0, 0) is at top-left corner of image\n"
"#\n"
"\n"
"Header header        # Header timestamp should be acquisition time of image\n"
"                     # Header frame_id should be optical frame of camera\n"
"                     # origin of frame should be optical center of camera\n"
"                     # +x should point to the right in the image\n"
"                     # +y should point down in the image\n"
"                     # +z should point into to plane of the image\n"
"                     # If the frame_id here and the frame_id of the CameraInfo\n"
"                     # message associated with the image conflict\n"
"                     # the behavior is undefined\n"
"\n"
"uint32 height         # image height, that is, number of rows\n"
"uint32 width          # image width, that is, number of columns\n"
"\n"
"# The legal values for encoding are in file src/image_encodings.cpp\n"
"# If you want to standardize a new string format, join\n"
"# ros-users@lists.sourceforge.net and send an email proposing a new encoding.\n"
"\n"
"string encoding       # Encoding of pixels -- channel meaning, ordering, size\n"
"                      # taken from the list of strings in include/sensor_msgs/image_encodings.h\n"
"\n"
"uint8 is_bigendian    # is this data bigendian?\n"
"uint32 step           # Full row length in bytes\n"
"uint8[] data          # actual matrix data, size is (step * rows)\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/CameraInfo\n"
"# This message defines meta information for a camera. It should be in a\n"
"# camera namespace on topic \"camera_info\" and accompanied by up to five\n"
"# image topics named:\n"
"#\n"
"#   image_raw - raw data from the camera driver, possibly Bayer encoded\n"
"#   image            - monochrome, distorted\n"
"#   image_color      - color, distorted\n"
"#   image_rect       - monochrome, rectified\n"
"#   image_rect_color - color, rectified\n"
"#\n"
"# The image_pipeline contains packages (image_proc, stereo_image_proc)\n"
"# for producing the four processed image topics from image_raw and\n"
"# camera_info. The meaning of the camera parameters are described in\n"
"# detail at http://www.ros.org/wiki/image_pipeline/CameraInfo.\n"
"#\n"
"# The image_geometry package provides a user-friendly interface to\n"
"# common operations using this meta information. If you want to, e.g.,\n"
"# project a 3d point into image coordinates, we strongly recommend\n"
"# using image_geometry.\n"
"#\n"
"# If the camera is uncalibrated, the matrices D, K, R, P should be left\n"
"# zeroed out. In particular, clients may assume that K[0] == 0.0\n"
"# indicates an uncalibrated camera.\n"
"\n"
"#######################################################################\n"
"#                     Image acquisition info                          #\n"
"#######################################################################\n"
"\n"
"# Time of image acquisition, camera coordinate frame ID\n"
"Header header    # Header timestamp should be acquisition time of image\n"
"                 # Header frame_id should be optical frame of camera\n"
"                 # origin of frame should be optical center of camera\n"
"                 # +x should point to the right in the image\n"
"                 # +y should point down in the image\n"
"                 # +z should point into the plane of the image\n"
"\n"
"\n"
"#######################################################################\n"
"#                      Calibration Parameters                         #\n"
"#######################################################################\n"
"# These are fixed during camera calibration. Their values will be the #\n"
"# same in all messages until the camera is recalibrated. Note that    #\n"
"# self-calibrating systems may \"recalibrate\" frequently.              #\n"
"#                                                                     #\n"
"# The internal parameters can be used to warp a raw (distorted) image #\n"
"# to:                                                                 #\n"
"#   1. An undistorted image (requires D and K)                        #\n"
"#   2. A rectified image (requires D, K, R)                           #\n"
"# The projection matrix P projects 3D points into the rectified image.#\n"
"#######################################################################\n"
"\n"
"# The image dimensions with which the camera was calibrated. Normally\n"
"# this will be the full camera resolution in pixels.\n"
"uint32 height\n"
"uint32 width\n"
"\n"
"# The distortion model used. Supported models are listed in\n"
"# sensor_msgs/distortion_models.h. For most cameras, \"plumb_bob\" - a\n"
"# simple model of radial and tangential distortion - is sufficient.\n"
"string distortion_model\n"
"\n"
"# The distortion parameters, size depending on the distortion model.\n"
"# For \"plumb_bob\", the 5 parameters are: (k1, k2, t1, t2, k3).\n"
"float64[] D\n"
"\n"
"# Intrinsic camera matrix for the raw (distorted) images.\n"
"#     [fx  0 cx]\n"
"# K = [ 0 fy cy]\n"
"#     [ 0  0  1]\n"
"# Projects 3D points in the camera coordinate frame to 2D pixel\n"
"# coordinates using the focal lengths (fx, fy) and principal point\n"
"# (cx, cy).\n"
"float64[9]  K # 3x3 row-major matrix\n"
"\n"
"# Rectification matrix (stereo cameras only)\n"
"# A rotation matrix aligning the camera coordinate system to the ideal\n"
"# stereo image plane so that epipolar lines in both stereo images are\n"
"# parallel.\n"
"float64[9]  R # 3x3 row-major matrix\n"
"\n"
"# Projection/camera matrix\n"
"#     [fx'  0  cx' Tx]\n"
"# P = [ 0  fy' cy' Ty]\n"
"#     [ 0   0   1   0]\n"
"# By convention, this matrix specifies the intrinsic (camera) matrix\n"
"#  of the processed (rectified) image. That is, the left 3x3 portion\n"
"#  is the normal camera intrinsic matrix for the rectified image.\n"
"# It projects 3D points in the camera coordinate frame to 2D pixel\n"
"#  coordinates using the focal lengths (fx', fy') and principal point\n"
"#  (cx', cy') - these may differ from the values in K.\n"
"# For monocular cameras, Tx = Ty = 0. Normally, monocular cameras will\n"
"#  also have R = the identity and P[1:3,1:3] = K.\n"
"# For a stereo pair, the fourth column [Tx Ty 0]' is related to the\n"
"#  position of the optical center of the second camera in the first\n"
"#  camera's frame. We assume Tz = 0 so both cameras are in the same\n"
"#  stereo image plane. The first camera always has Tx = Ty = 0. For\n"
"#  the right (second) camera of a horizontal stereo pair, Ty = 0 and\n"
"#  Tx = -fx' * B, where B is the baseline between the cameras.\n"
"# Given a 3D point [X Y Z]', the projection (x, y) of the point onto\n"
"#  the rectified image is given by:\n"
"#  [u v w]' = P * [X Y Z 1]'\n"
"#         x = u / w\n"
"#         y = v / w\n"
"#  This holds for both images of a stereo pair.\n"
"float64[12] P # 3x4 row-major matrix\n"
"\n"
"\n"
"#######################################################################\n"
"#                      Operational Parameters                         #\n"
"#######################################################################\n"
"# These define the image region actually captured by the camera       #\n"
"# driver. Although they affect the geometry of the output image, they #\n"
"# may be changed freely without recalibrating the camera.             #\n"
"#######################################################################\n"
"\n"
"# Binning refers here to any camera setting which combines rectangular\n"
"#  neighborhoods of pixels into larger \"super-pixels.\" It reduces the\n"
"#  resolution of the output image to\n"
"#  (width / binning_x) x (height / binning_y).\n"
"# The default values binning_x = binning_y = 0 is considered the same\n"
"#  as binning_x = binning_y = 1 (no subsampling).\n"
"uint32 binning_x\n"
"uint32 binning_y\n"
"\n"
"# Region of interest (subwindow of full camera resolution), given in\n"
"#  full resolution (unbinned) image coordinates. A particular ROI\n"
"#  always denotes the same window of pixels on the camera sensor,\n"
"#  regardless of binning settings.\n"
"# The default setting of roi (all values 0) is considered the same as\n"
"#  full resolution (roi.width = width, roi.height = height).\n"
"RegionOfInterest roi\n"
"\n"
"================================================================================\n"
"MSG: sensor_msgs/RegionOfInterest\n"
"# This message is used to specify a region of interest within an image.\n"
"#\n"
"# When used to specify the ROI setting of the camera when the image was\n"
"# taken, the height and width fields should either match the height and\n"
"# width fields for the associated image; or height = width = 0\n"
"# indicates that the full resolution image was captured.\n"
"\n"
"uint32 x_offset  # Leftmost pixel of the ROI\n"
"                 # (0 if the ROI includes the left edge of the image)\n"
"uint32 y_offset  # Topmost pixel of the ROI\n"
"                 # (0 if the ROI includes the top edge of the image)\n"
"uint32 height    # Height of ROI\n"
"uint32 width     # Width of ROI\n"
"\n"
"# True if a distinct rectified ROI should be calculated from the \"raw\"\n"
"# ROI in this message. Typically this should be False if the full image\n"
"# is captured (ROI not used), and True if a subwindow is captured (ROI\n"
"# used).\n"
"bool do_rectify\n"
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
"================================================================================\n"
"MSG: shape_msgs/Mesh\n"
"# Definition of a mesh\n"
"\n"
"# list of triangles; the index values refer to positions in vertices[]\n"
"MeshTriangle[] triangles\n"
"\n"
"# the actual vertices that make up the mesh\n"
"geometry_msgs/Point[] vertices\n"
"\n"
"================================================================================\n"
"MSG: shape_msgs/MeshTriangle\n"
"# Definition of a triangle's vertices\n"
"uint32[3] vertex_indices\n"
;
  }

  static const char* value(const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.graspable_objects);
      stream.next(m.image);
      stream.next(m.camera_info);
      stream.next(m.meshes);
      stream.next(m.reference_to_camera);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GraspableObjectList_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::manipulation_msgs::GraspableObjectList_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::manipulation_msgs::GraspableObjectList_<ContainerAllocator>& v)
  {
    s << indent << "graspable_objects[]" << std::endl;
    for (size_t i = 0; i < v.graspable_objects.size(); ++i)
    {
      s << indent << "  graspable_objects[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::manipulation_msgs::GraspableObject_<ContainerAllocator> >::stream(s, indent + "    ", v.graspable_objects[i]);
    }
    s << indent << "image: ";
    s << std::endl;
    Printer< ::sensor_msgs::Image_<ContainerAllocator> >::stream(s, indent + "  ", v.image);
    s << indent << "camera_info: ";
    s << std::endl;
    Printer< ::sensor_msgs::CameraInfo_<ContainerAllocator> >::stream(s, indent + "  ", v.camera_info);
    s << indent << "meshes[]" << std::endl;
    for (size_t i = 0; i < v.meshes.size(); ++i)
    {
      s << indent << "  meshes[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::shape_msgs::Mesh_<ContainerAllocator> >::stream(s, indent + "    ", v.meshes[i]);
    }
    s << indent << "reference_to_camera: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.reference_to_camera);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MANIPULATION_MSGS_MESSAGE_GRASPABLEOBJECTLIST_H
