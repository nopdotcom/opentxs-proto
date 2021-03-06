// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MasterCredentialParameters.proto

#include "MasterCredentialParameters.pb.h"

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
class MasterCredentialParametersDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<MasterCredentialParameters>
      _instance;
} _MasterCredentialParameters_default_instance_;
}  // namespace proto
}  // namespace opentxs
namespace protobuf_MasterCredentialParameters_2eproto {
void InitDefaultsMasterCredentialParametersImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  ::google::protobuf::internal::InitProtobufDefaultsForceUnique();
#else
  ::google::protobuf::internal::InitProtobufDefaults();
#endif  // GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
  protobuf_NymIDSource_2eproto::InitDefaultsNymIDSource();
  protobuf_SourceProof_2eproto::InitDefaultsSourceProof();
  {
    void* ptr = &::opentxs::proto::_MasterCredentialParameters_default_instance_;
    new (ptr) ::opentxs::proto::MasterCredentialParameters();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::opentxs::proto::MasterCredentialParameters::InitAsDefaultInstance();
}

void InitDefaultsMasterCredentialParameters() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &InitDefaultsMasterCredentialParametersImpl);
}

}  // namespace protobuf_MasterCredentialParameters_2eproto
namespace opentxs {
namespace proto {

// ===================================================================

void MasterCredentialParameters::InitAsDefaultInstance() {
  ::opentxs::proto::_MasterCredentialParameters_default_instance_._instance.get_mutable()->source_ = const_cast< ::opentxs::proto::NymIDSource*>(
      ::opentxs::proto::NymIDSource::internal_default_instance());
  ::opentxs::proto::_MasterCredentialParameters_default_instance_._instance.get_mutable()->sourceproof_ = const_cast< ::opentxs::proto::SourceProof*>(
      ::opentxs::proto::SourceProof::internal_default_instance());
}
void MasterCredentialParameters::clear_source() {
  if (source_ != NULL) source_->Clear();
  clear_has_source();
}
void MasterCredentialParameters::clear_sourceproof() {
  if (sourceproof_ != NULL) sourceproof_->Clear();
  clear_has_sourceproof();
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int MasterCredentialParameters::kVersionFieldNumber;
const int MasterCredentialParameters::kSourceFieldNumber;
const int MasterCredentialParameters::kSourceProofFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

MasterCredentialParameters::MasterCredentialParameters()
  : ::google::protobuf::MessageLite(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    ::protobuf_MasterCredentialParameters_2eproto::InitDefaultsMasterCredentialParameters();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:opentxs.proto.MasterCredentialParameters)
}
MasterCredentialParameters::MasterCredentialParameters(const MasterCredentialParameters& from)
  : ::google::protobuf::MessageLite(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_source()) {
    source_ = new ::opentxs::proto::NymIDSource(*from.source_);
  } else {
    source_ = NULL;
  }
  if (from.has_sourceproof()) {
    sourceproof_ = new ::opentxs::proto::SourceProof(*from.sourceproof_);
  } else {
    sourceproof_ = NULL;
  }
  version_ = from.version_;
  // @@protoc_insertion_point(copy_constructor:opentxs.proto.MasterCredentialParameters)
}

void MasterCredentialParameters::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&source_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&version_) -
      reinterpret_cast<char*>(&source_)) + sizeof(version_));
}

MasterCredentialParameters::~MasterCredentialParameters() {
  // @@protoc_insertion_point(destructor:opentxs.proto.MasterCredentialParameters)
  SharedDtor();
}

void MasterCredentialParameters::SharedDtor() {
  if (this != internal_default_instance()) delete source_;
  if (this != internal_default_instance()) delete sourceproof_;
}

void MasterCredentialParameters::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const MasterCredentialParameters& MasterCredentialParameters::default_instance() {
  ::protobuf_MasterCredentialParameters_2eproto::InitDefaultsMasterCredentialParameters();
  return *internal_default_instance();
}

