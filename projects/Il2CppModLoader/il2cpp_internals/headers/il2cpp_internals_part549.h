namespace app {

struct VerletChain__Fields {
  struct MonoBehaviour__Fields _;
  float Stiffness;
  float Mass;
  float Damping;
  struct Vector3 Gravity;
  struct Transform__Array * Points;
  struct VerletBody * m_verletBody;
};
struct VerletChain {
  struct VerletChain__Class *klass;
  struct MonitorData *monitor;
  struct VerletChain__Fields fields;
};
struct VerletChain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct VerletChain__StaticFields {
};
struct VerletChain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VerletChain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VerletChain__VTable vtable;
};

struct AggroSelector {
  struct AggroSelector__Class *klass;
  struct MonitorData *monitor;
};
struct AggroSelector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AggroSelector__StaticFields {
};
struct AggroSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AggroSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AggroSelector__VTable vtable;
};

struct EntityBehaviourNode_1_SkeetoEntity___Fields {
  struct EntityBehaviourNode__Fields _;
};
struct EntityBehaviourNode_1_SkeetoEntity_ {
  struct EntityBehaviourNode_1_SkeetoEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityBehaviourNode_1_SkeetoEntity___Fields fields;
};
enum KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum : int32_t {
  KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum_Unset = 0,
  KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum_FlipTowardsTarget = 1,
  KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum_Anticipation = 2,
  KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum_Attack = 3,
  KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum_Pegged = 4,
};
struct KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum value;
};
struct KamikazeSkeetoDiveAttackBehaviour__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  struct MoonTimeline * FlipTimeline;
  struct EventTriggerAnimator * FlipTrigger;
  struct Vector2 ApproachTargetOffset;
  float ApproachTargetRandomDistance;
  struct MoonTimeline * AnticipationTimeline;
  float AnticipationTime;
  struct MoonTimeline * AttackTimeline;
  float DashSpeed;
  struct Transform * PegCheckRayOrigin;
  float PegRange;
  struct TriggerColliderCallback * ExplodeContactCollider;
  struct EntityTargetting * BashTarget;
  struct MoonTimeline * PeggedTimeline;
  struct SphereCollider * ClearanceRequired;
  float m_explodeTimer;
  float m_explodeDuration;
  bool ApplyDebugDamageOnAnticipation;
  bool ApplyDamageOnAttack;
  bool ApplyDamageOnPegged;
  float DelayBetweenDebugDamage;
  float m_timeToDebugDamage;
  enum DamageWeight__Enum DebugDamageWeight;
  enum KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum m_state;
  struct Vector3 m_targetPosition;
  struct Vector3 m_upDirection;
  struct Vector3 m_attackDirection;
  struct RaycastHit m_pegHitInfo;
  bool m_isAttackDirectionForced;
  float m_supressExplodeTriggerTimeLeft;
  struct Rigidbody * m_rigidbody;
  float _InitialDirection_k__BackingField;
};
struct KamikazeSkeetoDiveAttackBehaviour {
  struct KamikazeSkeetoDiveAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSkeetoDiveAttackBehaviour__Fields fields;
};
struct EntityBehaviourNode_1_SkeetoEntity___VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData CacheSerializedComponents;
  VirtualInvokeData OnEntityInitialized;
};
struct EntityBehaviourNode_1_SkeetoEntity___StaticFields {
};
struct EntityBehaviourNode_1_SkeetoEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityBehaviourNode_1_SkeetoEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityBehaviourNode_1_SkeetoEntity___VTable vtable;
};
struct KamikazeSkeetoDiveAttackBehaviour__VTable {
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
struct KamikazeSkeetoDiveAttackBehaviour__StaticFields {
};
struct KamikazeSkeetoDiveAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSkeetoDiveAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSkeetoDiveAttackBehaviour__VTable vtable;
};

