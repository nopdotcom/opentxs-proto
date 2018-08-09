// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BlockchainTransactionInput.proto

#ifndef PROTOBUF_BlockchainTransactionInput_2eproto__INCLUDED
#define PROTOBUF_BlockchainTransactionInput_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
// @@protoc_insertion_point(includes)

namespace protobuf_BlockchainTransactionInput_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[1];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void InitDefaultsBlockchainTransactionInputImpl();
void InitDefaultsBlockchainTransactionInput();
inline void InitDefaults() {
  InitDefaultsBlockchainTransactionInput();
}
}  // namespace protobuf_BlockchainTransactionInput_2eproto
namespace opentxs {
namespace proto {
class BlockchainTransactionInput;
class BlockchainTransactionInputDefaultTypeInternal;
extern BlockchainTransactionInputDefaultTypeInternal _BlockchainTransactionInput_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace opentxs {
namespace proto {

// ===================================================================

class BlockchainTransactionInput : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:opentxs.proto.BlockchainTransactionInput) */ {
 public:
  BlockchainTransactionInput();
  virtual ~BlockchainTransactionInput();

  BlockchainTransactionInput(const BlockchainTransactionInput& from);

  inline BlockchainTransactionInput& operator=(const BlockchainTransactionInput& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  BlockchainTransactionInput(BlockchainTransactionInput&& from) noexcept
    : BlockchainTransactionInput() {
    *this = ::std::move(from);
  }

  inline BlockchainTransactionInput& operator=(BlockchainTransactionInput&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::std::string& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::std::string* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const BlockchainTransactionInput& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const BlockchainTransactionInput* internal_default_instance() {
    return reinterpret_cast<const BlockchainTransactionInput*>(
               &_BlockchainTransactionInput_default_instance_);
  }
  static PROTOBUF_CONSTEXPR int const kIndexInFileMessages =
    0;

  void Swap(BlockchainTransactionInput* other);
  friend void swap(BlockchainTransactionInput& a, BlockchainTransactionInput& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline BlockchainTransactionInput* New() const PROTOBUF_FINAL { return New(NULL); }

  BlockchainTransactionInput* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from)
    PROTOBUF_FINAL;
  void CopyFrom(const BlockchainTransactionInput& from);
  void MergeFrom(const BlockchainTransactionInput& from);
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
  void InternalSwap(BlockchainTransactionInput* other);
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

  // repeated string address = 5;
  int address_size() const;
  void clear_address();
  static const int kAddressFieldNumber = 5;
  const ::std::string& address(int index) const;
  ::std::string* mutable_address(int index);
  void set_address(int index, const ::std::string& value);
  #if LANG_CXX11
  void set_address(int index, ::std::string&& value);
  #endif
  void set_address(int index, const char* value);
  void set_address(int index, const char* value, size_t size);
  ::std::string* add_address();
  void add_address(const ::std::string& value);
  #if LANG_CXX11
  void add_address(::std::string&& value);
  #endif
  void add_address(const char* value);
  void add_address(const char* value, size_t size);
  const ::google::protobuf::RepeatedPtrField< ::std::string>& address() const;
  ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_address();

  // optional bytes serializedscript = 3;
  bool has_serializedscript() const;
  void clear_serializedscript();
  static const int kSerializedscriptFieldNumber = 3;
  const ::std::string& serializedscript() const;
  void set_serializedscript(const ::std::string& value);
  #if LANG_CXX11
  void set_serializedscript(::std::string&& value);
  #endif
  void set_serializedscript(const char* value);
  void set_serializedscript(const void* value, size_t size);
  ::std::string* mutable_serializedscript();
  ::std::string* release_serializedscript();
  void set_allocated_serializedscript(::std::string* serializedscript);

  // optional uint32 version = 1;
  bool has_version() const;
  void clear_version();
  static const int kVersionFieldNumber = 1;
  ::google::protobuf::uint32 version() const;
  void set_version(::google::protobuf::uint32 value);

  // optional uint32 index = 2;
  bool has_index() const;
  void clear_index();
  static const int kIndexFieldNumber = 2;
  ::google::protobuf::uint32 index() const;
  void set_index(::google::protobuf::uint32 value);

  // optional uint32 sequence = 4;
  bool has_sequence() const;
  void clear_sequence();
  static const int kSequenceFieldNumber = 4;
  ::google::protobuf::uint32 sequence() const;
  void set_sequence(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:opentxs.proto.BlockchainTransactionInput)
 private:
  void set_has_version();
  void clear_has_version();
  void set_has_index();
  void clear_has_index();
  void set_has_serializedscript();
  void clear_has_serializedscript();
  void set_has_sequence();
  void clear_has_sequence();

  ::google::protobuf::internal::InternalMetadataWithArenaLite _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> address_;
  ::google::protobuf::internal::ArenaStringPtr serializedscript_;
  ::google::protobuf::uint32 version_;
  ::google::protobuf::uint32 index_;
  ::google::protobuf::uint32 sequence_;
  friend struct ::protobuf_BlockchainTransactionInput_2eproto::TableStruct;
  friend void ::protobuf_BlockchainTransactionInput_2eproto::InitDefaultsBlockchainTransactionInputImpl();
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BlockchainTransactionInput

// optional uint32 version = 1;
inline bool BlockchainTransactionInput::has_version() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void BlockchainTransactionInput::set_has_version() {
  _has_bits_[0] |= 0x00000002u;
}
inline void BlockchainTransactionInput::clear_has_version() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void BlockchainTransactionInput::clear_version() {
  version_ = 0u;
  clear_has_version();
}
inline ::google::protobuf::uint32 BlockchainTransactionInput::version() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BlockchainTransactionInput.version)
  return version_;
}
inline void BlockchainTransactionInput::set_version(::google::protobuf::uint32 value) {
  set_has_version();
  version_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.BlockchainTransactionInput.version)
}

// optional uint32 index = 2;
inline bool BlockchainTransactionInput::has_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void BlockchainTransactionInput::set_has_index() {
  _has_bits_[0] |= 0x00000004u;
}
inline void BlockchainTransactionInput::clear_has_index() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void BlockchainTransactionInput::clear_index() {
  index_ = 0u;
  clear_has_index();
}
inline ::google::protobuf::uint32 BlockchainTransactionInput::index() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BlockchainTransactionInput.index)
  return index_;
}
inline void BlockchainTransactionInput::set_index(::google::protobuf::uint32 value) {
  set_has_index();
  index_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.BlockchainTransactionInput.index)
}

