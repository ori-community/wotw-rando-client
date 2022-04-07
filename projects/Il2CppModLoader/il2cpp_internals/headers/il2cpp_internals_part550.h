namespace app {
struct SkeetoMoveToSemiRandomPositionBehaviour__StaticFields {
};
struct SkeetoMoveToSemiRandomPositionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoMoveToSemiRandomPositionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoMoveToSemiRandomPositionBehaviour__VTable vtable;
};

struct SkeetoRunAwayBehaviour__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  float ApproachArrivalDistance;
  struct Vector2 ApproachTargetOffset;
  float ApproachTargetRandomDistance;
  int32_t MovementSpeed;
  struct Vector3 m_targetPosition;
  struct Vector3 m_anticipationPosition;
  struct Vector3 m_resolvePosition;
  bool m_successfulAttack;
  struct Vector3 m_velocity;
  struct Vector3 m_approachRandomOffset;
  struct Vector3 m_upDirection;
  struct Collider__Array * m_colliders;
  struct RaycastHit__Array * m_hits;
  bool m_hasValidPosition;
};
struct SkeetoRunAwayBehaviour {
  struct SkeetoRunAwayBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoRunAwayBehaviour__Fields fields;
};
struct SkeetoRunAwayBehaviour__VTable {
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
struct SkeetoRunAwayBehaviour__StaticFields {
};
struct SkeetoRunAwayBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoRunAwayBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoRunAwayBehaviour__VTable vtable;
};

enum SkeetoShootBehaviour_State__Enum : int32_t {
  SkeetoShootBehaviour_State__Enum_Unset = 0,
  SkeetoShootBehaviour_State__Enum_FlipTowardsTarget = 1,
  SkeetoShootBehaviour_State__Enum_PreShoot = 2,
  SkeetoShootBehaviour_State__Enum_PostShoot = 3,
};
struct SkeetoShootBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoShootBehaviour_State__Enum value;
};
struct SkeetoShootBehaviour__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  struct MoonTimeline * FlipTimeline;
  struct EventTriggerAnimator * FlipTrigger;
  bool UnlockLookDirectionOnEnd;
  struct MoonTimeline * ShootTimeline;
  struct EventTriggerAnimator * ShootTrigger;
  struct ScaredySkeetoProjectileSettings * Settings;
  struct PrefabSpawner * ProjectileSpawner;
  struct Transform * ShootOrigin;
  float RecoilForce;
  float PreShotDuration;
  float DecelerationMultiplier;
  float AimVerticalOffset;
  float MaxRotationSpeed;
  float MaxAimAssistDegrees;
  bool AllowLookDirectionFlip;
  enum SkeetoShootBehaviour_State__Enum m_currentState;
  struct MoonTimeline * m_currentTimeline;
  float m_lookDirection;
  float m_postShootAngle;
  float m_postShootTimelineTimestamp;
  float m_timeInState;
  float m_targetLookDirection;
  bool m_flipTimelineStarted;
};
struct SkeetoShootBehaviour {
  struct SkeetoShootBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoShootBehaviour__Fields fields;
};
struct SkeetoShootBehaviour__VTable {
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
struct SkeetoShootBehaviour__StaticFields {
};
struct SkeetoShootBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoShootBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoShootBehaviour__VTable vtable;
};

struct SkeetoShootBehaviour_c {
  struct SkeetoShootBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct SkeetoShootBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SkeetoShootBehaviour_c__StaticFields {
  struct SkeetoShootBehaviour_c * __9;
  struct Action * __9__33_0;
  struct Action * __9__41_0;
  struct Action * __9__46_0;
  struct Action * __9__46_1;
};
struct SkeetoShootBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoShootBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoShootBehaviour_c__VTable vtable;
};

struct SkeetoBombAttack__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  float ProximityDistance;
};
struct SkeetoBombAttack {
  struct SkeetoBombAttack__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoBombAttack__Fields fields;
};
struct SkeetoBombAttack__VTable {
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
struct SkeetoBombAttack__StaticFields {
};
struct SkeetoBombAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoBombAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoBombAttack__VTable vtable;
};

