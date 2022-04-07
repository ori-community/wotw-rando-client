namespace app {

struct __declspec(align(8)) FixedBufferAttribute__Fields {
  struct Type * elementType;
  int32_t length;
};
struct FixedBufferAttribute {
  struct FixedBufferAttribute__Class *klass;
  struct MonitorData *monitor;
  struct FixedBufferAttribute__Fields fields;
};
struct FixedBufferAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct FixedBufferAttribute__StaticFields {
};
struct FixedBufferAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FixedBufferAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FixedBufferAttribute__VTable vtable;
};

struct __declspec(align(8)) InternalsVisibleToAttribute__Fields {
  struct String * _assemblyName;
  bool _allInternalsVisible;
};
struct InternalsVisibleToAttribute {
  struct InternalsVisibleToAttribute__Class *klass;
  struct MonitorData *monitor;
  struct InternalsVisibleToAttribute__Fields fields;
};
struct InternalsVisibleToAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct InternalsVisibleToAttribute__StaticFields {
};
struct InternalsVisibleToAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InternalsVisibleToAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InternalsVisibleToAttribute__VTable vtable;
};

struct FriendAccessAllowedAttribute {
  struct FriendAccessAllowedAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct FriendAccessAllowedAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct FriendAccessAllowedAttribute__StaticFields {
};
struct FriendAccessAllowedAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FriendAccessAllowedAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FriendAccessAllowedAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeDependencyAttribute__Fields {
  struct String * typeName;
};
struct TypeDependencyAttribute {
  struct TypeDependencyAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TypeDependencyAttribute__Fields fields;
};
struct TypeDependencyAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TypeDependencyAttribute__StaticFields {
};
struct TypeDependencyAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeDependencyAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeDependencyAttribute__VTable vtable;
};

struct UnsafeValueTypeAttribute {
  struct UnsafeValueTypeAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct UnsafeValueTypeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UnsafeValueTypeAttribute__StaticFields {
};
struct UnsafeValueTypeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnsafeValueTypeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnsafeValueTypeAttribute__VTable vtable;
};

struct StringFreezingAttribute {
  struct StringFreezingAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct StringFreezingAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct StringFreezingAttribute__StaticFields {
};
struct StringFreezingAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StringFreezingAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StringFreezingAttribute__VTable vtable;
};

enum CallingConvention__Enum : int32_t {
  CallingConvention__Enum_Winapi = 1,
  CallingConvention__Enum_Cdecl = 2,
  CallingConvention__Enum_StdCall = 3,
  CallingConvention__Enum_ThisCall = 4,
  CallingConvention__Enum_FastCall = 5,
};
struct CallingConvention__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CallingConvention__Enum value;
};
enum CharSet__Enum : int32_t {
  CharSet__Enum_None = 1,
  CharSet__Enum_Ansi = 2,
  CharSet__Enum_Unicode = 3,
  CharSet__Enum_Auto = 4,
};
struct CharSet__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CharSet__Enum value;
};
struct __declspec(align(8)) UnmanagedFunctionPointerAttribute__Fields {
  enum CallingConvention__Enum m_callingConvention;
  enum CharSet__Enum CharSet;
  bool BestFitMapping;
  bool ThrowOnUnmappableChar;
  bool SetLastError;
};
struct UnmanagedFunctionPointerAttribute {
  struct UnmanagedFunctionPointerAttribute__Class *klass;
  struct MonitorData *monitor;
  struct UnmanagedFunctionPointerAttribute__Fields fields;
};
struct UnmanagedFunctionPointerAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct UnmanagedFunctionPointerAttribute__StaticFields {
};
struct UnmanagedFunctionPointerAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnmanagedFunctionPointerAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnmanagedFunctionPointerAttribute__VTable vtable;
};

struct __declspec(align(8)) DispIdAttribute__Fields {
  int32_t _val;
};
struct DispIdAttribute {
  struct DispIdAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DispIdAttribute__Fields fields;
};
struct DispIdAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DispIdAttribute__StaticFields {
};
struct DispIdAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DispIdAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DispIdAttribute__VTable vtable;
};

