namespace app {
struct FlutteringTakeOffBehaviour_States__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FlutteringTakeOffBehaviour_States__StaticFields {
};
struct FlutteringTakeOffBehaviour_States__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlutteringTakeOffBehaviour_States__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlutteringTakeOffBehaviour_States__VTable vtable;
};
struct FlutteringTakeOffBehaviour__VTable {
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
struct FlutteringTakeOffBehaviour__StaticFields {
};
struct FlutteringTakeOffBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlutteringTakeOffBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlutteringTakeOffBehaviour__VTable vtable;
};

struct FlutteringTakeOffBehaviour_TurnStartState__Fields {
  struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
  struct AirEntityMovementProcessor * m_airMovement;
  struct Quaternion m_initialRotation;
};
struct FlutteringTakeOffBehaviour_TurnStartState {
  struct FlutteringTakeOffBehaviour_TurnStartState__Class *klass;
  struct MonitorData *monitor;
  struct FlutteringTakeOffBehaviour_TurnStartState__Fields fields;
};
struct FlutteringTakeOffBehaviour_TurnStartState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct FlutteringTakeOffBehaviour_TurnStartState__StaticFields {
};
struct FlutteringTakeOffBehaviour_TurnStartState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlutteringTakeOffBehaviour_TurnStartState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlutteringTakeOffBehaviour_TurnStartState__VTable vtable;
};

struct FlutteringTakeOffBehaviour_StartState__Fields {
  struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
  struct Vector3 m_desiredPoint;
  struct AirEntityMovementProcessor * m_airMovement;
  struct Quaternion m_initialRotation;
};
struct FlutteringTakeOffBehaviour_StartState {
  struct FlutteringTakeOffBehaviour_StartState__Class *klass;
  struct MonitorData *monitor;
  struct FlutteringTakeOffBehaviour_StartState__Fields fields;
};
struct FlutteringTakeOffBehaviour_StartState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct FlutteringTakeOffBehaviour_StartState__StaticFields {
};
struct FlutteringTakeOffBehaviour_StartState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlutteringTakeOffBehaviour_StartState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlutteringTakeOffBehaviour_StartState__VTable vtable;
};

struct FlutteringTakeOffBehaviour_LoopState__Fields {
  struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
  struct Vector3 m_desiredPoint;
  struct CharacterPlatformMovement * m_platformMovement;
  struct AirEntityMovementProcessor * m_airMovement;
};
struct FlutteringTakeOffBehaviour_LoopState {
  struct FlutteringTakeOffBehaviour_LoopState__Class *klass;
  struct MonitorData *monitor;
  struct FlutteringTakeOffBehaviour_LoopState__Fields fields;
};
struct FlutteringTakeOffBehaviour_LoopState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct FlutteringTakeOffBehaviour_LoopState__StaticFields {
};
struct FlutteringTakeOffBehaviour_LoopState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlutteringTakeOffBehaviour_LoopState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlutteringTakeOffBehaviour_LoopState__VTable vtable;
};

struct FlutteringTakeOffBehaviour_EndState__Fields {
  struct FlutteringTakeOffBehaviour_FlutterTakeOffState__Fields _;
};
struct FlutteringTakeOffBehaviour_EndState {
  struct FlutteringTakeOffBehaviour_EndState__Class *klass;
  struct MonitorData *monitor;
  struct FlutteringTakeOffBehaviour_EndState__Fields fields;
};
struct FlutteringTakeOffBehaviour_EndState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
};
struct FlutteringTakeOffBehaviour_EndState__StaticFields {
};
struct FlutteringTakeOffBehaviour_EndState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlutteringTakeOffBehaviour_EndState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlutteringTakeOffBehaviour_EndState__VTable vtable;
};

struct FlutteringTakeOffBehaviour_c {
  struct FlutteringTakeOffBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct FlutteringTakeOffBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FlutteringTakeOffBehaviour_c__StaticFields {
  struct FlutteringTakeOffBehaviour_c * __9;
  struct Action * __9__27_0;
};
struct FlutteringTakeOffBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlutteringTakeOffBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlutteringTakeOffBehaviour_c__VTable vtable;
};

