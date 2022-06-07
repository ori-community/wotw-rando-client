namespace app {
struct EventPayload__StaticFields {
};

struct EventPayload__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventPayload__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventPayload__VTable vtable;
};

struct __declspec(align(8)) EventPayload_GetEnumerator_d_17__Fields {
    int32_t __1__state;
    struct KeyValuePair_2_System_String_System_Object_ __2__current;
    struct EventPayload *__4__this;
    int32_t _i_5__1;
};

struct EventPayload_GetEnumerator_d_17 {
    struct EventPayload_GetEnumerator_d_17__Class *klass;
    MonitorData *monitor;
    struct EventPayload_GetEnumerator_d_17__Fields fields;
};

struct EventPayload_GetEnumerator_d_17__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String_System_Object___get_Current;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData MoveNext;
    VirtualInvokeData System_Collections_IEnumerator_get_Current;
    VirtualInvokeData System_Collections_IEnumerator_Reset;
};

struct EventPayload_GetEnumerator_d_17__StaticFields {
};

struct EventPayload_GetEnumerator_d_17__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventPayload_GetEnumerator_d_17__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventPayload_GetEnumerator_d_17__VTable vtable;
};

struct EventSourceOptions {
    EventKeywords__Enum keywords;
    
    EventTags__Enum tags;
    
    EventActivityOptions__Enum activityOptions;
    
    uint8_t level;
    uint8_t opcode;
    uint8_t valuesSet;
};

struct EventSourceOptions__Boxed {
    struct EventSourceOptions__Class *klass;
    MonitorData *monitor;
    struct EventSourceOptions fields;
};

struct EventSourceOptions__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct EventSourceOptions__StaticFields {
};

struct EventSourceOptions__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventSourceOptions__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventSourceOptions__VTable vtable;
};

struct __declspec(align(8)) FieldMetadata__Fields {
    struct String *name;
    int32_t nameSize;
    EventFieldTags__Enum tags;
    
    struct Byte__Array *custom;
    uint16_t fixedCount;
    uint8_t inType;
    uint8_t outType;
};

struct FieldMetadata {
    struct FieldMetadata__Class *klass;
    MonitorData *monitor;
    struct FieldMetadata__Fields fields;
};

enum class TraceLoggingDataType__Enum : int32_t {
    Nil = 0x00000000,
    Utf16String = 0x00000001,
    MbcsString = 0x00000002,
    Int8 = 0x00000003,
    UInt8 = 0x00000004,
    Int16 = 0x00000005,
    UInt16 = 0x00000006,
    Int32 = 0x00000007,
    UInt32 = 0x00000008,
    Int64 = 0x00000009,
    UInt64 = 0x0000000a,
    Float = 0x0000000b,
    Double = 0x0000000c,
    Boolean32 = 0x0000000d,
    Binary = 0x0000000e,
    Guid = 0x0000000f,
    FileTime = 0x00000011,
    SystemTime = 0x00000012,
    HexInt32 = 0x00000014,
    HexInt64 = 0x00000015,
    CountedUtf16String = 0x00000016,
    CountedMbcsString = 0x00000017,
    Struct = 0x00000018,
    Char16 = 0x00000206,
    Char8 = 0x00000204,
    Boolean8 = 0x00000304,
    HexInt8 = 0x00000404,
    HexInt16 = 0x00000406,
    Utf16Xml = 0x00000b01,
    MbcsXml = 0x00000b02,
    CountedUtf16Xml = 0x00000b16,
    CountedMbcsXml = 0x00000b17,
    Utf16Json = 0x00000c01,
    MbcsJson = 0x00000c02,
    CountedUtf16Json = 0x00000c16,
    CountedMbcsJson = 0x00000c17,
    HResult = 0x00000f07,
};

struct TraceLoggingDataType__Enum__Boxed {
    struct TraceLoggingDataType__Enum__Class *klass;
    MonitorData *monitor;
    TraceLoggingDataType__Enum value;
    
};

struct FieldMetadata__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct FieldMetadata__StaticFields {
};

struct FieldMetadata__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FieldMetadata__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FieldMetadata__VTable vtable;
};

struct TraceLoggingDataType__Enum__VTable {
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

struct TraceLoggingDataType__Enum__StaticFields {
};

struct TraceLoggingDataType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingDataType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingDataType__Enum__VTable vtable;
};

struct __declspec(align(8)) PropertyAnalysis__Fields {
    struct String *name;
    struct MethodInfo_1 *getterInfo;
    struct TraceLoggingTypeInfo *typeInfo;
    struct EventFieldAttribute *fieldAttribute;
};

struct PropertyAnalysis {
    struct PropertyAnalysis__Class *klass;
    MonitorData *monitor;
    struct PropertyAnalysis__Fields fields;
};

struct PropertyAnalysis__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct PropertyAnalysis__StaticFields {
};

struct PropertyAnalysis__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PropertyAnalysis__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PropertyAnalysis__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Boolean___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_Boolean_ {
    struct TraceLoggingTypeInfo_1_System_Boolean___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_Boolean___Fields fields;
};

