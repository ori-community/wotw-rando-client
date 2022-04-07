namespace app {
struct EntityHitReactionBehaviour_1_LaserShooterEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_LaserShooterEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShooterHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShooterHitReactionBehaviour__VTable vtable;
};

struct LaserShooterIdleBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
  struct MoonTimeline * IdleTimeline;
  bool AutoLoop;
  struct MoonTimeline * m_currentTimeline;
};
struct LaserShooterIdleBehaviour {
  struct LaserShooterIdleBehaviour__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShooterIdleBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShooterIdleBehaviour__VTable vtable;
};

enum LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum : int32_t {
  LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum_Invalid = 0,
  LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum_Antic = 1,
  LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum_ProjectileAttack = 2,
  LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum_Resolve = 3,
};
struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum value;
};
struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields {
  struct EntityBehaviourNode_1_LaserShooterEntity___Fields _;
  struct Transform * Rotation;
  struct MoonTimeline * AnticTimeline;
  struct MoonTimeline * ProjectileShootTimeline;
  struct MoonTimeline * ResolveTimeline;
  struct MoonTimeline * PulseAdditive;
  int32_t ShootCycles;
  struct ProjectileSpawner * ProjectileSpawner;
  struct Quaternion m_targetRotation;
  struct MoonTimeline * m_currentTimeline;
  enum LaserShooterProjectileAttackWithCycleRepetitionBehaviour_State__Enum m_state;
  float m_timeInState;
  int32_t m_cyclesPlayed;
};
struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour {
  struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__Fields fields;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShooterProjectileAttackWithCycleRepetitionBehaviour__VTable vtable;
};