enum SkeetoDiveAttackBehaviour_DiveAttackState__Enum : int32_t {
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_Unset = 0,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_ScheduledJobs = 1,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_FlipTowardsTarget = 2,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_AttackAnticipation = 3,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_AttackLoop = 4,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_AttackResolve = 5,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_HitWallHit = 6,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_HitWallStunnedLoop = 7,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_HitWallResolve = 8,
  SkeetoDiveAttackBehaviour_DiveAttackState__Enum_HitWallBackward = 9,
};
struct SkeetoDiveAttackBehaviour_DiveAttackState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoDiveAttackBehaviour_DiveAttackState__Enum value;
};
struct SkeetoDiveAttackBehaviour__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  struct RootMotionProcessorData * RootMotionSetting;
  bool AttackOnlyTargetsBelow;
  float MinXDistanceToTarget;
  float MinYDistanceToTarget;
  bool FailIfOffScreen;
  struct MoonTimeline * FlipTimeline;
  struct EventTriggerAnimator * FlipTrigger;
  bool UnlockLookDirectionOnExit;
  struct MoonTimeline * AnticipationTimeline;
  struct MoonTimeline * AttackTimeline;
  float DashSpeed;
  float DashTargetArriveDistance;
  float AttackAcceleration;
  float MaxAttackLoopTime;
  float Deceleration;
  float TurningSpeed;
  struct SplitTurnAnimationMoonTimeline * ResolveAnimation;
  float WallHitDotTreshold;
  struct MoonTimeline * HitWallTimeline;
  float StunTime;
  struct MoonTimeline * StunTimeline;
  struct MoonTimeline * HitWallResolveTimeline;
  struct MoonTimeline * HitWallBackwardTimeline;
  float BounceOffWallAmountForStun;
  int32_t AttackTokensRequired;
  struct SphereCollider * ClearanceRequired;
  bool DebugPauseOnFlipTowardsTarget;
  bool DebugPauseOnAttackAnticipation;
  bool DebugPauseOnAttackLoop;
  bool DebugPauseOnAttackResolve;
  bool DebugPauseOnHitWallHit;
  bool DebugPauseOnHitWallStunnedLoop;
  bool DebugPauseOnHitWallResolve;
  bool DebugPauseOnHitWallBackward;
  bool DebugPauseOnTargetLost;
  enum SkeetoDiveAttackBehaviour_DiveAttackState__Enum m_state;
  struct SkeetoHitReaction * m_hitReaction;
  struct BatchedSpherecast * m_batchedRaycasts;
  struct RaycastHit__Array * m_hits;
  struct SpherecastCommand__Array * m_commands;
  float m_timeInState;
  struct MoonTimeline * m_currentTimeline;
  struct Vector2 m_attackDirection;
  struct Vector2 m_attackVelocity;
  float m_targetLookDirection;
  struct Rigidbody * m_rigidbody;
  struct Vector3 _InitialTargetPosition_k__BackingField;
};
struct SkeetoDiveAttackBehaviour {
  struct SkeetoDiveAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoDiveAttackBehaviour__Fields fields;
};
struct SkeetoDiveAttackBehaviour__VTable {
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
struct SkeetoDiveAttackBehaviour__StaticFields {
};
struct SkeetoDiveAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoDiveAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoDiveAttackBehaviour__VTable vtable;
};

struct SkeetoDiveAttackBehaviour_c {
  struct SkeetoDiveAttackBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct SkeetoDiveAttackBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SkeetoDiveAttackBehaviour_c__StaticFields {
  struct SkeetoDiveAttackBehaviour_c * __9;
  struct Action * __9__82_0;
};
struct SkeetoDiveAttackBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoDiveAttackBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoDiveAttackBehaviour_c__VTable vtable;
};

