namespace app {
struct LaserShooterDeathReactionBehaviour__StaticFields {
};

struct LaserShooterDeathReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterDeathReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterDeathReactionBehaviour__VTable vtable;
};

struct EntityReactionBehaviour_1_LaserShooterEntity___Fields {
    struct EntityReactionBehaviour__Fields _;
};

struct EntityReactionBehaviour_1_LaserShooterEntity_ {
    struct EntityReactionBehaviour_1_LaserShooterEntity___Class *klass;
    MonitorData *monitor;
    struct EntityReactionBehaviour_1_LaserShooterEntity___Fields fields;
};

struct EntityHitReactionBehaviour_1_LaserShooterEntity___Fields {
    struct EntityReactionBehaviour_1_LaserShooterEntity___Fields _;
    struct List_1_DamageType_ *DamageTypePreventingInterruption;
    struct List_1_DamageWeight_ *DamageWeightPreventingInterruption;
    struct HashSet_1_DamageType_ *m_damageTypePreventingInterruption;
    struct HashSet_1_DamageWeight_ *m_damageWeightPreventingInterruption;
    bool _HasLocomotion_k__BackingField;
    struct CharacterPlatformMovement *m_platformMovement;
    EntityWeightData_EntityWeight__Enum m_weight;
    
    struct HitReactionSettings *m_kickbackSettings;
};

struct EntityHitReactionBehaviour_1_LaserShooterEntity_ {
    struct EntityHitReactionBehaviour_1_LaserShooterEntity___Class *klass;
    MonitorData *monitor;
    struct EntityHitReactionBehaviour_1_LaserShooterEntity___Fields fields;
};

struct LaserShooterHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_LaserShooterEntity___Fields _;
    struct MoonTimeline *HitNoDamageAdditive;
    struct MoonTimeline *HitAdditive;
    struct Event_1 *OnAnyHitEvent;
};

struct LaserShooterHitReactionBehaviour {
    struct LaserShooterHitReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct LaserShooterHitReactionBehaviour__Fields fields;
};

struct EntityReactionBehaviour_1_LaserShooterEntity___VTable {
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

struct EntityReactionBehaviour_1_LaserShooterEntity___StaticFields {
};

struct EntityReactionBehaviour_1_LaserShooterEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityReactionBehaviour_1_LaserShooterEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityReactionBehaviour_1_LaserShooterEntity___VTable vtable;
};

struct EntityHitReactionBehaviour_1_LaserShooterEntity___VTable {
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

struct EntityHitReactionBehaviour_1_LaserShooterEntity___StaticFields {
};

struct EntityHitReactionBehaviour_1_LaserShooterEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityHitReactionBehaviour_1_LaserShooterEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityHitReactionBehaviour_1_LaserShooterEntity___VTable vtable;
};

struct LaserShooterHitReactionBehaviour__VTable {
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

struct LaserShooterHitReactionBehaviour__StaticFields {
};

struct LaserShooterHitReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterHitReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterHitReactionBehaviour__VTable vtable;
};

struct LaserShooterIdleBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline *IdleTimeline;
    bool AutoLoop;
    struct MoonTimeline *m_currentTimeline;
};

struct LaserShooterIdleBehaviour {
    struct LaserShooterIdleBehaviour__Class *klass;
    MonitorData *monitor;
    struct LaserShooterIdleBehaviour__Fields fields;
};

struct LaserShooterIdleBehaviour__VTable {
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
};

struct LaserShooterIdleBehaviour__StaticFields {
};

struct LaserShooterIdleBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterIdleBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterIdleBehaviour__VTable vtable;
};