MasterCredentialParameters* MasterCredentialParameters::New(::google::protobuf::Arena* arena) const {
  MasterCredentialParameters* n = new MasterCredentialParameters;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void MasterCredentialParameters::Clear() {
// @@protoc_insertion_point(message_clear_start:opentxs.proto.MasterCredentialParameters)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 3u) {
    if (cached_has_bits & 0x00000001u) {
      GOOGLE_DCHECK(source_ != NULL);
      source_->Clear();
    }
    if (cached_has_bits & 0x00000002u) {
      GOOGLE_DCHECK(sourceproof_ != NULL);
      sourceproof_->Clear();
    }
  }
  version_ = 0u;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool MasterCredentialParameters::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::LiteUnknownFieldSetter unknown_fields_setter(
      &_internal_metadata_);
  ::google::protobuf::io::StringOutputStream unknown_fields_output(
      unknown_fields_setter.buffer());
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_output, false);
  // @@protoc_insertion_point(parse_start:opentxs.proto.MasterCredentialParameters)
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

      // optional .opentxs.proto.NymIDSource source = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_source()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .opentxs.proto.SourceProof sourceProof = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(26u /* 26 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_sourceproof()));
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
  // @@protoc_insertion_point(parse_success:opentxs.proto.MasterCredentialParameters)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:opentxs.proto.MasterCredentialParameters)
  return false;
#undef DO_
}

void MasterCredentialParameters::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:opentxs.proto.MasterCredentialParameters)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional uint32 version = 1;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->version(), output);
  }

  // optional .opentxs.proto.NymIDSource source = 2;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      2, *this->source_, output);
  }

  // optional .opentxs.proto.SourceProof sourceProof = 3;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessage(
      3, *this->sourceproof_, output);
  }

  output->WriteRaw(_internal_metadata_.unknown_fields().data(),
                   static_cast<int>(_internal_metadata_.unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:opentxs.proto.MasterCredentialParameters)
}

size_t MasterCredentialParameters::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:opentxs.proto.MasterCredentialParameters)
  size_t total_size = 0;

  total_size += _internal_metadata_.unknown_fields().size();

  if (_has_bits_[0 / 32] & 7u) {
    // optional .opentxs.proto.NymIDSource source = 2;
    if (has_source()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *this->source_);
    }

    // optional .opentxs.proto.SourceProof sourceProof = 3;
    if (has_sourceproof()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          *this->sourceproof_);
    }

    // optional uint32 version = 1;
    if (has_version()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->version());
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MasterCredentialParameters::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const MasterCredentialParameters*>(&from));
}

void MasterCredentialParameters::MergeFrom(const MasterCredentialParameters& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:opentxs.proto.MasterCredentialParameters)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 7u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_source()->::opentxs::proto::NymIDSource::MergeFrom(from.source());
    }
    if (cached_has_bits & 0x00000002u) {
      mutable_sourceproof()->::opentxs::proto::SourceProof::MergeFrom(from.sourceproof());
    }
    if (cached_has_bits & 0x00000004u) {
      version_ = from.version_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void MasterCredentialParameters::CopyFrom(const MasterCredentialParameters& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:opentxs.proto.MasterCredentialParameters)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MasterCredentialParameters::IsInitialized() const {
  return true;
}

void MasterCredentialParameters::Swap(MasterCredentialParameters* other) {
  if (other == this) return;
  InternalSwap(other);
}
void MasterCredentialParameters::InternalSwap(MasterCredentialParameters* other) {
  using std::swap;
  swap(source_, other->source_);
  swap(sourceproof_, other->sourceproof_);
  swap(version_, other->version_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_cached_size_, other->_cached_size_);
}

::std::string MasterCredentialParameters::GetTypeName() const {
  return "opentxs.proto.MasterCredentialParameters";
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace proto
}  // namespace opentxs

// @@protoc_insertion_point(global_scope)
