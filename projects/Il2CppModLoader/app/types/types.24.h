namespace app {
struct DTSubString__StaticFields {
};

struct DTSubString__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DTSubString__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DTSubString__VTable vtable;
};

enum class Guid_GuidStyles__Enum : int32_t {
    None = 0x00000000,
    AllowParenthesis = 0x00000001,
    AllowBraces = 0x00000002,
    AllowDashes = 0x00000004,
    AllowHexPrefix = 0x00000008,
    RequireParenthesis = 0x00000010,
    RequireBraces = 0x00000020,
    RequireDashes = 0x00000040,
    RequireHexPrefix = 0x00000080,
    HexFormat = 0x000000a0,
    NumberFormat = 0x00000000,
    DigitFormat = 0x00000040,
    BraceFormat = 0x00000060,
    ParenthesisFormat = 0x00000050,
    Any = 0x0000000f,
};

struct Guid_GuidStyles__Enum__Boxed {
    struct Guid_GuidStyles__Enum__Class *klass;
    MonitorData *monitor;
    Guid_GuidStyles__Enum value;
    
};

enum class Guid_GuidParseThrowStyle__Enum : int32_t {
    None = 0x00000000,
    All = 0x00000001,
    AllButOverflow = 0x00000002,
};

struct Guid_GuidParseThrowStyle__Enum__Boxed {
    struct Guid_GuidParseThrowStyle__Enum__Class *klass;
    MonitorData *monitor;
    Guid_GuidParseThrowStyle__Enum value;
    
};

enum class Guid_ParseFailureKind__Enum : int32_t {
    None = 0x00000000,
    ArgumentNull = 0x00000001,
    Format = 0x00000002,
    FormatWithParameter = 0x00000003,
    NativeException = 0x00000004,
    FormatWithInnerException = 0x00000005,
};

struct Guid_ParseFailureKind__Enum__Boxed {
    struct Guid_ParseFailureKind__Enum__Class *klass;
    MonitorData *monitor;
    Guid_ParseFailureKind__Enum value;
    
};

struct Guid_GuidResult {
    struct Guid parsedGuid;
    Guid_GuidParseThrowStyle__Enum throwStyle;
    
    Guid_ParseFailureKind__Enum m_failure;
    
    struct String *m_failureMessageID;
    struct Object *m_failureMessageFormatArgument;
    struct String *m_failureArgumentName;
    struct Exception *m_innerException;
};

struct Guid_GuidResult__Boxed {
    struct Guid_GuidResult__Class *klass;
    MonitorData *monitor;
    struct Guid_GuidResult fields;
};

struct Guid_GuidStyles__Enum__VTable {
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

struct Guid_GuidStyles__Enum__StaticFields {
};

struct Guid_GuidStyles__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Guid_GuidStyles__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Guid_GuidStyles__Enum__VTable vtable;
};

struct Guid_GuidParseThrowStyle__Enum__VTable {
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

struct Guid_GuidParseThrowStyle__Enum__StaticFields {
};

struct Guid_GuidParseThrowStyle__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Guid_GuidParseThrowStyle__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Guid_GuidParseThrowStyle__Enum__VTable vtable;
};

struct Guid_ParseFailureKind__Enum__VTable {
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

struct Guid_ParseFailureKind__Enum__StaticFields {
};

struct Guid_ParseFailureKind__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Guid_ParseFailureKind__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Guid_ParseFailureKind__Enum__VTable vtable;
};

struct Guid_GuidResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Guid_GuidResult__StaticFields {
};

struct Guid_GuidResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Guid_GuidResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Guid_GuidResult__VTable vtable;
};

struct Guid_GuidResult___VTable {
};

struct Guid_GuidResult___StaticFields {
};

struct Guid_GuidResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Guid_GuidResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Guid_GuidResult___VTable vtable;
};

struct Int16___VTable {
};

struct Int16___StaticFields {
};

struct Int16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int16___VTable vtable;
};

struct IndexOutOfRangeException__Fields {
    struct SystemException__Fields _;
};

struct IndexOutOfRangeException {
    struct IndexOutOfRangeException__Class *klass;
    MonitorData *monitor;
    struct IndexOutOfRangeException__Fields fields;
};

struct IndexOutOfRangeException__VTable {
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

struct IndexOutOfRangeException__StaticFields {
};

struct IndexOutOfRangeException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IndexOutOfRangeException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IndexOutOfRangeException__VTable vtable;
};

