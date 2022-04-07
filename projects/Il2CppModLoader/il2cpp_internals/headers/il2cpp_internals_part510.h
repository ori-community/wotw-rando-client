namespace app {
struct BatchedRaycast__Fields {
  struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___Fields _;
};
struct BatchedRaycast {
  struct BatchedRaycast__Class *klass;
  struct MonitorData *monitor;
  struct BatchedRaycast__Fields fields;
};
struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData __unknown;
};
struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___StaticFields {
};
struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BatchedPhysicscast_1_UnityEngine_RaycastCommand___VTable vtable;
};
struct BatchedRaycast__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData ScheduleBatch;
};
struct BatchedRaycast__StaticFields {
};
struct BatchedRaycast__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BatchedRaycast__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BatchedRaycast__VTable vtable;
};

struct __declspec(align(8)) BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Fields {
  struct NativeArray_1_UnityEngine_SpherecastCommand_ m_cmds;
  struct NativeArray_1_UnityEngine_RaycastHit_ m_hits;
  struct JobHandle m_job;
  int32_t m_capacity;
};
struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand_ {
  struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Class *klass;
  struct MonitorData *monitor;
  struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Fields fields;
};
struct BatchedSpherecast__Fields {
  struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Fields _;
};
struct BatchedSpherecast {
  struct BatchedSpherecast__Class *klass;
  struct MonitorData *monitor;
  struct BatchedSpherecast__Fields fields;
};
struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData __unknown;
};
struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___StaticFields {
};
struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BatchedPhysicscast_1_UnityEngine_SpherecastCommand___VTable vtable;
};
struct BatchedSpherecast__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Dispose;
  VirtualInvokeData ScheduleBatch;
};
struct BatchedSpherecast__StaticFields {
};
struct BatchedSpherecast__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BatchedSpherecast__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BatchedSpherecast__VTable vtable;
};

struct __declspec(align(8)) CancellableController__Fields {
  struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_ * m_finishAnimators;
};
struct CancellableController {
  struct CancellableController__Class *klass;
  struct MonitorData *monitor;
  struct CancellableController__Fields fields;
};
struct CancellableController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CancellableController__StaticFields {
};
struct CancellableController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CancellableController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CancellableController__VTable vtable;
};

struct __declspec(align(8)) HitReactionController__Fields {
  struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_ * m_hitAccumulatorAnimators;
  struct List_1_Moon_Timeline_EventTriggerGameplayAnimator_ * m_hitReactionAllowedAnimators;
};
struct HitReactionController {
  struct HitReactionController__Class *klass;
  struct MonitorData *monitor;
  struct HitReactionController__Fields fields;
};
struct HitReactionController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HitReactionController__StaticFields {
};
struct HitReactionController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HitReactionController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HitReactionController__VTable vtable;
};

