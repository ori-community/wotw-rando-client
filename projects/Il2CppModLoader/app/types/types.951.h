namespace app {
struct WorldMapUI__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData OnInstantiate;
};

struct WorldMapUI__StaticFields {
    struct WorldMapUI *Instance;
    bool m_isLoadingWorldMapScene;
    bool m_cancelLoading;
};

struct WorldMapUI__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldMapUI__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldMapUI__VTable vtable;
};

struct ActivateBasedOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1 *Condition;
    struct GameObject *Target;
    struct MoonReference_1_UnityEngine_GameObject_ *MoonTarget;
    bool Activate;
};

struct ActivateBasedOnCondition {
    struct ActivateBasedOnCondition__Class *klass;
    MonitorData *monitor;
    struct ActivateBasedOnCondition__Fields fields;
};

struct ActivateBasedOnCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetDynamicGraphicTarget;
};

struct ActivateBasedOnCondition__StaticFields {
};

struct ActivateBasedOnCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivateBasedOnCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivateBasedOnCondition__VTable vtable;
};

struct ActivationBasedOnCondition__Fields {
    struct MonoBehaviour__Fields _;
    struct Condition_1 *Condition;
    struct GameObject *TargetTrue;
    struct GameObject *TargetFalse;
};

struct ActivationBasedOnCondition {
    struct ActivationBasedOnCondition__Class *klass;
    MonitorData *monitor;
    struct ActivationBasedOnCondition__Fields fields;
};

struct ActivationBasedOnCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ActivationBasedOnCondition__StaticFields {
};

struct ActivationBasedOnCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ActivationBasedOnCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ActivationBasedOnCondition__VTable vtable;
};

struct __declspec(align(8)) WorldEventsRuntime__Fields {
    int32_t Value;
};

struct WorldEventsRuntime {
    struct WorldEventsRuntime__Class *klass;
    MonitorData *monitor;
    struct WorldEventsRuntime__Fields fields;
};

struct WorldEventsRuntime__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
};

struct WorldEventsRuntime__StaticFields {
};

struct WorldEventsRuntime__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsRuntime__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsRuntime__VTable vtable;
};

struct __declspec(align(8)) WorldEvents_c_DisplayClass1_0__Fields {
    int32_t id;
};

struct WorldEvents_c_DisplayClass1_0 {
    struct WorldEvents_c_DisplayClass1_0__Class *klass;
    MonitorData *monitor;
    struct WorldEvents_c_DisplayClass1_0__Fields fields;
};

struct WorldEvents_c_DisplayClass1_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WorldEvents_c_DisplayClass1_0__StaticFields {
};

struct WorldEvents_c_DisplayClass1_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEvents_c_DisplayClass1_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEvents_c_DisplayClass1_0__VTable vtable;
};

struct __declspec(align(8)) WorldEvents_c_DisplayClass2_0__Fields {
    struct String *eventName;
};

struct WorldEvents_c_DisplayClass2_0 {
    struct WorldEvents_c_DisplayClass2_0__Class *klass;
    MonitorData *monitor;
    struct WorldEvents_c_DisplayClass2_0__Fields fields;
};

struct WorldEvents_c_DisplayClass2_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WorldEvents_c_DisplayClass2_0__StaticFields {
};

struct WorldEvents_c_DisplayClass2_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEvents_c_DisplayClass2_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEvents_c_DisplayClass2_0__VTable vtable;
};

struct __declspec(align(8)) WorldEventsManager__Fields {
    struct Dictionary_2_MoonGuid_WorldEventsRuntime_ *m_worldEvents;
    struct List_1_WorldEventsRuntime_ *All;
};

