namespace app {
struct List_1_UpgradablePropertyLevel_ {
    struct List_1_UpgradablePropertyLevel___Class *klass;
    MonitorData *monitor;
    struct List_1_UpgradablePropertyLevel___Fields fields;
};

struct __declspec(align(8)) UpgradablePropertyLevel__Fields {
    struct MessageProvider *Description;
    int32_t XPCost;
    struct List_1_UpgradableProperty_ *Properties;
};

struct UpgradablePropertyLevel {
    struct UpgradablePropertyLevel__Class *klass;
    MonitorData *monitor;
    struct UpgradablePropertyLevel__Fields fields;
};

struct __declspec(align(8)) List_1_UpgradableProperty___Fields {
    struct UpgradableProperty__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_UpgradableProperty_ {
    struct List_1_UpgradableProperty___Class *klass;
    MonitorData *monitor;
    struct List_1_UpgradableProperty___Fields fields;
};

enum class UpgradablePropertyType__Enum : int32_t {
    Damage = 0x00000000,
    Speed = 0x00000001,
    Range = 0x00000002,
    MaxCombo = 0x00000003,
    Efficiency = 0x00000004,
    Duration = 0x00000005,
    Interval = 0x00000006,
    Count = 0x00000007,
    BooleanA = 0x00000008,
};

struct UpgradablePropertyType__Enum__Boxed {
    struct UpgradablePropertyType__Enum__Class *klass;
    MonitorData *monitor;
    UpgradablePropertyType__Enum value;
    
};

struct __declspec(align(8)) UpgradableProperty__Fields {
    UpgradablePropertyType__Enum Type;
    
    float Value;
};

struct UpgradableProperty {
    struct UpgradableProperty__Class *klass;
    MonitorData *monitor;
    struct UpgradableProperty__Fields fields;
};

struct UpgradableProperty__Array {
    struct UpgradableProperty__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UpgradableProperty *vector[32];
};

struct IEnumerator_1_UpgradableProperty_ {
    struct IEnumerator_1_UpgradableProperty___Class *klass;
    MonitorData *monitor;
};

struct UpgradablePropertyLevel__Array {
    struct UpgradablePropertyLevel__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UpgradablePropertyLevel *vector[32];
};

struct IEnumerator_1_UpgradablePropertyLevel_ {
    struct IEnumerator_1_UpgradablePropertyLevel___Class *klass;
    MonitorData *monitor;
};

struct UpgradableAbility__Array {
    struct UpgradableAbility__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct UpgradableAbility *vector[32];
};

struct IEnumerator_1_UpgradableAbility_ {
    struct IEnumerator_1_UpgradableAbility___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_AbilityType_UpgradableAbility___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_AbilityType_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_AbilityType_UpgradableAbility_ {
    struct Dictionary_2_AbilityType_UpgradableAbility___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_AbilityType_UpgradableAbility___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility_ {
    int32_t hashCode;
    int32_t next;
    AbilityType__Enum key;
    