enum ShellShatterEffect_State__Enum : int32_t {
  ShellShatterEffect_State__Enum_NotIgnited = 0,
  ShellShatterEffect_State__Enum_DelayingTimeline = 1,
  ShellShatterEffect_State__Enum_PlayingTimeline = 2,
};
struct ShellShatterEffect_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShellShatterEffect_State__Enum value;
};
struct ShellShatterEffect__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * ExplodeTimeline;
  struct MoonTimeline * DissolveTimeline;
  struct List_1_UnityEngine_Rigidbody_ * Pieces;
  struct List_1_UnityEngine_Vector3_ * InitialPositions;
  struct List_1_UnityEngine_Quaternion_ * InitialRotations;
  struct List_1_UnityEngine_Collider_ * PiecesColliders;
  float LifeTime;
  float Force;
  float ForceRadius;
  float UpwardsModifier;
  struct Transform * ExplosionOriginPoint;
  struct Vector3 ExplosionOriginOffset;
  enum ForceMode__Enum ExplosionMode;
  float GravitySpeed;
  struct AnimationCurve * GravityMultiplierOverLifetime;
  float HorizontalVelocityDamp;
  bool ExplodeOnEnable;
  float m_timer;
  enum ShellShatterEffect_State__Enum m_state;
};
struct ShellShatterEffect {
  struct ShellShatterEffect__Class *klass;
  struct MonitorData *monitor;
  struct ShellShatterEffect__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Rigidbody___Fields {
  struct Rigidbody__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Rigidbody_ {
  struct List_1_UnityEngine_Rigidbody___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Rigidbody___Fields fields;
};
struct IEnumerator_1_UnityEngine_Rigidbody_ {
  struct IEnumerator_1_UnityEngine_Rigidbody___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_UnityEngine_Rigidbody___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_Rigidbody___StaticFields {
};
struct IEnumerator_1_UnityEngine_Rigidbody___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_Rigidbody___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_Rigidbody___VTable vtable;
};
struct List_1_UnityEngine_Rigidbody___VTable {
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
struct List_1_UnityEngine_Rigidbody___StaticFields {
  struct Rigidbody__Array * _emptyArray;
};
struct List_1_UnityEngine_Rigidbody___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_UnityEngine_Rigidbody___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_UnityEngine_Rigidbody___VTable vtable;
};
struct ShellShatterEffect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShellShatterEffect__StaticFields {
};
struct ShellShatterEffect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShellShatterEffect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShellShatterEffect__VTable vtable;
};

struct CrabKickUpReactionBehaviour__Fields {
  struct UpperKickReactionBehaviour__Fields _;
  float AirSpinRotationAmount;
  bool m_shouldSkipUpdate;
  struct SpikeSlugLocomotion * m_slugLocomotion;
};
struct CrabKickUpReactionBehaviour {
  struct CrabKickUpReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct CrabKickUpReactionBehaviour__Fields fields;
};
struct SpikeSlugLocomotion__Fields {
  struct GroundEntityLocomotion__Fields _;
  float MaxSpiningSpeed;
  struct FloatAnimationParameter * SpinToFallBlend;
  float SpiningSpeedDividerForAnimBlend;
  struct Transform * SpinTransform;
  float SurfaceCheckOrigin;
  float SurfaceCheckLenght;
  float FallDelay;
  struct Event_1 * FlyAwaySpinSound;
  float m_continousRotationSpeed;
  float m_timeOnGround;
  float m_allowFallDelay;
};
struct SpikeSlugLocomotion {
  struct SpikeSlugLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugLocomotion__Fields fields;
};
struct SpikeSlugLocomotion__VTable {
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
  VirtualInvokeData SetLookDirectionX;
  VirtualInvokeData SetLookDirection;
  VirtualInvokeData SetLookDirectionTowardsPoint;
  VirtualInvokeData get_LookDirection;
  VirtualInvokeData get_IsFacingLeft;
  VirtualInvokeData get_IsTurning;
  VirtualInvokeData get_MovementProcessor;
  VirtualInvokeData get_UsesSeparateTurningBehaviour;
  VirtualInvokeData ShouldStartFalling;
  VirtualInvokeData PropagateTargetPoint;
  VirtualInvokeData InstantFlip;
  VirtualInvokeData get_LookDirection_1;
  VirtualInvokeData get_LookDirectionXYNormalized;
  VirtualInvokeData get_IsFacingLeft_1;
};
struct SpikeSlugLocomotion__StaticFields {
};
struct SpikeSlugLocomotion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpikeSlugLocomotion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpikeSlugLocomotion__VTable vtable;
};
struct CrabKickUpReactionBehaviour__VTable {
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
  VirtualInvokeData get_ShouldSkipUpdate;
};
struct CrabKickUpReactionBehaviour__StaticFields {
};
struct CrabKickUpReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabKickUpReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabKickUpReactionBehaviour__VTable vtable;
};