enum HornBugStunBehaviour_IncapacitationPhase__Enum : int32_t {
  HornBugStunBehaviour_IncapacitationPhase__Enum_StandBy = 0,
  HornBugStunBehaviour_IncapacitationPhase__Enum_Loop = 1,
  HornBugStunBehaviour_IncapacitationPhase__Enum_Recovery = 2,
  HornBugStunBehaviour_IncapacitationPhase__Enum_TurnRecovery = 3,
};
struct HornBugStunBehaviour_IncapacitationPhase__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HornBugStunBehaviour_IncapacitationPhase__Enum value;
};
struct HornBugStunBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
  struct MoonTimeline * LoopTimeline;
  struct MoonTimeline * RecoveryTimeline;
  struct MoonTimeline * TurnRecoveryTimeline;
  struct EventTriggerAnimator * TurnRecoveryEvent;
  float StunDuration;
  float m_timer;
  enum HornBugStunBehaviour_IncapacitationPhase__Enum m_phase;
  struct GroundEntityLocomotion * m_groundLocomotion;
  struct BlockDamageInterruptionHandler * m_blockingHandlerLoop;
  struct BlockDamageInterruptionHandler * m_blockingHandlerRecovery;
  struct BlockDamageInterruptionHandler * m_blockingHandlerTurnRecovery;
};
struct HornBugStunBehaviour {
  struct HornBugStunBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornBugStunBehaviour__Fields fields;
};
struct HornBugStunBehaviour__VTable {
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
};
struct HornBugStunBehaviour__StaticFields {
};
struct HornBugStunBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugStunBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugStunBehaviour__VTable vtable;
};

struct RammingBehaviour_TurnChargeSlamState__Fields {
  struct RammingBehaviour_RamState__Fields _;
};
struct RammingBehaviour_TurnChargeSlamState {
  struct RammingBehaviour_TurnChargeSlamState__Class *klass;
  struct MonitorData *monitor;
  struct RammingBehaviour_TurnChargeSlamState__Fields fields;
};
struct RammingBehaviour_TurnChargeSlamState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData get_StateName;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData GetEffectsPrefab;
};
struct RammingBehaviour_TurnChargeSlamState__StaticFields {
};
struct RammingBehaviour_TurnChargeSlamState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingBehaviour_TurnChargeSlamState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingBehaviour_TurnChargeSlamState__VTable vtable;
};

struct RammingBehaviour_ChargeSlamState__Fields {
  struct RammingBehaviour_RamState__Fields _;
};
struct RammingBehaviour_ChargeSlamState {
  struct RammingBehaviour_ChargeSlamState__Class *klass;
  struct MonitorData *monitor;
  struct RammingBehaviour_ChargeSlamState__Fields fields;
};
struct RammingBehaviour_ChargeSlamState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData get_StateName;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData GetEffectsPrefab;
};
struct RammingBehaviour_ChargeSlamState__StaticFields {
};
struct RammingBehaviour_ChargeSlamState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingBehaviour_ChargeSlamState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingBehaviour_ChargeSlamState__VTable vtable;
};

struct RammingBehaviour_ChaseState__Fields {
  struct RammingBehaviour_RamState__Fields _;
  struct CharacterPlatformMovement * m_platformMovement;
  float m_defaultDamageDealerDamage;
  struct GroundEntityMovementProcessor * m_groundMoveProcessor;
  struct Vector3 m_brakingPos;
};
struct RammingBehaviour_ChaseState {
  struct RammingBehaviour_ChaseState__Class *klass;
  struct MonitorData *monitor;
  struct RammingBehaviour_ChaseState__Fields fields;
};
struct RammingBehaviour_ChaseState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData get_StateName;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData GetEffectsPrefab;
};
struct RammingBehaviour_ChaseState__StaticFields {
};
struct RammingBehaviour_ChaseState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingBehaviour_ChaseState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingBehaviour_ChaseState__VTable vtable;
};

struct RammingBehaviour_ExhaustState__Fields {
  struct RammingBehaviour_RamState__Fields _;
  struct CharacterPlatformMovement * m_platformMovement;
};
struct RammingBehaviour_ExhaustState {
  struct RammingBehaviour_ExhaustState__Class *klass;
  struct MonitorData *monitor;
  struct RammingBehaviour_ExhaustState__Fields fields;
};
struct RammingBehaviour_ExhaustState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData get_StateName;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData GetEffectsPrefab;
};
struct RammingBehaviour_ExhaustState__StaticFields {
};
struct RammingBehaviour_ExhaustState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingBehaviour_ExhaustState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingBehaviour_ExhaustState__VTable vtable;
};

struct RammingBehaviour_KnockbackState__Fields {
  struct RammingBehaviour_RamState__Fields _;
  struct CharacterPlatformMovement * platformMovement;
};
struct RammingBehaviour_KnockbackState {
  struct RammingBehaviour_KnockbackState__Class *klass;
  struct MonitorData *monitor;
  struct RammingBehaviour_KnockbackState__Fields fields;
};
struct RammingBehaviour_KnockbackState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData get_StateName;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData GetEffectsPrefab;
};
struct RammingBehaviour_KnockbackState__StaticFields {
};
struct RammingBehaviour_KnockbackState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingBehaviour_KnockbackState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingBehaviour_KnockbackState__VTable vtable;
};

