namespace app {
struct MortarCreep__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MortarCreep__StaticFields {
};

struct MortarCreep__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MortarCreep__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MortarCreep__VTable vtable;
};

struct MortarDeathReaction__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline *Death;
    struct DeathStartEffectSpawnSetting *DeathStartEffect;
};

struct MortarDeathReaction {
    struct MortarDeathReaction__Class *klass;
    MonitorData *monitor;
    struct MortarDeathReaction__Fields fields;
};

struct MortarDeathReaction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData get_Entity;
    VirtualInvokeData OnExecuteTask_1;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
};

struct MortarDeathReaction__StaticFields {
};

struct MortarDeathReaction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MortarDeathReaction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MortarDeathReaction__VTable vtable;
};

struct MortarPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    float HideDistance;
    bool CanTurnAround;
    bool OverrideAttackSettings;
    float MaxSpitRange;
    struct GameObject *MortarEntityPrefab;
    bool AllowSpawnCreep;
};

struct MortarPlaceholder {
    struct MortarPlaceholder__Class *klass;
    MonitorData *monitor;
    struct MortarPlaceholder__Fields fields;
};

struct MortarPlaceholder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
    VirtualInvokeData OnSceneRootPreDisable;
    VirtualInvokeData get_Prefab;
    VirtualInvokeData get_RequiresGroundToSpawn;
    VirtualInvokeData get_CheckForOverlap;
    VirtualInvokeData ClearPrefabLinks;
    VirtualInvokeData get_CanSpawn;
    VirtualInvokeData InstantiateInstance;
    VirtualInvokeData PoolCurrentInstance;
    VirtualInvokeData Spawn;
    VirtualInvokeData OnStart;
    VirtualInvokeData OnPlaceholderEnable;
    VirtualInvokeData OnPlaceholderDisable;
    VirtualInvokeData OnRestoreCheckpoint;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnHealthZero;
    VirtualInvokeData OnDeath;
    VirtualInvokeData UpdateAutoSpawnState;
    VirtualInvokeData UpdateSpawnOnEventState;
    VirtualInvokeData get_IsOnScreenPaddedExtended;
    VirtualInvokeData get_IsOnScreenPadded;
    VirtualInvokeData get_IsOnScreen;
    VirtualInvokeData InstantiateFromPooledObj;
    VirtualInvokeData IsUsingVariations;
    VirtualInvokeData CanUseAutosetupPositionInOnSand;
};

struct MortarPlaceholder__StaticFields {
    bool SpawnOnlyIfHasGround;
};

struct MortarPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MortarPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MortarPlaceholder__VTable vtable;
};

struct __declspec(align(8)) MortarEntity_AimVeloCache_Generator__Fields {
    struct MortarEntity_AimVeloCache_EntityParams *entity;
    struct MortarEntity_AimVeloCache_Grid *grid;
    struct MortarEntity_AimVeloCache_Packer *packer;
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array *m_velocitiesWithTargets;
};