struct BooleanTypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_Boolean___Fields _;
};

struct BooleanTypeInfo {
    struct BooleanTypeInfo__Class *klass;
    MonitorData *monitor;
    struct BooleanTypeInfo__Fields fields;
};

struct __declspec(align(8)) TraceLoggingMetadataCollector__Fields {
    struct TraceLoggingMetadataCollector_Impl *impl;
    struct FieldMetadata *currentGroup;
    int32_t bufferedArrayFieldCount;
    EventFieldTags__Enum _Tags_k__BackingField;
    
};

struct TraceLoggingMetadataCollector {
    struct TraceLoggingMetadataCollector__Class *klass;
    MonitorData *monitor;
    struct TraceLoggingMetadataCollector__Fields fields;
};

struct __declspec(align(8)) TraceLoggingMetadataCollector_Impl__Fields {
    struct List_1_System_Diagnostics_Tracing_FieldMetadata_ *fields;
    int16_t scratchSize;
    int8_t dataCount;
    int8_t pinCount;
    int32_t bufferNesting;
    bool scalar;
};

struct TraceLoggingMetadataCollector_Impl {
    struct TraceLoggingMetadataCollector_Impl__Class *klass;
    MonitorData *monitor;
    struct TraceLoggingMetadataCollector_Impl__Fields fields;
};

struct __declspec(align(8)) List_1_System_Diagnostics_Tracing_FieldMetadata___Fields {
    struct FieldMetadata__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Diagnostics_Tracing_FieldMetadata_ {
    struct List_1_System_Diagnostics_Tracing_FieldMetadata___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Diagnostics_Tracing_FieldMetadata___Fields fields;
};

struct FieldMetadata__Array {
    struct FieldMetadata__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct FieldMetadata *vector[32];
};

struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata_ {
    struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___Class *klass;
    MonitorData *monitor;
};

struct TraceLoggingDataCollector {
    struct TraceLoggingDataCollector__Class *klass;
    MonitorData *monitor;
};

struct FieldMetadata__Array__VTable {
};

struct FieldMetadata__Array__StaticFields {
};

struct FieldMetadata__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct FieldMetadata__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct FieldMetadata__Array__VTable vtable;
};

struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields {
};

struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Diagnostics_Tracing_FieldMetadata___VTable vtable;
};

struct List_1_System_Diagnostics_Tracing_FieldMetadata___VTable {
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

struct List_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields {
    struct FieldMetadata__Array *_emptyArray;
};

struct List_1_System_Diagnostics_Tracing_FieldMetadata___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Diagnostics_Tracing_FieldMetadata___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Diagnostics_Tracing_FieldMetadata___VTable vtable;
};

struct TraceLoggingMetadataCollector_Impl__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TraceLoggingMetadataCollector_Impl__StaticFields {
};

struct TraceLoggingMetadataCollector_Impl__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingMetadataCollector_Impl__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingMetadataCollector_Impl__VTable vtable;
};

struct TraceLoggingMetadataCollector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TraceLoggingMetadataCollector__StaticFields {
};

struct TraceLoggingMetadataCollector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingMetadataCollector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingMetadataCollector__VTable vtable;
};

struct TraceLoggingDataCollector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TraceLoggingDataCollector__StaticFields {
    struct TraceLoggingDataCollector *Instance;
};

struct TraceLoggingDataCollector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingDataCollector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingDataCollector__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Boolean___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_Boolean___StaticFields {
    struct TraceLoggingTypeInfo_1_System_Boolean_ *instance;
};

struct TraceLoggingTypeInfo_1_System_Boolean___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_Boolean___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_Boolean___VTable vtable;
};

struct BooleanTypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct BooleanTypeInfo__StaticFields {
};

struct BooleanTypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BooleanTypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BooleanTypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Byte___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_Byte_ {
    struct TraceLoggingTypeInfo_1_System_Byte___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_Byte___Fields fields;
};

struct ByteTypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_Byte___Fields _;
};

struct ByteTypeInfo {
    struct ByteTypeInfo__Class *klass;
    MonitorData *monitor;
    struct ByteTypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_Byte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_Byte___StaticFields {
    struct TraceLoggingTypeInfo_1_System_Byte_ *instance;
};

struct TraceLoggingTypeInfo_1_System_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_Byte___VTable vtable;
};

struct ByteTypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct ByteTypeInfo__StaticFields {
};

struct ByteTypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ByteTypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ByteTypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_SByte___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_SByte_ {
    struct TraceLoggingTypeInfo_1_System_SByte___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_SByte___Fields fields;
};

struct SByteTypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_SByte___Fields _;
};

struct SByteTypeInfo {
    struct SByteTypeInfo__Class *klass;
    MonitorData *monitor;
    struct SByteTypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_SByte___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_SByte___StaticFields {
    struct TraceLoggingTypeInfo_1_System_SByte_ *instance;
};

struct TraceLoggingTypeInfo_1_System_SByte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_SByte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_SByte___VTable vtable;
};