struct LaserShooterEntity__Fields {
  struct EnemyEntity__Fields _;
  struct LaserBeam * LaserBeam;
  struct DamageDealer * LaserBeamDamageDealer;
  struct Transform * Rotation;
  bool LaserOn;
  bool ProjectilesOn;
  int32_t LaserAttackDamage;
  float LaserAttackFollowSpeed;
  float ProjectileDamage;
  float ProjectileAttackFollowSpeed;
};
struct LaserShooterEntity {
  struct LaserShooterEntity__Class *klass;
  struct MonitorData *monitor;
  struct LaserShooterEntity__Fields fields;
};
enum LaserBeam_ImpactEffectOrientationMethod__Enum : int32_t {
  LaserBeam_ImpactEffectOrientationMethod__Enum_NormalBased = 0,
  LaserBeam_ImpactEffectOrientationMethod__Enum_DirectionBased = 1,
};
struct LaserBeam_ImpactEffectOrientationMethod__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LaserBeam_ImpactEffectOrientationMethod__Enum value;
};
struct LaserBeam__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * AnticipationEffect;
  struct GameObject * BurstEffect;
  struct GameObject * StopEffect;
  struct Event_1 * AnticipationEvent;
  struct Event_1 * LaserStartEvent;
  struct Event_1 * LaserLoopEvent;
  struct Event_1 * LaserImpactEndEvent;
  struct Event_1 * ImpactStartEvent;
  struct Event_1 * ImpactLoopEvent;
  struct Event_1 * ImpactEndEvent;
  struct GameObject * DefaultImpactEffect;
  struct GameObject * DefaultImpactPointLoopEffect;
  struct SurfaceBasedPrefabSettings * ImpactEffectPerSurface;
  struct SurfaceBasedPrefabSettings * ImpactPointLoopEffectPerSurface;
  struct GameObject * ImpactPointLight;
  enum LaserBeam_ImpactEffectOrientationMethod__Enum ImpactEffectOrientation;
  struct Transform * BeamLenghtScaleTransform;
  enum DamageType__Enum LaserDamageType;
  int32_t DamageAmount;
  float LaserBeamSizeToTilingRatio;
  struct BaseAnimator * BeamEngageAnimator;
  struct MoonTimeline * BeamTimelineActivate;
  struct MoonTimeline * BeamTimelineDeactivate;
  struct MoonTimeline * BeamTimelineActivatedLoop;
  struct MoonTimeline * BeamTimelineDeactivatedLoop;
  struct EventTriggerAnimator * EnableHitFXTrigger;
  struct EventTriggerAnimator * DisableHitFXTrigger;
  struct ParticleSystem__Array * BeamParticleSystems;
  struct GameObject * ScaleTarget;
  bool _InvalidateParentTimelineCache_k__BackingField;
  int32_t PrewarmCount;
};
struct LaserBeam {
  struct LaserBeam__Class *klass;
  struct MonitorData *monitor;
  struct LaserBeam__Fields fields;
};
struct __declspec(align(8)) SurfaceBasedSettings_1_UnityEngine_GameObject___Fields {
  enum SurfaceMaterialType__Enum FallbackType;
};
struct SurfaceBasedSettings_1_UnityEngine_GameObject_ {
  struct SurfaceBasedSettings_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct SurfaceBasedSettings_1_UnityEngine_GameObject___Fields fields;
};
struct SurfaceBasedPrefabSettings__Fields {
  struct SurfaceBasedSettings_1_UnityEngine_GameObject___Fields _;
  struct List_1_SurfaceMaterialPrefabPair_ * m_pairs;
};
struct SurfaceBasedPrefabSettings {
  struct SurfaceBasedPrefabSettings__Class *klass;
  struct MonitorData *monitor;
  struct SurfaceBasedPrefabSettings__Fields fields;
};
struct __declspec(align(8)) List_1_SurfaceMaterialObjectPair_1___Fields {
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SurfaceMaterialObjectPair_1_ {
  struct List_1_SurfaceMaterialObjectPair_1___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SurfaceMaterialObjectPair_1___Fields fields;
};
struct __declspec(align(8)) SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Fields {
  enum SurfaceMaterialType__Enum SurfaceMaterialType;
  struct GameObject * Object;
};
struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject_ {
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Class *klass;
  struct MonitorData *monitor;
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Fields fields;
};
struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array {
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject_ * vector[32];
};
struct IEnumerator_1_SurfaceMaterialObjectPair_1_ {
  struct IEnumerator_1_SurfaceMaterialObjectPair_1___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_SurfaceMaterialPrefabPair___Fields {
  struct SurfaceMaterialPrefabPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SurfaceMaterialPrefabPair_ {
  struct List_1_SurfaceMaterialPrefabPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SurfaceMaterialPrefabPair___Fields fields;
};
struct SurfaceMaterialPrefabPair__Fields {
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Fields _;
};
struct SurfaceMaterialPrefabPair {
  struct SurfaceMaterialPrefabPair__Class *klass;
  struct MonitorData *monitor;
  struct SurfaceMaterialPrefabPair__Fields fields;
};
struct SurfaceMaterialPrefabPair__Array {
  struct SurfaceMaterialPrefabPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SurfaceMaterialPrefabPair * vector[32];
};
struct IEnumerator_1_SurfaceMaterialPrefabPair_ {
  struct IEnumerator_1_SurfaceMaterialPrefabPair___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___VTable vtable;
};
struct IEnumerator_1_SurfaceMaterialObjectPair_1___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SurfaceMaterialObjectPair_1___StaticFields {
};
struct IEnumerator_1_SurfaceMaterialObjectPair_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SurfaceMaterialObjectPair_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct SurfaceMaterialObjectPair_1_UnityEngine_GameObject___Array * _emptyArray;
};
struct List_1_SurfaceMaterialObjectPair_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SurfaceMaterialObjectPair_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceBasedSettings_1_UnityEngine_GameObject___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceMaterialPrefabPair__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurfaceMaterialPrefabPair__VTable vtable;
};
struct IEnumerator_1_SurfaceMaterialPrefabPair___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SurfaceMaterialPrefabPair___StaticFields {
};
struct IEnumerator_1_SurfaceMaterialPrefabPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SurfaceMaterialPrefabPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct SurfaceMaterialPrefabPair__Array * _emptyArray;
};
struct List_1_SurfaceMaterialPrefabPair___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SurfaceMaterialPrefabPair___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SurfaceBasedPrefabSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SurfaceBasedPrefabSettings__VTable vtable;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserBeam__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShooterEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShooterEntity__VTable vtable;
};

