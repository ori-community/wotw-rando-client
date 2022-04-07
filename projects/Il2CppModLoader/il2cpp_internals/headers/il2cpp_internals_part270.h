namespace app {

struct BsonBoolean__Fields {
  struct BsonValue__Fields _;
};
struct BsonBoolean {
  struct BsonBoolean__Class *klass;
  struct MonitorData *monitor;
  struct BsonBoolean__Fields fields;
};
struct BsonBoolean__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Type;
};
struct BsonBoolean__StaticFields {
  struct BsonBoolean * False;
  struct BsonBoolean * True;
};
struct BsonBoolean__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BsonBoolean__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BsonBoolean__VTable vtable;
};

enum BsonBinaryType__Enum : uint8_t {
  BsonBinaryType__Enum_Binary = 0,
  BsonBinaryType__Enum_Function = 1,
  BsonBinaryType__Enum_BinaryOld = 2,
  BsonBinaryType__Enum_UuidOld = 3,
  BsonBinaryType__Enum_Uuid = 4,
  BsonBinaryType__Enum_Md5 = 5,
  BsonBinaryType__Enum_UserDefined = 128,
};
struct BsonBinaryType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BsonBinaryType__Enum value;
};
struct BsonBinary__Fields {
  struct BsonValue__Fields _;
  enum BsonBinaryType__Enum _BinaryType_k__BackingField;
};
struct BsonBinary {
  struct BsonBinary__Class *klass;
  struct MonitorData *monitor;
  struct BsonBinary__Fields fields;
};
struct BsonBinary__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Type;
};
struct BsonBinary__StaticFields {
};
struct BsonBinary__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BsonBinary__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BsonBinary__VTable vtable;
};

struct BsonRegex__Fields {
  struct BsonToken__Fields _;
  struct BsonString * _Pattern_k__BackingField;
  struct BsonString * _Options_k__BackingField;
};
struct BsonRegex {
  struct BsonRegex__Class *klass;
  struct MonitorData *monitor;
  struct BsonRegex__Fields fields;
};
struct BsonRegex__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Type;
};
struct BsonRegex__StaticFields {
};
struct BsonRegex__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BsonRegex__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BsonRegex__VTable vtable;
};

struct NativeBool {
  uint8_t value;
};
struct NativeBool__Boxed {
  struct NativeBool__Class *klass;
  struct MonitorData *monitor;
  struct NativeBool fields;
};
struct UTF8StringPtr {
  void * pointer;
};
struct UTF8StringPtr__Boxed {
  struct UTF8StringPtr__Class *klass;
  struct MonitorData *monitor;
  struct UTF8StringPtr fields;
};
struct XGameSaveBlobInfo {
  struct UTF8StringPtr Name;
  uint32_t Size;
};
struct XGameSaveBlobInfo__Boxed {
  struct XGameSaveBlobInfo__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveBlobInfo fields;
};
struct NativeBool__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NativeBool__StaticFields {
};
struct NativeBool__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NativeBool__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NativeBool__VTable vtable;
};
struct UTF8StringPtr__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UTF8StringPtr__StaticFields {
};
struct UTF8StringPtr__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UTF8StringPtr__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UTF8StringPtr__VTable vtable;
};
struct XGameSaveBlobInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveBlobInfo__StaticFields {
};
struct XGameSaveBlobInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveBlobInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveBlobInfo__VTable vtable;
};

