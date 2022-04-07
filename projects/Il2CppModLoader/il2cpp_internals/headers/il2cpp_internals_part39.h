namespace app {
struct TripleDESTransform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_InputBlockSize;
  VirtualInvokeData get_OutputBlockSize;
  VirtualInvokeData get_CanTransformMultipleBlocks;
  VirtualInvokeData get_CanReuseTransform;
  VirtualInvokeData TransformBlock;
  VirtualInvokeData TransformFinalBlock;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_CanTransformMultipleBlocks_1;
  VirtualInvokeData get_CanReuseTransform_1;
  VirtualInvokeData get_InputBlockSize_1;
  VirtualInvokeData get_OutputBlockSize_1;
  VirtualInvokeData Transform;
  VirtualInvokeData ECB;
  VirtualInvokeData CBC;
  VirtualInvokeData CFB;
  VirtualInvokeData OFB;
  VirtualInvokeData CTS;
  VirtualInvokeData TransformBlock_1;
  VirtualInvokeData FinalEncrypt;
  VirtualInvokeData FinalDecrypt;
  VirtualInvokeData TransformFinalBlock_1;
};
struct TripleDESTransform__StaticFields {
};
struct TripleDESTransform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TripleDESTransform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TripleDESTransform__VTable vtable;
};

struct __declspec(align(8)) X509Certificate_1__Fields {
  struct X509CertificateImpl * impl;
  bool hideDates;
  struct String * issuer_name;
  struct String * subject_name;
};
struct X509Certificate_1 {
  struct X509Certificate_1__Class *klass;
  struct MonitorData *monitor;
  struct X509Certificate_1__Fields fields;
};
struct __declspec(align(8)) X509CertificateImpl__Fields {
  struct Byte__Array * cachedCertificateHash;
};
struct X509CertificateImpl {
  struct X509CertificateImpl__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateImpl__Fields fields;
};
struct X509CertificateImplMono__Fields {
  struct X509CertificateImpl__Fields _;
  struct X509Certificate * x509;
};
struct X509CertificateImplMono {
  struct X509CertificateImplMono__Class *klass;
  struct MonitorData *monitor;
  struct X509CertificateImplMono__Fields fields;
};
enum X509KeyStorageFlags__Enum : int32_t {
  X509KeyStorageFlags__Enum_DefaultKeySet = 0,
  X509KeyStorageFlags__Enum_UserKeySet = 1,
  X509KeyStorageFlags__Enum_MachineKeySet = 2,
  X509KeyStorageFlags__Enum_Exportable = 4,
  X509KeyStorageFlags__Enum_UserProtected = 8,
  X509KeyStorageFlags__Enum_PersistKeySet = 16,
  X509KeyStorageFlags__Enum_EphemeralKeySet = 32,
};
struct X509KeyStorageFlags__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum X509KeyStorageFlags__Enum value;
};
struct X509CertificateImplMono__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData get_IsValid;
  VirtualInvokeData Clone;
  VirtualInvokeData GetIssuerName;
  VirtualInvokeData GetSubjectName;
  VirtualInvokeData GetRawCertData;
  VirtualInvokeData GetValidFrom;
  VirtualInvokeData GetValidUntil;
  VirtualInvokeData GetCertHash;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetPublicKey;
  VirtualInvokeData GetSerialNumber;
  VirtualInvokeData ToString_1;
  VirtualInvokeData Dispose_1;
};
struct X509CertificateImplMono__StaticFields {
};
struct X509CertificateImplMono__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateImplMono__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateImplMono__VTable vtable;
};
struct X509CertificateImpl__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
  VirtualInvokeData __unknown_9;
  VirtualInvokeData __unknown_10;
  VirtualInvokeData __unknown_11;
  VirtualInvokeData Dispose_1;
};
struct X509CertificateImpl__StaticFields {
};
struct X509CertificateImpl__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509CertificateImpl__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509CertificateImpl__VTable vtable;
};
struct X509Certificate_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
  VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
  VirtualInvokeData Dispose;
  VirtualInvokeData Equals_1;
  VirtualInvokeData GetCertHash;
  VirtualInvokeData GetCertHashString;
  VirtualInvokeData GetIssuerName;
  VirtualInvokeData GetName;
  VirtualInvokeData GetPublicKey;
  VirtualInvokeData GetRawCertData;
  VirtualInvokeData GetSerialNumber;
  VirtualInvokeData GetSerialNumberString;
  VirtualInvokeData ToString_1;
  VirtualInvokeData Import;
  VirtualInvokeData Import_1;
  VirtualInvokeData Dispose_1;
  VirtualInvokeData Reset;
};
struct X509Certificate_1__StaticFields {
};
struct X509Certificate_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct X509Certificate_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct X509Certificate_1__VTable vtable;
};

