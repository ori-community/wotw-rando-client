namespace app {
struct KwolokBossSettings {
    struct KwolokBossSettings__Class *klass;
    MonitorData *monitor;
    struct KwolokBossSettings__Fields fields;
};

struct KwolokBossSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossSettings__StaticFields {
};

struct KwolokBossSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossSettings__VTable vtable;
};

struct KwolokBossSimpleLookAt__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform *LookAtTransform;
    struct Transform *LookAtMaxYTransform;
    struct Vector3 m_clampedPosition;
    bool m_followOri;
};

struct KwolokBossSimpleLookAt {
    struct KwolokBossSimpleLookAt__Class *klass;
    MonitorData *monitor;
    struct KwolokBossSimpleLookAt__Fields fields;
};

struct KwolokBossSimpleLookAt__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossSimpleLookAt__StaticFields {
};

struct KwolokBossSimpleLookAt__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossSimpleLookAt__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossSimpleLookAt__VTable vtable;
};

struct KwolokBossSludgeLaserBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct ProjectileSpawner *ProjectileSpawner;
    struct Transform *LaserTarget;
    struct MoonTimeline *Timeline;
    struct EventTriggerAnimator *ShootingWindow;
    int32_t NumberOfProjectiles;
    float TimeBetweenProjectileSpawn;
    float AimingPrecision;
    float m_timer;
    int32_t m_projectilesSpawned;
    bool m_leftAttack;
    float LookAngleChangeSpeedMultiplier;
    struct KwolokBossEntity_OverrideTicket_1_System_Single_ *m_lookAngleChangeSpeedOverride;
};

struct KwolokBossSludgeLaserBehaviour {
    struct KwolokBossSludgeLaserBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossSludgeLaserBehaviour__Fields fields;
};

struct KwolokBossSludgeLaserBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossSludgeLaserBehaviour__StaticFields {
};

struct KwolokBossSludgeLaserBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossSludgeLaserBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossSludgeLaserBehaviour__VTable vtable;
};

struct KwolokBossTauntBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct List_1_Moon_Timeline_MoonTimeline_ *Timelines;
    float CancelBehaviourAtDamageThreshold;
    struct MoonTimeline *m_chosenTimeline;
    float m_damageTaken;
};

struct KwolokBossTauntBehaviour {
    struct KwolokBossTauntBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossTauntBehaviour__Fields fields;
};

struct KwolokBossTauntBehaviour__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnBeforeSerialize;
    VirtualInvokeData OnAfterDeserialize;
    VirtualInvokeData OnValidate;
    VirtualInvokeData get_Info;
    VirtualInvokeData PerformSanityCheck;
    VirtualInvokeData get_Status;
    VirtualInvokeData Execute;
    VirtualInvokeData Reset;
    VirtualInvokeData InitializeBehaviourNode;
    VirtualInvokeData CompareTo;
    VirtualInvokeData get_TaskStatus;
    VirtualInvokeData set_TaskStatus;
    VirtualInvokeData get_ForceReturnTaskStatus;
    VirtualInvokeData set_ForceReturnTaskStatus;
    VirtualInvokeData OnExecuteTask;
    VirtualInvokeData OnInitializeTask;
    VirtualInvokeData OnEnterTask;
    VirtualInvokeData OnExitTask;
    VirtualInvokeData OnResetTask;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData Execute_1;
    VirtualInvokeData Reset_1;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData OnReset;
    VirtualInvokeData OnBehaviourTreeInitialize;
    VirtualInvokeData OnExecute;
    VirtualInvokeData OnEntityInitialization;
    VirtualInvokeData get_InitOrder;
    VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
    VirtualInvokeData ShouldPauseLocomotion;
    VirtualInvokeData CacheSerializedComponents;
    VirtualInvokeData OnEntityInitialized;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData InitializeCancellableController;
    VirtualInvokeData CanCancel;
    VirtualInvokeData InitializeHitReactionController;
    VirtualInvokeData CanAccumulateHits;
    VirtualInvokeData CanHitReact;
    VirtualInvokeData ComputeUtility;
    VirtualInvokeData IsLocomotionFollowAllowed;
    VirtualInvokeData IsLocomotionStayAtRangeAllowed;
    VirtualInvokeData ModifyPostAttackCooldown;
    VirtualInvokeData ModifyMaxLookAtWeights;
};

struct KwolokBossTauntBehaviour__StaticFields {
};

struct KwolokBossTauntBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTauntBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTauntBehaviour__VTable vtable;
};

enum class KwolokBossTendril_DurationType__Enum : int32_t {
    Short = 0x00000000,
    Mid = 0x00000001,
};

