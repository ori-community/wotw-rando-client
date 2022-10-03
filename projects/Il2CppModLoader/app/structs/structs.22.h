namespace app {
    struct ConsoleKey__Enum__Boxed {
        struct ConsoleKey__Enum__Class* klass;
        MonitorData* monitor;
        ConsoleKey__Enum value;
    };

    enum class ConsoleModifiers__Enum : int32_t {
        Alt = 0x00000001,
        Shift = 0x00000002,
        Control = 0x00000004,
    };

    struct ConsoleModifiers__Enum__Boxed {
        struct ConsoleModifiers__Enum__Class* klass;
        MonitorData* monitor;
        ConsoleModifiers__Enum value;
    };

    struct ConsoleKeyInfo {
        uint16_t _keyChar;
        ConsoleKey__Enum _key;

        ConsoleModifiers__Enum _mods;
    };

    struct ConsoleKeyInfo__Boxed {
        struct ConsoleKeyInfo__Class* klass;
        MonitorData* monitor;
        struct ConsoleKeyInfo fields;
    };

    struct ConsoleKey__Enum__VTable {
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

    struct ConsoleKey__Enum__StaticFields {
    };

    struct ConsoleKey__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleKey__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleKey__Enum__VTable vtable;
    };

    struct ConsoleModifiers__Enum__VTable {
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

    struct ConsoleModifiers__Enum__StaticFields {
    };

    struct ConsoleModifiers__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleModifiers__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleModifiers__Enum__VTable vtable;
    };

    struct ConsoleKeyInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ConsoleKeyInfo__StaticFields {
    };

    struct ConsoleKeyInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ConsoleKeyInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ConsoleKeyInfo__VTable vtable;
    };

    struct ContextBoundObject__Fields {
        struct MarshalByRefObject__Fields _;
    };

    struct ContextBoundObject {
        struct ContextBoundObject__Class* klass;
        MonitorData* monitor;
        struct ContextBoundObject__Fields fields;
    };

    struct ContextBoundObject__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CreateObjRef;
        VirtualInvokeData InitializeLifetimeService;
    };

    struct ContextBoundObject__StaticFields {
    };

    struct ContextBoundObject__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContextBoundObject__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContextBoundObject__VTable vtable;
    };

    struct ContextStaticAttribute {
        struct ContextStaticAttribute__Class* klass;
        MonitorData* monitor;
    };

    struct ContextStaticAttribute__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_TypeId;
        VirtualInvokeData Match;
        VirtualInvokeData IsDefaultAttribute;
    };

    struct ContextStaticAttribute__StaticFields {
    };

    struct ContextStaticAttribute__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ContextStaticAttribute__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ContextStaticAttribute__VTable vtable;
    };

    struct IConvertible {
        struct IConvertible__Class* klass;
        MonitorData* monitor;
    };

    struct IConvertible__VTable {
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData ToBoolean;
        VirtualInvokeData ToChar;
        VirtualInvokeData ToSByte;
        VirtualInvokeData ToByte;
        VirtualInvokeData ToInt16;
        VirtualInvokeData ToUInt16;
        VirtualInvokeData ToInt32;
        VirtualInvokeData ToUInt32;
        VirtualInvokeData ToInt64;
        VirtualInvokeData ToUInt64;
        VirtualInvokeData ToSingle;
        VirtualInvokeData ToDouble;
        VirtualInvokeData ToDecimal;
        VirtualInvokeData ToDateTime;
        VirtualInvokeData ToString;
        VirtualInvokeData ToType;
    };

    struct IConvertible__StaticFields {
    };

    struct IConvertible__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IConvertible__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IConvertible__VTable vtable;
    };

    enum class Base64FormattingOptions__Enum : int32_t {
        None = 0x00000000,
        InsertLineBreaks = 0x00000001,
    };

    struct Base64FormattingOptions__Enum__Boxed {
        struct Base64FormattingOptions__Enum__Class* klass;
        MonitorData* monitor;
        Base64FormattingOptions__Enum value;
    };

    struct Base64FormattingOptions__Enum__VTable {
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

    struct Base64FormattingOptions__Enum__StaticFields {
    };

    struct Base64FormattingOptions__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Base64FormattingOptions__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Base64FormattingOptions__Enum__VTable vtable;
    };

    enum class DateTimeKind__Enum : int32_t {
        Unspecified = 0x00000000,
        Utc = 0x00000001,
        Local = 0x00000002,
    };

    struct DateTimeKind__Enum__Boxed {
        struct DateTimeKind__Enum__Class* klass;
        MonitorData* monitor;
        DateTimeKind__Enum value;
    };

    struct DateTimeKind__Enum__VTable {
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

    struct DateTimeKind__Enum__StaticFields {
    };

    struct DateTimeKind__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DateTimeKind__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DateTimeKind__Enum__VTable vtable;
    };

    struct DateTimeOffset {
        struct DateTime m_dateTime;
        int16_t m_offsetMinutes;
    };

    struct DateTimeOffset__Boxed {
        struct DateTimeOffset__Class* klass;
        MonitorData* monitor;
        struct DateTimeOffset fields;
    };

    struct DateTimeOffset__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_IComparable_CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
        VirtualInvokeData System_Runtime_Serialization_IDeserializationCallback_OnDeserialization;
        VirtualInvokeData CompareTo;
        VirtualInvokeData Equals_1;
    };

    struct DateTimeOffset__StaticFields {
        struct DateTimeOffset MinValue;
        struct DateTimeOffset MaxValue;
    };

    struct DateTimeOffset__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DateTimeOffset__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DateTimeOffset__VTable vtable;
    };

    struct DateTimeOffset___VTable {
    };

    struct DateTimeOffset___StaticFields {
    };

    struct DateTimeOffset___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DateTimeOffset___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DateTimeOffset___VTable vtable;
    };

    struct DBNull {
        struct DBNull__Class* klass;
        MonitorData* monitor;
    };

    struct DBNull__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
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
        VirtualInvokeData ToString_1;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct DBNull__StaticFields {
        struct DBNull* Value;
    };

    struct DBNull__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DBNull__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DBNull__VTable vtable;
    };

    struct Decimal___VTable {
    };

    struct Decimal___StaticFields {
    };

    struct Decimal___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Decimal___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Decimal___VTable vtable;
    };

    struct __declspec(align(8)) DefaultBinder_BinderState__Fields {
        struct Int32__Array* m_argsMap;
        int32_t m_originalSize;
        bool m_isParamArray;
    };

    struct DefaultBinder_BinderState {
        struct DefaultBinder_BinderState__Class* klass;
        MonitorData* monitor;
        struct DefaultBinder_BinderState__Fields fields;
    };

    struct DefaultBinder_BinderState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DefaultBinder_BinderState__StaticFields {
    };

    struct DefaultBinder_BinderState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DefaultBinder_BinderState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DefaultBinder_BinderState__VTable vtable;
    };

    struct DefaultBinder_c {
        struct DefaultBinder_c__Class* klass;
        MonitorData* monitor;
    };

    struct Predicate_1_Type___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Predicate_1_Type_ {
        struct Predicate_1_Type___Class* klass;
        MonitorData* monitor;
        struct Predicate_1_Type___Fields fields;
    };

    struct Predicate_1_Type___VTable {
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

    struct Predicate_1_Type___StaticFields {
    };

    struct Predicate_1_Type___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Predicate_1_Type___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Predicate_1_Type___VTable vtable;
    };

    struct DefaultBinder_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DefaultBinder_c__StaticFields {
        struct DefaultBinder_c* __9;
        struct Predicate_1_Type_* __9__3_0;
    };

    struct DefaultBinder_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DefaultBinder_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DefaultBinder_c__VTable vtable;
    };

    struct DivideByZeroException__Fields {
        struct ArithmeticException__Fields _;
    };

    struct DivideByZeroException {
        struct DivideByZeroException__Class* klass;
        MonitorData* monitor;
        struct DivideByZeroException__Fields fields;
    };

    struct DivideByZeroException__VTable {
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

    struct DivideByZeroException__StaticFields {
    };

    struct DivideByZeroException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DivideByZeroException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DivideByZeroException__VTable vtable;
    };

    struct TypeLoadException__Fields {
        struct SystemException__Fields _;
        struct String* ClassName;
        struct String* AssemblyName;
        struct String* MessageArg;
        int32_t ResourceId;
    };

    struct TypeLoadException {
        struct TypeLoadException__Class* klass;
        MonitorData* monitor;
        struct TypeLoadException__Fields fields;
    };

    struct DllNotFoundException__Fields {
        struct TypeLoadException__Fields _;
    };

    struct DllNotFoundException {
        struct DllNotFoundException__Class* klass;
        MonitorData* monitor;
        struct DllNotFoundException__Fields fields;
    };

    struct TypeLoadException__VTable {
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

    struct TypeLoadException__StaticFields {
    };

    struct TypeLoadException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TypeLoadException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TypeLoadException__VTable vtable;
    };

    struct DllNotFoundException__VTable {
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

    struct DllNotFoundException__StaticFields {
    };

    struct DllNotFoundException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DllNotFoundException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DllNotFoundException__VTable vtable;
    };

    struct Double___VTable {
    };

    struct Double___StaticFields {
    };

    struct Double___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Double___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Double___VTable vtable;
    };

    struct Empty {
        struct Empty__Class* klass;
        MonitorData* monitor;
    };

    struct Empty__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetObjectData;
    };

    struct Empty__StaticFields {
        struct Empty* Value;
    };

    struct Empty__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Empty__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Empty__VTable vtable;
    };

    struct EntryPointNotFoundException__Fields {
        struct TypeLoadException__Fields _;
    };

    struct EntryPointNotFoundException {
        struct EntryPointNotFoundException__Class* klass;
        MonitorData* monitor;
        struct EntryPointNotFoundException__Fields fields;
    };

    struct EntryPointNotFoundException__VTable {
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

    struct EntryPointNotFoundException__StaticFields {
    };

    struct EntryPointNotFoundException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntryPointNotFoundException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntryPointNotFoundException__VTable vtable;
    };

    struct __declspec(align(8)) Enum_ValuesAndNames__Fields {
        struct UInt64__Array* Values;
        struct String__Array* Names;
    };

    struct Enum_ValuesAndNames {
        struct Enum_ValuesAndNames__Class* klass;
        MonitorData* monitor;
        struct Enum_ValuesAndNames__Fields fields;
    };

    struct UInt64__Array {
        struct UInt64__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        uint64_t vector[32];
    };

    struct UInt64__Array__VTable {
    };

    struct UInt64__Array__StaticFields {
    };

    struct UInt64__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt64__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt64__Array__VTable vtable;
    };

    struct Enum_ValuesAndNames__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Enum_ValuesAndNames__StaticFields {
    };

    struct Enum_ValuesAndNames__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enum_ValuesAndNames__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enum_ValuesAndNames__VTable vtable;
    };

    struct UInt64___VTable {
    };

    struct UInt64___StaticFields {
    };

    struct UInt64___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UInt64___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UInt64___VTable vtable;
    };

    struct String___VTable {
    };

    struct String___StaticFields {
    };

    struct String___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct String___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct String___VTable vtable;
    };

    enum class Enum_ParseFailureKind__Enum : int32_t {
        None = 0x00000000,
        Argument = 0x00000001,
        ArgumentNull = 0x00000002,
        ArgumentWithParameter = 0x00000003,
        UnhandledException = 0x00000004,
    };

    struct Enum_ParseFailureKind__Enum__Boxed {
        struct Enum_ParseFailureKind__Enum__Class* klass;
        MonitorData* monitor;
        Enum_ParseFailureKind__Enum value;
    };

    struct Enum_EnumResult {
        struct Object* parsedEnum;
        bool canThrow;
        Enum_ParseFailureKind__Enum m_failure;

        struct String* m_failureMessageID;
        struct String* m_failureParameter;
        struct Object* m_failureMessageFormatArgument;
        struct Exception* m_innerException;
    };

    struct Enum_EnumResult__Boxed {
        struct Enum_EnumResult__Class* klass;
        MonitorData* monitor;
        struct Enum_EnumResult fields;
    };

    struct Enum_ParseFailureKind__Enum__VTable {
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

    struct Enum_ParseFailureKind__Enum__StaticFields {
    };

    struct Enum_ParseFailureKind__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enum_ParseFailureKind__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enum_ParseFailureKind__Enum__VTable vtable;
    };

    struct Enum_EnumResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Enum_EnumResult__StaticFields {
    };

    struct Enum_EnumResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enum_EnumResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enum_EnumResult__VTable vtable;
    };

    struct Enum_EnumResult___VTable {
    };

    struct Enum_EnumResult___StaticFields {
    };

    struct Enum_EnumResult___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Enum_EnumResult___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Enum_EnumResult___VTable vtable;
    };

    enum class Exception_ExceptionMessageKind__Enum : int32_t {
        ThreadAbort = 0x00000001,
        ThreadInterrupted = 0x00000002,
        OutOfMemory = 0x00000003,
    };

    struct Exception_ExceptionMessageKind__Enum__Boxed {
        struct Exception_ExceptionMessageKind__Enum__Class* klass;
        MonitorData* monitor;
        Exception_ExceptionMessageKind__Enum value;
    };

    struct Exception_ExceptionMessageKind__Enum__VTable {
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

    struct Exception_ExceptionMessageKind__Enum__StaticFields {
    };

    struct Exception_ExceptionMessageKind__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Exception_ExceptionMessageKind__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Exception_ExceptionMessageKind__Enum__VTable vtable;
    };

    struct ExecutionEngineException__Fields {
        struct SystemException__Fields _;
    };

    struct ExecutionEngineException {
        struct ExecutionEngineException__Class* klass;
        MonitorData* monitor;
        struct ExecutionEngineException__Fields fields;
    };

    struct ExecutionEngineException__VTable {
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

    struct ExecutionEngineException__StaticFields {
    };

    struct ExecutionEngineException__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ExecutionEngineException__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ExecutionEngineException__VTable vtable;
    };

} // namespace app