struct INativeCertificateHelper {
  struct INativeCertificateHelper__Class *klass;
  struct MonitorData *monitor;
};
struct INativeCertificateHelper__VTable {
  VirtualInvokeData Import;
};
struct INativeCertificateHelper__StaticFields {
};
struct INativeCertificateHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct INativeCertificateHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct INativeCertificateHelper__VTable vtable;
};

struct __declspec(align(8)) TargetFrameworkAttribute__Fields {
  struct String * _frameworkName;
  struct String * _frameworkDisplayName;
};
struct TargetFrameworkAttribute {
  struct TargetFrameworkAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TargetFrameworkAttribute__Fields fields;
};
struct TargetFrameworkAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TargetFrameworkAttribute__StaticFields {
};
struct TargetFrameworkAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TargetFrameworkAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TargetFrameworkAttribute__VTable vtable;
};

struct DeserializationEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct DeserializationEventHandler {
  struct DeserializationEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct DeserializationEventHandler__Fields fields;
};
struct DeserializationEventHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct DeserializationEventHandler__StaticFields {
};
struct DeserializationEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DeserializationEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DeserializationEventHandler__VTable vtable;
};

struct SerializationEventHandler__Fields {
  struct MulticastDelegate__Fields _;
};
struct SerializationEventHandler {
  struct SerializationEventHandler__Class *klass;
  struct MonitorData *monitor;
  struct SerializationEventHandler__Fields fields;
};
struct SerializationEventHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct SerializationEventHandler__StaticFields {
};
struct SerializationEventHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationEventHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationEventHandler__VTable vtable;
};

struct FormatterConverter {
  struct FormatterConverter__Class *klass;
  struct MonitorData *monitor;
};
struct FormatterConverter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Convert;
  VirtualInvokeData ToBoolean;
  VirtualInvokeData ToInt32;
  VirtualInvokeData ToInt64;
  VirtualInvokeData ToSingle;
  VirtualInvokeData ToString_1;
};
struct FormatterConverter__StaticFields {
};
struct FormatterConverter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FormatterConverter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FormatterConverter__VTable vtable;
};

struct __declspec(align(8)) FormatterServices_c_DisplayClass9_0__Fields {
  struct Type * type;
};
struct FormatterServices_c_DisplayClass9_0 {
  struct FormatterServices_c_DisplayClass9_0__Class *klass;
  struct MonitorData *monitor;
  struct FormatterServices_c_DisplayClass9_0__Fields fields;
};
struct FormatterServices_c_DisplayClass9_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FormatterServices_c_DisplayClass9_0__StaticFields {
};
struct FormatterServices_c_DisplayClass9_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FormatterServices_c_DisplayClass9_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FormatterServices_c_DisplayClass9_0__VTable vtable;
};

struct __declspec(align(8)) MemberHolder__Fields {
  struct Type * memberType;
  struct StreamingContext context;
};
struct MemberHolder {
  struct MemberHolder__Class *klass;
  struct MonitorData *monitor;
  struct MemberHolder__Fields fields;
};
struct MemberHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MemberHolder__StaticFields {
};
struct MemberHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemberHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MemberHolder__VTable vtable;
};