struct InsufficientExecutionStackException__Fields {
    struct SystemException__Fields _;
};

struct InsufficientExecutionStackException {
    struct InsufficientExecutionStackException__Class *klass;
    MonitorData *monitor;
    struct InsufficientExecutionStackException__Fields fields;
};

struct InsufficientExecutionStackException__VTable {
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

struct InsufficientExecutionStackException__StaticFields {
};

struct InsufficientExecutionStackException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InsufficientExecutionStackException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InsufficientExecutionStackException__VTable vtable;
};

struct InvalidCastException__Fields {
    struct SystemException__Fields _;
};

struct InvalidCastException {
    struct InvalidCastException__Class *klass;
    MonitorData *monitor;
    struct InvalidCastException__Fields fields;
};

struct InvalidCastException__VTable {
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

struct InvalidCastException__StaticFields {
};

struct InvalidCastException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InvalidCastException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InvalidCastException__VTable vtable;
};

struct InvalidOperationException__Fields {
    struct SystemException__Fields _;
};

struct InvalidOperationException {
    struct InvalidOperationException__Class *klass;
    MonitorData *monitor;
    struct InvalidOperationException__Fields fields;
};

struct InvalidOperationException__VTable {
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

struct InvalidOperationException__StaticFields {
};

struct InvalidOperationException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InvalidOperationException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InvalidOperationException__VTable vtable;
};

struct InvalidProgramException__Fields {
    struct SystemException__Fields _;
};

struct InvalidProgramException {
    struct InvalidProgramException__Class *klass;
    MonitorData *monitor;
    struct InvalidProgramException__Fields fields;
};

struct InvalidProgramException__VTable {
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

struct InvalidProgramException__StaticFields {
};

struct InvalidProgramException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InvalidProgramException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InvalidProgramException__VTable vtable;
};

struct InvalidTimeZoneException__Fields {
    struct Exception__Fields _;
};

struct InvalidTimeZoneException {
    struct InvalidTimeZoneException__Class *klass;
    MonitorData *monitor;
    struct InvalidTimeZoneException__Fields fields;
};

struct InvalidTimeZoneException__VTable {
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

struct InvalidTimeZoneException__StaticFields {
};

struct InvalidTimeZoneException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InvalidTimeZoneException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InvalidTimeZoneException__VTable vtable;
};

enum class MidpointRounding__Enum : int32_t {
    ToEven = 0x00000000,
    AwayFromZero = 0x00000001,
};

struct MidpointRounding__Enum__Boxed {
    struct MidpointRounding__Enum__Class *klass;
    MonitorData *monitor;
    MidpointRounding__Enum value;
    
};

struct MidpointRounding__Enum__VTable {
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

struct MidpointRounding__Enum__StaticFields {
};

struct MidpointRounding__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MidpointRounding__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MidpointRounding__Enum__VTable vtable;
};

struct DoublePtr {
    struct DoublePtr__Class *klass;
    MonitorData *monitor;
};

struct DoublePtr__VTable {
};

struct DoublePtr__StaticFields {
};

struct DoublePtr__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct DoublePtr__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct DoublePtr__VTable vtable;
};

struct MethodAccessException__Fields {
    struct MemberAccessException__Fields _;
};

struct MethodAccessException {
    struct MethodAccessException__Class *klass;
    MonitorData *monitor;
    struct MethodAccessException__Fields fields;
};

struct MethodAccessException__VTable {
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

struct MethodAccessException__StaticFields {
};

struct MethodAccessException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MethodAccessException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MethodAccessException__VTable vtable;
};

struct MissingMemberException__Fields {
    struct MemberAccessException__Fields _;
    struct String *ClassName;
    struct String *MemberName;
    struct Byte__Array *Signature;
};

struct MissingMemberException {
    struct MissingMemberException__Class *klass;
    MonitorData *monitor;
    struct MissingMemberException__Fields fields;
};

struct MissingFieldException__Fields {
    struct MissingMemberException__Fields _;
};

struct MissingFieldException {
    struct MissingFieldException__Class *klass;
    MonitorData *monitor;
    struct MissingFieldException__Fields fields;
};

struct MissingMemberException__VTable {
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

struct MissingMemberException__StaticFields {
};

struct MissingMemberException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MissingMemberException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MissingMemberException__VTable vtable;
};

struct MissingFieldException__VTable {
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

struct MissingFieldException__StaticFields {
};

struct MissingFieldException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MissingFieldException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MissingFieldException__VTable vtable;
};