struct LaserShooterEntityPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  struct GameObject * LaserShooterEntityPrefab;
};
struct LaserShooterEntityPlaceholder {
  struct LaserShooterEntityPlaceholder__Class *klass;
  struct MonitorData *monitor;
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
struct LaserShooterEntityPlaceholder__StaticFields {
};
struct LaserShooterEntityPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShooterEntityPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShooterEntityPlaceholder__VTable vtable;
};

struct LaserShieldCircleSetting__Fields {
  struct MonoBehaviour__Fields _;
  float HealthPoints;
  float ContactDamage;
  float PieceKickbackStrenght;
  float MaxPieceKickbackStrenght;
  float PieceKickbackDampRate;
  struct GameObject * DamageEffectPrefab;
  struct GameObject * DestroyEffectPrefab;
  struct GameObject * RepairEffectPrefab;
  struct GameObject * HeavyDamageEffectPrefab;
  struct GameObject * IdleEffectPrefab;
};
struct LaserShieldCircleSetting {
  struct LaserShieldCircleSetting__Class *klass;
  struct MonitorData *monitor;
  struct LaserShieldCircleSetting__Fields fields;
};
struct LaserShieldCircleSetting__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LaserShieldCircleSetting__StaticFields {
};
struct LaserShieldCircleSetting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LaserShieldCircleSetting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LaserShieldCircleSetting__VTable vtable;
};

