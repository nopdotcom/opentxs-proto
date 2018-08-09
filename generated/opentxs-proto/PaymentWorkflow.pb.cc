// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PaymentWorkflow.proto

#include "PaymentWorkflow.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)
namespace opentxs {
namespace proto {
class PaymentWorkflowDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<PaymentWorkflow>
      _instance;
} _PaymentWorkflow_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_PaymentWorkflow_2eproto {
void InitDefaultsPaymentWorkflowImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_InstrumentRevision_2eproto::InitDefaultsInstrumentRevision();
  protobuf_PaymentEvent_2eproto::InitDefaultsPaymentEvent();
  {
    void* ptr = &::opentxs::proto::_PaymentWorkflow_default_instance_;
    new (ptr) ::opentxs::proto::PaymentWorkflow();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::PaymentWorkflow::InitAsDefaultInstance();
}

void InitDefaultsPaymentWorkflow() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsPaymentWorkflowImpl);
}

}  // namespace protobuf_PaymentWorkflow_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void PaymentWorkflow::InitAsDefaultInstance() {
}
void PaymentWorkflow::clear_source() {
  source_.Clear();
}
void PaymentWorkflow::clear_event() {
  event_.Clear();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PaymentWorkflow::kVersionFieldNumber;
const int PaymentWorkflow::kIdFieldNumber;
const int PaymentWorkflow::kTypeFieldNumber;
const int PaymentWorkflow::kStateFieldNumber;
const int PaymentWorkflow::kSourceFieldNumber;
const int PaymentWorkflow::kNotaryFieldNumber;
const int PaymentWorkflow::kPartyFieldNumber;
const int PaymentWorkflow::kEventFieldNumber;
const int PaymentWorkflow::kUnitFieldNumber;
const int PaymentWorkflow::kAccountFieldNumber;
const int PaymentWorkflow::kArchivedFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PaymentWorkflow::PaymentWorkflow()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_PaymentWorkflow_2eproto::InitDefaultsPaymentWorkflow();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.PaymentWorkflow)
}
PaymentWorkflow::PaymentWorkflow(const PaymentWorkflow& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0),
      source_(from.source_),
      party_(from.party_),
      event_(from.event_),
      unit_(from.unit_),
      account_(from.account_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_id()) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  notary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_notary()) {
    notary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.notary_);
  }
  ::memcpy(&version_, &from.version_,
    static_cast<size_t>(reinterpret_cast<char*>(&archived_) -
    reinterpret_cast<char*>(&version_)) + sizeof(archived_));
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.PaymentWorkflow)
}

void PaymentWorkflow::SharedCtor() {
  _cached_size_ = 0;
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  notary_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&version_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&archived_) -
      reinterpret_cast<char*>(&version_)) + sizeof(archived_));
}

PaymentWorkflow::~PaymentWorkflow() {
  // @@protoc_insertion_point(destructor:opentxs.proto.PaymentWorkflow)
  SharedDtor();
}

void PaymentWorkflow::SharedDtor() {
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  notary_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PaymentWorkflow::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PaymentWorkflow& PaymentWorkflow::default_instance() {
  ::protobuf_PaymentWorkflow_2eproto::InitDefaultsPaymentWorkflow();
  return *internal_default_instance();
}

PaymentWorkflow* PaymentWorkflow::New(::google::protobuf::Arena* arena) const {
  PaymentWorkflow* n = new PaymentWorkflow;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PaymentWorkflow::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.PaymentWorkflow)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  source_.Clear();
  party_.Clear();
  event_.Clear();
  unit_.Clear();
  account_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(!id_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*id_.UnsafeRawStringPointer())->clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(!notary_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*notary_.UnsafeRawStringPointer())->clear();
    }
  }
  if (cached_has_bits & 60u) {
    ::memset(&version_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&archived_) -
        reinterpret_cast<char*>(&version_)) + sizeof(archived_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool PaymentWorkflow::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.PaymentWorkflow)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 version = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(8u /* 8 & 0xFF */)) {
          set_has_version();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &version_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .opentxs.proto.PaymentWorkflowType type = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::PaymentWorkflowType_IsValid(value)) {
            set_type(static_cast< ::opentxs::proto::PaymentWorkflowType >(value));
          } else {
            unknown_fields_stream.WriteVarint32(24u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .opentxs.proto.PaymentWorkflowState state = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::opentxs::proto::PaymentWorkflowState_IsValid(value)) {
            set_state(static_cast< ::opentxs::proto::PaymentWorkflowState >(value));
          } else {
            unknown_fields_stream.WriteVarint32(32u);
            unknown_fields_stream.WriteVarint32(
                static_cast< ::google::protobuf::uint32>(value));
          }
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.InstrumentRevision source = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(42u /* 42 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_source()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string notary = 6;
      case 6: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(50u /* 50 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_notary()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string party = 7;
      case 7: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(58u /* 58 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_party()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .opentxs.proto.PaymentEvent event = 8;
      case 8: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(66u /* 66 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(input, add_event()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string unit = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u /* 74 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_unit()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated string account = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(82u /* 82 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_account()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional bool archived = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(88u /* 88 & 0xFF */)) {
          set_has_archived();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &archived_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:opentxs.proto.PaymentWorkflow)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.PaymentWorkflow)
  return false;
