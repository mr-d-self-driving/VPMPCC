# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from f110_msgs/OTWpntArray.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import f110_msgs.msg
import genpy
import std_msgs.msg

class OTWpntArray(genpy.Message):
  _md5sum = "ca31dbec903934bb444714f693d1ec7f"
  _type = "f110_msgs/OTWpntArray"
  _has_header = True  # flag to mark the presence of a Header object
  _full_text = """std_msgs/Header header
time last_switch_time
bool side_switch
string ot_side
string ot_line
Wpnt[] wpnts


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

================================================================================
MSG: f110_msgs/Wpnt
int32 id

# frenet coordinates
float64 s_m
float64 d_m

# map coordinates
float64 x_m
float64 y_m

# track bound distance
float64 d_right
float64 d_left

# track information
float64 psi_rad
float64 kappa_radpm
float64 vx_mps
float64 ax_mps2

"""
  __slots__ = ['header','last_switch_time','side_switch','ot_side','ot_line','wpnts']
  _slot_types = ['std_msgs/Header','time','bool','string','string','f110_msgs/Wpnt[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       header,last_switch_time,side_switch,ot_side,ot_line,wpnts

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(OTWpntArray, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.last_switch_time is None:
        self.last_switch_time = genpy.Time()
      if self.side_switch is None:
        self.side_switch = False
      if self.ot_side is None:
        self.ot_side = ''
      if self.ot_line is None:
        self.ot_line = ''
      if self.wpnts is None:
        self.wpnts = []
    else:
      self.header = std_msgs.msg.Header()
      self.last_switch_time = genpy.Time()
      self.side_switch = False
      self.ot_side = ''
      self.ot_line = ''
      self.wpnts = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2IB().pack(_x.last_switch_time.secs, _x.last_switch_time.nsecs, _x.side_switch))
      _x = self.ot_side
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.ot_line
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.wpnts)
      buff.write(_struct_I.pack(length))
      for val1 in self.wpnts:
        _x = val1
        buff.write(_get_struct_i10d().pack(_x.id, _x.s_m, _x.d_m, _x.x_m, _x.y_m, _x.d_right, _x.d_left, _x.psi_rad, _x.kappa_radpm, _x.vx_mps, _x.ax_mps2))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.last_switch_time is None:
        self.last_switch_time = genpy.Time()
      if self.wpnts is None:
        self.wpnts = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 9
      (_x.last_switch_time.secs, _x.last_switch_time.nsecs, _x.side_switch,) = _get_struct_2IB().unpack(str[start:end])
      self.side_switch = bool(self.side_switch)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ot_side = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.ot_side = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ot_line = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.ot_line = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.wpnts = []
      for i in range(0, length):
        val1 = f110_msgs.msg.Wpnt()
        _x = val1
        start = end
        end += 84
        (_x.id, _x.s_m, _x.d_m, _x.x_m, _x.y_m, _x.d_right, _x.d_left, _x.psi_rad, _x.kappa_radpm, _x.vx_mps, _x.ax_mps2,) = _get_struct_i10d().unpack(str[start:end])
        self.wpnts.append(val1)
      self.last_switch_time.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_3I().pack(_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs))
      _x = self.header.frame_id
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self
      buff.write(_get_struct_2IB().pack(_x.last_switch_time.secs, _x.last_switch_time.nsecs, _x.side_switch))
      _x = self.ot_side
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      _x = self.ot_line
      length = len(_x)
      if python3 or type(_x) == unicode:
        _x = _x.encode('utf-8')
        length = len(_x)
      buff.write(struct.Struct('<I%ss'%length).pack(length, _x))
      length = len(self.wpnts)
      buff.write(_struct_I.pack(length))
      for val1 in self.wpnts:
        _x = val1
        buff.write(_get_struct_i10d().pack(_x.id, _x.s_m, _x.d_m, _x.x_m, _x.y_m, _x.d_right, _x.d_left, _x.psi_rad, _x.kappa_radpm, _x.vx_mps, _x.ax_mps2))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.header is None:
        self.header = std_msgs.msg.Header()
      if self.last_switch_time is None:
        self.last_switch_time = genpy.Time()
      if self.wpnts is None:
        self.wpnts = None
      end = 0
      _x = self
      start = end
      end += 12
      (_x.header.seq, _x.header.stamp.secs, _x.header.stamp.nsecs,) = _get_struct_3I().unpack(str[start:end])
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.header.frame_id = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.header.frame_id = str[start:end]
      _x = self
      start = end
      end += 9
      (_x.last_switch_time.secs, _x.last_switch_time.nsecs, _x.side_switch,) = _get_struct_2IB().unpack(str[start:end])
      self.side_switch = bool(self.side_switch)
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ot_side = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.ot_side = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      start = end
      end += length
      if python3:
        self.ot_line = str[start:end].decode('utf-8', 'rosmsg')
      else:
        self.ot_line = str[start:end]
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.wpnts = []
      for i in range(0, length):
        val1 = f110_msgs.msg.Wpnt()
        _x = val1
        start = end
        end += 84
        (_x.id, _x.s_m, _x.d_m, _x.x_m, _x.y_m, _x.d_right, _x.d_left, _x.psi_rad, _x.kappa_radpm, _x.vx_mps, _x.ax_mps2,) = _get_struct_i10d().unpack(str[start:end])
        self.wpnts.append(val1)
      self.last_switch_time.canon()
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_2IB = None
def _get_struct_2IB():
    global _struct_2IB
    if _struct_2IB is None:
        _struct_2IB = struct.Struct("<2IB")
    return _struct_2IB
_struct_3I = None
def _get_struct_3I():
    global _struct_3I
    if _struct_3I is None:
        _struct_3I = struct.Struct("<3I")
    return _struct_3I
_struct_i10d = None
def _get_struct_i10d():
    global _struct_i10d
    if _struct_i10d is None:
        _struct_i10d = struct.Struct("<i10d")
    return _struct_i10d