struct LaserShieldDamageReceiver_FollowingEffect {
  struct GameObject * GameObject;
  struct MoonTimeline * Timeline;
  struct UberTransformFollow * Follower;
};
struct LaserShieldDamageReceiver_FollowingEffect__Boxed {
  struct LaserShieldDamageReceiver_FollowingEffect__Class *klass;
  struct MonitorData *monitor;
  struct LaserShieldDamageReceiver_FollowingEffect fields;
};
struct LaserShieldDamageReceiver__Fields {
  struct DamageReceiver__Fields _;
  struct LaserShieldCircleSetting * Settings;
  struct LaserShieldRotationController * ShieldController;
  struct DamageTextSpawner * DamageText;
  struct DamageDealer * ContactDamage;
  struct MoonTimeline * HitFlashTimeline;
  float LocalInitialAngle;
  int32_t CircleIndex;
  int32_t PieceModelIndex;
  float m_hp;
  bool m_isDestoyed;
  struct Vector3 m_anchorLocalPosition;
  struct Quaternion m_anchorLocalRotation;
  struct LaserShieldDamageReceiver_FollowingEffect m_heavilyDamagedEffect;
  bool m_initialized;
  struct List_1_UnityEngine_MeshRenderer_ * m_meshes;
  struct List_1_LaserShieldDamageReceiver_FollowingEffect_ * m_idleEffects;
  struct Vector3 _IndividualHitLocalPositionOffset_k__BackingField;
  struct Vector3 _SharedLocalPositionOffset_k__BackingField;
  struct Vector3 _SharedWorldPositionOffset_k__BackingField;
  int32_t _Index_k__BackingField;
};
struct LaserShieldDamageReceiver {
  struct LaserShieldDamageReceiver__Class *klass;
  struct MonitorData *monitor;
  struct LaserShieldDamageReceiver__Fields fields;
};
enum LaserShieldRotationController_RotationType__Enum : int32_t {
  LaserShieldRotationController_RotationType__Enum_FullRotation = 0,
  LaserShieldRotationController_RotationType__Enum_PingPong = 1,
  LaserShieldRotationController_RotationType__Enum_Manual = 2,
};
struct LaserShieldRotationController_RotationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LaserShieldRotationController_RotationType__Enum value;
};
struct LaserShieldRotationController__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_UnityEngine_Transform_ * CirclePivots;
  struct Transform * CorePivot;
  struct LaserShieldCircleSetting * Settings;
  float BaseRotationSpeed;
  float m_defaultRotationSpeedMultiplierTweenSpeed;
  float PingPongInterval;
  enum LaserShieldRotationController_RotationType__Enum StartingRotationType;
  float ShieldOpeningSize;
  struct LaserShieldPieceProjectile * ProjectilePrefab;
  float ProjectileSpeedForRepair;
  float ProjectileSpeedForAttack;
  enum LaserShieldRotationController_RotationType__Enum m_currentRotationType;
  float m_rotationSpeedMultiplier;
  float m_rotationDirection;
  float m_timeToPingPong;
  struct List_1_LaserShieldDamageReceiver_ * m_shieldPieces;
  bool m_rotateCore;
  bool m_alternateCircleRotations;
  float m_currentMaxPieceProjectileShake;
  bool m_playSoundOnPieceProjectileReturnStart;
  bool m_playSoundOnPieceProjectileShakeStart;
  int32_t m_lastDamageID;
  float m_rotationSpeedMultiplierTweenSpeed;
  float m_targetSpeedMultiplier;
  int32_t AimDirectionCount;
  float CurrentOpeningStrength;
  float PieceKickbackDampRate;
  struct Vector3 _PieceLocalPositionOffset_k__BackingField;
  struct Vector3 _PieceWorldOffset_k__BackingField;
  float _ManualTargetAngle_k__BackingField;
  struct LaserShooterMinibossEntity * _Entity_k__BackingField;
};
struct LaserShieldRotationController {
  struct LaserShieldRotationController__Class *klass;
  struct MonitorData *monitor;
  struct LaserShieldRotationController__Fields fields;
};
enum LaserShieldPieceProjectile_Mode__Enum : int32_t {
  LaserShieldPieceProjectile_Mode__Enum_ShootFromShield = 0,
  LaserShieldPieceProjectile_Mode__Enum_ReturnsToShield = 1,
  LaserShieldPieceProjectile_Mode__Enum_StuckInEnvironment = 2,
};
struct LaserShieldPieceProjectile_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LaserShieldPieceProjectile_Mode__Enum value;
};
struct LaserShieldPieceProjectile__Fields {
  struct Projectile__Fields _;
  struct Transform * OscilationPivot;
  struct HealthController * Health;
  float RotationRate;
  float TurningSpeed;
  float TimeToReachFullRotation;
  float InitSpeed;
  float TargetSpeed;
  float SlowDownTime;
  struct AnimationCurve * SlowDownCurve;
  float ReturnInitSpeed;
  float ReturnTargetSpeed;
  float ReturnSlowDownTime;
  struct AnimationCurve * ReturnSlowDownCurve;
  struct Vector2 StuckTimeRange;
  struct Vector2 StuckShakeAmplitude;
  struct Vector2 StuckShakeFrequency;
  struct AnimationCurve * StuckShakeCurve;
  float TargetPositionDistanceToRepair;
  struct List_1_System_Single_ * OrbitDistances;
  struct Transform * m_meshesRoot;
  struct LaserShieldPieceProjectile_Ring__Array * m_rings;
  struct MoonTimeline * HitTimeline;
  struct GameObject * ImpactEffectPrefab;
  struct GameObject * DamageEffectPrefab;
  struct GameObject * DestroyEffectPrefab;
  struct Transform * m_target;
  int32_t m_connectedPieceIndex;
  int32_t m_ringIndex;
  int32_t m_pieceModelIndex;
  bool m_initialized;
  float m_initialRotation;
  float m_currentTimeInMode;
  enum LaserShieldPieceProjectile_Mode__Enum m_mode;
  float m_targetPositionDistanceToRepairSqr;
  float m_prevOscilationStrength;
  struct LaserShieldRotationController * m_shieldController;
  float m_targetStuckTime;
};
struct LaserShieldPieceProjectile {
  struct LaserShieldPieceProjectile__Class *klass;
  struct MonitorData *monitor;
  struct LaserShieldPieceProjectile__Fields fields;
};
struct __declspec(align(8)) List_1_LaserShieldPieceProjectile___Fields {
  struct LaserShieldPieceProjectile__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LaserShieldPieceProjectile_ {
  struct List_1_LaserShieldPieceProjectile___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LaserShieldPieceProjectile___Fields fields;
};
struct LaserShieldPieceProjectile__Array {
  struct LaserShieldPieceProjectile__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LaserShieldPieceProjectile * vector[32];
};
struct IEnumerator_1_LaserShieldPieceProjectile_ {
  struct IEnumerator_1_LaserShieldPieceProjectile___Class *klass;
  struct MonitorData *monitor;
};
struct ValueWithMaxValue__Fields {
  struct SaveSerialize__Fields _;
  float MaxValue;
  struct Action * ValueChanged;
  float m_value;
  float StartValue;
};
struct ValueWithMaxValue {
  struct ValueWithMaxValue__Class *klass;
  struct MonitorData *monitor;
  struct ValueWithMaxValue__Fields fields;
};
struct HealthController__Fields {
  struct ValueWithMaxValue__Fields _;
  struct Action * OnHealthDepletedEvent;
};
struct HealthController {
  struct HealthController__Class *klass;
  struct MonitorData *monitor;
  struct HealthController__Fields fields;
};
struct LaserShieldPieceProjectile_Ring {
  struct Transform__Array * Pieces;
};
struct LaserShieldPieceProjectile_Ring__Boxed {
  struct LaserShieldPieceProjectile_Ring__Class *klass;
  struct MonitorData *monitor;
  struct LaserShieldPieceProjectile_Ring fields;
};
struct LaserShieldPieceProjectile_Ring__Array {
  struct LaserShieldPieceProjectile_Ring__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LaserShieldPieceProjectile_Ring vector[32];
};
struct __declspec(align(8)) List_1_LaserShieldDamageReceiver___Fields {
  struct LaserShieldDamageReceiver__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LaserShieldDamageReceiver_ {
  struct List_1_LaserShieldDamageReceiver___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LaserShieldDamageReceiver___Fields fields;
};
struct LaserShieldDamageReceiver__Array {
  struct LaserShieldDamageReceiver__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LaserShieldDamageReceiver * vector[32];
};
struct IEnumerator_1_LaserShieldDamageReceiver_ {
  struct IEnumerator_1_LaserShieldDamageReceiver___Class *klass;
  struct MonitorData *monitor;
};
struct LaserShooterMinibossEntity__Fields {
  struct LaserShooterEntity__Fields _;
  struct DamageReceiver * MainHitBox;
  struct BlockableLaser * MainLaser;
  struct Transform * MainOscilator;
  float ForceDampening;
  float SelfSpringStrenght;
  float MinSpringSpeed;
  float SecondPhaseTriggerTreshold;
  float ThirdPhaseTriggerTreshold;
  struct MoonBool * HasPhaseChanged;
  struct RTPC * WwiseShieldPercentage;
  struct Event_1 * WwisePartialRepairStartEvent;
  struct Event_1 * WwisePartialRepairStopEvent;
  struct Event_1 * WwiseFullRepairStartEvent;
  struct Event_1 * WwiseFullRepairStopEvent;
  struct RTPC * WwiseRepairCountPercentage;
  struct Event_1 * WwiseShieldAttackPullStartEvent;
  struct Event_1 * WwiseShieldAttackHoldStartEvent;
  struct Event_1 * WwiseShieldAttackShootStartEvent;
  struct Event_1 * WwiseShieldAttackShakeStartEvent;
  struct RTPC * WwiseShieldAttackPiecesShakeStrength;
  struct Event_1 * WwiseShieldAttackSuckPiecesBackEvent;
  struct List_1_BlockableLaser_ * m_laserBeams;
  struct LaserShooterMinibossPathMover * m_pathMover;
  struct List_1_LaserShooterRockSpawnPoint_ * m_rockSpawnPositions;
  struct LaserShieldRotationController * m_shieldController;
  int32_t m_phase;
  struct EntityTargetting * m_targettingComp;
  int32_t m_randomIndex;
  int32_t _CurrentBeamCount_k__BackingField;
  struct Vector3 _AccumulatedForce_k__BackingField;
  struct LaserShooterMinibossPath * _Paths_k__BackingField;
};}