struct RammingBehaviour_c {
  struct RammingBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct RammingBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RammingBehaviour_c__StaticFields {
  struct RammingBehaviour_c * __9;
  struct Action * __9__54_0;
};
struct RammingBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RammingBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RammingBehaviour_c__VTable vtable;
};

struct CrabBackpedalChaseBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
  struct MoonFloat * BackpedalOffsetDistance;
  struct MoonVector3 * TargetPosition;
  struct MoonBool * UsePredictedOriPosition;
  struct MoonBool * ClampPredictedPosition;
  struct MoonFloat * TraversalSpeed;
  struct MoonFloat * NearTargetTraversalSpeed;
  struct MoonBool * LookAtTargetAfterArrive;
  struct PlayerInsideZoneChecker * ArriveAtTargetZone;
  float TimeInsideZoneToSucceed;
  bool FailIfItsNotSafeToContinueMovement;
  struct IEntityLocomotion * m_locomotion;
  struct GroundEntityLocomotion * m_groundLocomotion;
  struct ILocomotionTurningHandler * m_turningHandler;
  float m_timer;
  struct Rect m_nearTargetZone;
  float _ChasingTime_k__BackingField;
};
struct CrabBackpedalChaseBehaviour {
  struct CrabBackpedalChaseBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct CrabBackpedalChaseBehaviour__Fields fields;
};
struct CrabBackpedalChaseBehaviour__VTable {
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
struct CrabBackpedalChaseBehaviour__StaticFields {
};
struct CrabBackpedalChaseBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabBackpedalChaseBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabBackpedalChaseBehaviour__VTable vtable;
};

enum CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum : int32_t {
  CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum_FacingDirection = 0,
  CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum_TargetDirection = 1,
};
struct CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum value;
};
struct CrabClawAttackBehaviourNew__Fields {
  struct MeleeAttackBehaviourNew__Fields _;
  float MaximumAttackRange;
  float MoveDistanceX;
  struct EventTriggerAnimator * MoveStartEvent;
  struct EventTriggerAnimator * FaceTargetFlipEvent;
  struct AnimationCurve * MovementCurve;
  enum CrabClawAttackBehaviourNew_EAttackMoveDirection__Enum AttackMoveDirection;
  bool LerpToAttackMoveDirection;
  float LerpToAttackMoveDirectionSpeed;
  bool ShouldReflectArrows;
  struct EventTriggerAnimator * ReflectArrowsTrigger;
  float m_moveTimer;
  bool m_shouldReflectBeforeStart;
  struct CrabEntity * m_crabEntity;
  int32_t m_standingOnLedgeReqIds;
  int32_t m_backToLedgeReqIds;
};
struct CrabClawAttackBehaviourNew {
  struct CrabClawAttackBehaviourNew__Class *klass;
  struct MonitorData *monitor;
  struct CrabClawAttackBehaviourNew__Fields fields;
};
struct CrabClawAttackBehaviourNew__VTable {
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
  VirtualInvokeData CacheCancellableAnimators;
  VirtualInvokeData ShouldCancel;
  VirtualInvokeData StartAttackTimeline;
  VirtualInvokeData OnTimelineSequenceStopEvent;
  VirtualInvokeData OnWeaponStickCollision;
  VirtualInvokeData ProvideDamageEffect;
  VirtualInvokeData RootMotionModifier;
  VirtualInvokeData GetMoveDelta;
  VirtualInvokeData ShouldFinishMovement;
};
struct CrabClawAttackBehaviourNew__StaticFields {
};
struct CrabClawAttackBehaviourNew__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabClawAttackBehaviourNew__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabClawAttackBehaviourNew__VTable vtable;
};

