namespace app {
enum class ComInterfaceType__Enum : int32_t {
    InterfaceIsDual = 0x00000000,
    InterfaceIsIUnknown = 0x00000001,
    InterfaceIsIDispatch = 0x00000002,
    InterfaceIsIInspectable = 0x00000003,
};

struct ComInterfaceType__Enum__Boxed {
    struct ComInterfaceType__Enum__Class *klass;
    MonitorData *monitor;
    ComInterfaceType__Enum value;
    
};

struct __declspec(align(8)) InterfaceTypeAttribute__Fields {
    ComInterfaceType__Enum _val;
    
};

struct InterfaceTypeAttribute {
    struct InterfaceTypeAttribute__Class *klass;
    MonitorData *monitor;
    struct InterfaceTypeAttribute__Fields fields;
};

struct ComInterfaceType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ComInterfaceType__Enum__StaticFields {
};

struct ComInterfaceType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ComInterfaceType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ComInterfaceType__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InterfaceTypeAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InterfaceTypeAttribute__VTable vtable;
};

struct __declspec(align(8)) ComDefaultInterfaceAttribute__Fields {
    struct Type *_val;
};

struct ComDefaultInterfaceAttribute {
    struct ComDefaultInterfaceAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ComDefaultInterfaceAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ComDefaultInterfaceAttribute__VTable vtable;
};

enum class ClassInterfaceType__Enum : int32_t {
    None = 0x00000000,
    AutoDispatch = 0x00000001,
    AutoDual = 0x00000002,
};

struct ClassInterfaceType__Enum__Boxed {
    struct ClassInterfaceType__Enum__Class *klass;
    MonitorData *monitor;
    ClassInterfaceType__Enum value;
    
};

struct __declspec(align(8)) ClassInterfaceAttribute__Fields {
    ClassInterfaceType__Enum _val;
    
};

struct ClassInterfaceAttribute {
    struct ClassInterfaceAttribute__Class *klass;
    MonitorData *monitor;
    struct ClassInterfaceAttribute__Fields fields;
};

struct ClassInterfaceType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct ClassInterfaceType__Enum__StaticFields {
};

struct ClassInterfaceType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClassInterfaceType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClassInterfaceType__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClassInterfaceAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClassInterfaceAttribute__VTable vtable;
};

struct __declspec(align(8)) ComVisibleAttribute__Fields {
    bool _val;
};

struct ComVisibleAttribute {
    struct ComVisibleAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ComVisibleAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ComVisibleAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeLibImportClassAttribute__Fields {
    struct String *_importClassName;
};

struct TypeLibImportClassAttribute {
    struct TypeLibImportClassAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeLibImportClassAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TypeLibImportClassAttribute__VTable vtable;
};

struct ComImportAttribute {
    struct ComImportAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ComImportAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ComImportAttribute__VTable vtable;
};

struct __declspec(align(8)) GuidAttribute__Fields {
    struct String *_val;
};

struct GuidAttribute {
    struct GuidAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GuidAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GuidAttribute__VTable vtable;
};

struct PreserveSigAttribute {
    struct PreserveSigAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PreserveSigAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PreserveSigAttribute__VTable vtable;
};

struct InAttribute {
    struct InAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InAttribute__VTable vtable;
};

struct OutAttribute {
    struct OutAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OutAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OutAttribute__VTable vtable;
};

struct OptionalAttribute {
    struct OptionalAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OptionalAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OptionalAttribute__VTable vtable;
};

enum class DllImportSearchPath__Enum : int32_t {
    UseDllDirectoryForDependencies = 0x00000100,
    ApplicationDirectory = 0x00000200,
    UserDirectories = 0x00000400,
    System32 = 0x00000800,
    SafeDirectories = 0x00001000,
    AssemblyDirectory = 0x00000002,
    LegacyBehavior = 0x00000000,
};

struct DllImportSearchPath__Enum__Boxed {
    struct DllImportSearchPath__Enum__Class *klass;
    MonitorData *monitor;
    DllImportSearchPath__Enum value;
    
};

struct __declspec(align(8)) DefaultDllImportSearchPathsAttribute__Fields {
    DllImportSearchPath__Enum _paths;
    
};

struct DefaultDllImportSearchPathsAttribute {
    struct DefaultDllImportSearchPathsAttribute__Class *klass;
    MonitorData *monitor;
    struct DefaultDllImportSearchPathsAttribute__Fields fields;
};

struct DllImportSearchPath__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct DllImportSearchPath__Enum__StaticFields {
};

struct DllImportSearchPath__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DllImportSearchPath__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DllImportSearchPath__Enum__VTable vtable;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DefaultDllImportSearchPathsAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DefaultDllImportSearchPathsAttribute__VTable vtable;
};