struct SkeetoEatingBehaviour__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  struct EntityReactionBehaviour * HitReaction;
  float EatingTime;
  float Deceleration;
  float m_eatingTimer;
  struct Vector3 m_velocity;
};
struct SkeetoEatingBehaviour {
  struct SkeetoEatingBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoEatingBehaviour__Fields fields;
};
struct SkeetoEatingBehaviour__VTable {
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
struct SkeetoEatingBehaviour__StaticFields {
};
struct SkeetoEatingBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoEatingBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoEatingBehaviour__VTable vtable;
};

struct SkeetoLockLookDirection__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  bool LockDirection;
  struct MoonVector3 * m_targetPosition;
  struct MoonFloat * m_minXDistanceFromTarget;
  struct SkeetoLocomotion * m_skeetoLocomotion;
};
struct SkeetoLockLookDirection {
  struct SkeetoLockLookDirection__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoLockLookDirection__Fields fields;
};
struct SkeetoLockLookDirection__VTable {
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
struct SkeetoLockLookDirection__StaticFields {
};
struct SkeetoLockLookDirection__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoLockLookDirection__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoLockLookDirection__VTable vtable;
};

struct SkeetoLocomotionIdleBehaviour_c {
  struct SkeetoLocomotionIdleBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct SkeetoLocomotionIdleBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SkeetoLocomotionIdleBehaviour_c__StaticFields {
  struct SkeetoLocomotionIdleBehaviour_c * __9;
  struct Action * __9__30_0;
};
struct SkeetoLocomotionIdleBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoLocomotionIdleBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoLocomotionIdleBehaviour_c__VTable vtable;
};

struct SkeetoLocomotionTurningBehaviour__Fields {
  struct LocomotionTurningTimelineBehaviour__Fields _;
};
struct SkeetoLocomotionTurningBehaviour {
  struct SkeetoLocomotionTurningBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoLocomotionTurningBehaviour__Fields fields;
};
struct SkeetoLocomotionTurningBehaviour__VTable {
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
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData get_TargetLookDirectionX;
  VirtualInvokeData set_TargetLookDirectionX;
  VirtualInvokeData PlayAnimation;
  VirtualInvokeData ShouldEndBehaviour;
  VirtualInvokeData get_IsPlaying;
  VirtualInvokeData CanCancel;
  VirtualInvokeData RootMotionModifier;
};
struct SkeetoLocomotionTurningBehaviour__StaticFields {
};
struct SkeetoLocomotionTurningBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoLocomotionTurningBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoLocomotionTurningBehaviour__VTable vtable;
};

struct EnumSelector_1_SkeetoEntity_SkeetoState___Fields {
  struct CompositeNode__Fields _;
  struct List_1_SkeetoEntity_SkeetoState_ * Options;
};
struct EnumSelector_1_SkeetoEntity_SkeetoState_ {
  struct EnumSelector_1_SkeetoEntity_SkeetoState___Class *klass;
  struct MonitorData *monitor;
  struct EnumSelector_1_SkeetoEntity_SkeetoState___Fields fields;
};
struct SkeetoStateSelector__Fields {
  struct EnumSelector_1_SkeetoEntity_SkeetoState___Fields _;
};
struct SkeetoStateSelector {
  struct SkeetoStateSelector__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoStateSelector__Fields fields;
};
struct __declspec(align(8)) List_1_SkeetoEntity_SkeetoState___Fields {
  struct SkeetoEntity_SkeetoState__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SkeetoEntity_SkeetoState_ {
  struct List_1_SkeetoEntity_SkeetoState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SkeetoEntity_SkeetoState___Fields fields;
};
enum SkeetoEntity_SkeetoState__Enum : int32_t {
  SkeetoEntity_SkeetoState__Enum_Normal = 0,
  SkeetoEntity_SkeetoState__Enum_Bomb = 1,
};
struct SkeetoEntity_SkeetoState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoEntity_SkeetoState__Enum value;
};
struct SkeetoEntity_SkeetoState__Enum__Array {
  struct SkeetoEntity_SkeetoState__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum SkeetoEntity_SkeetoState__Enum vector[32];
};
struct IEnumerator_1_SkeetoEntity_SkeetoState_ {
  struct IEnumerator_1_SkeetoEntity_SkeetoState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SkeetoEntity_SkeetoState___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SkeetoEntity_SkeetoState___StaticFields {
};
struct IEnumerator_1_SkeetoEntity_SkeetoState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SkeetoEntity_SkeetoState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SkeetoEntity_SkeetoState___VTable vtable;
};
struct List_1_SkeetoEntity_SkeetoState___VTable {
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
struct List_1_SkeetoEntity_SkeetoState___StaticFields {
  struct SkeetoEntity_SkeetoState__Enum__Array * _emptyArray;
};
struct List_1_SkeetoEntity_SkeetoState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SkeetoEntity_SkeetoState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SkeetoEntity_SkeetoState___VTable vtable;
};
struct EnumSelector_1_SkeetoEntity_SkeetoState___VTable {
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
  VirtualInvokeData AddChild;
  VirtualInvokeData __unknown;
};
struct EnumSelector_1_SkeetoEntity_SkeetoState___StaticFields {
};
struct EnumSelector_1_SkeetoEntity_SkeetoState___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnumSelector_1_SkeetoEntity_SkeetoState___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnumSelector_1_SkeetoEntity_SkeetoState___VTable vtable;
};
struct SkeetoStateSelector__VTable {
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
  VirtualInvokeData AddChild;
  VirtualInvokeData GetEnumValue;
};
struct SkeetoStateSelector__StaticFields {
};
struct SkeetoStateSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoStateSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoStateSelector__VTable vtable;
};

struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Fields {
  struct DecoratorNode__Fields _;
  struct SkeetoEntity * Entity;
};
struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator {
  struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class *klass;
  struct MonitorData *monitor;
  struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Fields fields;
};
enum SkeetoSpawnType__Enum : int32_t {
  SkeetoSpawnType__Enum_ZNegative = 0,
  SkeetoSpawnType__Enum_ZPositive_CurrentlyBroken = 1,
  SkeetoSpawnType__Enum_SpawnFromNest = 2,
};
struct SkeetoSpawnType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoSpawnType__Enum value;
};
enum SkeetoEntity_SkeetoType__Enum : int32_t {
  SkeetoEntity_SkeetoType__Enum_Unknown = 0,
  SkeetoEntity_SkeetoType__Enum_Small = 1,
  SkeetoEntity_SkeetoType__Enum_Normal = 2,
  SkeetoEntity_SkeetoType__Enum_Kamikaze = 3,
  SkeetoEntity_SkeetoType__Enum_Scaredy = 4,
};
struct SkeetoEntity_SkeetoType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoEntity_SkeetoType__Enum value;
};
struct SkeetoEntity__Fields {
  struct EnemyEntity__Fields _;
  float PatrolYOffset;
  struct Vector2 InfluenceDistanceMultiplier;
  enum SkeetoSpawnType__Enum _SpawnType_k__BackingField;
  struct Vector3 m_currentOffet;
  enum SkeetoEntity_SkeetoState__Enum m_state;
  float MaxSwellingScale;
  float AssLerpSpeed;
  float ExplosionDamage;
  enum DamageWeight__Enum ExplosionDamageWeight;
  struct Renderer * Renderer;
  struct Color NormalColor;
  struct Color BombColor;
  bool ForceExplodeOnDeath;
  struct PrefabSpawner * Explosion;
  bool SetSpotOriBoolOnReset;
  struct Rect PrefferedAttackRange;
  bool MirrorAttackRangeHorizontally;
  bool MirrorAttackRangeVertically;
  int32_t MaxAttacksInRow;
  int32_t _AttacksInRow_k__BackingField;
  struct Color m_currentColor;
  struct GameObject * m_explosionEffect;
  float m_blendValue;
  float m_swellingAmount;
  struct SkeetoLocomotion * m_locomotion;
  enum SkeetoEntity_SkeetoType__Enum m_type;
  bool m_isAttacking;
};
struct SkeetoEntity {
  struct SkeetoEntity__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoEntity__Fields fields;
};
struct SkeetoEntity__VTable {
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
};}