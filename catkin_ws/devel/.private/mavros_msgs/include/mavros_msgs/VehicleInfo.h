// Generated by gencpp from file mavros_msgs/VehicleInfo.msg
// DO NOT EDIT!


#ifndef MAVROS_MSGS_MESSAGE_VEHICLEINFO_H
#define MAVROS_MSGS_MESSAGE_VEHICLEINFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace mavros_msgs
{
template <class ContainerAllocator>
struct VehicleInfo_
{
  typedef VehicleInfo_<ContainerAllocator> Type;

  VehicleInfo_()
    : header()
    , available_info(0)
    , sysid(0)
    , compid(0)
    , autopilot(0)
    , type(0)
    , system_status(0)
    , base_mode(0)
    , custom_mode(0)
    , mode()
    , mode_id(0)
    , capabilities(0)
    , flight_sw_version(0)
    , middleware_sw_version(0)
    , os_sw_version(0)
    , board_version(0)
    , vendor_id(0)
    , product_id(0)
    , uid(0)  {
    }
  VehicleInfo_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , available_info(0)
    , sysid(0)
    , compid(0)
    , autopilot(0)
    , type(0)
    , system_status(0)
    , base_mode(0)
    , custom_mode(0)
    , mode(_alloc)
    , mode_id(0)
    , capabilities(0)
    , flight_sw_version(0)
    , middleware_sw_version(0)
    , os_sw_version(0)
    , board_version(0)
    , vendor_id(0)
    , product_id(0)
    , uid(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef uint8_t _available_info_type;
  _available_info_type available_info;

   typedef uint8_t _sysid_type;
  _sysid_type sysid;

   typedef uint8_t _compid_type;
  _compid_type compid;

   typedef uint8_t _autopilot_type;
  _autopilot_type autopilot;

   typedef uint8_t _type_type;
  _type_type type;

   typedef uint8_t _system_status_type;
  _system_status_type system_status;

   typedef uint8_t _base_mode_type;
  _base_mode_type base_mode;

   typedef uint32_t _custom_mode_type;
  _custom_mode_type custom_mode;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _mode_type;
  _mode_type mode;

   typedef uint32_t _mode_id_type;
  _mode_id_type mode_id;

   typedef uint64_t _capabilities_type;
  _capabilities_type capabilities;

   typedef uint32_t _flight_sw_version_type;
  _flight_sw_version_type flight_sw_version;

   typedef uint32_t _middleware_sw_version_type;
  _middleware_sw_version_type middleware_sw_version;

   typedef uint32_t _os_sw_version_type;
  _os_sw_version_type os_sw_version;

   typedef uint32_t _board_version_type;
  _board_version_type board_version;

   typedef uint16_t _vendor_id_type;
  _vendor_id_type vendor_id;

   typedef uint16_t _product_id_type;
  _product_id_type product_id;

   typedef uint64_t _uid_type;
  _uid_type uid;



  enum {
    HAVE_INFO_HEARTBEAT = 1u,
    HAVE_INFO_AUTOPILOT_VERSION = 2u,
  };


  typedef boost::shared_ptr< ::mavros_msgs::VehicleInfo_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::mavros_msgs::VehicleInfo_<ContainerAllocator> const> ConstPtr;

}; // struct VehicleInfo_

typedef ::mavros_msgs::VehicleInfo_<std::allocator<void> > VehicleInfo;

typedef boost::shared_ptr< ::mavros_msgs::VehicleInfo > VehicleInfoPtr;
typedef boost::shared_ptr< ::mavros_msgs::VehicleInfo const> VehicleInfoConstPtr;

// constants requiring out of line definition

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::mavros_msgs::VehicleInfo_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace mavros_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'geographic_msgs': ['/opt/ros/kinetic/share/geographic_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'mavros_msgs': ['/home/poojith/catkin_ws/src/mavros/mavros_msgs/msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'uuid_msgs': ['/opt/ros/kinetic/share/uuid_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::mavros_msgs::VehicleInfo_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::mavros_msgs::VehicleInfo_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::mavros_msgs::VehicleInfo_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "68ac9e63349db04d0cf8dd45a9a5b283";
  }

  static const char* value(const ::mavros_msgs::VehicleInfo_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x68ac9e63349db04dULL;
  static const uint64_t static_value2 = 0x0cf8dd45a9a5b283ULL;
};

template<class ContainerAllocator>
struct DataType< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "mavros_msgs/VehicleInfo";
  }

  static const char* value(const ::mavros_msgs::VehicleInfo_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# Vehicle Info msg\n\
\n\
std_msgs/Header header\n\
\n\
uint8 HAVE_INFO_HEARTBEAT = 1\n\
uint8 HAVE_INFO_AUTOPILOT_VERSION = 2\n\
uint8 available_info		# Bitmap shows what info is available\n\
\n\
# Vehicle address\n\
uint8 sysid                     # SYSTEM ID\n\
uint8 compid                    # COMPONENT ID\n\
\n\
# -*- Heartbeat info -*-\n\
uint8 autopilot                 # MAV_AUTOPILOT\n\
uint8 type                      # MAV_TYPE\n\
uint8 system_status             # MAV_STATE\n\
uint8 base_mode\n\
uint32 custom_mode\n\
string mode                     # MAV_MODE string\n\
uint32 mode_id                  # MAV_MODE number\n\
\n\
# -*- Autopilot version -*-\n\
uint64 capabilities             # MAV_PROTOCOL_CAPABILITY\n\
uint32 flight_sw_version        # Firmware version number\n\
uint32 middleware_sw_version    # Middleware version number\n\
uint32 os_sw_version            # Operating system version number\n\
uint32 board_version            # HW / board version (last 8 bytes should be silicon ID, if any)\n\
uint16 vendor_id                # ID of the board vendor\n\
uint16 product_id               # ID of the product\n\
uint64 uid                      # UID if provided by hardware\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::mavros_msgs::VehicleInfo_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.available_info);
      stream.next(m.sysid);
      stream.next(m.compid);
      stream.next(m.autopilot);
      stream.next(m.type);
      stream.next(m.system_status);
      stream.next(m.base_mode);
      stream.next(m.custom_mode);
      stream.next(m.mode);
      stream.next(m.mode_id);
      stream.next(m.capabilities);
      stream.next(m.flight_sw_version);
      stream.next(m.middleware_sw_version);
      stream.next(m.os_sw_version);
      stream.next(m.board_version);
      stream.next(m.vendor_id);
      stream.next(m.product_id);
      stream.next(m.uid);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct VehicleInfo_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::mavros_msgs::VehicleInfo_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::mavros_msgs::VehicleInfo_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "available_info: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.available_info);
    s << indent << "sysid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.sysid);
    s << indent << "compid: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.compid);
    s << indent << "autopilot: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.autopilot);
    s << indent << "type: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.type);
    s << indent << "system_status: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.system_status);
    s << indent << "base_mode: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.base_mode);
    s << indent << "custom_mode: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.custom_mode);
    s << indent << "mode: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.mode);
    s << indent << "mode_id: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mode_id);
    s << indent << "capabilities: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.capabilities);
    s << indent << "flight_sw_version: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.flight_sw_version);
    s << indent << "middleware_sw_version: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.middleware_sw_version);
    s << indent << "os_sw_version: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.os_sw_version);
    s << indent << "board_version: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.board_version);
    s << indent << "vendor_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.vendor_id);
    s << indent << "product_id: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.product_id);
    s << indent << "uid: ";
    Printer<uint64_t>::stream(s, indent + "  ", v.uid);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MAVROS_MSGS_MESSAGE_VEHICLEINFO_H