# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from uavcontrol/Distanceanduavangle.msg. Do not edit."""
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class Distanceanduavangle(genpy.Message):
  _md5sum = "a26deb739e48fbdcbdc79baf97d5e5b4"
  _type = "uavcontrol/Distanceanduavangle"
  _has_header = False #flag to mark the presence of a Header object
  _full_text = """float64 distance
float64 uavangle
float64 dissafe
"""
  __slots__ = ['distance','uavangle','dissafe']
  _slot_types = ['float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       distance,uavangle,dissafe

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(Distanceanduavangle, self).__init__(*args, **kwds)
      #message fields cannot be None, assign default values for those that are
      if self.distance is None:
        self.distance = 0.
      if self.uavangle is None:
        self.uavangle = 0.
      if self.dissafe is None:
        self.dissafe = 0.
    else:
      self.distance = 0.
      self.uavangle = 0.
      self.dissafe = 0.

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
      buff.write(_struct_3d.pack(_x.distance, _x.uavangle, _x.dissafe))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.distance, _x.uavangle, _x.dissafe,) = _struct_3d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_struct_3d.pack(_x.distance, _x.uavangle, _x.dissafe))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    try:
      end = 0
      _x = self
      start = end
      end += 24
      (_x.distance, _x.uavangle, _x.dissafe,) = _struct_3d.unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e) #most likely buffer underfill

_struct_I = genpy.struct_I
_struct_3d = struct.Struct("<3d")
