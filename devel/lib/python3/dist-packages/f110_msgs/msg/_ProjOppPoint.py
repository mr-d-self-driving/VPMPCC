# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from f110_msgs/ProjOppPoint.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class ProjOppPoint(genpy.Message):
  _md5sum = "eda6871c789332f821761fdc46c611e3"
  _type = "f110_msgs/ProjOppPoint"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """#Velocities are projected onto ego race line

float64 s
float64 d                       
float64 vs
float64 vd
bool is_static
bool is_visible
float64 time
float64 s_var
float64 d_var
float64 vs_var
float64 vd_var"""
  __slots__ = ['s','d','vs','vd','is_static','is_visible','time','s_var','d_var','vs_var','vd_var']
  _slot_types = ['float64','float64','float64','float64','bool','bool','float64','float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       s,d,vs,vd,is_static,is_visible,time,s_var,d_var,vs_var,vd_var

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(ProjOppPoint, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.s is None:
        self.s = 0.
      if self.d is None:
        self.d = 0.
      if self.vs is None:
        self.vs = 0.
      if self.vd is None:
        self.vd = 0.
      if self.is_static is None:
        self.is_static = False
      if self.is_visible is None:
        self.is_visible = False
      if self.time is None:
        self.time = 0.
      if self.s_var is None:
        self.s_var = 0.
      if self.d_var is None:
        self.d_var = 0.
      if self.vs_var is None:
        self.vs_var = 0.
      if self.vd_var is None:
        self.vd_var = 0.
    else:
      self.s = 0.
      self.d = 0.
      self.vs = 0.
      self.vd = 0.
      self.is_static = False
      self.is_visible = False
      self.time = 0.
      self.s_var = 0.
      self.d_var = 0.
      self.vs_var = 0.
      self.vd_var = 0.

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
      buff.write(_get_struct_4d2B5d().pack(_x.s, _x.d, _x.vs, _x.vd, _x.is_static, _x.is_visible, _x.time, _x.s_var, _x.d_var, _x.vs_var, _x.vd_var))
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
      end = 0
      _x = self
      start = end
      end += 74
      (_x.s, _x.d, _x.vs, _x.vd, _x.is_static, _x.is_visible, _x.time, _x.s_var, _x.d_var, _x.vs_var, _x.vd_var,) = _get_struct_4d2B5d().unpack(str[start:end])
      self.is_static = bool(self.is_static)
      self.is_visible = bool(self.is_visible)
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
      buff.write(_get_struct_4d2B5d().pack(_x.s, _x.d, _x.vs, _x.vd, _x.is_static, _x.is_visible, _x.time, _x.s_var, _x.d_var, _x.vs_var, _x.vd_var))
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
      end = 0
      _x = self
      start = end
      end += 74
      (_x.s, _x.d, _x.vs, _x.vd, _x.is_static, _x.is_visible, _x.time, _x.s_var, _x.d_var, _x.vs_var, _x.vd_var,) = _get_struct_4d2B5d().unpack(str[start:end])
      self.is_static = bool(self.is_static)
      self.is_visible = bool(self.is_visible)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d2B5d = None
def _get_struct_4d2B5d():
    global _struct_4d2B5d
    if _struct_4d2B5d is None:
        _struct_4d2B5d = struct.Struct("<4d2B5d")
    return _struct_4d2B5d