struct MissingMethodException__Fields {
    struct MissingMemberException__Fields _;
    struct String *signature;
};

struct MissingMethodException {
    struct MissingMethodException__Class *klass;
    MonitorData *monitor;
    struct MissingMethodException__Fields fields;
};

struct MissingMethodException__VTable {
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

struct MissingMethodException__StaticFields {
};

struct MissingMethodException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MissingMethodException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MissingMethodException__VTable vtable;
};

struct MulticastNotSupportedException__Fields {
    struct SystemException__Fields _;
};

struct MulticastNotSupportedException {
    struct MulticastNotSupportedException__Class *klass;
    MonitorData *monitor;
    struct MulticastNotSupportedException__Fields fields;
};

struct MulticastNotSupportedException__VTable {
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

struct MulticastNotSupportedException__StaticFields {
};

struct MulticastNotSupportedException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MulticastNotSupportedException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MulticastNotSupportedException__VTable vtable;
};

struct NonSerializedAttribute {
    struct NonSerializedAttribute__Class *klass;
    MonitorData *monitor;
};

struct NonSerializedAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
};

struct NonSerializedAttribute__StaticFields {
};

struct NonSerializedAttribute__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NonSerializedAttribute__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NonSerializedAttribute__VTable vtable;
};

struct NotImplementedException__Fields {
    struct SystemException__Fields _;
};

struct NotImplementedException {
    struct NotImplementedException__Class *klass;
    MonitorData *monitor;
    struct NotImplementedException__Fields fields;
};

struct NotImplementedException__VTable {
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

struct NotImplementedException__StaticFields {
};

struct NotImplementedException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NotImplementedException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NotImplementedException__VTable vtable;
};

struct NotSupportedException__Fields {
    struct SystemException__Fields _;
};

struct NotSupportedException {
    struct NotSupportedException__Class *klass;
    MonitorData *monitor;
    struct NotSupportedException__Fields fields;
};

struct NotSupportedException__VTable {
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

struct NotSupportedException__StaticFields {
};

struct NotSupportedException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NotSupportedException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NotSupportedException__VTable vtable;
};

struct NullReferenceException__Fields {
    struct SystemException__Fields _;
};

struct NullReferenceException {
    struct NullReferenceException__Class *klass;
    MonitorData *monitor;
    struct NullReferenceException__Fields fields;
};

struct NullReferenceException__VTable {
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

struct NullReferenceException__StaticFields {
};

struct NullReferenceException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NullReferenceException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NullReferenceException__VTable vtable;
};

struct Number_NumberBuffer {
    uint8_t *baseAddress;
    uint16_t *digits;
    int32_t precision;
    int32_t scale;
    bool sign;
};

struct Number_NumberBuffer__Boxed {
    struct Number_NumberBuffer__Class *klass;
    MonitorData *monitor;
    struct Number_NumberBuffer fields;
};

struct Number_NumberBuffer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Number_NumberBuffer__StaticFields {
    int32_t NumberBufferBytes;
};

struct Number_NumberBuffer__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Number_NumberBuffer__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Number_NumberBuffer__VTable vtable;
};

struct Number_NumberBuffer___VTable {
};

struct Number_NumberBuffer___StaticFields {
};

struct Number_NumberBuffer___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Number_NumberBuffer___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Number_NumberBuffer___VTable vtable;
};

struct UInt64__1__VTable {
};

struct UInt64__1__StaticFields {
};

struct UInt64__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UInt64__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UInt64__1__VTable vtable;
};

struct CharPtr___VTable {
};

struct CharPtr___StaticFields {
};

struct CharPtr___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CharPtr___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CharPtr___VTable vtable;
};

struct Single___VTable {
};

struct Single___StaticFields {
};

struct Single___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Single___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Single___VTable vtable;
};

struct ObjectDisposedException__Fields {
    struct InvalidOperationException__Fields _;
    struct String *objectName;
};

struct ObjectDisposedException {
    struct ObjectDisposedException__Class *klass;
    MonitorData *monitor;
    struct ObjectDisposedException__Fields fields;
};

struct ObjectDisposedException__VTable {
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

struct ObjectDisposedException__StaticFields {
};

struct ObjectDisposedException__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectDisposedException__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectDisposedException__VTable vtable;
};

struct __declspec(align(8)) ObsoleteAttribute__Fields {
    struct String *_message;
    bool _error;
};

}
