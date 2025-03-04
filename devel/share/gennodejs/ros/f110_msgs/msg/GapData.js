// Auto-generated. Do not edit!

// (in-package f110_msgs.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class GapData {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.gap_diff = null;
      this.vs_diff = null;
      this.gap_int = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('gap_diff')) {
        this.gap_diff = initObj.gap_diff
      }
      else {
        this.gap_diff = 0.0;
      }
      if (initObj.hasOwnProperty('vs_diff')) {
        this.vs_diff = initObj.vs_diff
      }
      else {
        this.vs_diff = 0.0;
      }
      if (initObj.hasOwnProperty('gap_int')) {
        this.gap_int = initObj.gap_int
      }
      else {
        this.gap_int = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type GapData
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [gap_diff]
    bufferOffset = _serializer.float64(obj.gap_diff, buffer, bufferOffset);
    // Serialize message field [vs_diff]
    bufferOffset = _serializer.float64(obj.vs_diff, buffer, bufferOffset);
    // Serialize message field [gap_int]
    bufferOffset = _serializer.float64(obj.gap_int, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type GapData
    let len;
    let data = new GapData(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [gap_diff]
    data.gap_diff = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [vs_diff]
    data.vs_diff = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [gap_int]
    data.gap_int = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    return length + 24;
  }

  static datatype() {
    // Returns string type for a message object
    return 'f110_msgs/GapData';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'b407209058e30969cf7468c302c926f1';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    std_msgs/Header header
    
    float64 gap_diff
    float64 vs_diff
    float64 gap_int 
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new GapData(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.gap_diff !== undefined) {
      resolved.gap_diff = msg.gap_diff;
    }
    else {
      resolved.gap_diff = 0.0
    }

    if (msg.vs_diff !== undefined) {
      resolved.vs_diff = msg.vs_diff;
    }
    else {
      resolved.vs_diff = 0.0
    }

    if (msg.gap_int !== undefined) {
      resolved.gap_int = msg.gap_int;
    }
    else {
      resolved.gap_int = 0.0
    }

    return resolved;
    }
};

module.exports = GapData;
