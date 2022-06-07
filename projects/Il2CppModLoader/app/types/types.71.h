namespace app {
struct IEnumerable_1_System_Reflection_PropertyInfo_ {
    struct IEnumerable_1_System_Reflection_PropertyInfo___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_Reflection_PropertyInfo___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_Reflection_PropertyInfo___StaticFields {
};

struct IEnumerable_1_System_Reflection_PropertyInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_Reflection_PropertyInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_Reflection_PropertyInfo___VTable vtable;
};

struct EventSourceOptions___VTable {
};

struct EventSourceOptions___StaticFields {
};

struct EventSourceOptions___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventSourceOptions___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventSourceOptions___VTable vtable;
};

struct __declspec(align(8)) List_1_System_Byte___Fields {
    struct Byte__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Byte_ {
    struct List_1_System_Byte___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Byte___Fields fields;
};

struct IEnumerator_1_System_Byte_ {
    struct IEnumerator_1_System_Byte___Class *klass;
    MonitorData *monitor;
};

struct IEnumerator_1_System_Byte___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_Byte___StaticFields {
};

struct IEnumerator_1_System_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_Byte___VTable vtable;
};

struct List_1_System_Byte___VTable {
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

struct List_1_System_Byte___StaticFields {
    struct Byte__Array *_emptyArray;
};

struct List_1_System_Byte___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_System_Byte___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_System_Byte___VTable vtable;
};

enum class EventChannel__Enum : uint8_t {
    None = 0x00,
    Admin = 0x10,
    Operational = 0x11,
    Analytic = 0x12,
    Debug = 0x13,
};

struct EventChannel__Enum__Boxed {
    struct EventChannel__Enum__Class *klass;
    MonitorData *monitor;
    EventChannel__Enum value;
    
};

struct EventChannel__Enum__VTable {
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

struct EventChannel__Enum__StaticFields {
};

struct EventChannel__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventChannel__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventChannel__Enum__VTable vtable;
};

enum class EventManifestOptions__Enum : int32_t {
    None = 0x00000000,
    Strict = 0x00000001,
    AllCultures = 0x00000002,
    OnlyIfNeededForRegistration = 0x00000004,
    AllowEventSourceOverride = 0x00000008,
};

struct EventManifestOptions__Enum__Boxed {
    struct EventManifestOptions__Enum__Class *klass;
    MonitorData *monitor;
    EventManifestOptions__Enum value;
    
};

struct EventManifestOptions__Enum__VTable {
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

struct EventManifestOptions__Enum__StaticFields {
};

struct EventManifestOptions__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventManifestOptions__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventManifestOptions__Enum__VTable vtable;
};

struct EventSource_EventDataPtr___VTable {
};

struct EventSource_EventDataPtr___StaticFields {
};

struct EventSource_EventDataPtr___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventSource_EventDataPtr___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventSource_EventDataPtr___VTable vtable;
};

struct EventSource_EventMetadata___VTable {
};

struct EventSource_EventMetadata___StaticFields {
};

struct EventSource_EventMetadata___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EventSource_EventMetadata___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EventSource_EventMetadata___VTable vtable;
};

struct ParameterInfo___VTable {
};

struct ParameterInfo___StaticFields {
};

struct ParameterInfo___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ParameterInfo___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ParameterInfo___VTable vtable;
};

struct __declspec(align(8)) ManifestBuilder__Fields {
    struct Dictionary_2_System_Int32_System_String_ *opcodeTab;
    struct Dictionary_2_System_Int32_System_String_ *taskTab;
    struct Dictionary_2_System_UInt64_System_String_ *keywordTab;
    struct Dictionary_2_System_String_System_Type_ *mapsTab;
    struct Dictionary_2_System_String_System_String_ *stringTab;
    struct StringBuilder *sb;
    struct StringBuilder *events;
    struct StringBuilder *templates;
    struct ResourceManager *resources;
    EventManifestOptions__Enum flags;
    
