namespace app {
struct GasballEntity__StaticFields {
};
struct GasballEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasballEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasballEntity__VTable vtable;
};

struct GasballSpawnSetup__Fields {
  struct EntitySpawnSetup__Fields _;
  bool m_setSpawnOffsetManualy;
  struct Vector3 m_spawnOffset;
};
struct GasballSpawnSetup {
  struct GasballSpawnSetup__Class *klass;
  struct MonitorData *monitor;
  struct GasballSpawnSetup__Fields fields;
};
struct GasballSpawnSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GasballSpawnSetup__StaticFields {
};
struct GasballSpawnSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasballSpawnSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasballSpawnSetup__VTable vtable;
};

struct GasBallSpawnTask__Fields {
  struct CommonSpawnTask__Fields _;
  struct FloatAnimationParameter * LookDirectionAnimParam;
  float BlendParamChangeSpeed;
  float MoveSpeed;
  float SlowDownDistance;
  struct EventTriggerAnimator * StartMovingEvent;
  struct MoonVector3 * TargetPosition;
  float TraversalSpeed;
  float PositionOffset;
  bool EndEarlyOnCondition;
  struct Condition_1 * Condition;
  struct Transform * m_mirror;
  float m_currentBlend;
  struct Vector3 m_targetPosition;
  struct GasballEntity * m_gasball;
  struct PlatformMovement * m_platformMovement;
  struct Vector3 m_moveDirection;
  float m_slowDownDistanceSqr;
  bool m_canBeInterrupted;
};
struct GasBallSpawnTask {
  struct GasBallSpawnTask__Class *klass;
  struct MonitorData *monitor;
  struct GasBallSpawnTask__Fields fields;
};
struct GasBallSpawnTask__VTable {
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
  VirtualInvokeData SetActivateDamageDealers;
  VirtualInvokeData SetPlatformMovementColliderEnabledState;
};
struct GasBallSpawnTask__StaticFields {
};
struct GasBallSpawnTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasBallSpawnTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasBallSpawnTask__VTable vtable;
};

struct GasballHitReactionBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * HitReaction;
  struct MoonTimeline * HitAdditive;
  struct MoonTimeline * m_currentTimeline;
  struct ReactionFallingBehaviour * m_fallBehaviour;
  struct AirEntityLocomotion * m_locomotion;
  struct EntityDamageEvent * _DamageEvent_k__BackingField;
  float KickbackMultiplier;
  float KickbackMax;
  struct Event_1 * OnAnyHitEvent;
};
struct GasballHitReactionBehaviour {
  struct GasballHitReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct GasballHitReactionBehaviour__Fields fields;
};
struct GasballHitReactionBehaviour__VTable {
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
struct GasballHitReactionBehaviour__StaticFields {
};
struct GasballHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasballHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasballHitReactionBehaviour__VTable vtable;
};

struct GasballHitReactionBehaviour_c {
  struct GasballHitReactionBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct GasballHitReactionBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GasballHitReactionBehaviour_c__StaticFields {
  struct GasballHitReactionBehaviour_c * __9;
  struct Action * __9__18_0;
};
struct GasballHitReactionBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasballHitReactionBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasballHitReactionBehaviour_c__VTable vtable;
};

struct GasballReactions__Fields {
  struct EntityReactions__Fields _;
};
struct GasballReactions {
  struct GasballReactions__Class *klass;
  struct MonitorData *monitor;
  struct GasballReactions__Fields fields;
};
struct GasballReactions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData OnCacheSerializedComponents;
  VirtualInvokeData OnAwake;
  VirtualInvokeData ProcessEntityEvent;
};
struct GasballReactions__StaticFields {
};
struct GasballReactions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasballReactions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasballReactions__VTable vtable;
};

struct MudkisseBiteDashAttack__Fields {
  struct VolumeMovementTimelineBehaviourNew__Fields _;
};
struct MudkisseBiteDashAttack {
  struct MudkisseBiteDashAttack__Class *klass;
  struct MonitorData *monitor;
  struct MudkisseBiteDashAttack__Fields fields;
};
struct MudkisseBiteDashAttack__VTable {
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
  VirtualInvokeData get_StatusWhenPlaying;
};
struct MudkisseBiteDashAttack__StaticFields {
};
struct MudkisseBiteDashAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MudkisseBiteDashAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MudkisseBiteDashAttack__VTable vtable;
};