// optional bytes serializedscript = 3;
inline bool BlockchainTransactionInput::has_serializedscript() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void BlockchainTransactionInput::set_has_serializedscript() {
  _has_bits_[0] |= 0x00000001u;
}
inline void BlockchainTransactionInput::clear_has_serializedscript() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void BlockchainTransactionInput::clear_serializedscript() {
  serializedscript_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_serializedscript();
}
inline const ::std::string& BlockchainTransactionInput::serializedscript() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BlockchainTransactionInput.serializedscript)
  return serializedscript_.GetNoArena();
}
inline void BlockchainTransactionInput::set_serializedscript(const ::std::string& value) {
  set_has_serializedscript();
  serializedscript_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:opentxs.proto.BlockchainTransactionInput.serializedscript)
}
#if LANG_CXX11
inline void BlockchainTransactionInput::set_serializedscript(::std::string&& value) {
  set_has_serializedscript();
  serializedscript_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:opentxs.proto.BlockchainTransactionInput.serializedscript)
}
#endif
inline void BlockchainTransactionInput::set_serializedscript(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  set_has_serializedscript();
  serializedscript_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:opentxs.proto.BlockchainTransactionInput.serializedscript)
}
inline void BlockchainTransactionInput::set_serializedscript(const void* value, size_t size) {
  set_has_serializedscript();
  serializedscript_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.BlockchainTransactionInput.serializedscript)
}
inline ::std::string* BlockchainTransactionInput::mutable_serializedscript() {
  set_has_serializedscript();
  // @@protoc_insertion_point(field_mutable:opentxs.proto.BlockchainTransactionInput.serializedscript)
  return serializedscript_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* BlockchainTransactionInput::release_serializedscript() {
  // @@protoc_insertion_point(field_release:opentxs.proto.BlockchainTransactionInput.serializedscript)
  clear_has_serializedscript();
  return serializedscript_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void BlockchainTransactionInput::set_allocated_serializedscript(::std::string* serializedscript) {
  if (serializedscript != NULL) {
    set_has_serializedscript();
  } else {
    clear_has_serializedscript();
  }
  serializedscript_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), serializedscript);
  // @@protoc_insertion_point(field_set_allocated:opentxs.proto.BlockchainTransactionInput.serializedscript)
}

