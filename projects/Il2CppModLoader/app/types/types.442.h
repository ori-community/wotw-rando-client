namespace app {
struct GetFilesRequest__StaticFields {
};

struct GetFilesRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetFilesRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetFilesRequest__VTable vtable;
};

struct GetFilesResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetFilesResponse__StaticFields {
};

struct GetFilesResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetFilesResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetFilesResponse__VTable vtable;
};

struct Action_1_PlayFab_DataModels_GetFilesResponse___VTable {
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

struct Action_1_PlayFab_DataModels_GetFilesResponse___StaticFields {
};

struct Action_1_PlayFab_DataModels_GetFilesResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_DataModels_GetFilesResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_DataModels_GetFilesResponse___VTable vtable;
};

struct GetObjectsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_3 *Entity;
    struct Nullable_1_Boolean_ EscapeObject;
};

struct GetObjectsRequest {
    struct GetObjectsRequest__Class *klass;
    MonitorData *monitor;
    struct GetObjectsRequest__Fields fields;
};

struct Action_1_PlayFab_DataModels_GetObjectsResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_DataModels_GetObjectsResponse_ {
    struct Action_1_PlayFab_DataModels_GetObjectsResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_DataModels_GetObjectsResponse___Fields fields;
};

struct GetObjectsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey_3 *Entity;
    struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult_ *Objects;
    int32_t ProfileVersion;
};

struct GetObjectsResponse {
    struct GetObjectsResponse__Class *klass;
    MonitorData *monitor;
    struct GetObjectsResponse__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult_ {
    struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct ObjectResult *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult_ fields;
};

struct ObjectResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct Object *DataObject;
    struct String *EscapedDataObject;
    struct String *ObjectName;
};