struct XUserHandle_1 {
  void * Ptr;
};
struct XUserHandle_1__Boxed {
  struct XUserHandle_1__Class *klass;
  struct MonitorData *monitor;
  struct XUserHandle_1 fields;
};
struct __declspec(align(8)) XUserHandle__Fields {
  struct XUserHandle_1 _InteropHandle_k__BackingField;
};
struct XUserHandle {
  struct XUserHandle__Class *klass;
  struct MonitorData *monitor;
  struct XUserHandle__Fields fields;
};
struct XGameSaveInitializeProviderCompleted__Fields {
  struct MulticastDelegate__Fields _;
};
struct XGameSaveInitializeProviderCompleted {
  struct XGameSaveInitializeProviderCompleted__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveInitializeProviderCompleted__Fields fields;
};
struct XGameSaveProviderHandle_1 {
  void * Ptr;
};
struct XGameSaveProviderHandle_1__Boxed {
  struct XGameSaveProviderHandle_1__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveProviderHandle_1 fields;
};
struct __declspec(align(8)) XGameSaveProviderHandle__Fields {
  struct XGameSaveProviderHandle_1 _InteropHandle_k__BackingField;
};
struct XGameSaveProviderHandle {
  struct XGameSaveProviderHandle__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveProviderHandle__Fields fields;
};
struct XUserHandle_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XUserHandle_1__StaticFields {
};
struct XUserHandle_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserHandle_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserHandle_1__VTable vtable;
};
struct XUserHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XUserHandle__StaticFields {
};
struct XUserHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserHandle__VTable vtable;
};
struct XGameSaveProviderHandle_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveProviderHandle_1__StaticFields {
};
struct XGameSaveProviderHandle_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveProviderHandle_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveProviderHandle_1__VTable vtable;
};
struct XGameSaveProviderHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveProviderHandle__StaticFields {
};
struct XGameSaveProviderHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveProviderHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveProviderHandle__VTable vtable;
};
struct XGameSaveInitializeProviderCompleted__VTable {
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
struct XGameSaveInitializeProviderCompleted__StaticFields {
};
struct XGameSaveInitializeProviderCompleted__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveInitializeProviderCompleted__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveInitializeProviderCompleted__VTable vtable;
};

struct XGameSaveContainerHandle_1 {
  void * Ptr;
};
struct XGameSaveContainerHandle_1__Boxed {
  struct XGameSaveContainerHandle_1__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveContainerHandle_1 fields;
};
struct __declspec(align(8)) XGameSaveContainerHandle__Fields {
  struct XGameSaveContainerHandle_1 _InteropHandle_k__BackingField;
};
struct XGameSaveContainerHandle {
  struct XGameSaveContainerHandle__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveContainerHandle__Fields fields;
};
struct XGameSaveContainerHandle_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveContainerHandle_1__StaticFields {
};
struct XGameSaveContainerHandle_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveContainerHandle_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveContainerHandle_1__VTable vtable;
};
struct XGameSaveContainerHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveContainerHandle__StaticFields {
};
struct XGameSaveContainerHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveContainerHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveContainerHandle__VTable vtable;
};

struct __declspec(align(8)) XGameSaveBlobInfo_1__Fields {
  struct String * _Name_k__BackingField;
  uint32_t _Size_k__BackingField;
};
struct XGameSaveBlobInfo_1 {
  struct XGameSaveBlobInfo_1__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveBlobInfo_1__Fields fields;
};
struct XGameSaveBlobInfo_1__Array {
  struct XGameSaveBlobInfo_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XGameSaveBlobInfo_1 * vector[32];
};
struct XGameSaveBlobInfo_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveBlobInfo_1__StaticFields {
};
struct XGameSaveBlobInfo_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveBlobInfo_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveBlobInfo_1__VTable vtable;
};

struct XGameSaveReadBlobDataCompleted__Fields {
  struct MulticastDelegate__Fields _;
};
struct XGameSaveReadBlobDataCompleted {
  struct XGameSaveReadBlobDataCompleted__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveReadBlobDataCompleted__Fields fields;
};
struct __declspec(align(8)) XGameSaveBlob__Fields {
  struct XGameSaveBlobInfo_1 * Info;
  struct Byte__Array * Data;
};
struct XGameSaveBlob {
  struct XGameSaveBlob__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveBlob__Fields fields;
};
struct XGameSaveBlob__Array {
  struct XGameSaveBlob__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XGameSaveBlob * vector[32];
};
struct XGameSaveBlob__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveBlob__StaticFields {
};
struct XGameSaveBlob__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveBlob__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveBlob__VTable vtable;
};
struct XGameSaveReadBlobDataCompleted__VTable {
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
struct XGameSaveReadBlobDataCompleted__StaticFields {
};
struct XGameSaveReadBlobDataCompleted__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveReadBlobDataCompleted__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveReadBlobDataCompleted__VTable vtable;
};

struct XGameSaveUpdateHandle_1 {
  void * Ptr;
};
struct XGameSaveUpdateHandle_1__Boxed {
  struct XGameSaveUpdateHandle_1__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveUpdateHandle_1 fields;
};
struct __declspec(align(8)) XGameSaveUpdateHandle__Fields {
  struct XGameSaveUpdateHandle_1 _InteropHandle_k__BackingField;
};
struct XGameSaveUpdateHandle {
  struct XGameSaveUpdateHandle__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveUpdateHandle__Fields fields;
};
struct XGameSaveUpdateHandle_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveUpdateHandle_1__StaticFields {
};
struct XGameSaveUpdateHandle_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveUpdateHandle_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveUpdateHandle_1__VTable vtable;
};
struct XGameSaveUpdateHandle__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XGameSaveUpdateHandle__StaticFields {
};
struct XGameSaveUpdateHandle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveUpdateHandle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveUpdateHandle__VTable vtable;
};