// optional uint32 sequence = 4;
inline bool BlockchainTransactionInput::has_sequence() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void BlockchainTransactionInput::set_has_sequence() {
  _has_bits_[0] |= 0x00000008u;
}
inline void BlockchainTransactionInput::clear_has_sequence() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void BlockchainTransactionInput::clear_sequence() {
  sequence_ = 0u;
  clear_has_sequence();
}
inline ::google::protobuf::uint32 BlockchainTransactionInput::sequence() const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BlockchainTransactionInput.sequence)
  return sequence_;
}
inline void BlockchainTransactionInput::set_sequence(::google::protobuf::uint32 value) {
  set_has_sequence();
  sequence_ = value;
  // @@protoc_insertion_point(field_set:opentxs.proto.BlockchainTransactionInput.sequence)
}

// repeated string address = 5;
inline int BlockchainTransactionInput::address_size() const {
  return address_.size();
}
inline void BlockchainTransactionInput::clear_address() {
  address_.Clear();
}
inline const ::std::string& BlockchainTransactionInput::address(int index) const {
  // @@protoc_insertion_point(field_get:opentxs.proto.BlockchainTransactionInput.address)
  return address_.Get(index);
}
inline ::std::string* BlockchainTransactionInput::mutable_address(int index) {
  // @@protoc_insertion_point(field_mutable:opentxs.proto.BlockchainTransactionInput.address)
  return address_.Mutable(index);
}
inline void BlockchainTransactionInput::set_address(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.BlockchainTransactionInput.address)
  address_.Mutable(index)->assign(value);
}
#if LANG_CXX11
inline void BlockchainTransactionInput::set_address(int index, ::std::string&& value) {
  // @@protoc_insertion_point(field_set:opentxs.proto.BlockchainTransactionInput.address)
  address_.Mutable(index)->assign(std::move(value));
}
#endif
inline void BlockchainTransactionInput::set_address(int index, const char* value) {
  GOOGLE_DCHECK(value != NULL);
  address_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:opentxs.proto.BlockchainTransactionInput.address)
}
inline void BlockchainTransactionInput::set_address(int index, const char* value, size_t size) {
  address_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:opentxs.proto.BlockchainTransactionInput.address)
}
inline ::std::string* BlockchainTransactionInput::add_address() {
  // @@protoc_insertion_point(field_add_mutable:opentxs.proto.BlockchainTransactionInput.address)
  return address_.Add();
}
inline void BlockchainTransactionInput::add_address(const ::std::string& value) {
  address_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:opentxs.proto.BlockchainTransactionInput.address)
}
#if LANG_CXX11
inline void BlockchainTransactionInput::add_address(::std::string&& value) {
  address_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:opentxs.proto.BlockchainTransactionInput.address)
}
#endif
inline void BlockchainTransactionInput::add_address(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  address_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:opentxs.proto.BlockchainTransactionInput.address)
}
inline void BlockchainTransactionInput::add_address(const char* value, size_t size) {
  address_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:opentxs.proto.BlockchainTransactionInput.address)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
BlockchainTransactionInput::address() const {
  // @@protoc_insertion_point(field_list:opentxs.proto.BlockchainTransactionInput.address)
  return address_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
BlockchainTransactionInput::mutable_address() {
  // @@protoc_insertion_point(field_mutable_list:opentxs.proto.BlockchainTransactionInput.address)
  return &address_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_BlockchainTransactionInput_2eproto__INCLUDED