struct MortarEntity_AimVeloCache_Generator {
    struct MortarEntity_AimVeloCache_Generator__Class *klass;
    MonitorData *monitor;
    struct MortarEntity_AimVeloCache_Generator__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_System_UInt16_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ {
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3_ {
    int32_t hashCode;
    int32_t next;
    uint16_t key;
    struct List_1_UnityEngine_Vector3_ *value;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array {
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3_ vector[32];
};

struct IEqualityComparer_1_System_UInt16_ {
    struct IEqualityComparer_1_System_UInt16___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___Fields {
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___Fields fields;
};

struct IEnumerator_1_System_UInt16_ {
    struct IEnumerator_1_System_UInt16___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___Fields {
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___Fields fields;
};

struct List_1_UnityEngine_Vector3___Array {
    struct List_1_UnityEngine_Vector3___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct List_1_UnityEngine_Vector3_ *vector[32];
};

struct IEnumerator_1_List_1_UnityEngine_Vector3_ {
    struct IEnumerator_1_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_System_UInt16_ {
    struct ICollection_1_System_UInt16___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_List_1_UnityEngine_Vector3_ {
    struct ICollection_1_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3_ {
    uint16_t key;
    struct List_1_UnityEngine_Vector3_ *value;
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Boxed {
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3_ fields;
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Array {
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3_ {
    struct IEnumerator_1_KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_System_UInt16_ {
    struct IEnumerable_1_System_UInt16___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_List_1_UnityEngine_Vector3_ {
    struct IEnumerable_1_List_1_UnityEngine_Vector3___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array {
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3_ *vector[32];
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_System_UInt16_List_1_UnityEngine_Vector3___Array__VTable vtable;
};

struct IEqualityComparer_1_System_UInt16___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_System_UInt16___StaticFields {
};

struct IEqualityComparer_1_System_UInt16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_System_UInt16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_System_UInt16___VTable vtable;
};

struct IEnumerator_1_System_UInt16___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_System_UInt16___StaticFields {
};

struct IEnumerator_1_System_UInt16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_System_UInt16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_System_UInt16___VTable vtable;
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___VTable {
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

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___StaticFields {
};

struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_KeyCollection_System_UInt16_List_1_UnityEngine_Vector3___VTable vtable;
};

struct List_1_UnityEngine_Vector3___Array__VTable {
};

struct List_1_UnityEngine_Vector3___Array__StaticFields {
};

struct List_1_UnityEngine_Vector3___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_Vector3___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_Vector3___Array__VTable vtable;
};

struct IEnumerator_1_List_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_List_1_UnityEngine_Vector3___StaticFields {
};

struct IEnumerator_1_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_List_1_UnityEngine_Vector3___VTable vtable;
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___VTable {
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

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___StaticFields {
};

struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_ValueCollection_System_UInt16_List_1_UnityEngine_Vector3___VTable vtable;
};

struct ICollection_1_System_UInt16___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_System_UInt16___StaticFields {
};

struct ICollection_1_System_UInt16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_System_UInt16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_System_UInt16___VTable vtable;
};

struct ICollection_1_List_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData get_Count;
    VirtualInvokeData get_IsReadOnly;
    VirtualInvokeData Add;
    VirtualInvokeData Clear;
    VirtualInvokeData Contains;
    VirtualInvokeData CopyTo;
    VirtualInvokeData Remove;
};

struct ICollection_1_List_1_UnityEngine_Vector3___StaticFields {
};

struct ICollection_1_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ICollection_1_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ICollection_1_List_1_UnityEngine_Vector3___VTable vtable;
};

struct List_1_UnityEngine_Vector3__1__VTable {
};

struct List_1_UnityEngine_Vector3__1__StaticFields {
};

struct List_1_UnityEngine_Vector3__1__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_UnityEngine_Vector3__1__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_UnityEngine_Vector3__1__VTable vtable;
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___StaticFields {
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___VTable vtable;
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Array__VTable {
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Array__StaticFields {
};

struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Array__VTable vtable;
};

struct IEnumerator_1_KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___StaticFields {
};

struct IEnumerator_1_KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KeyValuePair_2_System_UInt16_List_1_UnityEngine_Vector3___VTable vtable;
};

struct IEnumerable_1_System_UInt16___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_System_UInt16___StaticFields {
};

struct IEnumerable_1_System_UInt16___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_System_UInt16___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_System_UInt16___VTable vtable;
};

struct IEnumerable_1_List_1_UnityEngine_Vector3___VTable {
    VirtualInvokeData GetEnumerator;
};

struct IEnumerable_1_List_1_UnityEngine_Vector3___StaticFields {
};

struct IEnumerable_1_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerable_1_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerable_1_List_1_UnityEngine_Vector3___VTable vtable;
};

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___VTable {
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

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___StaticFields {
};

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___VTable vtable;
};

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__VTable {
};

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__StaticFields {
};

struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_System_UInt16_List_1_UnityEngine_Vector3___Array__VTable vtable;
};

struct MortarEntity_AimVeloCache_Generator__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MortarEntity_AimVeloCache_Generator__StaticFields {
};

struct MortarEntity_AimVeloCache_Generator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MortarEntity_AimVeloCache_Generator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MortarEntity_AimVeloCache_Generator__VTable vtable;
};

struct MortarEntity_AimVeloCache_Caster {
    struct MortarEntity_AimVeloCache_Caster__Class *klass;
    MonitorData *monitor;
};

struct MortarEntity_AimVeloCache_Caster__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MortarEntity_AimVeloCache_Caster__StaticFields {
    float ArcMaxDuration;
    float ArcTimeStep;
    float HitTolerance;
    struct RaycastHit__Array *s_smallRaycastCache;
};

struct MortarEntity_AimVeloCache_Caster__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MortarEntity_AimVeloCache_Caster__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MortarEntity_AimVeloCache_Caster__VTable vtable;
};

struct EntityReactionBehaviour_1_MortarEntity___Fields {
    struct EntityReactionBehaviour__Fields _;
};

struct EntityReactionBehaviour_1_MortarEntity_ {
    struct EntityReactionBehaviour_1_MortarEntity___Class *klass;
    MonitorData *monitor;
    struct EntityReactionBehaviour_1_MortarEntity___Fields fields;
};

struct EntityHitReactionBehaviour_1_MortarEntity___Fields {
    struct EntityReactionBehaviour_1_MortarEntity___Fields _;
    struct List_1_DamageType_ *DamageTypePreventingInterruption;
    struct List_1_DamageWeight_ *DamageWeightPreventingInterruption;
    struct HashSet_1_DamageType_ *m_damageTypePreventingInterruption;
    struct HashSet_1_DamageWeight_ *m_damageWeightPreventingInterruption;
    bool _HasLocomotion_k__BackingField;
    struct CharacterPlatformMovement *m_platformMovement;
    EntityWeightData_EntityWeight__Enum m_weight;
    
    struct HitReactionSettings *m_kickbackSettings;
};

struct EntityHitReactionBehaviour_1_MortarEntity_ {
    struct EntityHitReactionBehaviour_1_MortarEntity___Class *klass;
    MonitorData *monitor;
    struct EntityHitReactionBehaviour_1_MortarEntity___Fields fields;
};

struct MortarHitReaction__Fields {
    struct EntityHitReactionBehaviour_1_MortarEntity___Fields _;
    struct MoonTimeline *HitAdditive;
    struct MortarHideBehaviour *HideBehaviour;
    struct Event_1 *OnAnyHitEvent;
};

struct MortarHitReaction {
    struct MortarHitReaction__Class *klass;
    MonitorData *monitor;
    struct MortarHitReaction__Fields fields;
};

struct EntityReactionBehaviour_1_MortarEntity___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData get_Entity;
    VirtualInvokeData __unknown;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
};

struct EntityReactionBehaviour_1_MortarEntity___StaticFields {
};

struct EntityReactionBehaviour_1_MortarEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityReactionBehaviour_1_MortarEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityReactionBehaviour_1_MortarEntity___VTable vtable;
};

struct EntityHitReactionBehaviour_1_MortarEntity___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData get_Entity;
    VirtualInvokeData OnExecuteTask_1;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
    VirtualInvokeData IsDamageTypePreventingInterruption;
    VirtualInvokeData IsInterruptingDamageWeight;
};

struct EntityHitReactionBehaviour_1_MortarEntity___StaticFields {
};

struct EntityHitReactionBehaviour_1_MortarEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityHitReactionBehaviour_1_MortarEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityHitReactionBehaviour_1_MortarEntity___VTable vtable;
};