struct SkeetoLocomotion__Fields {
  struct Locomotion__Fields _;
  struct SkeetoLocomotionIdleBehaviour * IdleBehaviour;
  struct SkeetoAirEntityMovementProcessor * m_airMovement;
  float DeadGravity;
  float MaxDeadFallSpeed;
  bool m_lookDirectionLocked;
  struct Action * OnWontReachTarget;
  enum EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
  struct SkeetoAirMoveBehaviour * m_movementBehaviour;
  struct Nullable_1_Single_ m_registeredLookDirection;
  float m_cachedMaxSpeed;
  bool m_cachedUseObstacleHitAvoidance;
};
struct SkeetoLocomotion {
  struct SkeetoLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoLocomotion__Fields fields;
};
enum SkeetoLocomotionIdleBehaviour_State__Enum : int32_t {
  SkeetoLocomotionIdleBehaviour_State__Enum_Unset = 0,
  SkeetoLocomotionIdleBehaviour_State__Enum_Fly = 1,
  SkeetoLocomotionIdleBehaviour_State__Enum_Flip = 2,
};
struct SkeetoLocomotionIdleBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoLocomotionIdleBehaviour_State__Enum value;
};
struct SkeetoLocomotionIdleBehaviour__Fields {
  struct EntityLocomotionTask__Fields _;
  struct MoonTimeline * IdleMoonTimeline;
  struct MoonTimeline * FlipTimeline;
  struct EventTriggerAnimator * FlipTrigger;
  struct FloatAnimationParameter * YDirectionParameter;
  float YDirectionParameterChangeRate;
  float MaxSpeed;
  float Acceleration;
  float AngularVelocity;
  struct SkeetoLocomotion * m_locomotion;
  struct PlatformMovement * m_platformMovement;
  enum SkeetoLocomotionIdleBehaviour_State__Enum m_state;
  float m_timeInState;
  struct MoonTimeline * m_currentTimeline;
  float m_yDirectionParameterValue;
};
struct SkeetoLocomotionIdleBehaviour {
  struct SkeetoLocomotionIdleBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoLocomotionIdleBehaviour__Fields fields;
};
struct SkeetoAirEntityMovementProcessor__Fields {
  struct MovementProcessor__Fields _;
  struct Transform * LocomotionRotationTransform;
  struct Transform * FeetTransform;
  struct LayerMask GroundMask;
  bool UseObstacleHitAvoidance;
  struct LayerMask AvoidanceObstaclesMask;
  struct SphereCollider * HitBoxCollider;
  float CheckDistance;
  float MinDistanceToObstacle;
  struct SteeringForces * AvoidanceSteeringForces;
  struct Transform * SteeringForcesOrigin;
  bool m_applyNoise;
  struct CharacterPlatformMovement * m_platformMovement;
  struct ILocomotionTurningHandler * m_turningHandler;
  struct Transform * m_rotationTransform;
  struct Vector2 m_surfaceAverageNormal;
  struct RaycastHit m_hit;
  struct Rigidbody * m_rigidbody;
  struct Vector3 m_lastPosition;
  float m_CurrentObstacleAvoidanceStrength;
  float m_accelerationMultiplier;
  float m_decelerationMultiplier;
  struct EntityWeightData_EntityWeightSettings WeightSettings;
  enum EntityWeightData_EntityWeight__Enum m_entityWeight;
  int32_t m_sphereCastClientID;
};
struct SkeetoAirEntityMovementProcessor {
  struct SkeetoAirEntityMovementProcessor__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoAirEntityMovementProcessor__Fields fields;
};
enum SkeetoAirMoveBehaviour_State__Enum : int32_t {
  SkeetoAirMoveBehaviour_State__Enum_Unset = 0,
  SkeetoAirMoveBehaviour_State__Enum_Fly = 1,
  SkeetoAirMoveBehaviour_State__Enum_Flip = 2,
};
struct SkeetoAirMoveBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoAirMoveBehaviour_State__Enum value;
};
struct SkeetoAirMoveBehaviour__Fields {
  struct EntityLocomotionTask__Fields _;
  float MaxSpeed;
  float ArrivalDistance;
  struct Vector2 ChangeDirectionDistanceRange;
  struct Vector2 ChangeDirectionSpeedRange;
  struct AnimationCurve * ChangeDirectionRate;
  struct MoonTimeline * FlyTimeline;
  struct MoonTimeline * FlipTimeline;
  struct EventTriggerAnimator * FlipTrigger;
  struct FloatAnimationParameter * YDirectionParameter;
  float YDirectionParameterChangeRate;
  struct SkeetoLocomotion * m_locomotion;
  struct Vector3 m_lastSearchedTargetPosition;
  struct Vector2 m_currentDirection;
  enum SkeetoAirMoveBehaviour_State__Enum m_state;
  float m_timeInState;
  float m_timeInBehaviour;
  struct MoonTimeline * m_currentTimeline;
  float m_yDirectionParameterValue;
  bool m_pauseFlyAnimation;
  float m_previousTraversalSpeed;
  struct Vector3 _TargetPosition_k__BackingField;
  struct Vector2 _CurrentTargetDirection_k__BackingField;
};
struct SkeetoAirMoveBehaviour {
  struct SkeetoAirMoveBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoAirMoveBehaviour__Fields fields;
};
struct SkeetoLocomotionIdleBehaviour__VTable {
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
};
struct SkeetoLocomotionIdleBehaviour__StaticFields {
};
struct SkeetoLocomotionIdleBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoLocomotionIdleBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoLocomotionIdleBehaviour__VTable vtable;
};
struct SkeetoAirEntityMovementProcessor__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_AllowFreeRotation;
  VirtualInvokeData set_AllowFreeRotation;
};
struct SkeetoAirEntityMovementProcessor__StaticFields {
};
struct SkeetoAirEntityMovementProcessor__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoAirEntityMovementProcessor__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoAirEntityMovementProcessor__VTable vtable;
};
struct SkeetoAirMoveBehaviour__VTable {
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
  VirtualInvokeData get_TargetPosition;
  VirtualInvokeData set_TargetPosition;
  VirtualInvokeData get_TraversalSpeed;
  VirtualInvokeData set_TraversalSpeed;
};
struct SkeetoAirMoveBehaviour__StaticFields {
};
struct SkeetoAirMoveBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoAirMoveBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoAirMoveBehaviour__VTable vtable;
};
struct SkeetoLocomotion__VTable {
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
  VirtualInvokeData GetMovementBehaviour;
  VirtualInvokeData PropagateTargetPoint;
  VirtualInvokeData InstantFlip;
  VirtualInvokeData get_LookDirection_1;
  VirtualInvokeData get_LookDirectionXYNormalized;
  VirtualInvokeData get_IsFacingLeft_1;
};
struct SkeetoLocomotion__StaticFields {
};
struct SkeetoLocomotion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoLocomotion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoLocomotion__VTable vtable;
};