struct KwolokBossTendril_DurationType__Enum__Boxed {
    struct KwolokBossTendril_DurationType__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossTendril_DurationType__Enum value;
    
};

enum class KwolokBossTendril_VariationType__Enum : int32_t {
    A = 0x00000000,
    B = 0x00000001,
    C = 0x00000002,
    D = 0x00000003,
};

struct KwolokBossTendril_VariationType__Enum__Boxed {
    struct KwolokBossTendril_VariationType__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossTendril_VariationType__Enum value;
    
};

enum class KwolokBossTendril_State__Enum : int32_t {
    None = 0x00000000,
    Attacking = 0x00000001,
    Holding = 0x00000002,
    Destroying = 0x00000003,
    Destroyed = 0x00000004,
};

struct KwolokBossTendril_State__Enum__Boxed {
    struct KwolokBossTendril_State__Enum__Class *klass;
    MonitorData *monitor;
    KwolokBossTendril_State__Enum value;
    
};

struct KwolokBossTendril__Fields {
    struct MonoBehaviour__Fields _;
    struct Vitals *Vitals;
    struct HitFlash3D *HitFlash;
    struct MoonTimeline *AttackTimeline;
    struct MoonTimeline *HoldTimeline;
    struct MoonTimeline *DestroyTimeline;
    struct MoonTimeline *HitTimeline;
    struct List_1_Condition_ *AutoAttackConditions;
    struct KwolokBossTendril_AllowedTendrilVariations *AllowedVariations;
    bool ShouldSelfDestroy;
    bool DestroyOnRestoreCheckpoint;
    float HoldTime;
    float m_holdTimer;
    struct Collider__Array *m_colliders;
    KwolokBossTendril_DurationType__Enum m_duration;
    
    KwolokBossTendril_VariationType__Enum m_variation;
    
    KwolokBossTendril_State__Enum m_currentState;
    
    struct OrbSpawner *m_orbSpawner;
};

struct KwolokBossTendril {
    struct KwolokBossTendril__Class *klass;
    MonitorData *monitor;
    struct KwolokBossTendril__Fields fields;
};

struct __declspec(align(8)) List_1_Condition___Fields {
    struct Condition_1__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Condition_ {
    struct List_1_Condition___Class *klass;
    MonitorData *monitor;
    struct List_1_Condition___Fields fields;
};

struct Condition_1__Array {
    struct Condition_1__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Condition_1 *vector[32];
};

struct IEnumerator_1_Condition_ {
    struct IEnumerator_1_Condition___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) KwolokBossTendril_AllowedTendrilVariations__Fields {
    bool Short;
    bool Mid;
    bool A;
    bool B;
    bool C;
    bool D;
};

struct KwolokBossTendril_AllowedTendrilVariations {
    struct KwolokBossTendril_AllowedTendrilVariations__Class *klass;
    MonitorData *monitor;
    struct KwolokBossTendril_AllowedTendrilVariations__Fields fields;
};

struct Condition_1__Array__VTable {
};

struct Condition_1__Array__StaticFields {
};

struct Condition_1__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Condition_1__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Condition_1__Array__VTable vtable;
};

struct IEnumerator_1_Condition___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_Condition___StaticFields {
};

struct IEnumerator_1_Condition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_Condition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_Condition___VTable vtable;
};

struct List_1_Condition___VTable {
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

struct List_1_Condition___StaticFields {
    struct Condition_1__Array *_emptyArray;
};

struct List_1_Condition___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_Condition___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_Condition___VTable vtable;
};

struct KwolokBossTendril_AllowedTendrilVariations__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct KwolokBossTendril_AllowedTendrilVariations__StaticFields {
};

struct KwolokBossTendril_AllowedTendrilVariations__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendril_AllowedTendrilVariations__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendril_AllowedTendrilVariations__VTable vtable;
};

struct KwolokBossTendril_DurationType__Enum__VTable {
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

struct KwolokBossTendril_DurationType__Enum__StaticFields {
};

struct KwolokBossTendril_DurationType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendril_DurationType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendril_DurationType__Enum__VTable vtable;
};

struct KwolokBossTendril_VariationType__Enum__VTable {
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

struct KwolokBossTendril_VariationType__Enum__StaticFields {
};

struct KwolokBossTendril_VariationType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendril_VariationType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendril_VariationType__Enum__VTable vtable;
};

struct KwolokBossTendril_State__Enum__VTable {
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

struct KwolokBossTendril_State__Enum__StaticFields {
};

struct KwolokBossTendril_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendril_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendril_State__Enum__VTable vtable;
};

struct KwolokBossTendril__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData OnSceneRootPostEnable;
};