struct MortarHitReaction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData get_Entity;
    VirtualInvokeData OnExecuteTask_1;
    VirtualInvokeData OnInitializeTask_1;
    VirtualInvokeData OnEnterTask_1;
    VirtualInvokeData OnExitTask_1;
    VirtualInvokeData OnResetTask_1;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData get_RunInParallel;
    VirtualInvokeData get_CanInterruptSelf;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData CanInterrupt;
    VirtualInvokeData HandleReasonToNotInterrupt;
    VirtualInvokeData IsDamageTypePreventingInterruption;
    VirtualInvokeData IsInterruptingDamageWeight;
};

struct MortarHitReaction__StaticFields {
};

struct MortarHitReaction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MortarHitReaction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MortarHitReaction__VTable vtable;
};

struct MortarHitReaction_c {
    struct MortarHitReaction_c__Class *klass;
    MonitorData *monitor;
};

struct MortarHitReaction_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct MortarHitReaction_c__StaticFields {
    struct MortarHitReaction_c *__9;
    struct Action *__9__9_0;
};

struct MortarHitReaction_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct MortarHitReaction_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct MortarHitReaction_c__VTable vtable;
};

struct TriggerColliderCallback_c {
    struct TriggerColliderCallback_c__Class *klass;
    MonitorData *monitor;
};