    struct UpgradableAbility *value;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array {
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility_ vector[32];
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___Fields {
    struct Dictionary_2_AbilityType_UpgradableAbility_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___Fields fields;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___Fields {
    struct Dictionary_2_AbilityType_UpgradableAbility_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___Fields fields;
};

struct ICollection_1_UpgradableAbility_ {
    struct ICollection_1_UpgradableAbility___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_AbilityType_UpgradableAbility_ {
    AbilityType__Enum key;
    
    struct UpgradableAbility *value;
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___Boxed {
    struct KeyValuePair_2_AbilityType_UpgradableAbility___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_AbilityType_UpgradableAbility_ fields;
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___Array {
    struct KeyValuePair_2_AbilityType_UpgradableAbility___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_AbilityType_UpgradableAbility_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_AbilityType_UpgradableAbility_ {
    struct IEnumerator_1_KeyValuePair_2_AbilityType_UpgradableAbility___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_UpgradableAbility_ {
    struct IEnumerable_1_UpgradableAbility___Class *klass;
    MonitorData *monitor;
};

struct UpgradablePropertyType__Enum__VTable {
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

struct UpgradablePropertyType__Enum__StaticFields {
};

struct UpgradablePropertyType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradablePropertyType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradablePropertyType__Enum__VTable vtable;
};

struct UpgradableProperty__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpgradableProperty__StaticFields {
};

struct UpgradableProperty__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradableProperty__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradableProperty__VTable vtable;
};

struct UpgradableProperty__Array__VTable {
};

struct UpgradableProperty__Array__StaticFields {
};

struct UpgradableProperty__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradableProperty__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradableProperty__Array__VTable vtable;
};

struct IEnumerator_1_UpgradableProperty___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UpgradableProperty___StaticFields {
};

struct IEnumerator_1_UpgradableProperty___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UpgradableProperty___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UpgradableProperty___VTable vtable;
};

struct List_1_UpgradableProperty___VTable {
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

struct List_1_UpgradableProperty___StaticFields {
    struct UpgradableProperty__Array *_emptyArray;
};

struct List_1_UpgradableProperty___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UpgradableProperty___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UpgradableProperty___VTable vtable;
};

struct UpgradablePropertyLevel__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpgradablePropertyLevel__StaticFields {
};

struct UpgradablePropertyLevel__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradablePropertyLevel__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradablePropertyLevel__VTable vtable;
};

struct UpgradablePropertyLevel__Array__VTable {
};

struct UpgradablePropertyLevel__Array__StaticFields {
};

struct UpgradablePropertyLevel__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradablePropertyLevel__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradablePropertyLevel__Array__VTable vtable;
};

struct IEnumerator_1_UpgradablePropertyLevel___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UpgradablePropertyLevel___StaticFields {
};

struct IEnumerator_1_UpgradablePropertyLevel___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UpgradablePropertyLevel___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UpgradablePropertyLevel___VTable vtable;
};

struct List_1_UpgradablePropertyLevel___VTable {
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

struct List_1_UpgradablePropertyLevel___StaticFields {
    struct UpgradablePropertyLevel__Array *_emptyArray;
};

struct List_1_UpgradablePropertyLevel___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UpgradablePropertyLevel___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UpgradablePropertyLevel___VTable vtable;
};

struct UpgradableAbility__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct UpgradableAbility__StaticFields {
};

struct UpgradableAbility__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradableAbility__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradableAbility__VTable vtable;
};

struct UpgradableAbility__Array__VTable {
};

struct UpgradableAbility__Array__StaticFields {
};

struct UpgradableAbility__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradableAbility__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradableAbility__Array__VTable vtable;
};

struct IEnumerator_1_UpgradableAbility___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_UpgradableAbility___StaticFields {
};

struct IEnumerator_1_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_UpgradableAbility___VTable vtable;
};

struct List_1_UpgradableAbility___VTable {
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

struct List_1_UpgradableAbility___StaticFields {
    struct UpgradableAbility__Array *_emptyArray;
};

struct List_1_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UpgradableAbility___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_AbilityType_UpgradableAbility___Array__VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_UpgradableAbility___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_UpgradableAbility___VTable vtable;
};

struct ICollection_1_UpgradableAbility___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_UpgradableAbility___StaticFields {
};

struct ICollection_1_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_UpgradableAbility___VTable vtable;
};

struct UpgradableAbility___VTable {
};

struct UpgradableAbility___StaticFields {
};

struct UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct UpgradableAbility___VTable vtable;
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___StaticFields {
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_AbilityType_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_AbilityType_UpgradableAbility___VTable vtable;
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___Array__VTable {
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___Array__StaticFields {
};

struct KeyValuePair_2_AbilityType_UpgradableAbility___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_AbilityType_UpgradableAbility___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_AbilityType_UpgradableAbility___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_AbilityType_UpgradableAbility___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_AbilityType_UpgradableAbility___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_AbilityType_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_AbilityType_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_AbilityType_UpgradableAbility___VTable vtable;
};

struct IEnumerable_1_UpgradableAbility___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_UpgradableAbility___StaticFields {
};

struct IEnumerable_1_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_UpgradableAbility___VTable vtable;
};

struct Dictionary_2_AbilityType_UpgradableAbility___VTable {
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

struct Dictionary_2_AbilityType_UpgradableAbility___StaticFields {
};

struct Dictionary_2_AbilityType_UpgradableAbility___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_AbilityType_UpgradableAbility___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_AbilityType_UpgradableAbility___VTable vtable;
};

struct AbilityUpgradeSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct AbilityUpgradeSettings__StaticFields {
    struct AbilityUpgradeSettings *Instance;
};

struct AbilityUpgradeSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct AbilityUpgradeSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct AbilityUpgradeSettings__VTable vtable;
};

struct ChangeDifficultyScreen__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *ConfirmScreen;
    DifficultyMode__Enum m_selectedDifficulty;
    
