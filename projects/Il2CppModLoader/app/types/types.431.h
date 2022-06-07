namespace app {
struct __declspec(align(8)) Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_String_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ {
    int32_t hashCode;
    int32_t next;
    struct String *key;
    struct SharedGroupDataRecord *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ fields;
};

struct __declspec(align(8)) SharedGroupDataRecord__Fields {
    struct DateTime LastUpdated;
    struct String *LastUpdatedBy;
    struct Nullable_1_PlayFab_ClientModels_UserDataPermission_ Permission;
    struct String *Value;
};

struct SharedGroupDataRecord {
    struct SharedGroupDataRecord__Class *klass;
    MonitorData *monitor;
    struct SharedGroupDataRecord__Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Fields {
    struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Fields {
    struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Fields fields;
};

struct SharedGroupDataRecord__Array {
    struct SharedGroupDataRecord__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SharedGroupDataRecord *vector[32];
};

struct IEnumerator_1_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct IEnumerator_1_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct ICollection_1_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct String *key;
    struct SharedGroupDataRecord *value;
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Boxed {
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ fields;
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array {
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_PlayFab_ClientModels_SharedGroupDataRecord_ {
    struct IEnumerable_1_PlayFab_ClientModels_SharedGroupDataRecord___Class *klass;
    MonitorData *monitor;
};

struct GetSharedGroupDataRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetSharedGroupDataRequest__StaticFields {
};

struct GetSharedGroupDataRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetSharedGroupDataRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetSharedGroupDataRequest__VTable vtable;
};

struct SharedGroupDataRecord__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SharedGroupDataRecord__StaticFields {
};

struct SharedGroupDataRecord__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SharedGroupDataRecord__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SharedGroupDataRecord__VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct SharedGroupDataRecord__Array__VTable {
};

struct SharedGroupDataRecord__Array__StaticFields {
};

struct SharedGroupDataRecord__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SharedGroupDataRecord__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SharedGroupDataRecord__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct ICollection_1_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct ICollection_1_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct SharedGroupDataRecord___VTable {
};

struct SharedGroupDataRecord___StaticFields {
};

struct SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SharedGroupDataRecord___VTable vtable;
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__VTable {
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__StaticFields {
};

struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct IEnumerable_1_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct IEnumerable_1_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable {
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

struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields {
};

struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_String_PlayFab_ClientModels_SharedGroupDataRecord___VTable vtable;
};

struct GetSharedGroupDataResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetSharedGroupDataResult__StaticFields {
};

struct GetSharedGroupDataResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetSharedGroupDataResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetSharedGroupDataResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___VTable {
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

struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetSharedGroupDataResult___VTable vtable;
};

struct GetStoreItemsRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct String *CatalogVersion;
    struct String *StoreId;
};

struct GetStoreItemsRequest {
    struct GetStoreItemsRequest__Class *klass;
    MonitorData *monitor;
    struct GetStoreItemsRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_GetStoreItemsResult_ {
    struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Fields fields;
};

enum class SourceType__Enum : int32_t {
    Admin = 0x00000000,
    BackEnd = 0x00000001,
    GameClient = 0x00000002,
    GameServer = 0x00000003,
    Partner = 0x00000004,
    Custom = 0x00000005,
    API = 0x00000006,
};

struct SourceType__Enum__Boxed {
    struct SourceType__Enum__Class *klass;
    MonitorData *monitor;
    SourceType__Enum value;
    
};

struct Nullable_1_PlayFab_ClientModels_SourceType_ {
    SourceType__Enum value;
    
    bool has_value;
};

struct Nullable_1_PlayFab_ClientModels_SourceType___Boxed {
    struct Nullable_1_PlayFab_ClientModels_SourceType___Class *klass;
    MonitorData *monitor;
    struct Nullable_1_PlayFab_ClientModels_SourceType_ fields;
};

struct GetStoreItemsResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct String *CatalogVersion;
    struct StoreMarketingModel *MarketingData;
    struct Nullable_1_PlayFab_ClientModels_SourceType_ Source;
    struct List_1_PlayFab_ClientModels_StoreItem_ *Store;
    struct String *StoreId;
};

struct GetStoreItemsResult {
    struct GetStoreItemsResult__Class *klass;
    MonitorData *monitor;
    struct GetStoreItemsResult__Fields fields;
};

struct __declspec(align(8)) StoreMarketingModel__Fields {
    struct String *Description;
    struct String *DisplayName;
    struct Object *Metadata;
};

struct StoreMarketingModel {
    struct StoreMarketingModel__Class *klass;
    MonitorData *monitor;
    struct StoreMarketingModel__Fields fields;
};

struct __declspec(align(8)) List_1_PlayFab_ClientModels_StoreItem___Fields {
    struct StoreItem__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_PlayFab_ClientModels_StoreItem_ {
    struct List_1_PlayFab_ClientModels_StoreItem___Class *klass;
    MonitorData *monitor;
    struct List_1_PlayFab_ClientModels_StoreItem___Fields fields;
};

struct __declspec(align(8)) StoreItem__Fields {
    struct Object *CustomData;
    struct Nullable_1_UInt32_ DisplayPosition;
    struct String *ItemId;
    struct Dictionary_2_System_String_System_UInt32_ *RealCurrencyPrices;
    struct Dictionary_2_System_String_System_UInt32_ *VirtualCurrencyPrices;
};

struct StoreItem {
    struct StoreItem__Class *klass;
    MonitorData *monitor;
    struct StoreItem__Fields fields;
};

struct StoreItem__Array {
    struct StoreItem__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct StoreItem *vector[32];
};

struct IEnumerator_1_PlayFab_ClientModels_StoreItem_ {
    struct IEnumerator_1_PlayFab_ClientModels_StoreItem___Class *klass;
    MonitorData *monitor;
};

struct GetStoreItemsRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetStoreItemsRequest__StaticFields {
};

struct GetStoreItemsRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetStoreItemsRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetStoreItemsRequest__VTable vtable;
};

struct StoreMarketingModel__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StoreMarketingModel__StaticFields {
};

struct StoreMarketingModel__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StoreMarketingModel__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StoreMarketingModel__VTable vtable;
};

struct SourceType__Enum__VTable {
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

struct SourceType__Enum__StaticFields {
};

struct SourceType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SourceType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SourceType__Enum__VTable vtable;
};

struct Nullable_1_PlayFab_ClientModels_SourceType___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Nullable_1_PlayFab_ClientModels_SourceType___StaticFields {
};

struct Nullable_1_PlayFab_ClientModels_SourceType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Nullable_1_PlayFab_ClientModels_SourceType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Nullable_1_PlayFab_ClientModels_SourceType___VTable vtable;
};

struct StoreItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct StoreItem__StaticFields {
};

struct StoreItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StoreItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StoreItem__VTable vtable;
};

struct StoreItem__Array__VTable {
};

struct StoreItem__Array__StaticFields {
};

struct StoreItem__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StoreItem__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StoreItem__Array__VTable vtable;
};

