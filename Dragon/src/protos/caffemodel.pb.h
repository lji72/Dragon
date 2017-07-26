// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: caffemodel.proto

#ifndef PROTOBUF_caffemodel_2eproto__INCLUDED
#define PROTOBUF_caffemodel_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_caffemodel_2eproto();
void protobuf_AssignDesc_caffemodel_2eproto();
void protobuf_ShutdownFile_caffemodel_2eproto();

class BlobShape;
class BlobProto;
class NetParameter;
class LayerParameter;

// ===================================================================

class BlobShape : public ::google::protobuf::Message {
 public:
  BlobShape();
  virtual ~BlobShape();

  BlobShape(const BlobShape& from);

  inline BlobShape& operator=(const BlobShape& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BlobShape& default_instance();

  void Swap(BlobShape* other);

  // implements Message ----------------------------------------------

  BlobShape* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BlobShape& from);
  void MergeFrom(const BlobShape& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated int64 dim = 1 [packed = true];
  inline int dim_size() const;
  inline void clear_dim();
  static const int kDimFieldNumber = 1;
  inline ::google::protobuf::int64 dim(int index) const;
  inline void set_dim(int index, ::google::protobuf::int64 value);
  inline void add_dim(::google::protobuf::int64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
      dim() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
      mutable_dim();

  // @@protoc_insertion_point(class_scope:BlobShape)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedField< ::google::protobuf::int64 > dim_;
  mutable int _dim_cached_byte_size_;
  friend void  protobuf_AddDesc_caffemodel_2eproto();
  friend void protobuf_AssignDesc_caffemodel_2eproto();
  friend void protobuf_ShutdownFile_caffemodel_2eproto();

  void InitAsDefaultInstance();
  static BlobShape* default_instance_;
};
// -------------------------------------------------------------------

class BlobProto : public ::google::protobuf::Message {
 public:
  BlobProto();
  virtual ~BlobProto();

  BlobProto(const BlobProto& from);

  inline BlobProto& operator=(const BlobProto& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const BlobProto& default_instance();

  void Swap(BlobProto* other);

  // implements Message ----------------------------------------------

  BlobProto* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const BlobProto& from);
  void MergeFrom(const BlobProto& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .BlobShape shape = 7;
  inline bool has_shape() const;
  inline void clear_shape();
  static const int kShapeFieldNumber = 7;
  inline const ::BlobShape& shape() const;
  inline ::BlobShape* mutable_shape();
  inline ::BlobShape* release_shape();
  inline void set_allocated_shape(::BlobShape* shape);

  // repeated float data = 5 [packed = true];
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 5;
  inline float data(int index) const;
  inline void set_data(int index, float value);
  inline void add_data(float value);
  inline const ::google::protobuf::RepeatedField< float >&
      data() const;
  inline ::google::protobuf::RepeatedField< float >*
      mutable_data();

  // optional int32 num = 1 [default = 0];
  inline bool has_num() const;
  inline void clear_num();
  static const int kNumFieldNumber = 1;
  inline ::google::protobuf::int32 num() const;
  inline void set_num(::google::protobuf::int32 value);

  // optional int32 channels = 2 [default = 0];
  inline bool has_channels() const;
  inline void clear_channels();
  static const int kChannelsFieldNumber = 2;
  inline ::google::protobuf::int32 channels() const;
  inline void set_channels(::google::protobuf::int32 value);

  // optional int32 height = 3 [default = 0];
  inline bool has_height() const;
  inline void clear_height();
  static const int kHeightFieldNumber = 3;
  inline ::google::protobuf::int32 height() const;
  inline void set_height(::google::protobuf::int32 value);

  // optional int32 width = 4 [default = 0];
  inline bool has_width() const;
  inline void clear_width();
  static const int kWidthFieldNumber = 4;
  inline ::google::protobuf::int32 width() const;
  inline void set_width(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:BlobProto)
 private:
  inline void set_has_shape();
  inline void clear_has_shape();
  inline void set_has_num();
  inline void clear_has_num();
  inline void set_has_channels();
  inline void clear_has_channels();
  inline void set_has_height();
  inline void clear_has_height();
  inline void set_has_width();
  inline void clear_has_width();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::BlobShape* shape_;
  ::google::protobuf::RepeatedField< float > data_;
  mutable int _data_cached_byte_size_;
  ::google::protobuf::int32 num_;
  ::google::protobuf::int32 channels_;
  ::google::protobuf::int32 height_;
  ::google::protobuf::int32 width_;
  friend void  protobuf_AddDesc_caffemodel_2eproto();
  friend void protobuf_AssignDesc_caffemodel_2eproto();
  friend void protobuf_ShutdownFile_caffemodel_2eproto();

  void InitAsDefaultInstance();
  static BlobProto* default_instance_;
};
// -------------------------------------------------------------------

class NetParameter : public ::google::protobuf::Message {
 public:
  NetParameter();
  virtual ~NetParameter();

  NetParameter(const NetParameter& from);

  inline NetParameter& operator=(const NetParameter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const NetParameter& default_instance();

  void Swap(NetParameter* other);

  // implements Message ----------------------------------------------

  NetParameter* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NetParameter& from);
  void MergeFrom(const NetParameter& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // repeated .LayerParameter layer = 100;
  inline int layer_size() const;
  inline void clear_layer();
  static const int kLayerFieldNumber = 100;
  inline const ::LayerParameter& layer(int index) const;
  inline ::LayerParameter* mutable_layer(int index);
  inline ::LayerParameter* add_layer();
  inline const ::google::protobuf::RepeatedPtrField< ::LayerParameter >&
      layer() const;
  inline ::google::protobuf::RepeatedPtrField< ::LayerParameter >*
      mutable_layer();

  // @@protoc_insertion_point(class_scope:NetParameter)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::LayerParameter > layer_;
  friend void  protobuf_AddDesc_caffemodel_2eproto();
  friend void protobuf_AssignDesc_caffemodel_2eproto();
  friend void protobuf_ShutdownFile_caffemodel_2eproto();

  void InitAsDefaultInstance();
  static NetParameter* default_instance_;
};
// -------------------------------------------------------------------

class LayerParameter : public ::google::protobuf::Message {
 public:
  LayerParameter();
  virtual ~LayerParameter();

  LayerParameter(const LayerParameter& from);

  inline LayerParameter& operator=(const LayerParameter& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LayerParameter& default_instance();

  void Swap(LayerParameter* other);

  // implements Message ----------------------------------------------

  LayerParameter* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LayerParameter& from);
  void MergeFrom(const LayerParameter& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string name = 1;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 1;
  inline const ::std::string& name() const;
  inline void set_name(const ::std::string& value);
  inline void set_name(const char* value);
  inline void set_name(const char* value, size_t size);
  inline ::std::string* mutable_name();
  inline ::std::string* release_name();
  inline void set_allocated_name(::std::string* name);

  // repeated .BlobProto blobs = 7;
  inline int blobs_size() const;
  inline void clear_blobs();
  static const int kBlobsFieldNumber = 7;
  inline const ::BlobProto& blobs(int index) const;
  inline ::BlobProto* mutable_blobs(int index);
  inline ::BlobProto* add_blobs();
  inline const ::google::protobuf::RepeatedPtrField< ::BlobProto >&
      blobs() const;
  inline ::google::protobuf::RepeatedPtrField< ::BlobProto >*
      mutable_blobs();

  // @@protoc_insertion_point(class_scope:LayerParameter)
 private:
  inline void set_has_name();
  inline void clear_has_name();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* name_;
  ::google::protobuf::RepeatedPtrField< ::BlobProto > blobs_;
  friend void  protobuf_AddDesc_caffemodel_2eproto();
  friend void protobuf_AssignDesc_caffemodel_2eproto();
  friend void protobuf_ShutdownFile_caffemodel_2eproto();

  void InitAsDefaultInstance();
  static LayerParameter* default_instance_;
};
// ===================================================================


// ===================================================================

// BlobShape

// repeated int64 dim = 1 [packed = true];
inline int BlobShape::dim_size() const {
  return dim_.size();
}
inline void BlobShape::clear_dim() {
  dim_.Clear();
}
inline ::google::protobuf::int64 BlobShape::dim(int index) const {
  // @@protoc_insertion_point(field_get:BlobShape.dim)
  return dim_.Get(index);
}
inline void BlobShape::set_dim(int index, ::google::protobuf::int64 value) {
  dim_.Set(index, value);
  // @@protoc_insertion_point(field_set:BlobShape.dim)
}
inline void BlobShape::add_dim(::google::protobuf::int64 value) {
  dim_.Add(value);
  // @@protoc_insertion_point(field_add:BlobShape.dim)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::int64 >&
BlobShape::dim() const {
  // @@protoc_insertion_point(field_list:BlobShape.dim)
  return dim_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::int64 >*
BlobShape::mutable_dim() {
  // @@protoc_insertion_point(field_mutable_list:BlobShape.dim)
  return &dim_;
}

// -------------------------------------------------------------------

// BlobProto

// optional .BlobShape shape = 7;
inline bool BlobProto::has_shape() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BlobProto::set_has_shape() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BlobProto::clear_has_shape() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BlobProto::clear_shape() {
  if (shape_ != NULL) shape_->::BlobShape::Clear();
  clear_has_shape();
}
inline const ::BlobShape& BlobProto::shape() const {
  // @@protoc_insertion_point(field_get:BlobProto.shape)
  return shape_ != NULL ? *shape_ : *default_instance_->shape_;
}
inline ::BlobShape* BlobProto::mutable_shape() {
  set_has_shape();
  if (shape_ == NULL) shape_ = new ::BlobShape;
  // @@protoc_insertion_point(field_mutable:BlobProto.shape)
  return shape_;
}
inline ::BlobShape* BlobProto::release_shape() {
  clear_has_shape();
  ::BlobShape* temp = shape_;
  shape_ = NULL;
  return temp;
}
inline void BlobProto::set_allocated_shape(::BlobShape* shape) {
  delete shape_;
  shape_ = shape;
  if (shape) {
    set_has_shape();
  } else {
    clear_has_shape();
  }
  // @@protoc_insertion_point(field_set_allocated:BlobProto.shape)
}

// repeated float data = 5 [packed = true];
inline int BlobProto::data_size() const {
  return data_.size();
}
inline void BlobProto::clear_data() {
  data_.Clear();
}
inline float BlobProto::data(int index) const {
  // @@protoc_insertion_point(field_get:BlobProto.data)
  return data_.Get(index);
}
inline void BlobProto::set_data(int index, float value) {
  data_.Set(index, value);
  // @@protoc_insertion_point(field_set:BlobProto.data)
}
inline void BlobProto::add_data(float value) {
  data_.Add(value);
  // @@protoc_insertion_point(field_add:BlobProto.data)
}
inline const ::google::protobuf::RepeatedField< float >&
BlobProto::data() const {
  // @@protoc_insertion_point(field_list:BlobProto.data)
  return data_;
}
inline ::google::protobuf::RepeatedField< float >*
BlobProto::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:BlobProto.data)
  return &data_;
}

// optional int32 num = 1 [default = 0];
inline bool BlobProto::has_num() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BlobProto::set_has_num() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BlobProto::clear_has_num() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BlobProto::clear_num() {
  num_ = 0;
  clear_has_num();
}
inline ::google::protobuf::int32 BlobProto::num() const {
  // @@protoc_insertion_point(field_get:BlobProto.num)
  return num_;
}
inline void BlobProto::set_num(::google::protobuf::int32 value) {
  set_has_num();
  num_ = value;
  // @@protoc_insertion_point(field_set:BlobProto.num)
}

// optional int32 channels = 2 [default = 0];
inline bool BlobProto::has_channels() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BlobProto::set_has_channels() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BlobProto::clear_has_channels() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BlobProto::clear_channels() {
  channels_ = 0;
  clear_has_channels();
}
inline ::google::protobuf::int32 BlobProto::channels() const {
  // @@protoc_insertion_point(field_get:BlobProto.channels)
  return channels_;
}
inline void BlobProto::set_channels(::google::protobuf::int32 value) {
  set_has_channels();
  channels_ = value;
  // @@protoc_insertion_point(field_set:BlobProto.channels)
}

// optional int32 height = 3 [default = 0];
inline bool BlobProto::has_height() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void BlobProto::set_has_height() {
  _has_bits_[0] |= 0x00000010u;
}
inline void BlobProto::clear_has_height() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void BlobProto::clear_height() {
  height_ = 0;
  clear_has_height();
}
inline ::google::protobuf::int32 BlobProto::height() const {
  // @@protoc_insertion_point(field_get:BlobProto.height)
  return height_;
}
inline void BlobProto::set_height(::google::protobuf::int32 value) {
  set_has_height();
  height_ = value;
  // @@protoc_insertion_point(field_set:BlobProto.height)
}

// optional int32 width = 4 [default = 0];
inline bool BlobProto::has_width() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void BlobProto::set_has_width() {
  _has_bits_[0] |= 0x00000020u;
}
inline void BlobProto::clear_has_width() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void BlobProto::clear_width() {
  width_ = 0;
  clear_has_width();
}
inline ::google::protobuf::int32 BlobProto::width() const {
  // @@protoc_insertion_point(field_get:BlobProto.width)
  return width_;
}
inline void BlobProto::set_width(::google::protobuf::int32 value) {
  set_has_width();
  width_ = value;
  // @@protoc_insertion_point(field_set:BlobProto.width)
}

// -------------------------------------------------------------------

// NetParameter

// optional string name = 1;
inline bool NetParameter::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void NetParameter::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void NetParameter::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void NetParameter::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& NetParameter::name() const {
  // @@protoc_insertion_point(field_get:NetParameter.name)
  return *name_;
}
inline void NetParameter::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:NetParameter.name)
}
inline void NetParameter::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:NetParameter.name)
}
inline void NetParameter::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:NetParameter.name)
}
inline ::std::string* NetParameter::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:NetParameter.name)
  return name_;
}
inline ::std::string* NetParameter::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void NetParameter::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:NetParameter.name)
}

