// Auto-generated. Do not edit!

// (in-package mavros_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let Waypoint = require('./Waypoint.js');

//-----------------------------------------------------------

class control {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.uav_no = null;
      this.waypoint = null;
    }
    else {
      if (initObj.hasOwnProperty('uav_no')) {
        this.uav_no = initObj.uav_no
      }
      else {
        this.uav_no = 0;
      }
      if (initObj.hasOwnProperty('waypoint')) {
        this.waypoint = initObj.waypoint
      }
      else {
        this.waypoint = new Waypoint();
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type control
    // Serialize message field [uav_no]
    bufferOffset = _serializer.uint16(obj.uav_no, buffer, bufferOffset);
    // Serialize message field [waypoint]
    bufferOffset = Waypoint.serialize(obj.waypoint, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type control
    let len;
    let data = new control(null);
    // Deserialize message field [uav_no]
    data.uav_no = _deserializer.uint16(buffer, bufferOffset);
    // Deserialize message field [waypoint]
    data.waypoint = Waypoint.deserialize(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 47;
  }

  static datatype() {
    // Returns string type for a message object
    return 'mavros_msgs/control';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b22c3da27199b85b440e51dfef537fee';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    uint16 uav_no
    mavros_msgs/Waypoint waypoint
    
    ================================================================================
    MSG: mavros_msgs/Waypoint
    # Waypoint.msg
    #
    # ROS representation of MAVLink MISSION_ITEM
    # See mavlink documentation
    
    
    
    # see enum MAV_FRAME
    uint8 frame
    uint8 FRAME_GLOBAL = 0
    uint8 FRAME_LOCAL_NED = 1
    uint8 FRAME_MISSION = 2
    uint8 FRAME_GLOBAL_REL_ALT = 3
    uint8 FRAME_LOCAL_ENU = 4
    
    # see enum MAV_CMD and CommandCode.msg
    uint16 command
    
    bool is_current
    bool autocontinue
    # meaning of this params described in enum MAV_CMD
    float32 param1
    float32 param2
    float32 param3
    float32 param4
    float64 x_lat
    float64 y_long
    float64 z_alt
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new control(null);
    if (msg.uav_no !== undefined) {
      resolved.uav_no = msg.uav_no;
    }
    else {
      resolved.uav_no = 0
    }

    if (msg.waypoint !== undefined) {
      resolved.waypoint = Waypoint.Resolve(msg.waypoint)
    }
    else {
      resolved.waypoint = new Waypoint()
    }

    return resolved;
    }
};

module.exports = control;