struct EntityReactionBehaviour_1_CrabEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_CrabEntity_ {
  struct EntityReactionBehaviour_1_CrabEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_CrabEntity___Fields fields;
};
enum CrabDeathReaction_DeathState__Enum : int32_t {
  CrabDeathReaction_DeathState__Enum_Invalid = -1,
  CrabDeathReaction_DeathState__Enum_Hit = 0,
  CrabDeathReaction_DeathState__Enum_Spin = 1,
  CrabDeathReaction_DeathState__Enum_Bounce = 2,
  CrabDeathReaction_DeathState__Enum_Fall = 3,
  CrabDeathReaction_DeathState__Enum_DeathEnd = 4,
  CrabDeathReaction_DeathState__Enum_Drowning = 5,
};
struct CrabDeathReaction_DeathState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CrabDeathReaction_DeathState__Enum value;
};
struct CrabDeathReaction__Fields {
  struct EntityReactionBehaviour_1_CrabEntity___Fields _;
  struct MoonTimeline * HitTimeline;
  struct MoonTimeline * SpinTimeline;
  struct MoonTimeline * FallTimeline;
  struct MoonTimeline * BounceTimeline;
  struct MoonTimeline * DeathEndTimeline;
  struct MoonTimeline * DrownTimeline;
  float InitialDrowningSubmersion;
  struct GameObject * SplashPrefab;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
  struct MoonTimeline * ShakeTimeline;
  struct MoonTimeline * m_currentTimeline;
  struct CrabHitReactionBehaviour * m_hitReactionBehaviour;
  struct CharacterPlatformMovement * m_platformMovement;
  struct GroundEntityLocomotion * m_locomotion;
  bool m_waitingForDeath;
  enum CrabDeathReaction_DeathState__Enum m_currentState;
  int32_t m_executedDeathBounces;
  int32_t MaxDeathBounces;
  float BounceSpeedY;
  float DeathKickbackMinMagnitude;
  float DeathKickbackMinBoost;
  float DeathKickbackMinUpDirection;
  struct RootMotionProcessorData * RootMotion;
  float m_timeDrowning;
  struct Vector2 m_initialDrowningSpeed;
  struct EntityWeightData_EntityWeightSettings m_weightData;
};
struct CrabDeathReaction {
  struct CrabDeathReaction__Class *klass;
  struct MonitorData *monitor;
  struct CrabDeathReaction__Fields fields;
};
struct EntityHitReactionBehaviour_1_CrabEntity___Fields {
  struct EntityReactionBehaviour_1_CrabEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_CrabEntity_ {
  struct EntityHitReactionBehaviour_1_CrabEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_CrabEntity___Fields fields;
};
struct CrabHitReactionBehaviour__Fields {
  struct EntityHitReactionBehaviour_1_CrabEntity___Fields _;
  struct MoonTimeline * HitFront;
  struct MoonTimeline * HitBack;
  struct MoonTimeline * HitAir;
  struct MoonTimeline * HitAdditive;
  struct MoonTimeline * Knockup;
  struct MoonTimeline * Knockback;
  struct MoonTimeline * Knockforward;
  struct MoonTimeline * HitAirAdditive;
  struct List_1_Moon_Timeline_EventTriggerAnimator_ * FlipEvents;
  struct Event_1 * OnAnyHitEvent;
  struct MoonTimeline * ShakeTimeline;
  struct MoonTimeline * m_currentTimeline;
  struct ReactionFallingBehaviour * m_fallBehaviour;
  struct GroundEntityLocomotion * m_locomotion;
  bool m_exitEarly;
  struct EntityDamageEvent * _DamageEvent_k__BackingField;
  float OnGroundKnockbackMultiplier;
  struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_ * InterruptionBlockingTasks;
};
struct CrabHitReactionBehaviour {
  struct CrabHitReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct CrabHitReactionBehaviour__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Fields {
  struct IDamageInterruptionBlockingTask__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_ {
  struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Fields fields;
};
struct IDamageInterruptionBlockingTask {
  struct IDamageInterruptionBlockingTask__Class *klass;
  struct MonitorData *monitor;
};
struct IDamageInterruptionBlockingTask__Array {
  struct IDamageInterruptionBlockingTask__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IDamageInterruptionBlockingTask * vector[32];
};
struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_ {
  struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class *klass;
  struct MonitorData *monitor;
};
struct EntityReactionBehaviour_1_CrabEntity___VTable {
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
struct EntityReactionBehaviour_1_CrabEntity___StaticFields {
};
struct EntityReactionBehaviour_1_CrabEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_CrabEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_CrabEntity___VTable vtable;
};
struct EntityHitReactionBehaviour_1_CrabEntity___VTable {
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
struct EntityHitReactionBehaviour_1_CrabEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_CrabEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_CrabEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_CrabEntity___VTable vtable;
};
struct IDamageInterruptionBlockingTask__VTable {
  VirtualInvokeData IsBlockingInterruption;
};
struct IDamageInterruptionBlockingTask__StaticFields {
};
struct IDamageInterruptionBlockingTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDamageInterruptionBlockingTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDamageInterruptionBlockingTask__VTable vtable;
};
struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields {
};
struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable vtable;
};
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable {
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
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields {
  struct IDamageInterruptionBlockingTask__Array * _emptyArray;
};
struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask___VTable vtable;
};
struct CrabHitReactionBehaviour__VTable {
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
struct CrabHitReactionBehaviour__StaticFields {
};
struct CrabHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabHitReactionBehaviour__VTable vtable;
};
struct CrabDeathReaction__VTable {
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
struct CrabDeathReaction__StaticFields {
};
struct CrabDeathReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabDeathReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabDeathReaction__VTable vtable;
};

struct CrabDeathReaction_c {
  struct CrabDeathReaction_c__Class *klass;
  struct MonitorData *monitor;
};
struct CrabDeathReaction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CrabDeathReaction_c__StaticFields {
  struct CrabDeathReaction_c * __9;
  struct Action * __9__29_0;
};
struct CrabDeathReaction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabDeathReaction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabDeathReaction_c__VTable vtable;
};