struct __declspec(align(8)) SurrogateForCyclicalReference__Fields {
  struct ISerializationSurrogate * innerSurrogate;
};
struct SurrogateForCyclicalReference {
  struct SurrogateForCyclicalReference__Class *klass;
  struct MonitorData *monitor;
  struct SurrogateForCyclicalReference__Fields fields;
};
struct ISerializationSurrogate {
  struct ISerializationSurrogate__Class *klass;
  struct MonitorData *monitor;
};
struct ISerializationSurrogate__VTable {
  VirtualInvokeData GetObjectData;
  VirtualInvokeData SetObjectData;
};
struct ISerializationSurrogate__StaticFields {
};
struct ISerializationSurrogate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISerializationSurrogate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISerializationSurrogate__VTable vtable;
};
struct SurrogateForCyclicalReference__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData SetObjectData;
};
struct SurrogateForCyclicalReference__StaticFields {
};
struct SurrogateForCyclicalReference__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurrogateForCyclicalReference__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurrogateForCyclicalReference__VTable vtable;
};

struct __declspec(align(8)) ObjectIDGenerator__Fields {
  int32_t m_currentCount;
  int32_t m_currentSize;
  struct Int64__Array * m_ids;
  struct Object__Array * m_objs;
};
struct ObjectIDGenerator {
  struct ObjectIDGenerator__Class *klass;
  struct MonitorData *monitor;
  struct ObjectIDGenerator__Fields fields;
};
struct ObjectIDGenerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetId;
  VirtualInvokeData HasId;
};
struct ObjectIDGenerator__StaticFields {
  struct Int32__Array * sizes;
};
struct ObjectIDGenerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectIDGenerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectIDGenerator__VTable vtable;
};

struct __declspec(align(8)) ObjectManager__Fields {
  struct DeserializationEventHandler * m_onDeserializationHandler;
  struct SerializationEventHandler * m_onDeserializedHandler;
  struct ObjectHolder__Array * m_objects;
  struct Object * m_topObject;
  struct ObjectHolderList * m_specialFixupObjects;
  int64_t m_fixupCount;
  struct ISurrogateSelector * m_selector;
  struct StreamingContext m_context;
};
struct ObjectManager {
  struct ObjectManager__Class *klass;
  struct MonitorData *monitor;
  struct ObjectManager__Fields fields;
};
struct __declspec(align(8)) ObjectHolder__Fields {
  struct Object * m_object;
  int64_t m_id;
  int32_t m_missingElementsRemaining;
  int32_t m_missingDecendents;
  struct SerializationInfo * m_serInfo;
  struct ISerializationSurrogate * m_surrogate;
  struct FixupHolderList * m_missingElements;
  struct LongList * m_dependentObjects;
  struct ObjectHolder * m_next;
  int32_t m_flags;
  bool m_markForFixupWhenAvailable;
  struct ValueTypeFixupInfo * m_valueFixup;
  struct TypeLoadExceptionHolder * m_typeLoad;
  bool m_reachable;
};
struct ObjectHolder {
  struct ObjectHolder__Class *klass;
  struct MonitorData *monitor;
  struct ObjectHolder__Fields fields;
};
struct ObjectHolder__Array {
  struct ObjectHolder__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ObjectHolder * vector[32];
};
struct __declspec(align(8)) FixupHolderList__Fields {
  struct FixupHolder__Array * m_values;
  int32_t m_count;
};
struct FixupHolderList {
  struct FixupHolderList__Class *klass;
  struct MonitorData *monitor;
  struct FixupHolderList__Fields fields;
};
struct __declspec(align(8)) FixupHolder__Fields {
  int64_t m_id;
  struct Object * m_fixupInfo;
  int32_t m_fixupType;
};
struct FixupHolder {
  struct FixupHolder__Class *klass;
  struct MonitorData *monitor;
  struct FixupHolder__Fields fields;
};
struct FixupHolder__Array {
  struct FixupHolder__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FixupHolder * vector[32];
};
struct __declspec(align(8)) LongList__Fields {
  struct Int64__Array * m_values;
  int32_t m_count;
  int32_t m_totalItems;
  int32_t m_currentItem;
};
struct LongList {
  struct LongList__Class *klass;
  struct MonitorData *monitor;
  struct LongList__Fields fields;
};
struct __declspec(align(8)) ValueTypeFixupInfo__Fields {
  int64_t m_containerID;
  struct FieldInfo_1 * m_parentField;
  struct Int32__Array * m_parentIndex;
};
struct ValueTypeFixupInfo {
  struct ValueTypeFixupInfo__Class *klass;
  struct MonitorData *monitor;
  struct ValueTypeFixupInfo__Fields fields;
};
struct __declspec(align(8)) TypeLoadExceptionHolder__Fields {
  struct String * m_typeName;
};
struct TypeLoadExceptionHolder {
  struct TypeLoadExceptionHolder__Class *klass;
  struct MonitorData *monitor;
  struct TypeLoadExceptionHolder__Fields fields;
};
struct __declspec(align(8)) ObjectHolderList__Fields {
  struct ObjectHolder__Array * m_values;
  int32_t m_count;
};
struct ObjectHolderList {
  struct ObjectHolderList__Class *klass;
  struct MonitorData *monitor;
  struct ObjectHolderList__Fields fields;
};
struct FixupHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FixupHolder__StaticFields {
};
struct FixupHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FixupHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FixupHolder__VTable vtable;
};
struct FixupHolderList__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Add;
};
struct FixupHolderList__StaticFields {
};
struct FixupHolderList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FixupHolderList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FixupHolderList__VTable vtable;
};
struct LongList__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LongList__StaticFields {
};
struct LongList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LongList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LongList__VTable vtable;
};
struct ValueTypeFixupInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ValueTypeFixupInfo__StaticFields {
};
struct ValueTypeFixupInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ValueTypeFixupInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ValueTypeFixupInfo__VTable vtable;
};
struct TypeLoadExceptionHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TypeLoadExceptionHolder__StaticFields {
};
struct TypeLoadExceptionHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeLoadExceptionHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeLoadExceptionHolder__VTable vtable;
};
struct ObjectHolder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ObjectHolder__StaticFields {
};
struct ObjectHolder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectHolder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectHolder__VTable vtable;
};
struct ObjectHolderList__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Add;
};
struct ObjectHolderList__StaticFields {
};
struct ObjectHolderList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectHolderList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectHolderList__VTable vtable;
};
struct ObjectManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObject;
  VirtualInvokeData DoFixups;
  VirtualInvokeData RecordFixup;
  VirtualInvokeData RecordDelayedFixup;
  VirtualInvokeData RecordArrayElementFixup;
  VirtualInvokeData RaiseDeserializationEvent;
  VirtualInvokeData AddOnDeserialization;
  VirtualInvokeData AddOnDeserialized;
  VirtualInvokeData RaiseOnDeserializedEvent;
};
struct ObjectManager__StaticFields {
};
struct ObjectManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectManager__VTable vtable;
};