struct ObjectResult {
    struct ObjectResult__Class *klass;
    MonitorData *monitor;
    struct ObjectResult__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___Fields {
    struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___Fields {
    struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___Fields fields;
};

struct ObjectResult__Array {
    struct ObjectResult__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ObjectResult *vector[32];
};

struct IEnumerator_1_PlayFab_DataModels_ObjectResult_ {
    struct IEnumerator_1_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_PlayFab_DataModels_ObjectResult_ {
    struct ICollection_1_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult_ {
    struct String *key;
    struct ObjectResult *value;
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Boxed {
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult_ fields;
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Array {
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_PlayFab_DataModels_ObjectResult_ {
    struct IEnumerable_1_PlayFab_DataModels_ObjectResult___Class *klass;
    MonitorData *monitor;
};

struct GetObjectsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetObjectsRequest__StaticFields {
};

struct GetObjectsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetObjectsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetObjectsRequest__VTable vtable;
};

struct ObjectResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ObjectResult__StaticFields {
};

struct ObjectResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectResult__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_DataModels_ObjectResult___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct ObjectResult__Array__VTable {
};

struct ObjectResult__Array__StaticFields {
};

struct ObjectResult__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectResult__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectResult__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_DataModels_ObjectResult___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct IEnumerator_1_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct ICollection_1_PlayFab_DataModels_ObjectResult___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct ICollection_1_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct ObjectResult___VTable {
};

struct ObjectResult___StaticFields {
};

struct ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ObjectResult___VTable vtable;
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Array__VTable {
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Array__StaticFields {
};

struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct IEnumerable_1_PlayFab_DataModels_ObjectResult___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct IEnumerable_1_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___VTable {
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

struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___StaticFields {
};

struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_PlayFab_DataModels_ObjectResult___VTable vtable;
};

struct GetObjectsResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetObjectsResponse__StaticFields {
};

struct GetObjectsResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetObjectsResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetObjectsResponse__VTable vtable;
};

struct Action_1_PlayFab_DataModels_GetObjectsResponse___VTable {
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

struct Action_1_PlayFab_DataModels_GetObjectsResponse___StaticFields {
};

struct Action_1_PlayFab_DataModels_GetObjectsResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_DataModels_GetObjectsResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_DataModels_GetObjectsResponse___VTable vtable;
};

struct InitiateFileUploadsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_3 *Entity;
    struct List_1_System_String_ *FileNames;
    struct Nullable_1_Int32_ ProfileVersion;
};

struct InitiateFileUploadsRequest {
    struct InitiateFileUploadsRequest__Class *klass;
    MonitorData *monitor;
    struct InitiateFileUploadsRequest__Fields fields;
};

struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse_ {
    struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___Fields fields;
};

struct InitiateFileUploadsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    struct EntityKey_3 *Entity;
    int32_t ProfileVersion;
    struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata_ *UploadDetails;
};

struct InitiateFileUploadsResponse {
    struct InitiateFileUploadsResponse__Class *klass;
    MonitorData *monitor;
    struct InitiateFileUploadsResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_DataModels_InitiateFileUploadMetadata___Fields {
    struct InitiateFileUploadMetadata__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata_ {
    struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata___Fields fields;
};

struct __declspec(align(8)) InitiateFileUploadMetadata__Fields {
    struct String *FileName;
    struct String *UploadUrl;
};

struct InitiateFileUploadMetadata {
    struct InitiateFileUploadMetadata__Class *klass;
    MonitorData *monitor;
    struct InitiateFileUploadMetadata__Fields fields;
};

struct InitiateFileUploadMetadata__Array {
    struct InitiateFileUploadMetadata__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct InitiateFileUploadMetadata *vector[32];
};

struct IEnumerator_1_PlayFab_DataModels_InitiateFileUploadMetadata_ {
    struct IEnumerator_1_PlayFab_DataModels_InitiateFileUploadMetadata___Class *klass;
    MonitorData *monitor;
};

struct InitiateFileUploadsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InitiateFileUploadsRequest__StaticFields {
};

struct InitiateFileUploadsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InitiateFileUploadsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InitiateFileUploadsRequest__VTable vtable;
};

struct InitiateFileUploadMetadata__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InitiateFileUploadMetadata__StaticFields {
};

struct InitiateFileUploadMetadata__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InitiateFileUploadMetadata__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InitiateFileUploadMetadata__VTable vtable;
};

struct InitiateFileUploadMetadata__Array__VTable {
};

struct InitiateFileUploadMetadata__Array__StaticFields {
};

struct InitiateFileUploadMetadata__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InitiateFileUploadMetadata__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InitiateFileUploadMetadata__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_DataModels_InitiateFileUploadMetadata___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_DataModels_InitiateFileUploadMetadata___StaticFields {
};

struct IEnumerator_1_PlayFab_DataModels_InitiateFileUploadMetadata___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_DataModels_InitiateFileUploadMetadata___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_DataModels_InitiateFileUploadMetadata___VTable vtable;
};

struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata___VTable {
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

struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata___StaticFields {
    struct InitiateFileUploadMetadata__Array *_emptyArray;
};

struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_DataModels_InitiateFileUploadMetadata___VTable vtable;
};

struct InitiateFileUploadsResponse__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InitiateFileUploadsResponse__StaticFields {
};

struct InitiateFileUploadsResponse__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InitiateFileUploadsResponse__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InitiateFileUploadsResponse__VTable vtable;
};

struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___VTable {
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

struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___StaticFields {
};

struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_DataModels_InitiateFileUploadsResponse___VTable vtable;
};

struct SetObjectsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct EntityKey_3 *Entity;
    struct Nullable_1_Int32_ ExpectedProfileVersion;
    struct List_1_PlayFab_DataModels_SetObject_ *Objects;
};

struct SetObjectsRequest {
    struct SetObjectsRequest__Class *klass;
    MonitorData *monitor;
    struct SetObjectsRequest__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_DataModels_SetObject___Fields {
    struct SetObject__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_DataModels_SetObject_ {
    struct List_1_PlayFab_DataModels_SetObject___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_DataModels_SetObject___Fields fields;
};

struct __declspec(align(8)) SetObject__Fields {
    struct Object *DataObject;
    struct Nullable_1_Boolean_ DeleteObject;
    struct String *EscapedDataObject;
    struct String *ObjectName;
};

struct SetObject {
    struct SetObject__Class *klass;
    MonitorData *monitor;
    struct SetObject__Fields fields;
};

struct SetObject__Array {
    struct SetObject__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SetObject *vector[32];
};

struct IEnumerator_1_PlayFab_DataModels_SetObject_ {
    struct IEnumerator_1_PlayFab_DataModels_SetObject___Class *klass;
    MonitorData *monitor;
};

struct Action_1_PlayFab_DataModels_SetObjectsResponse___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_DataModels_SetObjectsResponse_ {
    struct Action_1_PlayFab_DataModels_SetObjectsResponse___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_DataModels_SetObjectsResponse___Fields fields;
};

struct SetObjectsResponse__Fields {
    struct PlayFabResultCommon__Fields _;
    int32_t ProfileVersion;
    struct List_1_PlayFab_DataModels_SetObjectInfo_ *SetResults;
};

struct SetObjectsResponse {
    struct SetObjectsResponse__Class *klass;
    MonitorData *monitor;
    struct SetObjectsResponse__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_DataModels_SetObjectInfo___Fields {
    struct SetObjectInfo__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_DataModels_SetObjectInfo_ {
    struct List_1_PlayFab_DataModels_SetObjectInfo___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_DataModels_SetObjectInfo___Fields fields;
};

enum class OperationTypes__Enum : int32_t {
    Created = 0x00000000,
    Updated = 0x00000001,
    Deleted = 0x00000002,
    None = 0x00000003,
};

struct OperationTypes__Enum__Boxed {
    struct OperationTypes__Enum__Class *klass;
    MonitorData *monitor;
    OperationTypes__Enum value;
    
};

struct Nullable_1_PlayFab_DataModels_OperationTypes_ {
    OperationTypes__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_DataModels_OperationTypes___Boxed {
    struct Nullable_1_PlayFab_DataModels_OperationTypes___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_DataModels_OperationTypes_ fields;
};

struct __declspec(align(8)) SetObjectInfo__Fields {
    struct String *ObjectName;
    struct String *OperationReason;
    struct Nullable_1_PlayFab_DataModels_OperationTypes_ SetResult;
};

struct SetObjectInfo {
    struct SetObjectInfo__Class *klass;
    MonitorData *monitor;
    struct SetObjectInfo__Fields fields;
};

struct SetObjectInfo__Array {
    struct SetObjectInfo__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SetObjectInfo *vector[32];
};

struct IEnumerator_1_PlayFab_DataModels_SetObjectInfo_ {
    struct IEnumerator_1_PlayFab_DataModels_SetObjectInfo___Class *klass;
    MonitorData *monitor;
};

struct SetObject__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SetObject__StaticFields {
};

struct SetObject__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SetObject__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SetObject__VTable vtable;
};

struct SetObject__Array__VTable {
};

struct SetObject__Array__StaticFields {
};

}