    struct IList_1_System_String_ *errors;
    struct Dictionary_2_System_String_List_1_System_Int32_ *perEventByteArrayArgIndices;
    struct String *eventName;
    int32_t numParams;
    struct List_1_System_Int32_ *byteArrArgIndices;
};

struct ManifestBuilder {
    struct ManifestBuilder__Class *klass;
    MonitorData *monitor;
    struct ManifestBuilder__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_UInt64_System_String___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_UInt64_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_UInt64_System_String_ {
    struct Dictionary_2_System_UInt64_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_UInt64_System_String___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String_ {
    int32_t hashCode;
    int32_t next;
    uint64_t key;
    struct String *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String_ vector[32];
};

struct IEqualityComparer_1_System_UInt64_ {
    struct IEqualityComparer_1_System_UInt64___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___Fields {
    struct Dictionary_2_System_UInt64_System_String_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___Fields fields;
};

struct IEnumerator_1_System_UInt64_ {
    struct IEnumerator_1_System_UInt64___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___Fields {
    struct Dictionary_2_System_UInt64_System_String_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___Fields fields;
};

struct ICollection_1_System_UInt64_ {
    struct ICollection_1_System_UInt64___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_UInt64_System_String_ {
    uint64_t key;
    struct String *value;
};

struct KeyValuePair_2_System_UInt64_System_String___Boxed {
    struct KeyValuePair_2_System_UInt64_System_String___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_UInt64_System_String_ fields;
};

struct KeyValuePair_2_System_UInt64_System_String___Array {
    struct KeyValuePair_2_System_UInt64_System_String___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_UInt64_System_String_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_UInt64_System_String_ {
    struct IEnumerator_1_KeyValuePair_2_System_UInt64_System_String___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_UInt64_ {
    struct IEnumerable_1_System_UInt64___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_System_Type___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_System_Type_ {
    struct Dictionary_2_System_String_System_Type___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_System_Type___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct Type *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___Fields {
    struct Dictionary_2_System_String_System_Type_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___Fields {
    struct Dictionary_2_System_String_System_Type_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___Fields fields;
};

struct KeyValuePair_2_System_String_System_Type_ {
    struct String *key;
    struct Type *value;
};

struct KeyValuePair_2_System_String_System_Type___Boxed {
    struct KeyValuePair_2_System_String_System_Type___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_System_Type_ fields;
};

struct KeyValuePair_2_System_String_System_Type___Array {
    struct KeyValuePair_2_System_String_System_Type___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_System_Type_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_System_Type_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_System_Type___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_System_String_List_1_System_Int32___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_Int32_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_Int32_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_List_1_System_Int32_ {
    struct Dictionary_2_System_String_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_List_1_System_Int32___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct List_1_System_Int32_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32_ fields;
};

struct __declspec(align(8)) List_1_System_Int32___Fields {
    struct Int32__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_System_Int32_ {
    struct List_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct List_1_System_Int32___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_List_1_System_Int32_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_Int32___Fields {
    struct Dictionary_2_System_String_List_1_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_Int32_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_List_1_System_Int32___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_Int32___Fields {
    struct Dictionary_2_System_String_List_1_System_Int32_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_Int32_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_List_1_System_Int32___Fields fields;
};

struct List_1_System_Int32___Array {
    struct List_1_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_System_Int32_ *vector[32];
};

struct IEnumerator_1_List_1_System_Int32_ {
    struct IEnumerator_1_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_List_1_System_Int32_ {
    struct ICollection_1_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_List_1_System_Int32_ {
    struct String *key;
    struct List_1_System_Int32_ *value;
};

struct KeyValuePair_2_System_String_List_1_System_Int32___Boxed {
    struct KeyValuePair_2_System_String_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_List_1_System_Int32_ fields;
};

struct KeyValuePair_2_System_String_List_1_System_Int32___Array {
    struct KeyValuePair_2_System_String_List_1_System_Int32___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_List_1_System_Int32_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_Int32_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_System_Int32_ {
    struct IEnumerable_1_List_1_System_Int32___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt64_System_String___Array__VTable vtable;
};

struct IEqualityComparer_1_System_UInt64___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_System_UInt64___StaticFields {
};

struct IEqualityComparer_1_System_UInt64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_System_UInt64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_System_UInt64___VTable vtable;
};

struct IEnumerator_1_System_UInt64___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_UInt64___StaticFields {
};

struct IEnumerator_1_System_UInt64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_UInt64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_UInt64___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt64_System_String___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt64_System_String___VTable vtable;
};

struct ICollection_1_System_UInt64___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_UInt64___StaticFields {
};

struct ICollection_1_System_UInt64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_UInt64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_UInt64___VTable vtable;
};

struct KeyValuePair_2_System_UInt64_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_UInt64_System_String___StaticFields {
};

struct KeyValuePair_2_System_UInt64_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_UInt64_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_UInt64_System_String___VTable vtable;
};

struct KeyValuePair_2_System_UInt64_System_String___Array__VTable {
};

struct KeyValuePair_2_System_UInt64_System_String___Array__StaticFields {
};

struct KeyValuePair_2_System_UInt64_System_String___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_UInt64_System_String___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_UInt64_System_String___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_UInt64_System_String___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_UInt64_System_String___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_UInt64_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_UInt64_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_UInt64_System_String___VTable vtable;
};

struct IEnumerable_1_System_UInt64___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_UInt64___StaticFields {
};

struct IEnumerable_1_System_UInt64___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_UInt64___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_UInt64___VTable vtable;
};

struct Dictionary_2_System_UInt64_System_String___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Item;
    VirtualInvokeData set_Item;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IDictionary_TKey_TValue__get_Values;
    VirtualInvokeData ContainsKey;
    VirtualInvokeData Add;
    VirtualInvokeData Remove;
    VirtualInvokeData TryGetValue;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Add;
    VirtualInvokeData Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Contains;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_System_Collections_Generic_KeyValuePair_TKey_TValue___Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_System_Collections_Generic_KeyValuePair_TKey_TValue___GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_get_Item;
    VirtualInvokeData System_Collections_IDictionary_set_Item;
    VirtualInvokeData System_Collections_IDictionary_get_Keys;
    VirtualInvokeData System_Collections_IDictionary_get_Values;
    VirtualInvokeData System_Collections_IDictionary_Contains;
    VirtualInvokeData System_Collections_IDictionary_Add;
    VirtualInvokeData Clear_1;
    VirtualInvokeData System_Collections_IDictionary_get_IsReadOnly;
    VirtualInvokeData System_Collections_IDictionary_get_IsFixedSize;
    VirtualInvokeData System_Collections_IDictionary_GetEnumerator;
    VirtualInvokeData System_Collections_IDictionary_Remove;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData ContainsKey_1;
    VirtualInvokeData TryGetValue_1;
    VirtualInvokeData get_Item_1;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Keys;
    VirtualInvokeData System_Collections_Generic_IReadOnlyDictionary_TKey_TValue__get_Values;
    VirtualInvokeData get_Count_2;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData OnDeserialization;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData OnDeserialization_1;
};

struct Dictionary_2_System_UInt64_System_String___StaticFields {
};

struct Dictionary_2_System_UInt64_System_String___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_UInt64_System_String___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_UInt64_System_String___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_System_Type___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_System_Type___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Count;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
    VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
    VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
    VirtualInvokeData System_Collections_ICollection_CopyTo;
    VirtualInvokeData get_Count_1;
    VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
    VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
    VirtualInvokeData get_Count_2;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_System_Type___VTable vtable;
};

struct KeyValuePair_2_System_String_System_Type___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_System_Type___StaticFields {
};

struct KeyValuePair_2_System_String_System_Type___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_System_Type___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_System_Type___VTable vtable;
};

}