struct __declspec(align(8)) ObjectHolderListEnumerator__Fields {
  bool m_isFixupEnumerator;
  struct ObjectHolderList * m_list;
  int32_t m_startingVersion;
  int32_t m_currPos;
};
struct ObjectHolderListEnumerator {
  struct ObjectHolderListEnumerator__Class *klass;
  struct MonitorData *monitor;
  struct ObjectHolderListEnumerator__Fields fields;
};
struct ObjectHolderListEnumerator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ObjectHolderListEnumerator__StaticFields {
};
struct ObjectHolderListEnumerator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ObjectHolderListEnumerator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ObjectHolderListEnumerator__VTable vtable;
};

struct __declspec(align(8)) OptionalFieldAttribute__Fields {
  int32_t versionAdded;
};
struct OptionalFieldAttribute {
  struct OptionalFieldAttribute__Class *klass;
  struct MonitorData *monitor;
  struct OptionalFieldAttribute__Fields fields;
};
struct OptionalFieldAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct OptionalFieldAttribute__StaticFields {
};
struct OptionalFieldAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OptionalFieldAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OptionalFieldAttribute__VTable vtable;
};

struct OnSerializingAttribute {
  struct OnSerializingAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct OnSerializingAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct OnSerializingAttribute__StaticFields {
};
struct OnSerializingAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnSerializingAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnSerializingAttribute__VTable vtable;
};

struct OnDeserializingAttribute {
  struct OnDeserializingAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct OnDeserializingAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct OnDeserializingAttribute__StaticFields {
};
struct OnDeserializingAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnDeserializingAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnDeserializingAttribute__VTable vtable;
};