    struct MessageProvider *Message;
    struct MessageProvider *Easy;
    struct MessageProvider *Normal;
    struct MessageProvider *Hard;
    struct MessageProvider *OneLife;
};

struct ChangeDifficultyScreen {
    struct ChangeDifficultyScreen__Class *klass;
    MonitorData *monitor;
    struct ChangeDifficultyScreen__Fields fields;
};

struct ChangeDifficultyScreen__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct ChangeDifficultyScreen__StaticFields {
    struct ChangeDifficultyScreen *Instance;
};

struct ChangeDifficultyScreen__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ChangeDifficultyScreen__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ChangeDifficultyScreen__VTable vtable;
};

struct ConfirmChangingDifficulty__Fields {
    struct ActionMethod__Fields _;
};

struct ConfirmChangingDifficulty {
    struct ConfirmChangingDifficulty__Class *klass;
    MonitorData *monitor;
    struct ConfirmChangingDifficulty__Fields fields;
};

struct ConfirmChangingDifficulty__VTable {
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

struct ConfirmChangingDifficulty__StaticFields {
};

struct ConfirmChangingDifficulty__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ConfirmChangingDifficulty__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ConfirmChangingDifficulty__VTable vtable;
};

struct InventoryAbilityItem__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider *AbilityName;
    struct MessageProvider *AbilityDescription;
    AbilityType__Enum Ability;
    
};

struct InventoryAbilityItem {
    struct InventoryAbilityItem__Class *klass;
    MonitorData *monitor;
    struct InventoryAbilityItem__Fields fields;
};

struct InventoryAbilityItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InventoryAbilityItem__StaticFields {
};

struct InventoryAbilityItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InventoryAbilityItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InventoryAbilityItem__VTable vtable;
};

struct InventoryDEAbilityConnector__Fields {
    struct MonoBehaviour__Fields _;
};

struct InventoryDEAbilityConnector {
    struct InventoryDEAbilityConnector__Class *klass;
    MonitorData *monitor;
    struct InventoryDEAbilityConnector__Fields fields;
};

struct InventoryDEAbilityConnector__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct InventoryDEAbilityConnector__StaticFields {
};

struct InventoryDEAbilityConnector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InventoryDEAbilityConnector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InventoryDEAbilityConnector__VTable vtable;
};

struct InventoryItem__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider *Name;
    struct MessageProvider *Description;
    struct LegacyTransparencyAnimator *m_transparencyAnimator;
};

struct InventoryItem {
    struct InventoryItem__Class *klass;
    MonitorData *monitor;
    struct InventoryItem__Fields fields;
};

struct InventoryItem__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsUnlocked;
};

struct InventoryItem__StaticFields {
};

struct InventoryItem__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct InventoryItem__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct InventoryItem__VTable vtable;
};

struct InventoryItemHelpText__Fields {
    struct MonoBehaviour__Fields _;
    struct MessageProvider *HelpMessage;
    struct GameObject *Avatar;
};

struct InventoryItemHelpText {
    struct InventoryItemHelpText__Class *klass;
    MonitorData *monitor;
    struct InventoryItemHelpText__Fields fields;
};

}