struct MudkisserProjectileAttack__Fields {
  struct VolumeMovementTimelineBehaviourNew__Fields _;
  struct EventTriggerAnimator * ThrowTrigger;
  struct EventTriggerAnimator * AimTrigger;
  struct EventTriggerAnimator * PullOutTrigger;
  struct PrefabSpawner * ProjectileSpawner;
  float ProjectileSpeed;
  float ProjectileGravity;
  int32_t ProjectileDamage;
  enum DamageWeight__Enum ProjectileDamageWeight;
  float MinimumDistanceToArcProjectile;
  float ProjectileRangeWhenNoTarget;
  bool ShootHighAngle;
  struct Transform * ShootPoint;
  struct List_1_UnityEngine_Collider_ * IgnoredColliders;
  struct Transform * ThrowingHand;
  struct Vector3 shootTargetPos;
  struct Projectile * m_projectile;
  struct DamageDealer * m_projectileDamageDealer;
};
struct MudkisserProjectileAttack {
  struct MudkisserProjectileAttack__Class *klass;
  struct MonitorData *monitor;
  struct MudkisserProjectileAttack__Fields fields;
};
struct MudkisserProjectileAttack__VTable {
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
  VirtualInvokeData get_StatusWhenPlaying;
};
struct MudkisserProjectileAttack__StaticFields {
};
struct MudkisserProjectileAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MudkisserProjectileAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MudkisserProjectileAttack__VTable vtable;
};

struct MudkisserWhipAttack__Fields {
  struct VolumeMovementTimelineBehaviourNew__Fields _;
};
struct MudkisserWhipAttack {
  struct MudkisserWhipAttack__Class *klass;
  struct MonitorData *monitor;
  struct MudkisserWhipAttack__Fields fields;
};
struct MudkisserWhipAttack__VTable {
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
  VirtualInvokeData get_StatusWhenPlaying;
};
struct MudkisserWhipAttack__StaticFields {
};
struct MudkisserWhipAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MudkisserWhipAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MudkisserWhipAttack__VTable vtable;
};

struct MudkisserChaseBehaviour__Fields {
  struct GroundChaseBehaviourNew__Fields _;
};
struct MudkisserChaseBehaviour {
  struct MudkisserChaseBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MudkisserChaseBehaviour__Fields fields;
};
struct MudkisserChaseBehaviour__VTable {
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
  VirtualInvokeData IsBlockingInterruption;
  VirtualInvokeData AssignLocomotionData;
};
struct MudkisserChaseBehaviour__StaticFields {
};
struct MudkisserChaseBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MudkisserChaseBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MudkisserChaseBehaviour__VTable vtable;
};

enum VolumePatrolBehaviourNew_PatrolMode__Enum : int32_t {
  VolumePatrolBehaviourNew_PatrolMode__Enum_Infinite = 0,
  VolumePatrolBehaviourNew_PatrolMode__Enum_ReturnSuccessAtEachPoint = 1,
};
struct VolumePatrolBehaviourNew_PatrolMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum VolumePatrolBehaviourNew_PatrolMode__Enum value;
};
struct VolumePatrolBehaviourNew__Fields {
  struct EntityBehaviourNode__Fields _;
  enum VolumePatrolBehaviourNew_PatrolMode__Enum AgentPatrolMode;
  float MinInterval;
  float MaxInterval;
  struct MoonVector3 * PatrolOrigin;
  float MaxPatrolRadius;
  float TraversalSpeed;
  enum NavigationType__Enum VolumeType;
  struct LayerMask LayerMask;
  struct String * IgnoreColliderTag;
  struct Predicate_1_UnityEngine_Vector3_ * m_patrolTargetPredicate;
  struct Vector2 m_targetPosition;
  float m_timeUntilNextPoint;
  struct Vector3 m_patrolOrigin;
};
struct VolumePatrolBehaviourNew {
  struct VolumePatrolBehaviourNew__Class *klass;
  struct MonitorData *monitor;
  struct VolumePatrolBehaviourNew__Fields fields;
};
struct MudkisserPatrolBehaviour__Fields {
  struct VolumePatrolBehaviourNew__Fields _;
};
struct MudkisserPatrolBehaviour {
  struct MudkisserPatrolBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MudkisserPatrolBehaviour__Fields fields;
};
struct Predicate_1_UnityEngine_Vector3___Fields {
  struct MulticastDelegate__Fields _;
};
struct Predicate_1_UnityEngine_Vector3_ {
  struct Predicate_1_UnityEngine_Vector3___Class *klass;
  struct MonitorData *monitor;
  struct Predicate_1_UnityEngine_Vector3___Fields fields;
};
struct Predicate_1_UnityEngine_Vector3___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Predicate_1_UnityEngine_Vector3___StaticFields {
};
struct Predicate_1_UnityEngine_Vector3___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Predicate_1_UnityEngine_Vector3___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Predicate_1_UnityEngine_Vector3___VTable vtable;
};
struct VolumePatrolBehaviourNew__VTable {
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
  VirtualInvokeData KeepMoving;
  VirtualInvokeData PickNextPoint;
};
struct VolumePatrolBehaviourNew__StaticFields {
};
struct VolumePatrolBehaviourNew__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumePatrolBehaviourNew__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumePatrolBehaviourNew__VTable vtable;
};
struct MudkisserPatrolBehaviour__VTable {
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
  VirtualInvokeData KeepMoving;
  VirtualInvokeData PickNextPoint;
};
struct MudkisserPatrolBehaviour__StaticFields {
};
struct MudkisserPatrolBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MudkisserPatrolBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MudkisserPatrolBehaviour__VTable vtable;
};

