namespace app {
    struct PlayerAbilities_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PlayerAbilities_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PlayerAbilities_c__VTable vtable;
    };

    struct CommandEnumComparer {
    };

    struct CommandEnumComparer__Boxed {
        struct CommandEnumComparer__Class* klass;
        MonitorData* monitor;
        struct CommandEnumComparer fields;
    };

    struct CommandEnumComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
    };

    struct CommandEnumComparer__StaticFields {
    };

    struct CommandEnumComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CommandEnumComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CommandEnumComparer__VTable vtable;
    };

    struct AbilityTypeEnumComparer {
    };

    struct AbilityTypeEnumComparer__Boxed {
        struct AbilityTypeEnumComparer__Class* klass;
        MonitorData* monitor;
        struct AbilityTypeEnumComparer fields;
    };

    struct AbilityTypeEnumComparer__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Equals_1;
        VirtualInvokeData GetHashCode_1;
    };

    struct AbilityTypeEnumComparer__StaticFields {
    };

    struct AbilityTypeEnumComparer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AbilityTypeEnumComparer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AbilityTypeEnumComparer__VTable vtable;
    };

    struct PlayerInputButtonRebinder__Fields {
        struct GuidOwner__Fields _;
        struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_* Blocks;
        struct Dictionary_2_Core_Input_Command_AbilityType_* m_buttonAbilityOverrideMap;
        struct Dictionary_2_AbilityType_Core_Input_Command_* m_abilityToButtonOverrideMap;
        struct Dictionary_2_Core_Input_Command_System_Int32_* m_buttonBlockingMap;
        struct Dictionary_2_Core_Input_Command_AbilityType_* m_buttonAbilityMap;
        struct Dictionary_2_AbilityType_Core_Input_Command_* m_abilityButtonMap;
        bool AbilitiesBindingsDirty;
    };

    struct PlayerInputButtonRebinder {
        struct PlayerInputButtonRebinder__Class* klass;
        MonitorData* monitor;
        struct PlayerInputButtonRebinder__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_AbilityType_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_ {
        struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags_ {
        int32_t hashCode;
        int32_t next;
        AbilityType__Enum key;

        SeinLogicCycle_StateFlags__Enum value;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array {
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___Fields {
        struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___Fields {
        struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___Fields fields;
    };

    struct SeinLogicCycle_StateFlags__Enum__Array {
        struct SeinLogicCycle_StateFlags__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        SeinLogicCycle_StateFlags__Enum vector[32];
    };

    struct IEnumerator_1_SeinLogicCycle_StateFlags_ {
        struct IEnumerator_1_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_SeinLogicCycle_StateFlags_ {
        struct ICollection_1_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags_ {
        AbilityType__Enum key;

        SeinLogicCycle_StateFlags__Enum value;
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Boxed {
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags_ fields;
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Array {
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags_ {
        struct IEnumerator_1_KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_SeinLogicCycle_StateFlags_ {
        struct IEnumerable_1_SeinLogicCycle_StateFlags___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_Core_Input_Command_AbilityType___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_Core_Input_Command_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_Core_Input_Command_AbilityType_ {
        struct Dictionary_2_Core_Input_Command_AbilityType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_Core_Input_Command_AbilityType___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType_ {
        int32_t hashCode;
        int32_t next;
        Input_Command__Enum key;

        AbilityType__Enum value;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array {
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType_ vector[32];
    };

    struct IEqualityComparer_1_Core_Input_Command_ {
        struct IEqualityComparer_1_Core_Input_Command___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___Fields {
        struct Dictionary_2_Core_Input_Command_AbilityType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___Fields fields;
    };

    struct Input_Command__Enum__Array {
        struct Input_Command__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        Input_Command__Enum vector[32];
    };

    struct IEnumerator_1_Core_Input_Command_ {
        struct IEnumerator_1_Core_Input_Command___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___Fields {
        struct Dictionary_2_Core_Input_Command_AbilityType_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___Fields fields;
    };

    struct ICollection_1_Core_Input_Command_ {
        struct ICollection_1_Core_Input_Command___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType_ {
        Input_Command__Enum key;

        AbilityType__Enum value;
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___Boxed {
        struct KeyValuePair_2_Core_Input_Command_AbilityType___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_Core_Input_Command_AbilityType_ fields;
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___Array {
        struct KeyValuePair_2_Core_Input_Command_AbilityType___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_Core_Input_Command_AbilityType_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_Core_Input_Command_AbilityType_ {
        struct IEnumerator_1_KeyValuePair_2_Core_Input_Command_AbilityType___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Core_Input_Command_ {
        struct IEnumerable_1_Core_Input_Command___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_AbilityType_Core_Input_Command___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_AbilityType_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Core_Input_Command_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Core_Input_Command_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_AbilityType_Core_Input_Command_ {
        struct Dictionary_2_AbilityType_Core_Input_Command___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_AbilityType_Core_Input_Command___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command_ {
        int32_t hashCode;
        int32_t next;
        AbilityType__Enum key;

        Input_Command__Enum value;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command___Array {
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_Core_Input_Command_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Core_Input_Command___Fields {
        struct Dictionary_2_AbilityType_Core_Input_Command_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Core_Input_Command_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Core_Input_Command___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_Core_Input_Command___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Core_Input_Command___Fields {
        struct Dictionary_2_AbilityType_Core_Input_Command_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Core_Input_Command_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Core_Input_Command___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_Core_Input_Command___Fields fields;
    };

    struct KeyValuePair_2_AbilityType_Core_Input_Command_ {
        AbilityType__Enum key;

        Input_Command__Enum value;
    };

    struct KeyValuePair_2_AbilityType_Core_Input_Command___Boxed {
        struct KeyValuePair_2_AbilityType_Core_Input_Command___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_AbilityType_Core_Input_Command_ fields;
    };

    struct KeyValuePair_2_AbilityType_Core_Input_Command___Array {
        struct KeyValuePair_2_AbilityType_Core_Input_Command___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_AbilityType_Core_Input_Command_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_AbilityType_Core_Input_Command_ {
        struct IEnumerator_1_KeyValuePair_2_AbilityType_Core_Input_Command___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_Core_Input_Command_System_Int32___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_Core_Input_Command_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_System_Int32_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_System_Int32_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_Core_Input_Command_System_Int32_ {
        struct Dictionary_2_Core_Input_Command_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_Core_Input_Command_System_Int32___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32_ {
        int32_t hashCode;
        int32_t next;
        Input_Command__Enum key;

        int32_t value;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32___Array {
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_System_Int32_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_System_Int32___Fields {
        struct Dictionary_2_Core_Input_Command_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_System_Int32_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_System_Int32___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_System_Int32___Fields {
        struct Dictionary_2_Core_Input_Command_System_Int32_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_System_Int32_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_System_Int32___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_System_Int32___Fields fields;
    };

    struct KeyValuePair_2_Core_Input_Command_System_Int32_ {
        Input_Command__Enum key;

        int32_t value;
    };

    struct KeyValuePair_2_Core_Input_Command_System_Int32___Boxed {
        struct KeyValuePair_2_Core_Input_Command_System_Int32___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_Core_Input_Command_System_Int32_ fields;
    };

    struct KeyValuePair_2_Core_Input_Command_System_Int32___Array {
        struct KeyValuePair_2_Core_Input_Command_System_Int32___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_Core_Input_Command_System_Int32_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_Core_Input_Command_System_Int32_ {
        struct IEnumerator_1_KeyValuePair_2_Core_Input_Command_System_Int32___Class* klass;
        MonitorData* monitor;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_AbilityType_SeinLogicCycle_StateFlags___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct SeinLogicCycle_StateFlags__Enum__Array__VTable {
    };

    struct SeinLogicCycle_StateFlags__Enum__Array__StaticFields {
    };

    struct SeinLogicCycle_StateFlags__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinLogicCycle_StateFlags__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinLogicCycle_StateFlags__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_SeinLogicCycle_StateFlags___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct IEnumerator_1_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct ICollection_1_SeinLogicCycle_StateFlags___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct ICollection_1_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct SeinLogicCycle_StateFlags___VTable {
    };

    struct SeinLogicCycle_StateFlags___StaticFields {
    };

    struct SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Array__VTable {
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Array__StaticFields {
    };

    struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_AbilityType_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct IEnumerable_1_SeinLogicCycle_StateFlags___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct IEnumerable_1_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___VTable {
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

    struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___StaticFields {
    };

    struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_AbilityType_SeinLogicCycle_StateFlags___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_Core_Input_Command_AbilityType___Array__VTable vtable;
    };

    struct IEqualityComparer_1_Core_Input_Command___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData GetHashCode;
    };

    struct IEqualityComparer_1_Core_Input_Command___StaticFields {
    };

    struct IEqualityComparer_1_Core_Input_Command___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEqualityComparer_1_Core_Input_Command___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEqualityComparer_1_Core_Input_Command___VTable vtable;
    };

    struct Input_Command__Enum__Array__VTable {
    };

    struct Input_Command__Enum__Array__StaticFields {
    };

    struct Input_Command__Enum__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Input_Command__Enum__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Input_Command__Enum__Array__VTable vtable;
    };

    struct IEnumerator_1_Core_Input_Command___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Core_Input_Command___StaticFields {
    };

    struct IEnumerator_1_Core_Input_Command___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Core_Input_Command___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Core_Input_Command___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_Core_Input_Command_AbilityType___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_Core_Input_Command_AbilityType___VTable vtable;
    };

    struct ICollection_1_Core_Input_Command___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Core_Input_Command___StaticFields {
    };

    struct ICollection_1_Core_Input_Command___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Core_Input_Command___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Core_Input_Command___VTable vtable;
    };

    struct AbilityType___VTable {
    };

    struct AbilityType___StaticFields {
    };

    struct AbilityType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct AbilityType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct AbilityType___VTable vtable;
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___StaticFields {
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_Core_Input_Command_AbilityType___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_Core_Input_Command_AbilityType___VTable vtable;
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___Array__VTable {
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___Array__StaticFields {
    };

    struct KeyValuePair_2_Core_Input_Command_AbilityType___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_Core_Input_Command_AbilityType___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_Core_Input_Command_AbilityType___Array__VTable vtable;
    };

} // namespace app