enum ComInterfaceType__Enum : int32_t {
  ComInterfaceType__Enum_InterfaceIsDual = 0,
  ComInterfaceType__Enum_InterfaceIsIUnknown = 1,
  ComInterfaceType__Enum_InterfaceIsIDispatch = 2,
  ComInterfaceType__Enum_InterfaceIsIInspectable = 3,
};
struct ComInterfaceType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ComInterfaceType__Enum value;
};
struct __declspec(align(8)) InterfaceTypeAttribute__Fields {
  enum ComInterfaceType__Enum _val;
};
struct InterfaceTypeAttribute {
  struct InterfaceTypeAttribute__Class *klass;
  struct MonitorData *monitor;
  struct InterfaceTypeAttribute__Fields fields;
};
struct InterfaceTypeAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct InterfaceTypeAttribute__StaticFields {
};
struct InterfaceTypeAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InterfaceTypeAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InterfaceTypeAttribute__VTable vtable;
};

struct __declspec(align(8)) ComDefaultInterfaceAttribute__Fields {
  struct Type * _val;
};
struct ComDefaultInterfaceAttribute {
  struct ComDefaultInterfaceAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ComDefaultInterfaceAttribute__Fields fields;
};
struct ComDefaultInterfaceAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ComDefaultInterfaceAttribute__StaticFields {
};
struct ComDefaultInterfaceAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComDefaultInterfaceAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComDefaultInterfaceAttribute__VTable vtable;
};

enum ClassInterfaceType__Enum : int32_t {
  ClassInterfaceType__Enum_None = 0,
  ClassInterfaceType__Enum_AutoDispatch = 1,
  ClassInterfaceType__Enum_AutoDual = 2,
};
struct ClassInterfaceType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ClassInterfaceType__Enum value;
};
struct __declspec(align(8)) ClassInterfaceAttribute__Fields {
  enum ClassInterfaceType__Enum _val;
};
struct ClassInterfaceAttribute {
  struct ClassInterfaceAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ClassInterfaceAttribute__Fields fields;
};
struct ClassInterfaceAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ClassInterfaceAttribute__StaticFields {
};
struct ClassInterfaceAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ClassInterfaceAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ClassInterfaceAttribute__VTable vtable;
};

struct __declspec(align(8)) ComVisibleAttribute__Fields {
  bool _val;
};
struct ComVisibleAttribute {
  struct ComVisibleAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ComVisibleAttribute__Fields fields;
};
struct ComVisibleAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ComVisibleAttribute__StaticFields {
};
struct ComVisibleAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComVisibleAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComVisibleAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeLibImportClassAttribute__Fields {
  struct String * _importClassName;
};
struct TypeLibImportClassAttribute {
  struct TypeLibImportClassAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TypeLibImportClassAttribute__Fields fields;
};
struct TypeLibImportClassAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TypeLibImportClassAttribute__StaticFields {
};
struct TypeLibImportClassAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeLibImportClassAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeLibImportClassAttribute__VTable vtable;
};

struct ComImportAttribute {
  struct ComImportAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct ComImportAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ComImportAttribute__StaticFields {
};
struct ComImportAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComImportAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComImportAttribute__VTable vtable;
};

struct __declspec(align(8)) GuidAttribute__Fields {
  struct String * _val;
};
struct GuidAttribute {
  struct GuidAttribute__Class *klass;
  struct MonitorData *monitor;
  struct GuidAttribute__Fields fields;
};
struct GuidAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct GuidAttribute__StaticFields {
};
struct GuidAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GuidAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GuidAttribute__VTable vtable;
};

struct PreserveSigAttribute {
  struct PreserveSigAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct PreserveSigAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct PreserveSigAttribute__StaticFields {
};
struct PreserveSigAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PreserveSigAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PreserveSigAttribute__VTable vtable;
};

struct InAttribute {
  struct InAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct InAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct InAttribute__StaticFields {
};
struct InAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InAttribute__VTable vtable;
};

struct OutAttribute {
  struct OutAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct OutAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct OutAttribute__StaticFields {
};
struct OutAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OutAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OutAttribute__VTable vtable;
};

struct OptionalAttribute {
  struct OptionalAttribute__Class *klass;
  struct MonitorData *monitor;
};
struct OptionalAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct OptionalAttribute__StaticFields {
};
struct OptionalAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OptionalAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OptionalAttribute__VTable vtable;
};