#undef DO_
}

void PaymentWorkflow::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.PaymentWorkflow)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional string id = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->id(), output);
  }

  // optional .opentxs.proto.PaymentWorkflowType type = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      3, this->type(), output);
  }

  // optional .opentxs.proto.PaymentWorkflowState state = 4;
  if (cached_has_bits & 0x00000010u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->state(), output);
  }

  // repeated .opentxs.proto.InstrumentRevision source = 5;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->source_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      5, this->source(static_cast<int>(i)), output);
  }

  // optional string notary = 6;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      6, this->notary(), output);
  }

  // repeated string party = 7;
  for (int i = 0, n = this->party_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      7, this->party(i), output);
  }

  // repeated .opentxs.proto.PaymentEvent event = 8;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->event_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      8, this->event(static_cast<int>(i)), output);
  }

  // repeated string unit = 9;
  for (int i = 0, n = this->unit_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      9, this->unit(i), output);
  }

  // repeated string account = 10;
  for (int i = 0, n = this->account_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteString(
      10, this->account(i), output);
  }

  // optional bool archived = 11;
  if (cached_has_bits & 0x00000020u) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(11, this->archived(), output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.PaymentWorkflow)
}

size_t PaymentWorkflow::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.PaymentWorkflow)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  // repeated .opentxs.proto.InstrumentRevision source = 5;
  {
    unsigned int count = static_cast<unsigned int>(this->source_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->source(static_cast<int>(i)));
    }
  }

  // repeated string party = 7;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->party_size());
  for (int i = 0, n = this->party_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->party(i));
  }

  // repeated .opentxs.proto.PaymentEvent event = 8;
  {
    unsigned int count = static_cast<unsigned int>(this->event_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->event(static_cast<int>(i)));
    }
  }

  // repeated string unit = 9;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->unit_size());
  for (int i = 0, n = this->unit_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->unit(i));
  }

  // repeated string account = 10;
  total_size += 1 *
      ::google::protobuf::internal::FromIntSize(this->account_size());
  for (int i = 0, n = this->account_size(); i < n; i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->account(i));
  }

  if (_has_bits_[0 / 32] & 63u) {
    // optional string id = 2;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->id());
    }

    // optional string notary = 6;
    if (has_notary()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->notary());
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

    // optional .opentxs.proto.PaymentWorkflowType type = 3;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // optional .opentxs.proto.PaymentWorkflowState state = 4;
    if (has_state()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->state());
    }

    // optional bool archived = 11;
    if (has_archived()) {
      total_size += 1 + 1;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PaymentWorkflow::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PaymentWorkflow*>(&from));
}

void PaymentWorkflow::MergeFrom(const PaymentWorkflow& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.PaymentWorkflow)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  source_.MergeFrom(from.source_);
  party_.MergeFrom(from.party_);
  event_.MergeFrom(from.event_);
  unit_.MergeFrom(from.unit_);
  account_.MergeFrom(from.account_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 63u) {
    if (cached_has_bits & 0x00000001u) {
      set_has_id();
      id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
    }
    if (cached_has_bits & 0x00000002u) {
      set_has_notary();
      notary_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.notary_);
    }
    if (cached_has_bits & 0x00000004u) {
      version_ = from.version_;
    }
    if (cached_has_bits & 0x00000008u) {
      type_ = from.type_;
    }
    if (cached_has_bits & 0x00000010u) {
      state_ = from.state_;
    }
    if (cached_has_bits & 0x00000020u) {
      archived_ = from.archived_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void PaymentWorkflow::CopyFrom(const PaymentWorkflow& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.PaymentWorkflow)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PaymentWorkflow::IsInitialized() const {
  return true;
}

void PaymentWorkflow::Swap(PaymentWorkflow* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PaymentWorkflow::InternalSwap(PaymentWorkflow* other) {
  using std::swap;
  source_.InternalSwap(&other->source_);
  party_.InternalSwap(&other->party_);
  event_.InternalSwap(&other->event_);
  unit_.InternalSwap(&other->unit_);
  account_.InternalSwap(&other->account_);
  id_.Swap(&other->id_);
  notary_.Swap(&other->notary_);
  swap(version_, other->version_);
  swap(type_, other->type_);
  swap(state_, other->state_);
  swap(archived_, other->archived_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string PaymentWorkflow::GetTypeName() const {
  return "opentxs.proto.PaymentWorkflow";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)