struct XGameSaveSubmitUpdateCompleted__Fields {
  struct MulticastDelegate__Fields _;
};
struct XGameSaveSubmitUpdateCompleted {
  struct XGameSaveSubmitUpdateCompleted__Class *klass;
  struct MonitorData *monitor;
  struct XGameSaveSubmitUpdateCompleted__Fields fields;
};
struct XGameSaveSubmitUpdateCompleted__VTable {
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
struct XGameSaveSubmitUpdateCompleted__StaticFields {
};
struct XGameSaveSubmitUpdateCompleted__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XGameSaveSubmitUpdateCompleted__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XGameSaveSubmitUpdateCompleted__VTable vtable;
};

struct XUserLocalId {
  uint64_t value;
};
struct XUserLocalId__Boxed {
  struct XUserLocalId__Class *klass;
  struct MonitorData *monitor;
  struct XUserLocalId fields;
};
enum XUserChangeEvent__Enum : uint32_t {
  XUserChangeEvent__Enum_SignedInAgain = 0,
  XUserChangeEvent__Enum_SigningOut = 1,
  XUserChangeEvent__Enum_SignedOut = 2,
  XUserChangeEvent__Enum_Gamertag = 3,
  XUserChangeEvent__Enum_GamerPicture = 4,
  XUserChangeEvent__Enum_Privileges = 5,
};
struct XUserChangeEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XUserChangeEvent__Enum value;
};
struct XUserLocalId__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XUserLocalId__StaticFields {
};
struct XUserLocalId__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserLocalId__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserLocalId__VTable vtable;
};

enum XUserAddOptions__Enum : uint32_t {
  XUserAddOptions__Enum_None = 0,
  XUserAddOptions__Enum_AddDefaultUserSilently = 1,
  XUserAddOptions__Enum_AllowGuests = 2,
};
struct XUserAddOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XUserAddOptions__Enum value;
};
struct XUserAddCompleted__Fields {
  struct MulticastDelegate__Fields _;
};
struct XUserAddCompleted {
  struct XUserAddCompleted__Class *klass;
  struct MonitorData *monitor;
  struct XUserAddCompleted__Fields fields;
};
struct XUserAddCompleted__VTable {
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
struct XUserAddCompleted__StaticFields {
};
struct XUserAddCompleted__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserAddCompleted__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserAddCompleted__VTable vtable;
};

enum XUserGamertagComponent__Enum : uint32_t {
  XUserGamertagComponent__Enum_Classic = 0,
  XUserGamertagComponent__Enum_Modern = 1,
  XUserGamertagComponent__Enum_ModernSuffix = 2,
  XUserGamertagComponent__Enum_UniqueModern = 3,
};
struct XUserGamertagComponent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XUserGamertagComponent__Enum value;
};

enum XUserGamerPictureSize__Enum : uint32_t {
  XUserGamerPictureSize__Enum_Small = 0,
  XUserGamerPictureSize__Enum_Medium = 1,
  XUserGamerPictureSize__Enum_Large = 2,
  XUserGamerPictureSize__Enum_ExtraLarge = 3,
};
struct XUserGamerPictureSize__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XUserGamerPictureSize__Enum value;
};
struct XUserGetGamerPictureCompleted__Fields {
  struct MulticastDelegate__Fields _;
};
struct XUserGetGamerPictureCompleted {
  struct XUserGetGamerPictureCompleted__Class *klass;
  struct MonitorData *monitor;
  struct XUserGetGamerPictureCompleted__Fields fields;
};
struct XUserGetGamerPictureCompleted__VTable {
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
struct XUserGetGamerPictureCompleted__StaticFields {
};
struct XUserGetGamerPictureCompleted__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserGetGamerPictureCompleted__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserGetGamerPictureCompleted__VTable vtable;
};