struct IEnumerator_1_PlayFab_ClientModels_StoreItem___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_PlayFab_ClientModels_StoreItem___StaticFields {
};

struct IEnumerator_1_PlayFab_ClientModels_StoreItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_PlayFab_ClientModels_StoreItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_PlayFab_ClientModels_StoreItem___VTable vtable;
};

struct List_1_PlayFab_ClientModels_StoreItem___VTable {
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

struct List_1_PlayFab_ClientModels_StoreItem___StaticFields {
    struct StoreItem__Array *_emptyArray;
};

struct List_1_PlayFab_ClientModels_StoreItem___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_PlayFab_ClientModels_StoreItem___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_PlayFab_ClientModels_StoreItem___VTable vtable;
};

struct GetStoreItemsResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetStoreItemsResult__StaticFields {
};

struct GetStoreItemsResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetStoreItemsResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetStoreItemsResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___VTable {
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

struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetStoreItemsResult___VTable vtable;
};

struct GetTimeRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
};

struct GetTimeRequest {
    struct GetTimeRequest__Class *klass;
    MonitorData *monitor;
    struct GetTimeRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_GetTimeResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_GetTimeResult_ {
    struct Action_1_PlayFab_ClientModels_GetTimeResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_GetTimeResult___Fields fields;
};

struct GetTimeResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct DateTime Time;
};

struct GetTimeResult {
    struct GetTimeResult__Class *klass;
    MonitorData *monitor;
    struct GetTimeResult__Fields fields;
};

struct GetTimeRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetTimeRequest__StaticFields {
};

struct GetTimeRequest__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetTimeRequest__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetTimeRequest__VTable vtable;
};

struct GetTimeResult__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct GetTimeResult__StaticFields {
};

struct GetTimeResult__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct GetTimeResult__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct GetTimeResult__VTable vtable;
};

struct Action_1_PlayFab_ClientModels_GetTimeResult___VTable {
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

struct Action_1_PlayFab_ClientModels_GetTimeResult___StaticFields {
};

struct Action_1_PlayFab_ClientModels_GetTimeResult___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_PlayFab_ClientModels_GetTimeResult___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_PlayFab_ClientModels_GetTimeResult___VTable vtable;
};

struct GetTitleDataRequest__Fields {
    struct PlayFabRequestCommon__Fields _;
    struct List_1_System_String_ *Keys;
};

struct GetTitleDataRequest {
    struct GetTitleDataRequest__Class *klass;
    MonitorData *monitor;
    struct GetTitleDataRequest__Fields fields;
};

struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_PlayFab_ClientModels_GetTitleDataResult_ {
    struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Class *klass;
    MonitorData *monitor;
    struct Action_1_PlayFab_ClientModels_GetTitleDataResult___Fields fields;
};

struct GetTitleDataResult__Fields {
    struct PlayFabResultCommon__Fields _;
    struct Dictionary_2_System_String_System_String_ *Data;
};

struct GetTitleDataResult {
    struct GetTitleDataResult__Class *klass;
    MonitorData *monitor;
    struct GetTitleDataResult__Fields fields;
};

struct GetTitleDataRequest__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

}