struct GroundMovingEntity__Fields {
  struct EnemyEntity__Fields _;
  struct GroundEntityLocomotion * m_groundLocomotion;
  struct SoundProvider * FootstepsSounds;
  struct AnimationCurve * SoundsPerSecondOverSpeed;
  struct EntityBehaviour__Array * BehavioursWithFootsteps;
  float m_nextStepTime;
  struct Transform * m_transform;
  struct CharacterPlatformMovement * m_platformMovemt;
  bool m_isIgnoringPlatforms;
  struct Collider__Array * m_overlappedColliders;
};
struct GroundMovingEntity {
  struct GroundMovingEntity__Class *klass;
  struct MonitorData *monitor;
  struct GroundMovingEntity__Fields fields;
};
struct CrabEntity__Fields {
  struct GroundMovingEntity__Fields _;
  struct CrabEntity_DamageTime * RetaliationConditions;
  float RetaliationActivationTimeWindow;
  float BaseAttackInterval;
  float GroupAttackIntervalMultiplier;
  struct List_1_CrabEntity_DamageTime_ * m_takenDamageElapsedTime;
  float m_retaliationAllowedTimer;
  struct EntityTargetting * Targetting;
  struct Event_1 * WwiseClawAttackInterrupted;
};
struct CrabEntity {
  struct CrabEntity__Class *klass;
  struct MonitorData *monitor;
  struct CrabEntity__Fields fields;
};
struct __declspec(align(8)) CrabEntity_DamageTime__Fields {
  float Damage;
  float Time;
};
struct CrabEntity_DamageTime {
  struct CrabEntity_DamageTime__Class *klass;
  struct MonitorData *monitor;
  struct CrabEntity_DamageTime__Fields fields;
};
struct __declspec(align(8)) List_1_CrabEntity_DamageTime___Fields {
  struct CrabEntity_DamageTime__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CrabEntity_DamageTime_ {
  struct List_1_CrabEntity_DamageTime___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CrabEntity_DamageTime___Fields fields;
};
struct CrabEntity_DamageTime__Array {
  struct CrabEntity_DamageTime__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CrabEntity_DamageTime * vector[32];
};
struct IEnumerator_1_CrabEntity_DamageTime_ {
  struct IEnumerator_1_CrabEntity_DamageTime___Class *klass;
  struct MonitorData *monitor;
};
struct GroundMovingEntity__VTable {
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
  VirtualInvokeData HandleFootstepEvents;
  VirtualInvokeData get_ShouldPlayFootsteps;
};}