struct MudkisserGrayboxEntity__Fields {
  struct EnemyEntity__Fields _;
  struct IgnoreGoThroughPlatforms * m_ignoreGoThroughs;
  struct PlatformMovement * m_platformMovement;
  struct DamageDealer * m_touchDamage;
  struct VolumeEntityMovementProcessor * m_movementProcessor;
  float Offset;
  struct HitProtection * HitProtection;
  bool m_wasLocomotionPaused;
  struct VolumeEntityLocomotion * m_locomotion;
  bool MoveTowardsTargetIfAggro;
  struct Transform * Rotation;
  bool m_flopping;
};
struct MudkisserGrayboxEntity {
  struct MudkisserGrayboxEntity__Class *klass;
  struct MonitorData *monitor;
  struct MudkisserGrayboxEntity__Fields fields;
};
struct IgnoreGoThroughPlatforms__Fields {
  struct MonoBehaviour__Fields _;
  bool m_ignored;
};
struct IgnoreGoThroughPlatforms {
  struct IgnoreGoThroughPlatforms__Class *klass;
  struct MonitorData *monitor;
  struct IgnoreGoThroughPlatforms__Fields fields;
};
enum HitProtectionState__Enum : int32_t {
  HitProtectionState__Enum_Default = 0,
  HitProtectionState__Enum_Vulnerable = 1,
  HitProtectionState__Enum_ProtectedFromLightAttacks = 2,
  HitProtectionState__Enum_Protected = 3,
};
struct HitProtectionState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HitProtectionState__Enum value;
};
struct __declspec(align(8)) HitProtection__Fields {
  struct Dictionary_2_System_Object_HitProtectionState_ * m_protectionStateGuard;
  enum HitProtectionState__Enum DefaultProtectionState;
  enum HitProtectionState__Enum m_protectionState;
  struct Object * m_protector;
  float m_vulnerabilityTimer;
  float m_invulnerabilityTimer;
};
struct HitProtection {
  struct HitProtection__Class *klass;
  struct MonitorData *monitor;
  struct HitProtection__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Object_HitProtectionState___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Object_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Object_HitProtectionState_ {
  struct Dictionary_2_System_Object_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Object_HitProtectionState___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState_ {
  int32_t hashCode;
  int32_t next;
  struct Object * key;
  enum HitProtectionState__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___Fields {
  struct Dictionary_2_System_Object_HitProtectionState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___Fields {
  struct Dictionary_2_System_Object_HitProtectionState_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___Fields fields;
};
struct HitProtectionState__Enum__Array {
  struct HitProtectionState__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum HitProtectionState__Enum vector[32];
};
struct IEnumerator_1_HitProtectionState_ {
  struct IEnumerator_1_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_HitProtectionState_ {
  struct ICollection_1_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Object_HitProtectionState_ {
  struct Object * key;
  enum HitProtectionState__Enum value;
};
struct KeyValuePair_2_System_Object_HitProtectionState___Boxed {
  struct KeyValuePair_2_System_Object_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Object_HitProtectionState_ fields;
};
struct KeyValuePair_2_System_Object_HitProtectionState___Array {
  struct KeyValuePair_2_System_Object_HitProtectionState___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Object_HitProtectionState_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState_ {
  struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_HitProtectionState_ {
  struct IEnumerable_1_HitProtectionState___Class *klass;
  struct MonitorData *monitor;
};
struct IgnoreGoThroughPlatforms__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IgnoreGoThroughPlatforms__StaticFields {
};
struct IgnoreGoThroughPlatforms__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IgnoreGoThroughPlatforms__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IgnoreGoThroughPlatforms__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Object_HitProtectionState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Object_HitProtectionState___VTable vtable;
};
struct IEnumerator_1_HitProtectionState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_HitProtectionState___StaticFields {
};
struct IEnumerator_1_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_HitProtectionState___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Object_HitProtectionState___VTable vtable;
};
struct ICollection_1_HitProtectionState___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_HitProtectionState___StaticFields {
};
struct ICollection_1_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_HitProtectionState___VTable vtable;
};
struct KeyValuePair_2_System_Object_HitProtectionState___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KeyValuePair_2_System_Object_HitProtectionState___StaticFields {
};
struct KeyValuePair_2_System_Object_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyValuePair_2_System_Object_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyValuePair_2_System_Object_HitProtectionState___VTable vtable;
};
struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState___StaticFields {
};
struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KeyValuePair_2_System_Object_HitProtectionState___VTable vtable;
};
struct IEnumerable_1_HitProtectionState___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_HitProtectionState___StaticFields {
};
struct IEnumerable_1_HitProtectionState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_HitProtectionState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_HitProtectionState___VTable vtable;
};
struct Dictionary_2_System_Object_HitProtectionState___VTable {
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
};}