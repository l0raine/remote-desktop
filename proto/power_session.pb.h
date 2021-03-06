// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: power_session.proto

#ifndef PROTOBUF_power_5fsession_2eproto__INCLUDED
#define PROTOBUF_power_5fsession_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include "proto.pb.h"
// @@protoc_insertion_point(includes)
namespace aspia {
namespace proto {
class ClipboardEvent;
class ClipboardEventDefaultTypeInternal;
extern ClipboardEventDefaultTypeInternal _ClipboardEvent_default_instance_;
class CursorShape;
class CursorShapeDefaultTypeInternal;
extern CursorShapeDefaultTypeInternal _CursorShape_default_instance_;
class DesktopConfig;
class DesktopConfigDefaultTypeInternal;
extern DesktopConfigDefaultTypeInternal _DesktopConfig_default_instance_;
class DesktopConfigRequest;
class DesktopConfigRequestDefaultTypeInternal;
extern DesktopConfigRequestDefaultTypeInternal _DesktopConfigRequest_default_instance_;
class KeyEvent;
class KeyEventDefaultTypeInternal;
extern KeyEventDefaultTypeInternal _KeyEvent_default_instance_;
class PointerEvent;
class PointerEventDefaultTypeInternal;
extern PointerEventDefaultTypeInternal _PointerEvent_default_instance_;
class PowerEvent;
class PowerEventDefaultTypeInternal;
extern PowerEventDefaultTypeInternal _PowerEvent_default_instance_;
class VideoPacket;
class VideoPacketDefaultTypeInternal;
extern VideoPacketDefaultTypeInternal _VideoPacket_default_instance_;
class VideoPixelFormat;
class VideoPixelFormatDefaultTypeInternal;
extern VideoPixelFormatDefaultTypeInternal _VideoPixelFormat_default_instance_;
class VideoRect;
class VideoRectDefaultTypeInternal;
extern VideoRectDefaultTypeInternal _VideoRect_default_instance_;
class VideoSize;
class VideoSizeDefaultTypeInternal;
extern VideoSizeDefaultTypeInternal _VideoSize_default_instance_;
namespace power {
class ClientToHost;
class ClientToHostDefaultTypeInternal;
extern ClientToHostDefaultTypeInternal _ClientToHost_default_instance_;
}  // namespace power
}  // namespace proto
}  // namespace aspia

namespace aspia {
namespace proto {
namespace power {

namespace protobuf_power_5fsession_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_power_5fsession_2eproto

// ===================================================================

class ClientToHost : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:aspia.proto.power.ClientToHost) */ {
 public:
  ClientToHost();
  virtual ~ClientToHost();

  ClientToHost(const ClientToHost& from);

  inline ClientToHost& operator=(const ClientToHost& from) {
    CopyFrom(from);
    return *this;
  }

  static const ClientToHost& default_instance();

  static inline const ClientToHost* internal_default_instance() {
    return reinterpret_cast<const ClientToHost*>(
               &_ClientToHost_default_instance_);
  }

  void Swap(ClientToHost* other);

  // implements Message ----------------------------------------------

  inline ClientToHost* New() const PROTOBUF_FINAL { return New(NULL); }

  ClientToHost* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const ClientToHost& from);
  void MergeFrom(const ClientToHost& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  void DiscardUnknownFields();
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ClientToHost* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::std::string GetTypeName() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // .aspia.proto.PowerEvent power_event = 1;
  bool has_power_event() const;
  void clear_power_event();
  static const int kPowerEventFieldNumber = 1;
  const ::aspia::proto::PowerEvent& power_event() const;
  ::aspia::proto::PowerEvent* mutable_power_event();
  ::aspia::proto::PowerEvent* release_power_event();
  void set_allocated_power_event(::aspia::proto::PowerEvent* power_event);

  // @@protoc_insertion_point(class_scope:aspia.proto.power.ClientToHost)
 private:

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::aspia::proto::PowerEvent* power_event_;
  mutable int _cached_size_;
  friend struct  protobuf_power_5fsession_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ClientToHost

// .aspia.proto.PowerEvent power_event = 1;
inline bool ClientToHost::has_power_event() const {
  return this != internal_default_instance() && power_event_ != NULL;
}
inline void ClientToHost::clear_power_event() {
  if (GetArenaNoVirtual() == NULL && power_event_ != NULL) delete power_event_;
  power_event_ = NULL;
}
inline const ::aspia::proto::PowerEvent& ClientToHost::power_event() const {
  // @@protoc_insertion_point(field_get:aspia.proto.power.ClientToHost.power_event)
  return power_event_ != NULL ? *power_event_
                         : *::aspia::proto::PowerEvent::internal_default_instance();
}
inline ::aspia::proto::PowerEvent* ClientToHost::mutable_power_event() {
  
  if (power_event_ == NULL) {
    power_event_ = new ::aspia::proto::PowerEvent;
  }
  // @@protoc_insertion_point(field_mutable:aspia.proto.power.ClientToHost.power_event)
  return power_event_;
}
inline ::aspia::proto::PowerEvent* ClientToHost::release_power_event() {
  // @@protoc_insertion_point(field_release:aspia.proto.power.ClientToHost.power_event)
  
  ::aspia::proto::PowerEvent* temp = power_event_;
  power_event_ = NULL;
  return temp;
}
inline void ClientToHost::set_allocated_power_event(::aspia::proto::PowerEvent* power_event) {
  delete power_event_;
  power_event_ = power_event;
  if (power_event) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:aspia.proto.power.ClientToHost.power_event)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace power
}  // namespace proto
}  // namespace aspia

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_power_5fsession_2eproto__INCLUDED