struct WorldEventsManager {
    struct WorldEventsManager__Class *klass;
    MonitorData *monitor;
    struct WorldEventsManager__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_MoonGuid_WorldEventsRuntime___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_MoonGuid_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_MoonGuid_WorldEventsRuntime_ {
    struct Dictionary_2_MoonGuid_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_MoonGuid_WorldEventsRuntime___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime_ {
    int32_t hashCode;
    int32_t next;
    struct MoonGuid *key;
    struct WorldEventsRuntime *value;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array {
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___Fields {
    struct Dictionary_2_MoonGuid_WorldEventsRuntime_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___Fields {
    struct Dictionary_2_MoonGuid_WorldEventsRuntime_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___Fields fields;
};

struct WorldEventsRuntime__Array {
    struct WorldEventsRuntime__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct WorldEventsRuntime *vector[32];
};

struct IEnumerator_1_WorldEventsRuntime_ {
    struct IEnumerator_1_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_WorldEventsRuntime_ {
    struct ICollection_1_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime_ {
    struct MoonGuid *key;
    struct WorldEventsRuntime *value;
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Boxed {
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime_ fields;
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Array {
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_MoonGuid_WorldEventsRuntime_ {
    struct IEnumerator_1_KeyValuePair_2_MoonGuid_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_WorldEventsRuntime_ {
    struct IEnumerable_1_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_WorldEventsRuntime___Fields {
    struct WorldEventsRuntime__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_WorldEventsRuntime_ {
    struct List_1_WorldEventsRuntime___Class *klass;
    MonitorData *monitor;
    struct List_1_WorldEventsRuntime___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_MoonGuid_WorldEventsRuntime___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_MoonGuid_WorldEventsRuntime___VTable vtable;
};

struct WorldEventsRuntime__Array__VTable {
};

struct WorldEventsRuntime__Array__StaticFields {
};

struct WorldEventsRuntime__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsRuntime__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsRuntime__Array__VTable vtable;
};

struct IEnumerator_1_WorldEventsRuntime___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_WorldEventsRuntime___StaticFields {
};

struct IEnumerator_1_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_WorldEventsRuntime___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_MoonGuid_WorldEventsRuntime___VTable vtable;
};

struct ICollection_1_WorldEventsRuntime___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_WorldEventsRuntime___StaticFields {
};

struct ICollection_1_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_WorldEventsRuntime___VTable vtable;
};

struct WorldEventsRuntime___VTable {
};

struct WorldEventsRuntime___StaticFields {
};

struct WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsRuntime___VTable vtable;
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___StaticFields {
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___VTable vtable;
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Array__VTable {
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Array__StaticFields {
};

struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_MoonGuid_WorldEventsRuntime___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_MoonGuid_WorldEventsRuntime___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_MoonGuid_WorldEventsRuntime___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_MoonGuid_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_MoonGuid_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_MoonGuid_WorldEventsRuntime___VTable vtable;
};

struct IEnumerable_1_WorldEventsRuntime___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_WorldEventsRuntime___StaticFields {
};

struct IEnumerable_1_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_WorldEventsRuntime___VTable vtable;
};

struct Dictionary_2_MoonGuid_WorldEventsRuntime___VTable {
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

struct Dictionary_2_MoonGuid_WorldEventsRuntime___StaticFields {
};

struct Dictionary_2_MoonGuid_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_MoonGuid_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_MoonGuid_WorldEventsRuntime___VTable vtable;
};

struct List_1_WorldEventsRuntime___VTable {
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

struct List_1_WorldEventsRuntime___StaticFields {
    struct WorldEventsRuntime__Array *_emptyArray;
};

struct List_1_WorldEventsRuntime___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_WorldEventsRuntime___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_WorldEventsRuntime___VTable vtable;
};

struct WorldEventsManager__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WorldEventsManager__StaticFields {
    struct WorldEventsManager *Instance;
};

struct WorldEventsManager__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsManager__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsManager__VTable vtable;
};

struct WorldEventsOnAwake__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_WorldEventsOnAwake_WorldEventState_ *WorldEventStates;
};

struct WorldEventsOnAwake {
    struct WorldEventsOnAwake__Class *klass;
    MonitorData *monitor;
    struct WorldEventsOnAwake__Fields fields;
};

struct __declspec(align(8)) List_1_WorldEventsOnAwake_WorldEventState___Fields {
    struct WorldEventsOnAwake_WorldEventState__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_WorldEventsOnAwake_WorldEventState_ {
    struct List_1_WorldEventsOnAwake_WorldEventState___Class *klass;
    MonitorData *monitor;
    struct List_1_WorldEventsOnAwake_WorldEventState___Fields fields;
};

struct __declspec(align(8)) WorldEventsOnAwake_WorldEventState__Fields {
    struct WorldEvents *WorldEvent;
    int32_t State;
};

struct WorldEventsOnAwake_WorldEventState {
    struct WorldEventsOnAwake_WorldEventState__Class *klass;
    MonitorData *monitor;
    struct WorldEventsOnAwake_WorldEventState__Fields fields;
};

struct WorldEventsOnAwake_WorldEventState__Array {
    struct WorldEventsOnAwake_WorldEventState__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct WorldEventsOnAwake_WorldEventState *vector[32];
};

struct IEnumerator_1_WorldEventsOnAwake_WorldEventState_ {
    struct IEnumerator_1_WorldEventsOnAwake_WorldEventState___Class *klass;
    MonitorData *monitor;
};

struct WorldEventsOnAwake_WorldEventState__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WorldEventsOnAwake_WorldEventState__StaticFields {
};

struct WorldEventsOnAwake_WorldEventState__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsOnAwake_WorldEventState__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsOnAwake_WorldEventState__VTable vtable;
};

struct WorldEventsOnAwake_WorldEventState__Array__VTable {
};

struct WorldEventsOnAwake_WorldEventState__Array__StaticFields {
};

struct WorldEventsOnAwake_WorldEventState__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsOnAwake_WorldEventState__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsOnAwake_WorldEventState__Array__VTable vtable;
};

struct IEnumerator_1_WorldEventsOnAwake_WorldEventState___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_WorldEventsOnAwake_WorldEventState___StaticFields {
};

struct IEnumerator_1_WorldEventsOnAwake_WorldEventState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_WorldEventsOnAwake_WorldEventState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_WorldEventsOnAwake_WorldEventState___VTable vtable;
};

struct List_1_WorldEventsOnAwake_WorldEventState___VTable {
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

struct List_1_WorldEventsOnAwake_WorldEventState___StaticFields {
    struct WorldEventsOnAwake_WorldEventState__Array *_emptyArray;
};

struct List_1_WorldEventsOnAwake_WorldEventState___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_WorldEventsOnAwake_WorldEventState___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_WorldEventsOnAwake_WorldEventState___VTable vtable;
};

struct WorldEventsOnAwake__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WorldEventsOnAwake__StaticFields {
};

struct WorldEventsOnAwake__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WorldEventsOnAwake__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WorldEventsOnAwake__VTable vtable;
};

struct AwardAchievementAction__Fields {
    struct ActionMethod__Fields _;
    struct AchievementAsset *Achievement;
};

struct AwardAchievementAction {
    struct AwardAchievementAction__Class *klass;
    MonitorData *monitor;
    struct AwardAchievementAction__Fields fields;
};

struct AwardAchievementAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct AwardAchievementAction__StaticFields {
};

struct AwardAchievementAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AwardAchievementAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AwardAchievementAction__VTable vtable;
};

struct ShowPurchaseFullGameMarketplaceAction__Fields {
    struct ActionMethod__Fields _;
};

struct ShowPurchaseFullGameMarketplaceAction {
    struct ShowPurchaseFullGameMarketplaceAction__Class *klass;
    MonitorData *monitor;
    struct ShowPurchaseFullGameMarketplaceAction__Fields fields;
};

struct ShowPurchaseFullGameMarketplaceAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct ShowPurchaseFullGameMarketplaceAction__StaticFields {
};

struct ShowPurchaseFullGameMarketplaceAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShowPurchaseFullGameMarketplaceAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShowPurchaseFullGameMarketplaceAction__VTable vtable;
};

struct IsRendererVisible__Fields {
    struct Condition_1__Fields _;
    bool Visible;
    struct Renderer *Renderer;
};

struct IsRendererVisible {
    struct IsRendererVisible__Class *klass;
    MonitorData *monitor;
    struct IsRendererVisible__Fields fields;
};

struct IsRendererVisible__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct IsRendererVisible__StaticFields {
};

struct IsRendererVisible__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IsRendererVisible__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IsRendererVisible__VTable vtable;
};

struct IsTrialCondition__Fields {
    struct Condition_1__Fields _;
};

struct IsTrialCondition {
    struct IsTrialCondition__Class *klass;
    MonitorData *monitor;
    struct IsTrialCondition__Fields fields;
};

struct IsTrialCondition__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Validate;
    VirtualInvokeData Validate_1;
    VirtualInvokeData ResetCondition;
    VirtualInvokeData UpdateCondition;
    VirtualInvokeData GetNiceName;
};

struct IsTrialCondition__StaticFields {
};

struct IsTrialCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IsTrialCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IsTrialCondition__VTable vtable;
};

struct XboxMarketplace {
    struct XboxMarketplace__Class *klass;
    MonitorData *monitor;
};

struct XboxMarketplace__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct XboxMarketplace__StaticFields {
};

}