enum DllImportSearchPath__Enum : int32_t {
  DllImportSearchPath__Enum_UseDllDirectoryForDependencies = 256,
  DllImportSearchPath__Enum_ApplicationDirectory = 512,
  DllImportSearchPath__Enum_UserDirectories = 1024,
  DllImportSearchPath__Enum_System32 = 2048,
  DllImportSearchPath__Enum_SafeDirectories = 4096,
  DllImportSearchPath__Enum_AssemblyDirectory = 2,
  DllImportSearchPath__Enum_LegacyBehavior = 0,
};
struct DllImportSearchPath__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DllImportSearchPath__Enum value;
};
struct __declspec(align(8)) DefaultDllImportSearchPathsAttribute__Fields {
  enum DllImportSearchPath__Enum _paths;
};
struct DefaultDllImportSearchPathsAttribute {
  struct DefaultDllImportSearchPathsAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DefaultDllImportSearchPathsAttribute__Fields fields;
};
struct DefaultDllImportSearchPathsAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DefaultDllImportSearchPathsAttribute__StaticFields {
};
struct DefaultDllImportSearchPathsAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DefaultDllImportSearchPathsAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DefaultDllImportSearchPathsAttribute__VTable vtable;
};

struct __declspec(align(8)) DllImportAttribute__Fields {
  struct String * _val;
  struct String * EntryPoint;
  enum CharSet__Enum CharSet;
  bool SetLastError;
  bool ExactSpelling;
  bool PreserveSig;
  enum CallingConvention__Enum CallingConvention;
  bool BestFitMapping;
  bool ThrowOnUnmappableChar;
};
struct DllImportAttribute {
  struct DllImportAttribute__Class *klass;
  struct MonitorData *monitor;
  struct DllImportAttribute__Fields fields;
};
struct DllImportAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct DllImportAttribute__StaticFields {
};
struct DllImportAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DllImportAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DllImportAttribute__VTable vtable;
};

struct __declspec(align(8)) FieldOffsetAttribute__Fields {
  int32_t _val;
};
struct FieldOffsetAttribute {
  struct FieldOffsetAttribute__Class *klass;
  struct MonitorData *monitor;
  struct FieldOffsetAttribute__Fields fields;
};
struct FieldOffsetAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct FieldOffsetAttribute__StaticFields {
};
struct FieldOffsetAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FieldOffsetAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FieldOffsetAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeLibVersionAttribute__Fields {
  int32_t _major;
  int32_t _minor;
};
struct TypeLibVersionAttribute {
  struct TypeLibVersionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct TypeLibVersionAttribute__Fields fields;
};
struct TypeLibVersionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct TypeLibVersionAttribute__StaticFields {
};
struct TypeLibVersionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TypeLibVersionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TypeLibVersionAttribute__VTable vtable;
};

struct __declspec(align(8)) ComCompatibleVersionAttribute__Fields {
  int32_t _major;
  int32_t _minor;
  int32_t _build;
  int32_t _revision;
};
struct ComCompatibleVersionAttribute {
  struct ComCompatibleVersionAttribute__Class *klass;
  struct MonitorData *monitor;
  struct ComCompatibleVersionAttribute__Fields fields;
};
struct ComCompatibleVersionAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct ComCompatibleVersionAttribute__StaticFields {
};
struct ComCompatibleVersionAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ComCompatibleVersionAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ComCompatibleVersionAttribute__VTable vtable;
};

struct __declspec(align(8)) BestFitMappingAttribute__Fields {
  bool _bestFitMapping;
};
struct BestFitMappingAttribute {
  struct BestFitMappingAttribute__Class *klass;
  struct MonitorData *monitor;
  struct BestFitMappingAttribute__Fields fields;
};
struct BestFitMappingAttribute__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct BestFitMappingAttribute__StaticFields {
};
struct BestFitMappingAttribute__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BestFitMappingAttribute__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BestFitMappingAttribute__VTable vtable;
};

struct ExternalException__Fields {
  struct SystemException__Fields _;
};
struct ExternalException {
  struct ExternalException__Class *klass;
  struct MonitorData *monitor;
  struct ExternalException__Fields fields;
};
struct COMException__Fields {
  struct ExternalException__Fields _;
};
struct COMException {
  struct COMException__Class *klass;
  struct MonitorData *monitor;
  struct COMException__Fields fields;
};
struct ExternalException__VTable {
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
  VirtualInvokeData get_ErrorCode;
};
struct ExternalException__StaticFields {
};
struct ExternalException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExternalException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExternalException__VTable vtable;
};
struct COMException__VTable {
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
  VirtualInvokeData get_ErrorCode;
};
struct COMException__StaticFields {
};
struct COMException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct COMException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct COMException__VTable vtable;
};