// repeated .LayerParameter layer = 100;
inline int NetParameter::layer_size() const {
  return layer_.size();
}
inline void NetParameter::clear_layer() {
  layer_.Clear();
}
inline const ::LayerParameter& NetParameter::layer(int index) const {
  // @@protoc_insertion_point(field_get:NetParameter.layer)
  return layer_.Get(index);
}
inline ::LayerParameter* NetParameter::mutable_layer(int index) {
  // @@protoc_insertion_point(field_mutable:NetParameter.layer)
  return layer_.Mutable(index);
}
inline ::LayerParameter* NetParameter::add_layer() {
  // @@protoc_insertion_point(field_add:NetParameter.layer)
  return layer_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::LayerParameter >&
NetParameter::layer() const {
  // @@protoc_insertion_point(field_list:NetParameter.layer)
  return layer_;
}
inline ::google::protobuf::RepeatedPtrField< ::LayerParameter >*
NetParameter::mutable_layer() {
  // @@protoc_insertion_point(field_mutable_list:NetParameter.layer)
  return &layer_;
}

// -------------------------------------------------------------------

// LayerParameter

// optional string name = 1;
inline bool LayerParameter::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void LayerParameter::set_has_name() {
  _has_bits_[0] |= 0x00000001u;
}
inline void LayerParameter::clear_has_name() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void LayerParameter::clear_name() {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_->clear();
  }
  clear_has_name();
}
inline const ::std::string& LayerParameter::name() const {
  // @@protoc_insertion_point(field_get:LayerParameter.name)
  return *name_;
}
inline void LayerParameter::set_name(const ::std::string& value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set:LayerParameter.name)
}
inline void LayerParameter::set_name(const char* value) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(value);
  // @@protoc_insertion_point(field_set_char:LayerParameter.name)
}
inline void LayerParameter::set_name(const char* value, size_t size) {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  name_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:LayerParameter.name)
}
inline ::std::string* LayerParameter::mutable_name() {
  set_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    name_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:LayerParameter.name)
  return name_;
}
inline ::std::string* LayerParameter::release_name() {
  clear_has_name();
  if (name_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = name_;
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void LayerParameter::set_allocated_name(::std::string* name) {
  if (name_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete name_;
  }
  if (name) {
    set_has_name();
    name_ = name;
  } else {
    clear_has_name();
    name_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:LayerParameter.name)
}

// repeated .BlobProto blobs = 7;
inline int LayerParameter::blobs_size() const {
  return blobs_.size();
}
inline void LayerParameter::clear_blobs() {
  blobs_.Clear();
}
inline const ::BlobProto& LayerParameter::blobs(int index) const {
  // @@protoc_insertion_point(field_get:LayerParameter.blobs)
  return blobs_.Get(index);
}
inline ::BlobProto* LayerParameter::mutable_blobs(int index) {
  // @@protoc_insertion_point(field_mutable:LayerParameter.blobs)
  return blobs_.Mutable(index);
}
inline ::BlobProto* LayerParameter::add_blobs() {
  // @@protoc_insertion_point(field_add:LayerParameter.blobs)
  return blobs_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::BlobProto >&
LayerParameter::blobs() const {
  // @@protoc_insertion_point(field_list:LayerParameter.blobs)
  return blobs_;
}
inline ::google::protobuf::RepeatedPtrField< ::BlobProto >*
LayerParameter::mutable_blobs() {
  // @@protoc_insertion_point(field_mutable_list:LayerParameter.blobs)
  return &blobs_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_caffemodel_2eproto__INCLUDED