struct __declspec(align(8)) DllImportAttribute__Fields {
    struct String *_val;
    struct String *EntryPoint;
    CharSet__Enum CharSet;
    
    bool SetLastError;
    bool ExactSpelling;
    bool PreserveSig;
    CallingConvention__Enum CallingConvention;
    
    bool BestFitMapping;
    bool ThrowOnUnmappableChar;
};

struct DllImportAttribute {
    struct DllImportAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DllImportAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DllImportAttribute__VTable vtable;
};

struct __declspec(align(8)) FieldOffsetAttribute__Fields {
    int32_t _val;
};

struct FieldOffsetAttribute {
    struct FieldOffsetAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FieldOffsetAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FieldOffsetAttribute__VTable vtable;
};

struct __declspec(align(8)) TypeLibVersionAttribute__Fields {
    int32_t _major;
    int32_t _minor;
};

struct TypeLibVersionAttribute {
    struct TypeLibVersionAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TypeLibVersionAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ComCompatibleVersionAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ComCompatibleVersionAttribute__VTable vtable;
};

struct __declspec(align(8)) BestFitMappingAttribute__Fields {
    bool _bestFitMapping;
};

struct BestFitMappingAttribute {
    struct BestFitMappingAttribute__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BestFitMappingAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BestFitMappingAttribute__VTable vtable;
};

struct ExternalException__Fields {
    struct SystemException__Fields _;
};

struct ExternalException {
    struct ExternalException__Class *klass;
    MonitorData *monitor;
    struct ExternalException__Fields fields;
};

struct COMException__Fields {
    struct ExternalException__Fields _;
};

struct COMException {
    struct COMException__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ExternalException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct COMException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct COMException__VTable vtable;
};

struct HandleRef {
    struct Object *m_wrapper;
    void *m_handle;
};

struct HandleRef__Boxed {
    struct HandleRef__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct HandleRef__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct HandleRef__VTable vtable;
};

struct MarshalDirectiveException__Fields {
    struct SystemException__Fields _;
};

struct MarshalDirectiveException {
    struct MarshalDirectiveException__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MarshalDirectiveException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MarshalDirectiveException__VTable vtable;
};

enum class GCHandleType__Enum : int32_t {
    Weak = 0x00000000,
    WeakTrackResurrection = 0x00000001,
    Normal = 0x00000002,
    Pinned = 0x00000003,
};

struct GCHandleType__Enum__Boxed {
    struct GCHandleType__Enum__Class *klass;
    MonitorData *monitor;
    GCHandleType__Enum value;
    
};

struct GCHandleType__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct GCHandleType__Enum__StaticFields {
};

struct GCHandleType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GCHandleType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GCHandleType__Enum__VTable vtable;
};

struct LowLevelComparer {
    struct LowLevelComparer__Class *klass;
    MonitorData *monitor;
};

struct LowLevelComparer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Compare;
};

struct LowLevelComparer__StaticFields {
    struct LowLevelComparer *Default;
};

struct LowLevelComparer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LowLevelComparer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LowLevelComparer__VTable vtable;
};

struct ArrayList_IListWrapper__Fields {
    struct ArrayList__Fields _;
    struct IList *_list;
};

struct ArrayList_IListWrapper {
    struct ArrayList_IListWrapper__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ArrayList_IListWrapper__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ArrayList_IListWrapper__VTable vtable;
};

struct __declspec(align(8)) ArrayList_ReadOnlyList__Fields {
    struct IList *_list;
};

struct ArrayList_ReadOnlyList {
    struct ArrayList_ReadOnlyList__Class *klass;
    MonitorData *monitor;
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
};

}
