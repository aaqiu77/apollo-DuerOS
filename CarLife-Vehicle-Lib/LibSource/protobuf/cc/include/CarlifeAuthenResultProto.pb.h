// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CarlifeAuthenResultProto.proto

#ifndef PROTOBUF_CarlifeAuthenResultProto_2eproto__INCLUDED
#define PROTOBUF_CarlifeAuthenResultProto_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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

namespace com {
namespace baidu {
namespace carlife {
namespace protobuf {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_CarlifeAuthenResultProto_2eproto();
void protobuf_AssignDesc_CarlifeAuthenResultProto_2eproto();
void protobuf_ShutdownFile_CarlifeAuthenResultProto_2eproto();

class CarlifeAuthenResult;

// ===================================================================

class CarlifeAuthenResult : public ::google::protobuf::Message {
 public:
  CarlifeAuthenResult();
  virtual ~CarlifeAuthenResult();

  CarlifeAuthenResult(const CarlifeAuthenResult& from);

  inline CarlifeAuthenResult& operator=(const CarlifeAuthenResult& from) {
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
  static const CarlifeAuthenResult& default_instance();

  void Swap(CarlifeAuthenResult* other);

  // implements Message ----------------------------------------------

  CarlifeAuthenResult* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CarlifeAuthenResult& from);
  void MergeFrom(const CarlifeAuthenResult& from);
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

  // required bool authenResult = 1;
  inline bool has_authenresult() const;
  inline void clear_authenresult();
  static const int kAuthenResultFieldNumber = 1;
  inline bool authenresult() const;
  inline void set_authenresult(bool value);

  // @@protoc_insertion_point(class_scope:com.baidu.carlife.protobuf.CarlifeAuthenResult)
 private:
  inline void set_has_authenresult();
  inline void clear_has_authenresult();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  bool authenresult_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_CarlifeAuthenResultProto_2eproto();
  friend void protobuf_AssignDesc_CarlifeAuthenResultProto_2eproto();
  friend void protobuf_ShutdownFile_CarlifeAuthenResultProto_2eproto();

  void InitAsDefaultInstance();
  static CarlifeAuthenResult* default_instance_;
};
// ===================================================================


// ===================================================================

// CarlifeAuthenResult

// required bool authenResult = 1;
inline bool CarlifeAuthenResult::has_authenresult() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CarlifeAuthenResult::set_has_authenresult() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CarlifeAuthenResult::clear_has_authenresult() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CarlifeAuthenResult::clear_authenresult() {
  authenresult_ = false;
  clear_has_authenresult();
}
inline bool CarlifeAuthenResult::authenresult() const {
  return authenresult_;
}
inline void CarlifeAuthenResult::set_authenresult(bool value) {
  set_has_authenresult();
  authenresult_ = value;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace carlife
}  // namespace baidu
}  // namespace com

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_CarlifeAuthenResultProto_2eproto__INCLUDED