struct KwolokBossTendril__StaticFields {
};

struct KwolokBossTendril__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendril__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendril__VTable vtable;
};

struct __declspec(align(8)) List_1_KwolokBossTendril_DurationType___Fields {
    struct KwolokBossTendril_DurationType__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_KwolokBossTendril_DurationType_ {
    struct List_1_KwolokBossTendril_DurationType___Class *klass;
    MonitorData *monitor;
    struct List_1_KwolokBossTendril_DurationType___Fields fields;
};

struct KwolokBossTendril_DurationType__Enum__Array {
    struct KwolokBossTendril_DurationType__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    KwolokBossTendril_DurationType__Enum vector[32];
};

struct IEnumerator_1_KwolokBossTendril_DurationType_ {
    struct IEnumerator_1_KwolokBossTendril_DurationType___Class *klass;
    MonitorData *monitor;
};

struct KwolokBossTendril_DurationType__Enum__Array__VTable {
};

struct KwolokBossTendril_DurationType__Enum__Array__StaticFields {
};

struct KwolokBossTendril_DurationType__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendril_DurationType__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendril_DurationType__Enum__Array__VTable vtable;
};

struct IEnumerator_1_KwolokBossTendril_DurationType___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KwolokBossTendril_DurationType___StaticFields {
};

struct IEnumerator_1_KwolokBossTendril_DurationType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KwolokBossTendril_DurationType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KwolokBossTendril_DurationType___VTable vtable;
};

struct List_1_KwolokBossTendril_DurationType___VTable {
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

struct List_1_KwolokBossTendril_DurationType___StaticFields {
    struct KwolokBossTendril_DurationType__Enum__Array *_emptyArray;
};

struct List_1_KwolokBossTendril_DurationType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_KwolokBossTendril_DurationType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_KwolokBossTendril_DurationType___VTable vtable;
};

struct __declspec(align(8)) List_1_KwolokBossTendril_VariationType___Fields {
    struct KwolokBossTendril_VariationType__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_KwolokBossTendril_VariationType_ {
    struct List_1_KwolokBossTendril_VariationType___Class *klass;
    MonitorData *monitor;
    struct List_1_KwolokBossTendril_VariationType___Fields fields;
};

struct KwolokBossTendril_VariationType__Enum__Array {
    struct KwolokBossTendril_VariationType__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    KwolokBossTendril_VariationType__Enum vector[32];
};

struct IEnumerator_1_KwolokBossTendril_VariationType_ {
    struct IEnumerator_1_KwolokBossTendril_VariationType___Class *klass;
    MonitorData *monitor;
};

struct KwolokBossTendril_VariationType__Enum__Array__VTable {
};

struct KwolokBossTendril_VariationType__Enum__Array__StaticFields {
};

struct KwolokBossTendril_VariationType__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendril_VariationType__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendril_VariationType__Enum__Array__VTable vtable;
};

struct IEnumerator_1_KwolokBossTendril_VariationType___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_KwolokBossTendril_VariationType___StaticFields {
};

struct IEnumerator_1_KwolokBossTendril_VariationType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_KwolokBossTendril_VariationType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_KwolokBossTendril_VariationType___VTable vtable;
};

struct List_1_KwolokBossTendril_VariationType___VTable {
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

struct List_1_KwolokBossTendril_VariationType___StaticFields {
    struct KwolokBossTendril_VariationType__Enum__Array *_emptyArray;
};

struct List_1_KwolokBossTendril_VariationType___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_KwolokBossTendril_VariationType___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_KwolokBossTendril_VariationType___VTable vtable;
};

struct KwolokBossTendrilLengthBrain__Fields {
    struct MonoBehaviour__Fields _;
    struct KwolokBossTendril *m_tendril;
    struct Enum__Array *Entries;
};

struct KwolokBossTendrilLengthBrain {
    struct KwolokBossTendrilLengthBrain__Class *klass;
    MonitorData *monitor;
    struct KwolokBossTendrilLengthBrain__Fields fields;
};

struct KwolokBossTendrilLengthBrain__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetEntries;
    VirtualInvokeData Evaluate;
    VirtualInvokeData get_ShouldSkip;
};

struct KwolokBossTendrilLengthBrain__StaticFields {
};

struct KwolokBossTendrilLengthBrain__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct KwolokBossTendrilLengthBrain__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct KwolokBossTendrilLengthBrain__VTable vtable;
};

struct KwolokBossTendrilStrikeBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline *StabInTimeline;
    struct MoonTimeline *StabLeftTimeline;
    struct MoonTimeline *StabLeftOutTimeline;
    struct MoonTimeline *StabRightTimeline;
    struct MoonTimeline *StabRightOutTimeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_ *TendrilStrikeAttackTriggers;
    float NumberOfStrikes;
    float CancelBehaviourAtDamageThreshold;
    int32_t MinStrikesBeforeCancellation;
    float TendrilHeartChance;
    float TendrilEnergyChance;
    struct GameObject *TendrilPrefab;
    struct List_1_Moon_MoonReference_1__8 *TendrilPositioningPaths;
    struct List_1_LinearPath_ *m_tendrilPositioningPathsCached;
    int32_t m_tendrilIndex;
    int32_t m_strikeCount;
    float m_damageTaken;
    bool m_wasCancelled;
    struct StateMachine_2 *m_stateMachine;
    struct KwolokBossTendrilStrikeBehaviour_States *m_states;
};

struct KwolokBossTendrilStrikeBehaviour {
    struct KwolokBossTendrilStrikeBehaviour__Class *klass;
    MonitorData *monitor;
    struct KwolokBossTendrilStrikeBehaviour__Fields fields;
};

struct __declspec(align(8)) List_1_Moon_MoonReference_1__8__Fields {
    struct MoonReference_1_LinearPath___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_Moon_MoonReference_1__8 {
    struct List_1_Moon_MoonReference_1__8__Class *klass;
    MonitorData *monitor;
    struct List_1_Moon_MoonReference_1__8__Fields fields;
};

struct __declspec(align(8)) MoonReference_1_LinearPath___Fields {
    struct MoonTypeData m_data;
    bool m_isInitialized;
    bool m_isStatic;
    bool m_canResolve;
    struct IMoonTypeResolver *m_resolver;
    struct IMoonType_1_LinearPath_ *m_cachedProxyType;
    struct LinearPath *m_volatileValue;
};

struct MoonReference_1_LinearPath_ {
    struct MoonReference_1_LinearPath___Class *klass;
    MonitorData *monitor;
    struct MoonReference_1_LinearPath___Fields fields;
};

struct IMoonType_1_LinearPath_ {
    struct IMoonType_1_LinearPath___Class *klass;
    MonitorData *monitor;
};

struct LinearPath__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_UnityEngine_Vector3_ *Path;
    struct Color PathColor;
    bool ClosedPath;
};

struct LinearPath {
    struct LinearPath__Class *klass;
    MonitorData *monitor;
    struct LinearPath__Fields fields;
};

struct MoonReference_1_LinearPath___Array {
    struct MoonReference_1_LinearPath___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct MoonReference_1_LinearPath_ *vector[32];
};

struct IEnumerator_1_Moon_MoonReference_1__8 {
    struct IEnumerator_1_Moon_MoonReference_1__8__Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_LinearPath___Fields {
    struct LinearPath__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LinearPath_ {
    struct List_1_LinearPath___Class *klass;
    MonitorData *monitor;
    struct List_1_LinearPath___Fields fields;
};

struct LinearPath__Array {
    struct LinearPath__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LinearPath *vector[32];
};

struct IEnumerator_1_LinearPath_ {
    struct IEnumerator_1_LinearPath___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) KwolokBossTendrilStrikeBehaviour_States__Fields {
    struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState *StabIn;
    struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState *StabLeft;
    struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState *StabLeftOut;
    struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState *StabRight;
    struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState *StabRightOut;
};

struct KwolokBossTendrilStrikeBehaviour_States {
    struct KwolokBossTendrilStrikeBehaviour_States__Class *klass;
    MonitorData *monitor;
    struct KwolokBossTendrilStrikeBehaviour_States__Fields fields;
};

struct __declspec(align(8)) KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields {
    struct KwolokBossTendrilStrikeBehaviour *m_behaviour;
    struct StateMachine_2 *m_stateMachine;
    struct KwolokBossTendrilStrikeBehaviour_States *m_states;
    struct KwolokBossEntity *m_entity;
};

struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState {
    struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Class *klass;
    MonitorData *monitor;
    struct KwolokBossTendrilStrikeBehaviour_KwolokBossTendrilStrikeState__Fields fields;
};

struct IMoonType_1_LinearPath___VTable {
    VirtualInvokeData Resolve;
    VirtualInvokeData SafeResolve;
    VirtualInvokeData TryResolve;
};

struct IMoonType_1_LinearPath___StaticFields {
};

struct IMoonType_1_LinearPath___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IMoonType_1_LinearPath___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IMoonType_1_LinearPath___VTable vtable;
};

struct LinearPath__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct LinearPath__StaticFields {
};

struct LinearPath__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LinearPath__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LinearPath__VTable vtable;
};

struct LinearPath___VTable {
};

}