enum class LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum : int32_t {
    Invalid = 0x00000000,
    Antic = 0x00000001,
    ProjectileAttack = 0x00000002,
    Resolve = 0x00000003,
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__Boxed {
    struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__Class *klass;
    MonitorData *monitor;
    LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum value;
    
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields {
    struct EntityBehaviourNode_1_LaserShooterEntity___Fields _;
    struct Transform *Rotation;
    struct MoonTimeline *AnticTimeline;
    struct MoonTimeline *ProjectileShootTimeline;
    struct MoonTimeline *ResolveTimeline;
    struct MoonTimeline *PulseAdditive;
    int32_t ShootCycles;
    struct ProjectileSpawner *ProjectileSpawner;
    struct Quaternion m_targetRotation;
    struct MoonTimeline *m_currentTimeline;
    LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum m_state;
    
    float m_timeInState;
    int32_t m_cyclesPlayed;
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour {
    struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class *klass;
    MonitorData *monitor;
    struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields fields;
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__VTable {
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

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__StaticFields {
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__VTable vtable;
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__VTable {
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
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__StaticFields {
};

struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__VTable vtable;
};

struct LaserShooterEntity__Fields {
    struct EnemyEntity__Fields _;
    struct LaserBeam *LaserBeam;
    struct DamageDealer *LaserBeamDamageDealer;
    struct Transform *Rotation;
    bool LaserOn;
    bool ProjectilesOn;
    int32_t LaserAttackDamage;
    float LaserAttackFollowSpeed;
    float ProjectileDamage;
    float ProjectileAttackFollowSpeed;
};

struct LaserShooterEntity {
    struct LaserShooterEntity__Class *klass;
    MonitorData *monitor;
    struct LaserShooterEntity__Fields fields;
};

enum class LaserBeam_ImpactEffectOrientationMethod__Enum : int32_t {
    NormalBased = 0x00000000,
    DirectionBased = 0x00000001,
};

struct LaserBeam_ImpactEffectOrientationMethod__Enum__Boxed {
    struct LaserBeam_ImpactEffectOrientationMethod__Enum__Class *klass;
    MonitorData *monitor;
    LaserBeam_ImpactEffectOrientationMethod__Enum value;
    
};

struct LaserBeam__Fields {
    struct MonoBehaviour__Fields _;
    struct GameObject *AnticipationEffect;
    struct GameObject *BurstEffect;
    struct GameObject *StopEffect;
    struct Event_1 *AnticipationEvent;
    struct Event_1 *LaserStartEvent;
    struct Event_1 *LaserLoopEvent;
    struct Event_1 *LaserImpactEndEvent;
    struct Event_1 *ImpactStartEvent;
    struct Event_1 *ImpactLoopEvent;
    struct Event_1 *ImpactEndEvent;
    struct GameObject *DefaultImpactEffect;
    struct GameObject *DefaultImpactPointLoopEffect;
    struct SurfaceBasedPrefabSettings *ImpactEffectPerSurface;
    struct SurfaceBasedPrefabSettings *ImpactPointLoopEffectPerSurface;
    struct GameObject *ImpactPointLight;
    LaserBeam_ImpactEffectOrientationMethod__Enum ImpactEffectOrientation;
    
    struct Transform *BeamLenghtScaleTransform;
    DamageType__Enum LaserDamageType;
    
    int32_t DamageAmount;
    float LaserBeamSizeToTilingRatio;
    struct BaseAnimator *BeamEngageAnimator;
    struct MoonTimeline *BeamTimelineActivate;
    struct MoonTimeline *BeamTimelineDeactivate;
    struct MoonTimeline *BeamTimelineActivatedLoop;
    struct MoonTimeline *BeamTimelineDeactivatedLoop;
    struct EventTriggerAnimator *EnableHitFXTrigger;
    struct EventTriggerAnimator *DisableHitFXTrigger;
    struct ParticleSystem__Array *BeamParticleSystems;
    struct GameObject *ScaleTarget;
    bool _InvalidateParentTimelineCache_k__BackingField;
    int32_t PrewarmCount;
};

struct LaserBeam {
    struct LaserBeam__Class *klass;
    MonitorData *monitor;
    struct LaserBeam__Fields fields;
};

struct __declspec(align(8)) SurfaceBasedSettings_1_UnityEngine_GameObject___Fields {
    SurfaceMaterialType__Enum FallbackType;
    
};

struct SurfaceBasedSettings_1_UnityEngine_GameObject_ {
    struct SurfaceBasedSettings_1_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct SurfaceBasedSettings_1_UnityEngine_GameObject___Fields fields;
};

struct SurfaceBasedPrefabSettings__Fields {
    struct SurfaceBasedSettings_1_UnityEngine_GameObject___Fields _;
    struct List_1_SurfaceMaterialPrefabPair_ *m_pairs;
};

struct SurfaceBasedPrefabSettings {
    struct SurfaceBasedPrefabSettings__Class *klass;
    MonitorData *monitor;
    struct SurfaceBasedPrefabSettings__Fields fields;
};

struct __declspec(align(8)) List_1_SurfaceMaterialObjectPair_1___Fields {
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SurfaceMaterialObjectPair_1_ {
    struct List_1_SurfaceMaterialObjectPair_1___Class *klass;
    MonitorData *monitor;
    struct List_1_SurfaceMaterialObjectPair_1___Fields fields;
};

struct __declspec(align(8)) SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Fields {
    SurfaceMaterialType__Enum SurfaceMaterialType;
    
    struct GameObject *Object;
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject_ {
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Class *klass;
    MonitorData *monitor;
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Fields fields;
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array {
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject_ *vector[32];
};

struct IEnumerator_1_SurfaceMaterialObjectPair_1_ {
    struct IEnumerator_1_SurfaceMaterialObjectPair_1___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) List_1_SurfaceMaterialPrefabPair___Fields {
    struct SurfaceMaterialPrefabPair__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SurfaceMaterialPrefabPair_ {
    struct List_1_SurfaceMaterialPrefabPair___Class *klass;
    MonitorData *monitor;
    struct List_1_SurfaceMaterialPrefabPair___Fields fields;
};

struct SurfaceMaterialPrefabPair__Fields {
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Fields _;
};

struct SurfaceMaterialPrefabPair {
    struct SurfaceMaterialPrefabPair__Class *klass;
    MonitorData *monitor;
    struct SurfaceMaterialPrefabPair__Fields fields;
};

struct SurfaceMaterialPrefabPair__Array {
    struct SurfaceMaterialPrefabPair__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SurfaceMaterialPrefabPair *vector[32];
};

struct IEnumerator_1_SurfaceMaterialPrefabPair_ {
    struct IEnumerator_1_SurfaceMaterialPrefabPair___Class *klass;
    MonitorData *monitor;
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___StaticFields {
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___VTable vtable;
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array__VTable {
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array__StaticFields {
};

struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array__VTable vtable;
};

struct IEnumerator_1_SurfaceMaterialObjectPair_1___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SurfaceMaterialObjectPair_1___StaticFields {
};

struct IEnumerator_1_SurfaceMaterialObjectPair_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SurfaceMaterialObjectPair_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SurfaceMaterialObjectPair_1___VTable vtable;
};

struct List_1_SurfaceMaterialObjectPair_1___VTable {
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

struct List_1_SurfaceMaterialObjectPair_1___StaticFields {
    struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array *_emptyArray;
};

struct List_1_SurfaceMaterialObjectPair_1___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SurfaceMaterialObjectPair_1___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SurfaceMaterialObjectPair_1___VTable vtable;
};

struct SurfaceBasedSettings_1_UnityEngine_GameObject___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData __unknown;
};

struct SurfaceBasedSettings_1_UnityEngine_GameObject___StaticFields {
};

struct SurfaceBasedSettings_1_UnityEngine_GameObject___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SurfaceBasedSettings_1_UnityEngine_GameObject___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SurfaceBasedSettings_1_UnityEngine_GameObject___VTable vtable;
};

struct SurfaceMaterialPrefabPair__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SurfaceMaterialPrefabPair__StaticFields {
};

struct SurfaceMaterialPrefabPair__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SurfaceMaterialPrefabPair__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SurfaceMaterialPrefabPair__VTable vtable;
};

struct SurfaceMaterialPrefabPair__Array__VTable {
};

struct SurfaceMaterialPrefabPair__Array__StaticFields {
};

struct SurfaceMaterialPrefabPair__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SurfaceMaterialPrefabPair__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SurfaceMaterialPrefabPair__Array__VTable vtable;
};

struct IEnumerator_1_SurfaceMaterialPrefabPair___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SurfaceMaterialPrefabPair___StaticFields {
};

struct IEnumerator_1_SurfaceMaterialPrefabPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SurfaceMaterialPrefabPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SurfaceMaterialPrefabPair___VTable vtable;
};

struct List_1_SurfaceMaterialPrefabPair___VTable {
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

struct List_1_SurfaceMaterialPrefabPair___StaticFields {
    struct SurfaceMaterialPrefabPair__Array *_emptyArray;
};

struct List_1_SurfaceMaterialPrefabPair___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SurfaceMaterialPrefabPair___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SurfaceMaterialPrefabPair___VTable vtable;
};

struct SurfaceBasedPrefabSettings__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Pairs;
};

struct SurfaceBasedPrefabSettings__StaticFields {
};

struct SurfaceBasedPrefabSettings__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SurfaceBasedPrefabSettings__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SurfaceBasedPrefabSettings__VTable vtable;
};

struct LaserBeam_ImpactEffectOrientationMethod__Enum__VTable {
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

struct LaserBeam_ImpactEffectOrientationMethod__Enum__StaticFields {
};

struct LaserBeam_ImpactEffectOrientationMethod__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserBeam_ImpactEffectOrientationMethod__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserBeam_ImpactEffectOrientationMethod__Enum__VTable vtable;
};

struct LaserBeam__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
};

struct LaserBeam__StaticFields {
};

struct LaserBeam__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserBeam__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserBeam__VTable vtable;
};

struct LaserShooterEntity__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
    VirtualInvokeData GetHitStopAutoSuspendables;
    VirtualInvokeData OnHitStopStart;
    VirtualInvokeData OnHitStopEnd;
    VirtualInvokeData OnPoolSpawned;
    VirtualInvokeData OnPoolDespawned;
    VirtualInvokeData OnSceneRootPostEnable;
    VirtualInvokeData GetResolverForType;
    VirtualInvokeData get_BehaviourTree;
    VirtualInvokeData ResolveDamage;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData ShouldKillBubble;
    VirtualInvokeData CreateTimelineParentEntity;
    VirtualInvokeData get_AddChildren;
    VirtualInvokeData get_InvalidateParentTimelineCache;
    VirtualInvokeData set_InvalidateParentTimelineCache;
    VirtualInvokeData get_ExternalID;
    VirtualInvokeData get_TrackTranformChangesForRecording;
    VirtualInvokeData get_TrackingExclusions;
    VirtualInvokeData get_ParsingGroup;
    VirtualInvokeData get_CameraTargetActive;
    VirtualInvokeData get_CameraTargetPosition;
    VirtualInvokeData get_CameraTargetPadding;
    VirtualInvokeData get_CameraInfluencePosition;
    VirtualInvokeData AdjustCameraTargetWeight;
    VirtualInvokeData get_CameraInfluenceMinDist;
    VirtualInvokeData get_CameraInfluenceMaxDist;
    VirtualInvokeData get_CameraZoomFactor;
    VirtualInvokeData get_TargetType;
    VirtualInvokeData GetTargetData;
    VirtualInvokeData IPortalVisitor_get_Position;
    VirtualInvokeData IPortalVisitor_set_Position;
    VirtualInvokeData IPortalVisitor_get_Speed;
    VirtualInvokeData IPortalVisitor_set_Speed;
    VirtualInvokeData OnGoThroughPortal;
    VirtualInvokeData OnPortalOverlapEnter;
    VirtualInvokeData OnPortalOverlapExit;
    VirtualInvokeData Prewarm;
    VirtualInvokeData get_IsSuspended_1;
    VirtualInvokeData set_IsSuspended_1;
    VirtualInvokeData get_CanOptimizeBehaviourTreeEvaluation;
    VirtualInvokeData get_IsFacingTarget;
    VirtualInvokeData get_IgnoreAllowedZonesIfFreed;
    VirtualInvokeData get_ScreenPadding;
    VirtualInvokeData IsBehaviourTreePaused;
    VirtualInvokeData OnValidate;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnAwake;
    VirtualInvokeData GetBehaviourTree;
    VirtualInvokeData OnCacheSerializedComponents;
    VirtualInvokeData UnserializedInitialization;
    VirtualInvokeData Start;
    VirtualInvokeData OnDestroy;
    VirtualInvokeData MoonCleanup;
    VirtualInvokeData OnUpdate_1;
    VirtualInvokeData OnFixedUpdate;
    VirtualInvokeData OnBeforeBehaviourTreeFixedUpdate;
    VirtualInvokeData OnSuspendedStay;
    VirtualInvokeData OnUpdate_2;
    VirtualInvokeData EnterSpawningState;
    VirtualInvokeData UpdateSpawningState;
    VirtualInvokeData ExitSpawningState;
    VirtualInvokeData EnterDecisionMakingState;
    VirtualInvokeData UpdateDecisionMakingState;
    VirtualInvokeData ExitDecisionMakingState;
    VirtualInvokeData EnterReactionState;
    VirtualInvokeData UpdateReactionState;
    VirtualInvokeData ExitReactionState;
    VirtualInvokeData EnterCinematicState;
    VirtualInvokeData UpdateCinematicState;
    VirtualInvokeData ExitCinematicState;
    VirtualInvokeData GetActiveLocomotion;
    VirtualInvokeData OnContactDamageDealt;
    VirtualInvokeData OnHandleFireDamage;
    VirtualInvokeData OnHandleIceDamage;
    VirtualInvokeData OnDamageReceived;
    VirtualInvokeData OnDamageBlocked;
    VirtualInvokeData DeactivateDamageReceivers;
    VirtualInvokeData InstantKill;
    VirtualInvokeData OnDied;
    VirtualInvokeData SpawnOrbs;
    VirtualInvokeData OnDiedOutOfBounds;
    VirtualInvokeData OnEndDeathBehaviour;
    VirtualInvokeData OnPostRestoreCheckpoint;
    VirtualInvokeData ResetEntity;
    VirtualInvokeData GetHitStopAutoSuspendables_1;
    VirtualInvokeData OnHitStopStart_1;
    VirtualInvokeData OnHitStopEnd_1;
    VirtualInvokeData OnPoolSpawned_1;
    VirtualInvokeData IsFacingPoint;
    VirtualInvokeData ResolveDamage_1;
    VirtualInvokeData get_CameraTargetActive_1;
    VirtualInvokeData get_CameraTargetPosition_1;
    VirtualInvokeData get_CameraTargetPadding_1;
    VirtualInvokeData get_CameraInfluenceMinDist_1;
    VirtualInvokeData get_CameraInfluenceMaxDist_1;
    VirtualInvokeData get_CameraZoomFactor_1;
    VirtualInvokeData get_TargetType_1;
    VirtualInvokeData AdjustCameraTargetWeight_1;
    VirtualInvokeData get_IsAggroed;
    VirtualInvokeData get_CanAttackTokenBeStolen;
    VirtualInvokeData OnAttackTokenStolen;
    VirtualInvokeData get_UsesHealthbar;
    VirtualInvokeData get_ShouldApplySpawnPopFix;
    VirtualInvokeData get_IsFlyingEnemy;
    VirtualInvokeData get_UseDeathLoopTimeLimit;
    VirtualInvokeData get_CanAttackTokenBeStolen_1;
    VirtualInvokeData get_AutoResetSpotOriBool;
    VirtualInvokeData TryGetPlatformMovement;
    VirtualInvokeData ModifyKickbackForce;
};

struct LaserShooterEntity__StaticFields {
};

struct LaserShooterEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LaserShooterEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LaserShooterEntity__VTable vtable;
};

struct LaserShooterEntityPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct GameObject *LaserShooterEntityPrefab;
};

struct LaserShooterEntityPlaceholder {
    struct LaserShooterEntityPlaceholder__Class *klass;
    MonitorData *monitor;
    struct LaserShooterEntityPlaceholder__Fields fields;
};

struct LaserShooterEntityPlaceholder__VTable {
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

}