struct HandleRef {
  struct Object * m_wrapper;
  void * m_handle;
};
struct HandleRef__Boxed {
  struct HandleRef__Class *klass;
  struct MonitorData *monitor;
  struct HandleRef fields;
};
struct HandleRef__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HandleRef__StaticFields {
};
struct HandleRef__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HandleRef__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HandleRef__VTable vtable;
};

struct MarshalDirectiveException__Fields {
  struct SystemException__Fields _;
};
struct MarshalDirectiveException {
  struct MarshalDirectiveException__Class *klass;
  struct MonitorData *monitor;
  struct MarshalDirectiveException__Fields fields;
};
struct MarshalDirectiveException__VTable {
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
struct MarshalDirectiveException__StaticFields {
};
struct MarshalDirectiveException__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MarshalDirectiveException__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MarshalDirectiveException__VTable vtable;
};

enum GCHandleType__Enum : int32_t {
  GCHandleType__Enum_Weak = 0,
  GCHandleType__Enum_WeakTrackResurrection = 1,
  GCHandleType__Enum_Normal = 2,
  GCHandleType__Enum_Pinned = 3,
};
struct GCHandleType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GCHandleType__Enum value;
};

struct LowLevelComparer {
  struct LowLevelComparer__Class *klass;
  struct MonitorData *monitor;
};
struct LowLevelComparer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Compare;
};
struct LowLevelComparer__StaticFields {
  struct LowLevelComparer * Default;
};
struct LowLevelComparer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LowLevelComparer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LowLevelComparer__VTable vtable;
};

struct ArrayList_IListWrapper__Fields {
  struct ArrayList__Fields _;
  struct IList * _list;
};
struct ArrayList_IListWrapper {
  struct ArrayList_IListWrapper__Class *klass;
  struct MonitorData *monitor;
  struct ArrayList_IListWrapper__Fields fields;
};
struct ArrayList_IListWrapper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData Add;
  VirtualInvokeData Contains;
  VirtualInvokeData Clear;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_IsFixedSize;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData Remove;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData Clone;
  VirtualInvokeData set_Capacity;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData get_IsFixedSize_1;
  VirtualInvokeData get_IsReadOnly_1;
  VirtualInvokeData get_IsSynchronized_1;
  VirtualInvokeData get_SyncRoot_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData set_Item_1;
  VirtualInvokeData Add_1;
  VirtualInvokeData AddRange;
  VirtualInvokeData Clear_1;
  VirtualInvokeData Clone_1;
  VirtualInvokeData Contains_1;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData CopyTo_2;
  VirtualInvokeData CopyTo_3;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData IndexOf_1;
  VirtualInvokeData Insert_1;
  VirtualInvokeData InsertRange;
  VirtualInvokeData Remove_1;
  VirtualInvokeData RemoveAt_1;
  VirtualInvokeData RemoveRange;
  VirtualInvokeData Sort;
  VirtualInvokeData Sort_1;
  VirtualInvokeData ToArray;
  VirtualInvokeData ToArray_1;
};
struct ArrayList_IListWrapper__StaticFields {
};
struct ArrayList_IListWrapper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ArrayList_IListWrapper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ArrayList_IListWrapper__VTable vtable;
};

struct __declspec(align(8)) ArrayList_ReadOnlyList__Fields {
  struct IList * _list;
};
struct ArrayList_ReadOnlyList {
  struct ArrayList_ReadOnlyList__Class *klass;
  struct MonitorData *monitor;
  struct ArrayList_ReadOnlyList__Fields fields;
};
struct ArrayList_ReadOnlyList__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData Add;
  VirtualInvokeData Contains;
  VirtualInvokeData Clear;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_IsFixedSize;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData Remove;
  VirtualInvokeData RemoveAt;
  VirtualInvokeData CopyTo;
  VirtualInvokeData get_Count;
  VirtualInvokeData get_SyncRoot;
  VirtualInvokeData get_IsSynchronized;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData get_IsReadOnly_1;
  VirtualInvokeData get_IsFixedSize_1;
  VirtualInvokeData get_IsSynchronized_1;
  VirtualInvokeData get_Item_1;
  VirtualInvokeData set_Item_1;
  VirtualInvokeData get_SyncRoot_1;
  VirtualInvokeData Add_1;
  VirtualInvokeData Clear_1;
  VirtualInvokeData Contains_1;
  VirtualInvokeData CopyTo_1;
  VirtualInvokeData GetEnumerator_1;
  VirtualInvokeData IndexOf_1;
  VirtualInvokeData Insert_1;
  VirtualInvokeData Remove_1;
  VirtualInvokeData RemoveAt_1;
};}