struct EntityReactionBehaviour_1_SkeetoEntity___Fields {
  struct EntityReactionBehaviour__Fields _;
};
struct EntityReactionBehaviour_1_SkeetoEntity_ {
  struct EntityReactionBehaviour_1_SkeetoEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityReactionBehaviour_1_SkeetoEntity___Fields fields;
};
struct EntityHitReactionBehaviour_1_SkeetoEntity___Fields {
  struct EntityReactionBehaviour_1_SkeetoEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_SkeetoEntity_ {
  struct EntityHitReactionBehaviour_1_SkeetoEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_SkeetoEntity___Fields fields;
};
struct SkeetoHitReaction__Fields {
  struct EntityHitReactionBehaviour_1_SkeetoEntity___Fields _;
  struct MoonTimeline * HitGround;
  struct MoonTimeline * HitAir;
  struct MoonTimeline * HitGroundAdditive;
  struct MoonTimeline * HitAirAdditive;
  struct MoonTimeline * m_currentTimeline;
  struct SkeetoLocomotion * m_locomotion;
  struct EntityDamageEvent * _DamageEvent_k__BackingField;
  float KickbackForceMultiplier;
  float AirHorziontalKnockbackMultiplier;
  float MinForceWhenJuggling;
  float AirSpinRotationAmount;
  bool CanBeInterruptedByVeryLightDamage;
  bool ResetRotationByInterruptingHit;
  struct Event_1 * OnAnyHitEvent;
  bool m_lockDamageKickback;
  bool m_useDamageTypePreventingInterruption;
  float m_timeFromKickback;
  bool m_exitEarly;
};
struct SkeetoHitReaction {
  struct SkeetoHitReaction__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoHitReaction__Fields fields;
};
struct KamikazeSkeetoHitReaction__Fields {
  struct SkeetoHitReaction__Fields _;
  struct List_1_KamikazeSkeetoDiveAttackBehaviour_ * m_diveAttacks;
};
struct KamikazeSkeetoHitReaction {
  struct KamikazeSkeetoHitReaction__Class *klass;
  struct MonitorData *monitor;
  struct KamikazeSkeetoHitReaction__Fields fields;
};
struct __declspec(align(8)) List_1_KamikazeSkeetoDiveAttackBehaviour___Fields {
  struct KamikazeSkeetoDiveAttackBehaviour__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_KamikazeSkeetoDiveAttackBehaviour_ {
  struct List_1_KamikazeSkeetoDiveAttackBehaviour___Class *klass;
  struct MonitorData *monitor;
  struct List_1_KamikazeSkeetoDiveAttackBehaviour___Fields fields;
};
struct KamikazeSkeetoDiveAttackBehaviour__Array {
  struct KamikazeSkeetoDiveAttackBehaviour__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KamikazeSkeetoDiveAttackBehaviour * vector[32];
};
struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour_ {
  struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___Class *klass;
  struct MonitorData *monitor;
};
struct EntityReactionBehaviour_1_SkeetoEntity___VTable {
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
struct EntityReactionBehaviour_1_SkeetoEntity___StaticFields {
};
struct EntityReactionBehaviour_1_SkeetoEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_SkeetoEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_SkeetoEntity___VTable vtable;
};
struct EntityHitReactionBehaviour_1_SkeetoEntity___VTable {
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
struct EntityHitReactionBehaviour_1_SkeetoEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_SkeetoEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_SkeetoEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_SkeetoEntity___VTable vtable;
};
struct SkeetoHitReaction__VTable {
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
struct SkeetoHitReaction__StaticFields {
};
struct SkeetoHitReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoHitReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoHitReaction__VTable vtable;
};
struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields {
};
struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_KamikazeSkeetoDiveAttackBehaviour___VTable vtable;
};
struct List_1_KamikazeSkeetoDiveAttackBehaviour___VTable {
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
struct List_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields {
  struct KamikazeSkeetoDiveAttackBehaviour__Array * _emptyArray;
};
struct List_1_KamikazeSkeetoDiveAttackBehaviour___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_KamikazeSkeetoDiveAttackBehaviour___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_KamikazeSkeetoDiveAttackBehaviour___VTable vtable;
};
struct KamikazeSkeetoHitReaction__VTable {
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
struct KamikazeSkeetoHitReaction__StaticFields {
};
struct KamikazeSkeetoHitReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KamikazeSkeetoHitReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KamikazeSkeetoHitReaction__VTable vtable;
};

struct ScaredySkeetoProjectileSettings__Fields {
  struct MonoBehaviour__Fields _;
  float ProjectileSpeed;
  float TurningSpeed;
  float ProjectileGravity;
  float ProjectileDamage;
  enum DamageWeight__Enum ProjectileDamageWeight;
  enum DamageLayerMask__Enum DamageLayerMask;
};
struct ScaredySkeetoProjectileSettings {
  struct ScaredySkeetoProjectileSettings__Class *klass;
  struct MonitorData *monitor;
  struct ScaredySkeetoProjectileSettings__Fields fields;
};
struct ScaredySkeetoProjectileSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ScaredySkeetoProjectileSettings__StaticFields {
};
struct ScaredySkeetoProjectileSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ScaredySkeetoProjectileSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ScaredySkeetoProjectileSettings__VTable vtable;
};

