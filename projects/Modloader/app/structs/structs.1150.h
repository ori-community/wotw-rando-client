namespace app {
    struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem_ {
        struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) GameplayUISystem__Fields {
        int32_t m_enableCount;
        int32_t m_disableCount;
        float _DisableAutomaticHidingTime_k__BackingField;
    };

    struct GameplayUISystem {
        struct GameplayUISystem__Class* klass;
        MonitorData* monitor;
        struct GameplayUISystem__Fields fields;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData OnInit;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData __unknown;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___StaticFields {
        struct GameplayUISystem* m_instance;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimelineSystem_1_Moon_Timeline_Systems_GameplayUISystem___VTable vtable;
    };

    struct GameplayUISystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData OnInit;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData OnUpdate_1;
    };

    struct GameplayUISystem__StaticFields {
    };

    struct GameplayUISystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameplayUISystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameplayUISystem__VTable vtable;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem_ {
        struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) ReplayFastForwardSystem__Fields {
        int32_t m_count;
    };

    struct ReplayFastForwardSystem {
        struct ReplayFastForwardSystem__Class* klass;
        MonitorData* monitor;
        struct ReplayFastForwardSystem__Fields fields;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData OnInit;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData __unknown;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___StaticFields {
        struct ReplayFastForwardSystem* m_instance;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimelineSystem_1_Moon_Timeline_Systems_ReplayFastForwardSystem___VTable vtable;
    };

    struct ReplayFastForwardSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData OnInit;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData OnUpdate_1;
    };

    struct ReplayFastForwardSystem__StaticFields {
    };

    struct ReplayFastForwardSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ReplayFastForwardSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ReplayFastForwardSystem__VTable vtable;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem_ {
        struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) SceneManagementSystem__Fields {
        struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_* m_loadedStates;
        struct List_1_RuntimeSceneMetaData_* m_sceneStateToRemove;
        int32_t m_sceneEntityPlayCount;
        ScenesManager_SceneManagementMode__Enum Mode;

        float _IncreasedSceneEntityPlayCountTime_k__BackingField;
        struct RuntimeSceneMetaData* LastMasterTimelineScene;
        struct FixedDurationSceneEntity* LastFixedDurationSceneEntity;
        struct List_1_RuntimeSceneMetaData_* m_toRemove;
        bool m_isSuspended;
    };

    struct SceneManagementSystem {
        struct SceneManagementSystem__Class* klass;
        MonitorData* monitor;
        struct SceneManagementSystem__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_RuntimeSceneMetaData_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        int32_t hashCode;
        int32_t next;
        struct RuntimeSceneMetaData* key;
        struct SceneManagementSystem_SceneLoadedState* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ fields;
    };

    struct __declspec(align(8)) SceneManagementSystem_SceneLoadedState__Fields {
        int32_t Count;
        bool Enabled;
        bool Suspended;
    };

    struct SceneManagementSystem_SceneLoadedState {
        struct SceneManagementSystem_SceneLoadedState__Class* klass;
        MonitorData* monitor;
        struct SceneManagementSystem_SceneLoadedState__Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array {
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields {
        struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields {
        struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Fields fields;
    };

    struct SceneManagementSystem_SceneLoadedState__Array {
        struct SceneManagementSystem_SceneLoadedState__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SceneManagementSystem_SceneLoadedState* vector[32];
    };

    struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct RuntimeSceneMetaData* key;
        struct SceneManagementSystem_SceneLoadedState* value;
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Boxed {
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ fields;
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array {
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState_ {
        struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class* klass;
        MonitorData* monitor;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData OnInit;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData __unknown;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___StaticFields {
        struct SceneManagementSystem* m_instance;
    };

    struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TimelineSystem_1_Moon_Timeline_Systems_SceneManagementSystem___VTable vtable;
    };

    struct SceneManagementSystem_SceneLoadedState__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneManagementSystem_SceneLoadedState__StaticFields {
    };

    struct SceneManagementSystem_SceneLoadedState__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneManagementSystem_SceneLoadedState__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneManagementSystem_SceneLoadedState__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__VTable {
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__StaticFields {
    };

    struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_Entry_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
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

    struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_KeyCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct SceneManagementSystem_SceneLoadedState__Array__VTable {
    };

    struct SceneManagementSystem_SceneLoadedState__Array__StaticFields {
    };

    struct SceneManagementSystem_SceneLoadedState__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneManagementSystem_SceneLoadedState__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneManagementSystem_SceneLoadedState__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
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

    struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_TKey_TValue_ValueCollection_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
        VirtualInvokeData get_Count;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData Add;
        VirtualInvokeData Clear;
        VirtualInvokeData Contains;
        VirtualInvokeData CopyTo;
        VirtualInvokeData Remove;
    };

    struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICollection_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct SceneManagementSystem_SceneLoadedState___VTable {
    };

    struct SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__VTable {
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__StaticFields {
    };

    struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Array__VTable vtable;
    };

    struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_KeyValuePair_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
        VirtualInvokeData GetEnumerator;
    };

    struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerable_1_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable {
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

    struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields {
    };

    struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Dictionary_2_RuntimeSceneMetaData_Moon_Timeline_Systems_SceneManagementSystem_SceneLoadedState___VTable vtable;
    };

    struct SceneManagementSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_ExecutionOrderOffset;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData OnInit;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData OnUpdate_1;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

    struct SceneManagementSystem__StaticFields {
    };

    struct SceneManagementSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneManagementSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneManagementSystem__VTable vtable;
    };

    struct __declspec(align(8)) SceneManagementSystem_c_DisplayClass23_0__Fields {
        struct SceneManagementSystem* __4__this;
        struct RuntimeSceneMetaData* metaData;
        struct Action* enabledCallback;
    };

    struct SceneManagementSystem_c_DisplayClass23_0 {
        struct SceneManagementSystem_c_DisplayClass23_0__Class* klass;
        MonitorData* monitor;
        struct SceneManagementSystem_c_DisplayClass23_0__Fields fields;
    };

    struct SceneManagementSystem_c_DisplayClass23_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SceneManagementSystem_c_DisplayClass23_0__StaticFields {
    };

    struct SceneManagementSystem_c_DisplayClass23_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneManagementSystem_c_DisplayClass23_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneManagementSystem_c_DisplayClass23_0__VTable vtable;
    };

    struct SceneEntityPlaycountResetter {
        struct SceneEntityPlaycountResetter__Class* klass;
        MonitorData* monitor;
    };

    struct SceneEntityPlaycountResetter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnLateUpdate;
    };

    struct SceneEntityPlaycountResetter__StaticFields {
    };

    struct SceneEntityPlaycountResetter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SceneEntityPlaycountResetter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SceneEntityPlaycountResetter__VTable vtable;
    };

    struct CameraZoneVirtualAnimator__Fields {
        struct GameObjectVirtualAnimator__Fields _;
        struct ICameraInfluencer* _Influencer_k__BackingField;
    };

    struct CameraZoneVirtualAnimator {
        struct CameraZoneVirtualAnimator__Class* klass;
        MonitorData* monitor;
        struct CameraZoneVirtualAnimator__Fields fields;
    };

    struct ICameraInfluencer {
        struct ICameraInfluencer__Class* klass;
        MonitorData* monitor;
    };

    struct ICameraInfluencer__VTable {
        VirtualInvokeData get_IsInfluencingCamera;
    };

    struct ICameraInfluencer__StaticFields {
    };

    struct ICameraInfluencer__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ICameraInfluencer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ICameraInfluencer__VTable vtable;
    };

    struct CameraZoneVirtualAnimator__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_EventReciever;
        VirtualInvokeData set_EventReciever;
        VirtualInvokeData StartPlayback;
        VirtualInvokeData StopPlayback;
        VirtualInvokeData PausePlayback;
        VirtualInvokeData ResumePlayback;
        VirtualInvokeData get_IsReadOnly;
        VirtualInvokeData get_PlayState;
        VirtualInvokeData get_PlaybackStatus;
        VirtualInvokeData get_Hash;
        VirtualInvokeData get_Name;
        VirtualInvokeData Reset;
        VirtualInvokeData get_ExternalTarget;
    };

    struct CameraZoneVirtualAnimator__StaticFields {
    };

    struct CameraZoneVirtualAnimator__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct CameraZoneVirtualAnimator__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct CameraZoneVirtualAnimator__VTable vtable;
    };

    struct SpiritLeashComboMove__Fields {
        struct CharacterStateComboAdapter__Fields _;
        ComboMoveState__Enum _m_comboMoveState_k__BackingField;
    };

    struct SpiritLeashComboMove {
        struct SpiritLeashComboMove__Class* klass;
        MonitorData* monitor;
        struct SpiritLeashComboMove__Fields fields;
    };

    struct SpiritLeashComboMove__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_m_comboMoveState;
        VirtualInvokeData set_m_comboMoveState;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData OnInitialize;
        VirtualInvokeData EnterMove;
        VirtualInvokeData UpdateMove;
        VirtualInvokeData ExitMove;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData CanExecute;
        VirtualInvokeData Interrupt;
        VirtualInvokeData ModifyGravityPlatformMovementSettings;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
        VirtualInvokeData OnAnimationEvent;
        VirtualInvokeData get_CharacterState;
        VirtualInvokeData get_TimeToStartComboWindow;
    };

    struct SpiritLeashComboMove__StaticFields {
    };

    struct SpiritLeashComboMove__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritLeashComboMove__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritLeashComboMove__VTable vtable;
    };

    struct ComboSystem__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct ComboSystem {
        struct ComboSystem__Class* klass;
        MonitorData* monitor;
        struct ComboSystem__Fields fields;
    };

    struct ComboSystem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ComboSystem__StaticFields {
    };

    struct ComboSystem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ComboSystem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ComboSystem__VTable vtable;
    };

    struct HammerComboMoveAdapter__Fields {
        struct MeleeComboAdapter__Fields _;
    };

    struct HammerComboMoveAdapter {
        struct HammerComboMoveAdapter__Class* klass;
        MonitorData* monitor;
        struct HammerComboMoveAdapter__Fields fields;
    };

    struct HammerComboMoveAdapter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData OnInitialize;
        VirtualInvokeData EnterMove;
        VirtualInvokeData UpdateMove;
        VirtualInvokeData ExitMove;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData CanExecute;
        VirtualInvokeData Interrupt;
        VirtualInvokeData ModifyGravityPlatformMovementSettings;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
        VirtualInvokeData OnAnimationEvent;
        VirtualInvokeData SetWeapon;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData OnCollision;
    };

    struct HammerComboMoveAdapter__StaticFields {
    };

    struct HammerComboMoveAdapter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HammerComboMoveAdapter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HammerComboMoveAdapter__VTable vtable;
    };

    struct SpiritSpearComboMove__Fields {
        struct CharacterStateComboAdapter__Fields _;
        ComboMoveState__Enum _m_comboMoveState_k__BackingField;
    };

    struct SpiritSpearComboMove {
        struct SpiritSpearComboMove__Class* klass;
        MonitorData* monitor;
        struct SpiritSpearComboMove__Fields fields;
    };

    struct SpiritSpearComboMove__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_m_comboMoveState;
        VirtualInvokeData set_m_comboMoveState;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData OnInitialize;
        VirtualInvokeData EnterMove;
        VirtualInvokeData UpdateMove;
        VirtualInvokeData ExitMove;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData CanExecute;
        VirtualInvokeData Interrupt;
        VirtualInvokeData ModifyGravityPlatformMovementSettings;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
        VirtualInvokeData OnAnimationEvent;
        VirtualInvokeData get_CharacterState;
        VirtualInvokeData get_TimeToStartComboWindow;
    };

    struct SpiritSpearComboMove__StaticFields {
    };

    struct SpiritSpearComboMove__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpiritSpearComboMove__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpiritSpearComboMove__VTable vtable;
    };

    struct SwordComboMoveAdapter__Fields {
        struct MeleeComboAdapter__Fields _;
    };

    struct SwordComboMoveAdapter {
        struct SwordComboMoveAdapter__Class* klass;
        MonitorData* monitor;
        struct SwordComboMoveAdapter__Fields fields;
    };

    struct SwordComboMoveAdapter__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData __unknown;
        VirtualInvokeData __unknown_1;
        VirtualInvokeData get_ComboAbilityType;
        VirtualInvokeData OnInitialize;
        VirtualInvokeData EnterMove;
        VirtualInvokeData UpdateMove;
        VirtualInvokeData ExitMove;
        VirtualInvokeData get_IsAttackButtonDown;
        VirtualInvokeData get_OnAttackButtonPressed;
        VirtualInvokeData get_OnAttackButtonReleased;
        VirtualInvokeData CanExecute;
        VirtualInvokeData Interrupt;
        VirtualInvokeData ModifyGravityPlatformMovementSettings;
        VirtualInvokeData ModifyHorizontalPlatformMovementSettings;
        VirtualInvokeData OnAnimationEvent;
        VirtualInvokeData SetWeapon;
        VirtualInvokeData __unknown_2;
        VirtualInvokeData OnCollision;
    };

    struct SwordComboMoveAdapter__StaticFields {
    };

    struct SwordComboMoveAdapter__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SwordComboMoveAdapter__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SwordComboMoveAdapter__VTable vtable;
    };

    enum class MonoManager_UpdateMode__Enum : int32_t {
        Auto = 0x00000000,
        Manual = 0x00000001,
    };

    struct MonoManager_UpdateMode__Enum__Boxed {
        struct MonoManager_UpdateMode__Enum__Class* klass;
        MonitorData* monitor;
        MonoManager_UpdateMode__Enum value;
    };

    struct MonoManager_UpdateMode__Enum__VTable {
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

} // namespace app