struct TriggerColliderCallback_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct TriggerColliderCallback_c__StaticFields {
    struct TriggerColliderCallback_c *__9;
    struct TriggerColliderCallback_OnTrigger_Callback *__9__7_0;
    struct TriggerColliderCallback_OnTrigger_Callback *__9__7_1;
    struct TriggerColliderCallback_OnTrigger_Callback *__9__7_2;
};

struct TriggerColliderCallback_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TriggerColliderCallback_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TriggerColliderCallback_c__VTable vtable;
};

struct AirLocomotion__Fields {
    struct Locomotion__Fields _;
};

struct AirLocomotion {
    struct AirLocomotion__Class *klass;
    MonitorData *monitor;
    struct AirLocomotion__Fields fields;
};

struct AirLocomotion__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData MoveToPoint;
    VirtualInvokeData MoveInTheDirection;
    VirtualInvokeData Stop;
    VirtualInvokeData get_TraversalTier;
    VirtualInvokeData set_TraversalTier;
    VirtualInvokeData get_FeetPosition;
    VirtualInvokeData get_HasArrivedAtTarget;
    VirtualInvokeData get_IsMovingToTarget;
    VirtualInvokeData get_GravityDirection;
    VirtualInvokeData OnEntityReset;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_PreviusPositionForWaterfallInteraction;
    VirtualInvokeData get_PositionForWaterfallInteraction;
    VirtualInvokeData get_SpeedForWaterfallInteraction;
    VirtualInvokeData set_SpeedForWaterfallInteraction;
    VirtualInvokeData get_BoundsForWaterfallInteraction;
    VirtualInvokeData get_WaterfallIntersectionMode;
    VirtualInvokeData get_RigidbodyForWaterfallInteraction;
    VirtualInvokeData get_IsFlamable;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_FeetTransform;
    VirtualInvokeData get_FeetPosition_1;
    VirtualInvokeData get_HasArrivedAtTarget_1;
    VirtualInvokeData get_Gravity;
    VirtualInvokeData set_Gravity;
    VirtualInvokeData get_Weight;
    VirtualInvokeData set_Weight;
    VirtualInvokeData get_Entity;
    VirtualInvokeData get_ShouldReset;
    VirtualInvokeData get_IsMovingToTarget_1;
    VirtualInvokeData get_GravityDirection_1;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData OnPrewarm;
    VirtualInvokeData OnEntityInitialization_1;
    VirtualInvokeData Awake;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData ConfigureStateMachine;
    VirtualInvokeData get_DefaultFSMState;
    VirtualInvokeData OnEntityReset_1;
    VirtualInvokeData ResetLocomotion;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData UpdateLocomotionBehaviours;
    VirtualInvokeData GetNextBehaviour;
    VirtualInvokeData MoveToPoint_1;
    VirtualInvokeData MoveInTheDirection_1;
    VirtualInvokeData Stop_1;
};

}