struct SkeetoKeepPositionBehaviour__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  struct MoonFloat * SlowDownRate;
  struct MoonFloat * Duration;
  struct SkeetoLocomotion * m_skeetoLocomotion;
  float m_slowDownRate;
  float m_duration;
  float m_timeLeft;
};
struct SkeetoKeepPositionBehaviour {
  struct SkeetoKeepPositionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoKeepPositionBehaviour__Fields fields;
};
struct SkeetoKeepPositionBehaviour__VTable {
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
struct SkeetoKeepPositionBehaviour__StaticFields {
};
struct SkeetoKeepPositionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SkeetoKeepPositionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SkeetoKeepPositionBehaviour__VTable vtable;
};

enum SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum : int32_t {
  SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum_Unset = 0,
  SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum_JobScheduled = 1,
  SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum_PerformingMovement = 2,
};
struct SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum value;
};
struct SkeetoMoveToSemiRandomPositionBehaviour__Fields {
  struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
  int32_t LatitudePointsCount;
  int32_t LongtitdePointsCount;
  bool OverrideMaxSpeed;
  float MaxSpeed;
  float AccelerationMultiplier;
  float MinDistanceToTarget;
  float MaxDistanceToTarget;
  float MinLatitudeT;
  float MaxLatitudeT;
  bool UseSelfAsAimTarget;
  bool AllowMoveBelowTarget;
  bool PrioritizeCurrentSide;
  bool LimitToAllowedArea;
  bool LimitToPatrolArea;
  bool FollowTarget;
  bool AdditionalDistanceCheck;
  float DistanceForAdditionalCheck;
  bool DrawGizmos;
  struct Color GizmoPointsColor;
  bool m_hasValidFinalPosition;
  struct Vector3 m_positionToMoveTo;
  struct Vector3 m_initialEntityPosition;
  struct Vector3 m_offsetToTarget;
  enum SkeetoMoveToSemiRandomPositionBehaviour_Phase__Enum m_currentPhase;
  struct BatchedRaycast * m_batchedRaycasts;
  int32_t m_randomIndexOffset;
  struct Vector3__Array_1 * m_positionCache;
  struct Vector3__Array_1 * m_normalizedPositionCache;
  struct Single__Array_1 * m_positionDistanceCache;
  struct RaycastHit__Array * m_hits;
  struct RaycastCommand__Array * m_commands;
};
struct SkeetoMoveToSemiRandomPositionBehaviour {
  struct SkeetoMoveToSemiRandomPositionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SkeetoMoveToSemiRandomPositionBehaviour__Fields fields;
};
struct Single__Array_1 {
  struct Single__Array_1__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  float vector[32];
};
struct SkeetoMoveToSemiRandomPositionBehaviour__VTable {
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
};}