struct OnDeserializedAttribute {
  struct OnDeserializedAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct OnDeserializedAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct OnDeserializedAttribute__StaticFields {
};
struct OnDeserializedAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OnDeserializedAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OnDeserializedAttribute__VTable vtable;
};

struct __declspec(align(8)) SerializationEvents__Fields {
  struct List_1_System_Reflection_MethodInfo_ * m_OnSerializingMethods;
  struct List_1_System_Reflection_MethodInfo_ * m_OnSerializedMethods;
  struct List_1_System_Reflection_MethodInfo_ * m_OnDeserializingMethods;
  struct List_1_System_Reflection_MethodInfo_ * m_OnDeserializedMethods;
};
struct SerializationEvents {
  struct SerializationEvents__Class *klass;
  struct MonitorData *monitor;
  struct SerializationEvents__Fields fields;
};
struct __declspec(align(8)) List_1_System_Reflection_MethodInfo___Fields {
  struct MethodInfo_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_System_Reflection_MethodInfo_ {
  struct List_1_System_Reflection_MethodInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_System_Reflection_MethodInfo___Fields fields;
};
struct IEnumerator_1_System_Reflection_MethodInfo_ {
  struct IEnumerator_1_System_Reflection_MethodInfo___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_System_Reflection_MethodInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Reflection_MethodInfo___StaticFields {
};
struct IEnumerator_1_System_Reflection_MethodInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Reflection_MethodInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Reflection_MethodInfo___VTable vtable;
};
struct List_1_System_Reflection_MethodInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_T__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData Clear_1;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData get_Count_2;
};
struct List_1_System_Reflection_MethodInfo___StaticFields {
  struct MethodInfo_1__Array * _emptyArray;
};
struct List_1_System_Reflection_MethodInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_System_Reflection_MethodInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_System_Reflection_MethodInfo___VTable vtable;
};
struct SerializationEvents__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SerializationEvents__StaticFields {
};
struct SerializationEvents__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationEvents__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationEvents__VTable vtable;
};

struct SerializationException__Fields {
  struct SystemException__Fields _;
};
struct SerializationException {
  struct SerializationException__Class *klass;
  struct MonitorData *monitor;
  struct SerializationException__Fields fields;
};
struct SerializationException__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData get_Message;
  VirtualInvokeData get_Data;
  VirtualInvokeData get_InnerException;
  VirtualInvokeData get_StackTrace;
  VirtualInvokeData get_Source;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetType;
};
struct SerializationException__StaticFields {
  struct String * _nullMessage;
};
struct SerializationException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SerializationException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SerializationException__VTable vtable;
};

struct __declspec(align(8)) SerializationFieldInfo__Fields {
  struct RuntimeFieldInfo * m_field;
  struct String * m_serializationName;
};
struct SerializationFieldInfo {
  struct SerializationFieldInfo__Class *klass;
  struct MonitorData *monitor;
  struct SerializationFieldInfo__Fields fields;
};
struct SerializationFieldInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetCustomAttributes;
  VirtualInvokeData GetCustomAttributes_1;
  VirtualInvokeData IsDefined;
  VirtualInvokeData get_MemberType;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_DeclaringType;
  VirtualInvokeData get_ReflectedType;
  VirtualInvokeData GetCustomAttributes_2;
  VirtualInvokeData GetCustomAttributes_3;
  VirtualInvokeData IsDefined_1;
  VirtualInvokeData GetCustomAttributesData;
  VirtualInvokeData get_MetadataToken;
  VirtualInvokeData get_Module;
  VirtualInvokeData get_Attributes;
  VirtualInvokeData get_FieldHandle;
  VirtualInvokeData get_FieldType;
  VirtualInvokeData GetValue;
  VirtualInvokeData get_IsLiteral;
  VirtualInvokeData get_IsStatic;
  VirtualInvokeData get_IsInitOnly;
  VirtualInvokeData get_IsPublic;
  VirtualInvokeData get_IsPrivate;
  VirtualInvokeData get_IsNotSerialized;
  VirtualInvokeData SetValue;
  VirtualInvokeData SetValue_1;
  VirtualInvokeData GetFieldOffset;
  VirtualInvokeData SetValueDirect;
  VirtualInvokeData GetRawConstantValue;
};}