struct SByteTypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct SByteTypeInfo__StaticFields {
};

struct SByteTypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SByteTypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SByteTypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Int16___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_Int16_ {
    struct TraceLoggingTypeInfo_1_System_Int16___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_Int16___Fields fields;
};

struct Int16TypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_Int16___Fields _;
};

struct Int16TypeInfo {
    struct Int16TypeInfo__Class *klass;
    MonitorData *monitor;
    struct Int16TypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_Int16___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_Int16___StaticFields {
    struct TraceLoggingTypeInfo_1_System_Int16_ *instance;
};

struct TraceLoggingTypeInfo_1_System_Int16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_Int16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_Int16___VTable vtable;
};

struct Int16TypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct Int16TypeInfo__StaticFields {
};

struct Int16TypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int16TypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int16TypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_UInt16___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_UInt16_ {
    struct TraceLoggingTypeInfo_1_System_UInt16___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_UInt16___Fields fields;
};

struct UInt16TypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_UInt16___Fields _;
};

struct UInt16TypeInfo {
    struct UInt16TypeInfo__Class *klass;
    MonitorData *monitor;
    struct UInt16TypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_UInt16___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_UInt16___StaticFields {
    struct TraceLoggingTypeInfo_1_System_UInt16_ *instance;
};

struct TraceLoggingTypeInfo_1_System_UInt16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_UInt16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_UInt16___VTable vtable;
};

struct UInt16TypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct UInt16TypeInfo__StaticFields {
};

struct UInt16TypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UInt16TypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UInt16TypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Int32___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_Int32_ {
    struct TraceLoggingTypeInfo_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_Int32___Fields fields;
};

struct Int32TypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_Int32___Fields _;
};

struct Int32TypeInfo {
    struct Int32TypeInfo__Class *klass;
    MonitorData *monitor;
    struct Int32TypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_Int32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_Int32___StaticFields {
    struct TraceLoggingTypeInfo_1_System_Int32_ *instance;
};

struct TraceLoggingTypeInfo_1_System_Int32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_Int32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_Int32___VTable vtable;
};

struct Int32TypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct Int32TypeInfo__StaticFields {
};

struct Int32TypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int32TypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int32TypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_UInt32___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_UInt32_ {
    struct TraceLoggingTypeInfo_1_System_UInt32___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_UInt32___Fields fields;
};

struct UInt32TypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_UInt32___Fields _;
};

struct UInt32TypeInfo {
    struct UInt32TypeInfo__Class *klass;
    MonitorData *monitor;
    struct UInt32TypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_UInt32___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_UInt32___StaticFields {
    struct TraceLoggingTypeInfo_1_System_UInt32_ *instance;
};

struct TraceLoggingTypeInfo_1_System_UInt32___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_UInt32___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_UInt32___VTable vtable;
};

struct UInt32TypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct UInt32TypeInfo__StaticFields {
};

struct UInt32TypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UInt32TypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UInt32TypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_Int64___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_Int64_ {
    struct TraceLoggingTypeInfo_1_System_Int64___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_Int64___Fields fields;
};

struct Int64TypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_Int64___Fields _;
};

struct Int64TypeInfo {
    struct Int64TypeInfo__Class *klass;
    MonitorData *monitor;
    struct Int64TypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_Int64___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

struct TraceLoggingTypeInfo_1_System_Int64___StaticFields {
    struct TraceLoggingTypeInfo_1_System_Int64_ *instance;
};

struct TraceLoggingTypeInfo_1_System_Int64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TraceLoggingTypeInfo_1_System_Int64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TraceLoggingTypeInfo_1_System_Int64___VTable vtable;
};

struct Int64TypeInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData WriteMetadata;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData WriteData;
};

struct Int64TypeInfo__StaticFields {
};

struct Int64TypeInfo__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Int64TypeInfo__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Int64TypeInfo__VTable vtable;
};

struct TraceLoggingTypeInfo_1_System_UInt64___Fields {
    struct TraceLoggingTypeInfo__Fields _;
};

struct TraceLoggingTypeInfo_1_System_UInt64_ {
    struct TraceLoggingTypeInfo_1_System_UInt64___Class *klass;
    MonitorData *monitor;
    struct TraceLoggingTypeInfo_1_System_UInt64___Fields fields;
};

struct UInt64TypeInfo__Fields {
    struct TraceLoggingTypeInfo_1_System_UInt64___Fields _;
};

struct UInt64TypeInfo {
    struct UInt64TypeInfo__Class *klass;
    MonitorData *monitor;
    struct UInt64TypeInfo__Fields fields;
};

struct TraceLoggingTypeInfo_1_System_UInt64___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
    VirtualInvokeData WriteObjectData;
    VirtualInvokeData GetData;
    VirtualInvokeData __unknown_1;
};

}
