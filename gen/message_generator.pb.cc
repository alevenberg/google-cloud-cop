// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message_generator.proto

#include "message_generator.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = ::PROTOBUF_NAMESPACE_ID::internal;
namespace alevenb {
template <typename>
PROTOBUF_CONSTEXPR PublishMessageRequest::PublishMessageRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_._has_bits_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_.id_)*/ {
    &::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized {}
  }
} {}
struct PublishMessageRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PublishMessageRequestDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PublishMessageRequestDefaultTypeInternal() {}
  union {
    PublishMessageRequest _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PublishMessageRequestDefaultTypeInternal _PublishMessageRequest_default_instance_;
template <typename>
PROTOBUF_CONSTEXPR PublishMessageResponse::PublishMessageResponse(
    ::_pbi::ConstantInitialized) {}
struct PublishMessageResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PublishMessageResponseDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~PublishMessageResponseDefaultTypeInternal() {}
  union {
    PublishMessageResponse _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PublishMessageResponseDefaultTypeInternal _PublishMessageResponse_default_instance_;
}  // namespace alevenb
static ::_pb::Metadata file_level_metadata_message_5fgenerator_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_message_5fgenerator_2eproto = nullptr;
static constexpr const ::_pb::ServiceDescriptor**
    file_level_service_descriptors_message_5fgenerator_2eproto = nullptr;
const ::uint32_t TableStruct_message_5fgenerator_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::alevenb::PublishMessageRequest, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::alevenb::PublishMessageRequest, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::alevenb::PublishMessageRequest, _impl_.id_),
    0,
    ~0u,  // no _has_bits_
    PROTOBUF_FIELD_OFFSET(::alevenb::PublishMessageResponse, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        { 0, 9, -1, sizeof(::alevenb::PublishMessageRequest)},
        { 10, -1, -1, sizeof(::alevenb::PublishMessageResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::alevenb::_PublishMessageRequest_default_instance_._instance,
    &::alevenb::_PublishMessageResponse_default_instance_._instance,
};
const char descriptor_table_protodef_message_5fgenerator_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\027message_generator.proto\022\007alevenb\"/\n\025Pu"
    "blishMessageRequest\022\017\n\002id\030\001 \001(\tH\000\210\001\001B\005\n\003"
    "_id\"\030\n\026PublishMessageResponse2g\n\020Message"
    "Generator\022S\n\016PublishMessage\022\036.alevenb.Pu"
    "blishMessageRequest\032\037.alevenb.PublishMes"
    "sageResponse\"\000b\006proto3"
};
static ::absl::once_flag descriptor_table_message_5fgenerator_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_message_5fgenerator_2eproto = {
    false,
    false,
    222,
    descriptor_table_protodef_message_5fgenerator_2eproto,
    "message_generator.proto",
    &descriptor_table_message_5fgenerator_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_message_5fgenerator_2eproto::offsets,
    file_level_metadata_message_5fgenerator_2eproto,
    file_level_enum_descriptors_message_5fgenerator_2eproto,
    file_level_service_descriptors_message_5fgenerator_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_message_5fgenerator_2eproto_getter() {
  return &descriptor_table_message_5fgenerator_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_message_5fgenerator_2eproto(&descriptor_table_message_5fgenerator_2eproto);
namespace alevenb {
// ===================================================================

class PublishMessageRequest::_Internal {
 public:
  using HasBits = decltype(std::declval<PublishMessageRequest>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(PublishMessageRequest, _impl_._has_bits_);
  static void set_has_id(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

PublishMessageRequest::PublishMessageRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:alevenb.PublishMessageRequest)
}
PublishMessageRequest::PublishMessageRequest(const PublishMessageRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PublishMessageRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){from._impl_._has_bits_}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.id_) {}
  };

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.id_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_impl_.id_.Set(from._internal_id(), _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:alevenb.PublishMessageRequest)
}

inline void PublishMessageRequest::SharedCtor(::_pb::Arena* arena) {
  (void)arena;
  new (&_impl_) Impl_{
      decltype(_impl_._has_bits_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , decltype(_impl_.id_) {}

  };
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
        _impl_.id_.Set("", GetArenaForAllocation());
  #endif  // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PublishMessageRequest::~PublishMessageRequest() {
  // @@protoc_insertion_point(destructor:alevenb.PublishMessageRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PublishMessageRequest::SharedDtor() {
  ABSL_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.id_.Destroy();
}

void PublishMessageRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PublishMessageRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:alevenb.PublishMessageRequest)
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.id_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PublishMessageRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  _Internal::HasBits has_bits{};
  while (!ctx->Done(&ptr)) {
    ::uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // optional string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "alevenb.PublishMessageRequest.id"));
        } else {
          goto handle_unusual;
        }
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  _impl_._has_bits_.Or(has_bits);
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

::uint8_t* PublishMessageRequest::_InternalSerialize(
    ::uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:alevenb.PublishMessageRequest)
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional string id = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_id();
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
        _s.data(), static_cast<int>(_s.length()), ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE, "alevenb.PublishMessageRequest.id");
    target = stream->WriteStringMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:alevenb.PublishMessageRequest)
  return target;
}

::size_t PublishMessageRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:alevenb.PublishMessageRequest)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional string id = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
                                    this->_internal_id());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PublishMessageRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PublishMessageRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PublishMessageRequest::GetClassData() const { return &_class_data_; }


void PublishMessageRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PublishMessageRequest*>(&to_msg);
  auto& from = static_cast<const PublishMessageRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:alevenb.PublishMessageRequest)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_id(from._internal_id());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PublishMessageRequest::CopyFrom(const PublishMessageRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:alevenb.PublishMessageRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PublishMessageRequest::IsInitialized() const {
  return true;
}

void PublishMessageRequest::InternalSwap(PublishMessageRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.id_, lhs_arena,
                                       &other->_impl_.id_, rhs_arena);
}

::PROTOBUF_NAMESPACE_ID::Metadata PublishMessageRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_5fgenerator_2eproto_getter, &descriptor_table_message_5fgenerator_2eproto_once,
      file_level_metadata_message_5fgenerator_2eproto[0]);
}
// ===================================================================

class PublishMessageResponse::_Internal {
 public:
};

PublishMessageResponse::PublishMessageResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena) {
  // @@protoc_insertion_point(arena_constructor:alevenb.PublishMessageResponse)
}
PublishMessageResponse::PublishMessageResponse(const PublishMessageResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  PublishMessageResponse* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:alevenb.PublishMessageResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PublishMessageResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PublishMessageResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata PublishMessageResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_message_5fgenerator_2eproto_getter, &descriptor_table_message_5fgenerator_2eproto_once,
      file_level_metadata_message_5fgenerator_2eproto[1]);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace alevenb
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::alevenb::PublishMessageRequest*
Arena::CreateMaybeMessage< ::alevenb::PublishMessageRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::alevenb::PublishMessageRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::alevenb::PublishMessageResponse*
Arena::CreateMaybeMessage< ::alevenb::PublishMessageResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::alevenb::PublishMessageResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