struct CrabClawThreeHitAttackBehaviour__Fields {
  struct CrabClawAttackBehaviourNew__Fields _;
  struct EventTriggerAnimator * FirstAttackTrigger;
  struct EventTriggerAnimator * SecondAttackTrigger;
  struct EventTriggerAnimator * ThirdAttackTrigger;
  struct PrefabSpawner * FirstEffectSpawner;
  struct PrefabSpawner * SecondEffectSpawner;
  struct PrefabSpawner * ThirdEffectSpawner;
};
struct CrabClawThreeHitAttackBehaviour {
  struct CrabClawThreeHitAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct CrabClawThreeHitAttackBehaviour__Fields fields;
};
struct CrabClawThreeHitAttackBehaviour__VTable {
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
  VirtualInvokeData CacheCancellableAnimators;
  VirtualInvokeData ShouldCancel;
  VirtualInvokeData StartAttackTimeline;
  VirtualInvokeData OnTimelineSequenceStopEvent;
  VirtualInvokeData OnWeaponStickCollision;
  VirtualInvokeData ProvideDamageEffect;
  VirtualInvokeData RootMotionModifier;
  VirtualInvokeData GetMoveDelta;
  VirtualInvokeData ShouldFinishMovement;
};
struct CrabClawThreeHitAttackBehaviour__StaticFields {
};
struct CrabClawThreeHitAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabClawThreeHitAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabClawThreeHitAttackBehaviour__VTable vtable;
};

struct CrabLungeAttackBehaviour__Fields {
  struct CrabClawAttackBehaviourNew__Fields _;
  struct EventTriggerAnimator * AttackTrigger;
  struct PrefabSpawner * LungeEffectSpawner;
};
struct CrabLungeAttackBehaviour {
  struct CrabLungeAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct CrabLungeAttackBehaviour__Fields fields;
};
struct CrabLungeAttackBehaviour__VTable {
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
  VirtualInvokeData CacheCancellableAnimators;
  VirtualInvokeData ShouldCancel;
  VirtualInvokeData StartAttackTimeline;
  VirtualInvokeData OnTimelineSequenceStopEvent;
  VirtualInvokeData OnWeaponStickCollision;
  VirtualInvokeData ProvideDamageEffect;
  VirtualInvokeData RootMotionModifier;
  VirtualInvokeData GetMoveDelta;
  VirtualInvokeData ShouldFinishMovement;
};
struct CrabLungeAttackBehaviour__StaticFields {
};
struct CrabLungeAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabLungeAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabLungeAttackBehaviour__VTable vtable;
};

enum CrabSpinLoopAttackBehaviour_State__Enum : int32_t {
  CrabSpinLoopAttackBehaviour_State__Enum_None = 0,
  CrabSpinLoopAttackBehaviour_State__Enum_Start = 1,
  CrabSpinLoopAttackBehaviour_State__Enum_Loop = 2,
  CrabSpinLoopAttackBehaviour_State__Enum_End = 3,
  CrabSpinLoopAttackBehaviour_State__Enum_Dizzy = 4,
};
struct CrabSpinLoopAttackBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CrabSpinLoopAttackBehaviour_State__Enum value;
};
struct CrabSpinLoopAttackBehaviour__Fields {
  struct CrabClawAttackBehaviourNew__Fields _;
  struct MoonTimeline * StartTimeline;
  struct MoonTimeline * LoopTimeline;
  struct MoonTimeline * EndTimeline;
  struct MoonTimeline * DizzyTimeline;
  float MoveSpeed;
  float SpinTime;
  enum CrabSpinLoopAttackBehaviour_State__Enum m_state;
  float m_stateTime;
  bool m_hasHitTargetDuringLoop;
  float m_timeInBehaviour;
};
struct CrabSpinLoopAttackBehaviour {
  struct CrabSpinLoopAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct CrabSpinLoopAttackBehaviour__Fields fields;
};
struct CrabSpinLoopAttackBehaviour__VTable {
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
  VirtualInvokeData CacheCancellableAnimators;
  VirtualInvokeData ShouldCancel;
  VirtualInvokeData StartAttackTimeline;
  VirtualInvokeData OnTimelineSequenceStopEvent;
  VirtualInvokeData OnWeaponStickCollision;
  VirtualInvokeData ProvideDamageEffect;
  VirtualInvokeData RootMotionModifier;
  VirtualInvokeData GetMoveDelta;
  VirtualInvokeData ShouldFinishMovement;
};
struct CrabSpinLoopAttackBehaviour__StaticFields {
};
struct CrabSpinLoopAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrabSpinLoopAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrabSpinLoopAttackBehaviour__VTable vtable;
};

struct GasballLocomotion__Fields {
  struct AirEntityLocomotion__Fields _;
  struct GasballAirMoveTimelineBehaviour * m_gasballMovementBehaviour;
};
struct GasballLocomotion {
  struct GasballLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct GasballLocomotion__Fields fields;
};
struct GasballLocomotion__VTable {
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
struct GasballLocomotion__StaticFields {
};
struct GasballLocomotion__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GasballLocomotion__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GasballLocomotion__VTable vtable;
};

struct InstantStopBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
};}