enum XUserGetTokenAndSignatureOptions__Enum : uint32_t {
  XUserGetTokenAndSignatureOptions__Enum_None = 0,
  XUserGetTokenAndSignatureOptions__Enum_ForceRefresh = 1,
  XUserGetTokenAndSignatureOptions__Enum_AllUsers = 2,
};
struct XUserGetTokenAndSignatureOptions__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XUserGetTokenAndSignatureOptions__Enum value;
};
struct __declspec(align(8)) XUserGetTokenAndSignatureUtf16HttpHeader__Fields {
  struct String * _Name_k__BackingField;
  struct String * _Value_k__BackingField;
};
struct XUserGetTokenAndSignatureUtf16HttpHeader {
  struct XUserGetTokenAndSignatureUtf16HttpHeader__Class *klass;
  struct MonitorData *monitor;
  struct XUserGetTokenAndSignatureUtf16HttpHeader__Fields fields;
};
struct XUserGetTokenAndSignatureUtf16HttpHeader__Array {
  struct XUserGetTokenAndSignatureUtf16HttpHeader__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XUserGetTokenAndSignatureUtf16HttpHeader * vector[32];
};
struct XUserGetTokenAndSignatureUtf16Result__Fields {
  struct MulticastDelegate__Fields _;
};
struct XUserGetTokenAndSignatureUtf16Result {
  struct XUserGetTokenAndSignatureUtf16Result__Class *klass;
  struct MonitorData *monitor;
  struct XUserGetTokenAndSignatureUtf16Result__Fields fields;
};
struct __declspec(align(8)) XUserGetTokenAndSignatureUtf16Data__Fields {
  struct String * _Token_k__BackingField;
  struct String * _Signature_k__BackingField;
};
struct XUserGetTokenAndSignatureUtf16Data {
  struct XUserGetTokenAndSignatureUtf16Data__Class *klass;
  struct MonitorData *monitor;
  struct XUserGetTokenAndSignatureUtf16Data__Fields fields;
};
struct XUserGetTokenAndSignatureUtf16HttpHeader__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XUserGetTokenAndSignatureUtf16HttpHeader__StaticFields {
};
struct XUserGetTokenAndSignatureUtf16HttpHeader__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserGetTokenAndSignatureUtf16HttpHeader__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserGetTokenAndSignatureUtf16HttpHeader__VTable vtable;
};
struct XUserGetTokenAndSignatureUtf16Data__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XUserGetTokenAndSignatureUtf16Data__StaticFields {
};
struct XUserGetTokenAndSignatureUtf16Data__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserGetTokenAndSignatureUtf16Data__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserGetTokenAndSignatureUtf16Data__VTable vtable;
};
struct XUserGetTokenAndSignatureUtf16Result__VTable {
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
struct XUserGetTokenAndSignatureUtf16Result__StaticFields {
};
struct XUserGetTokenAndSignatureUtf16Result__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserGetTokenAndSignatureUtf16Result__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserGetTokenAndSignatureUtf16Result__VTable vtable;
};

struct XUserResolveIssueWithUiUtf16Result__Fields {
  struct MulticastDelegate__Fields _;
};
struct XUserResolveIssueWithUiUtf16Result {
  struct XUserResolveIssueWithUiUtf16Result__Class *klass;
  struct MonitorData *monitor;
  struct XUserResolveIssueWithUiUtf16Result__Fields fields;
};
struct XUserResolveIssueWithUiUtf16Result__VTable {
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
struct XUserResolveIssueWithUiUtf16Result__StaticFields {
};
struct XUserResolveIssueWithUiUtf16Result__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserResolveIssueWithUiUtf16Result__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserResolveIssueWithUiUtf16Result__VTable vtable;
};

struct XUserChangeEventCallback__Fields {
  struct MulticastDelegate__Fields _;
};
struct XUserChangeEventCallback {
  struct XUserChangeEventCallback__Class *klass;
  struct MonitorData *monitor;
  struct XUserChangeEventCallback__Fields fields;
};
struct XTaskQueueRegistrationToken {
  uint64_t token;
};
struct XTaskQueueRegistrationToken__Boxed {
  struct XTaskQueueRegistrationToken__Class *klass;
  struct MonitorData *monitor;
  struct XTaskQueueRegistrationToken fields;
};
struct __declspec(align(8)) XRegistrationToken__Fields {
  struct GCHandle _CallbackHandle_k__BackingField;
  struct XTaskQueueRegistrationToken _Token_k__BackingField;
};
struct XRegistrationToken {
  struct XRegistrationToken__Class *klass;
  struct MonitorData *monitor;
  struct XRegistrationToken__Fields fields;
};
struct XUserChangeEventCallback__VTable {
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
struct XUserChangeEventCallback__StaticFields {
};
struct XUserChangeEventCallback__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XUserChangeEventCallback__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XUserChangeEventCallback__VTable vtable;
};
struct XTaskQueueRegistrationToken__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XTaskQueueRegistrationToken__StaticFields {
};
struct XTaskQueueRegistrationToken__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XTaskQueueRegistrationToken__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XTaskQueueRegistrationToken__VTable vtable;
};
struct XRegistrationToken__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct XRegistrationToken__StaticFields {
};
struct XRegistrationToken__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct XRegistrationToken__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct XRegistrationToken__VTable vtable;
};

