namespace app {
    struct List_1_ActivationChild___StaticFields {
        struct ActivationChild__Array* _emptyArray;
    };

    struct List_1_ActivationChild___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_ActivationChild___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_ActivationChild___VTable vtable;
    };

    struct ActivationParent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ActivationParent__StaticFields {
        bool TreatAsDebugTool;
    };

    struct ActivationParent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActivationParent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ActivationParent__VTable vtable;
    };

    struct ActivationChild__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ActivationChild__StaticFields {
    };

    struct ActivationChild__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ActivationChild__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ActivationChild__VTable vtable;
    };

    struct EnemyShield_c {
        struct EnemyShield_c__Class* klass;
        MonitorData* monitor;
    };

    struct EnemyShield_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EnemyShield_c__StaticFields {
        struct EnemyShield_c* __9;
        struct Action* __9__43_0;
    };

    struct EnemyShield_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EnemyShield_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EnemyShield_c__VTable vtable;
    };

    struct EntityWeightData__Fields {
        struct ScriptableObject__Fields _;
        struct EntityWeightData_EntityWeightSettings Light;
        struct EntityWeightData_EntityWeightSettings LightAir;
        struct EntityWeightData_EntityWeightSettings Medium;
        struct EntityWeightData_EntityWeightSettings Heavy;
        struct EntityWeightData_EntityWeightSettings HeavyAir;
        struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* Settings;
    };

    struct EntityWeightData {
        struct EntityWeightData__Class* klass;
        MonitorData* monitor;
        struct EntityWeightData__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_EntityWeightData_EntityWeight_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
        struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
        int32_t hashCode;
        int32_t next;
        EntityWeightData_EntityWeight__Enum key;

        struct EntityWeightData_EntityWeightSettings value;
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array {
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ vector[32];
    };

    struct IEqualityComparer_1_EntityWeightData_EntityWeight_ {
        struct IEqualityComparer_1_EntityWeightData_EntityWeight___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields {
        struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields fields;
    };

    struct EntityWeightData_EntityWeight__Enum__Array {
        struct EntityWeightData_EntityWeight__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        EntityWeightData_EntityWeight__Enum vector[32];
    };

    struct IEnumerator_1_EntityWeightData_EntityWeight_ {
        struct IEnumerator_1_EntityWeightData_EntityWeight___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields {
        struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields fields;
    };

    struct EntityWeightData_EntityWeightSettings__Array {
        struct EntityWeightData_EntityWeightSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct EntityWeightData_EntityWeightSettings vector[32];
    };

    struct IEnumerator_1_EntityWeightData_EntityWeightSettings_ {
        struct IEnumerator_1_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_EntityWeightData_EntityWeight_ {
        struct ICollection_1_EntityWeightData_EntityWeight___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_EntityWeightData_EntityWeightSettings_ {
        struct ICollection_1_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
        EntityWeightData_EntityWeight__Enum key;

        struct EntityWeightData_EntityWeightSettings value;
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Boxed {
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ fields;
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array {
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
        struct IEnumerator_1_KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_EntityWeightData_EntityWeight_ {
        struct IEnumerable_1_EntityWeightData_EntityWeight___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_EntityWeightData_EntityWeightSettings_ {
        struct IEnumerable_1_EntityWeightData_EntityWeightSettings___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__VTable vtable;
    };

    struct IEqualityComparer_1_EntityWeightData_EntityWeight___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_EntityWeightData_EntityWeight___StaticFields {
    };

    struct IEqualityComparer_1_EntityWeightData_EntityWeight___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_EntityWeightData_EntityWeight___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_EntityWeightData_EntityWeight___VTable vtable;
    };

    struct EntityWeightData_EntityWeight__Enum__Array__VTable {
    };

    struct EntityWeightData_EntityWeight__Enum__Array__StaticFields {
    };

    struct EntityWeightData_EntityWeight__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityWeightData_EntityWeight__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityWeightData_EntityWeight__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_EntityWeightData_EntityWeight___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_EntityWeightData_EntityWeight___StaticFields {
    };

    struct IEnumerator_1_EntityWeightData_EntityWeight___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_EntityWeightData_EntityWeight___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_EntityWeightData_EntityWeight___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct EntityWeightData_EntityWeightSettings__Array__VTable {
    };

    struct EntityWeightData_EntityWeightSettings__Array__StaticFields {
    };

    struct EntityWeightData_EntityWeightSettings__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityWeightData_EntityWeightSettings__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityWeightData_EntityWeightSettings__Array__VTable vtable;
    };

    struct IEnumerator_1_EntityWeightData_EntityWeightSettings___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct IEnumerator_1_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct ICollection_1_EntityWeightData_EntityWeight___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_EntityWeightData_EntityWeight___StaticFields {
    };

    struct ICollection_1_EntityWeightData_EntityWeight___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_EntityWeightData_EntityWeight___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_EntityWeightData_EntityWeight___VTable vtable;
    };

    struct ICollection_1_EntityWeightData_EntityWeightSettings___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct ICollection_1_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct EntityWeightData_EntityWeightSettings___VTable {
    };

    struct EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__VTable {
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__StaticFields {
    };

    struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct IEnumerable_1_EntityWeightData_EntityWeight___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_EntityWeightData_EntityWeight___StaticFields {
    };

    struct IEnumerable_1_EntityWeightData_EntityWeight___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_EntityWeightData_EntityWeight___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_EntityWeightData_EntityWeight___VTable vtable;
    };

    struct IEnumerable_1_EntityWeightData_EntityWeightSettings___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct IEnumerable_1_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable {
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

    struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields {
    };

    struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___VTable vtable;
    };

    struct EntityWeightData__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct EntityWeightData__StaticFields {
    };

    struct EntityWeightData__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityWeightData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct EntityWeightData__VTable vtable;
    };

    struct HitSoundTimelineHooks__Fields {
        struct MonoBehaviour__Fields _;
        struct Entity* Entity;
        struct MoonTimeline* Hit;
        struct MoonTimeline* BlockedHit;
        struct MoonTimeline* DeathHit;
        struct Vitals* m_vitals;
    };

    struct HitSoundTimelineHooks {
        struct HitSoundTimelineHooks__Class* klass;
        MonitorData* monitor;
        struct HitSoundTimelineHooks__Fields fields;
    };

    struct HitSoundTimelineHooks__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnReceiveEvent;
    };

    struct HitSoundTimelineHooks__StaticFields {
    };

    struct HitSoundTimelineHooks__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HitSoundTimelineHooks__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HitSoundTimelineHooks__VTable vtable;
    };

    struct JumpGrid {
        struct JumpGrid__Class* klass;
        MonitorData* monitor;
    };

    struct JumpGrid__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct JumpGrid__StaticFields {
    };

    struct JumpGrid__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpGrid__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpGrid__VTable vtable;
    };

    enum class JumpGridEntry_CellTag__Enum : int32_t {
        Blue = 0x00000000,
        Green = 0x00000001,
        Red = 0x00000002,
        Magenta = 0x00000003,
        Yellow = 0x00000004,
        Cyan = 0x00000005,
        Count = 0x00000006,
    };

    struct JumpGridEntry_CellTag__Enum__Boxed {
        struct JumpGridEntry_CellTag__Enum__Class* klass;
        MonitorData* monitor;
        JumpGridEntry_CellTag__Enum value;
    };

    struct __declspec(align(8)) JumpGridEntry__Fields {
        struct String* CellName;
        JumpGridEntry_CellTag__Enum Tag;

        int32_t jumpNumber;
        struct Rect m_gridCell;
        struct Rect m_flipedRect;
        bool m_flipedRectCalculated;
        struct Vector2__Array* m_flipedCurvePoints;
        bool m_flipedPointsCalculated;
    };

    struct JumpGridEntry {
        struct JumpGridEntry__Class* klass;
        MonitorData* monitor;
        struct JumpGridEntry__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_JumpGridEntry_CellTag_UnityEngine_Color___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_JumpGridEntry_CellTag_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_JumpGridEntry_CellTag_UnityEngine_Color_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_JumpGridEntry_CellTag_UnityEngine_Color_ {
        struct Dictionary_2_JumpGridEntry_CellTag_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_JumpGridEntry_CellTag_UnityEngine_Color___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color_ {
        int32_t hashCode;
        int32_t next;
        JumpGridEntry_CellTag__Enum key;

        struct Color value;
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array {
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color_ vector[32];
    };

    struct IEqualityComparer_1_JumpGridEntry_CellTag_ {
        struct IEqualityComparer_1_JumpGridEntry_CellTag___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___Fields {
        struct Dictionary_2_JumpGridEntry_CellTag_UnityEngine_Color_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___Fields fields;
    };

    struct JumpGridEntry_CellTag__Enum__Array {
        struct JumpGridEntry_CellTag__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        JumpGridEntry_CellTag__Enum vector[32];
    };

    struct IEnumerator_1_JumpGridEntry_CellTag_ {
        struct IEnumerator_1_JumpGridEntry_CellTag___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_JumpGridEntry_CellTag_UnityEngine_Color___Fields {
        struct Dictionary_2_JumpGridEntry_CellTag_UnityEngine_Color_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_JumpGridEntry_CellTag_UnityEngine_Color_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_JumpGridEntry_CellTag_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_JumpGridEntry_CellTag_UnityEngine_Color___Fields fields;
    };

    struct ICollection_1_JumpGridEntry_CellTag_ {
        struct ICollection_1_JumpGridEntry_CellTag___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color_ {
        JumpGridEntry_CellTag__Enum key;

        struct Color value;
    };

    struct KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color___Boxed {
        struct KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color_ fields;
    };

    struct KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color___Array {
        struct KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color_ {
        struct IEnumerator_1_KeyValuePair_2_JumpGridEntry_CellTag_UnityEngine_Color___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_JumpGridEntry_CellTag_ {
        struct IEnumerable_1_JumpGridEntry_CellTag___Class* klass;
        MonitorData* monitor;
    };

    struct JumpGridEntry_CellTag__Enum__VTable {
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

    struct JumpGridEntry_CellTag__Enum__StaticFields {
    };

    struct JumpGridEntry_CellTag__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpGridEntry_CellTag__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpGridEntry_CellTag__Enum__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_JumpGridEntry_CellTag_UnityEngine_Color___Array__VTable vtable;
    };

    struct IEqualityComparer_1_JumpGridEntry_CellTag___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_JumpGridEntry_CellTag___StaticFields {
    };

    struct IEqualityComparer_1_JumpGridEntry_CellTag___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_JumpGridEntry_CellTag___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_JumpGridEntry_CellTag___VTable vtable;
    };

    struct JumpGridEntry_CellTag__Enum__Array__VTable {
    };

    struct JumpGridEntry_CellTag__Enum__Array__StaticFields {
    };

    struct JumpGridEntry_CellTag__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct JumpGridEntry_CellTag__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct JumpGridEntry_CellTag__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_JumpGridEntry_CellTag___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_JumpGridEntry_CellTag___StaticFields {
    };

    struct IEnumerator_1_JumpGridEntry_CellTag___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_JumpGridEntry_CellTag___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_JumpGridEntry_CellTag___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_JumpGridEntry_CellTag_UnityEngine_Color___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_JumpGridEntry_CellTag_UnityEngine_Color___VTable {
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

} // namespace app