struct XblAchievementsResultHandle_1 {
  void * handle;
};
struct XblAchievementsResultHandle_1__Boxed {
  struct XblAchievementsResultHandle_1__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementsResultHandle_1 fields;
};
struct __declspec(align(8)) XblAchievementsResultHandle__Fields {
  struct XblAchievementsResultHandle_1 _InteropHandle_k__BackingField;
};
struct XblAchievementsResultHandle {
  struct XblAchievementsResultHandle__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementsResultHandle__Fields fields;
};
enum XblAchievementProgressState__Enum : uint32_t {
  XblAchievementProgressState__Enum_Unknown = 0,
  XblAchievementProgressState__Enum_Achieved = 1,
  XblAchievementProgressState__Enum_NotStarted = 2,
  XblAchievementProgressState__Enum_InProgress = 3,
};
struct XblAchievementProgressState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XblAchievementProgressState__Enum value;
};
enum XblAchievementType__Enum : uint32_t {
  XblAchievementType__Enum_Unknown = 0,
  XblAchievementType__Enum_All = 1,
  XblAchievementType__Enum_Persistent = 2,
  XblAchievementType__Enum_Challenge = 3,
};
struct XblAchievementType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XblAchievementType__Enum value;
};
enum XblAchievementParticipationType__Enum : uint32_t {
  XblAchievementParticipationType__Enum_Unknown = 0,
  XblAchievementParticipationType__Enum_Individual = 1,
  XblAchievementParticipationType__Enum_Group = 2,
};
struct XblAchievementParticipationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum XblAchievementParticipationType__Enum value;
};
struct __declspec(align(8)) XblAchievement__Fields {
  struct String * _Id_k__BackingField;
  struct String * _ServiceConfigurationId_k__BackingField;
  struct String * _Name_k__BackingField;
  struct XblAchievementTitleAssociation__Array * _TitleAssociations_k__BackingField;
  enum XblAchievementProgressState__Enum _ProgressState_k__BackingField;
  struct XblAchievementProgression * _Progression_k__BackingField;
  struct XblAchievementMediaAsset__Array * _MediaAssets_k__BackingField;
  struct String__Array * _PlatformsAvailableOn_k__BackingField;
  bool _IsSecret_k__BackingField;
  struct String * _UnlockedDescription_k__BackingField;
  struct String * _LockedDescription_k__BackingField;
  struct String * _ProductId_k__BackingField;
  enum XblAchievementType__Enum _Type_k__BackingField;
  enum XblAchievementParticipationType__Enum _ParticipationType_k__BackingField;
  struct XblAchievementTimeWindow * _Available_k__BackingField;
  struct XblAchievementReward__Array * _Rewards_k__BackingField;
  uint64_t _EstimatedUnlockTime_k__BackingField;
  struct String * _DeepLink_k__BackingField;
  bool _IsRevoked_k__BackingField;
};
struct XblAchievement {
  struct XblAchievement__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievement__Fields fields;
};
struct XblAchievement__Array {
  struct XblAchievement__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XblAchievement * vector[32];
};
struct __declspec(align(8)) XblAchievementTitleAssociation__Fields {
  struct String * _Name_k__BackingField;
  uint32_t _TitleId_k__BackingField;
};
struct XblAchievementTitleAssociation {
  struct XblAchievementTitleAssociation__Class *klass;
  struct MonitorData *monitor;
  struct XblAchievementTitleAssociation__Fields fields;
};
struct XblAchievementTitleAssociation__Array {
  struct XblAchievementTitleAssociation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct XblAchievementTitleAssociation * vector[32];
};}