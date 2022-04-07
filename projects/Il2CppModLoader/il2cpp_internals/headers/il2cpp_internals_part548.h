namespace app {
struct EntityHitReactionBehaviour_1_SandWormEntity___Fields {
  struct EntityReactionBehaviour_1_SandWormEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_SandWormEntity_ {
  struct EntityHitReactionBehaviour_1_SandWormEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_SandWormEntity___Fields fields;
};
struct SandwormHitReaction__Fields {
  struct EntityHitReactionBehaviour_1_SandWormEntity___Fields _;
  struct MoonTimeline * HitTImeline;
  struct Event_1 * OnAnyHitEvent;
};
struct SandwormHitReaction {
  struct SandwormHitReaction__Class *klass;
  struct MonitorData *monitor;
  struct SandwormHitReaction__Fields fields;
};
struct EntityReactionBehaviour_1_SandWormEntity___VTable {
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
struct EntityReactionBehaviour_1_SandWormEntity___StaticFields {
};
struct EntityReactionBehaviour_1_SandWormEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_SandWormEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_SandWormEntity___VTable vtable;
};
struct EntityHitReactionBehaviour_1_SandWormEntity___VTable {
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
struct EntityHitReactionBehaviour_1_SandWormEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_SandWormEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_SandWormEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_SandWormEntity___VTable vtable;
};
struct SandwormHitReaction__VTable {
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
struct SandwormHitReaction__StaticFields {
};
struct SandwormHitReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandwormHitReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandwormHitReaction__VTable vtable;
};

enum SandWormJumpAttackBehaviour_State__Enum : int32_t {
  SandWormJumpAttackBehaviour_State__Enum_Unset = 0,
  SandWormJumpAttackBehaviour_State__Enum_PreJump = 1,
  SandWormJumpAttackBehaviour_State__Enum_TowardsTarget = 2,
  SandWormJumpAttackBehaviour_State__Enum_TowardsLandingPoint = 3,
};
struct SandWormJumpAttackBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SandWormJumpAttackBehaviour_State__Enum value;
};
struct SandWormJumpAttackBehaviour__Fields {
  struct EntityBehaviourNode_1_SandWormEntity___Fields _;
  struct Single__Array * LandAngles;
  struct MoonVector3 * EdgePosition;
  struct MoonVector3 * EdgePositionNormal;
  struct MoonVector3 * AttackTargetPosition;
  struct MoonFloat * LandingClearanceRadius;
  struct MoonFloat * MaxAttackAngle;
  struct MoonFloat * OptimalJumpHeight;
  float HeadSize;
  struct SandWormSandDigLocomotionBehaviour_SpeedEntry PreJumpSpeed;
  struct SandWormSandDigLocomotionBehaviour_SpeedEntry TowardsPeekPointSpeed;
  struct SandWormSandDigLocomotionBehaviour_SpeedEntry TowardsLandingPointSpeed;
  struct Event_1 * DashPrepareSound;
  struct RTPC * TurnAngleRtpc;
  struct Event_1 * TurnSound;
  struct SandWormLocomotion * m_wormLocomotion;
  struct Vector2 m_predictedJumpPeakPosition;
  struct Vector2 m_attackTargetPosition;
  struct Vector2 m_landMoveTarget;
  struct Vector2 m_edgePosition;
  struct Vector2 m_directionToPeakPosition;
  struct Vector2 m_directionToLandPosition;
  float m_turnAngle;
  float m_cachedHeadRotationSpeed;
  enum SandWormJumpAttackBehaviour_State__Enum m_state;
  struct RaycastHit__Array * m_raycastHits;
  struct LayerMask LineOfSightLayerMask;
};
struct SandWormJumpAttackBehaviour {
  struct SandWormJumpAttackBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormJumpAttackBehaviour__Fields fields;
};
struct SandWormJumpAttackBehaviour__VTable {
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
struct SandWormJumpAttackBehaviour__StaticFields {
};
struct SandWormJumpAttackBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormJumpAttackBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormJumpAttackBehaviour__VTable vtable;
};

struct __declspec(align(8)) SandWormJumpAttackBehaviour_c_DisplayClass40_0__Fields {
  float maxPredictedJumpHeight;
  struct SandWormJumpAttackBehaviour * __4__this;
  float landingClearanceRadius;
};
struct SandWormJumpAttackBehaviour_c_DisplayClass40_0 {
  struct SandWormJumpAttackBehaviour_c_DisplayClass40_0__Class *klass;
  struct MonitorData *monitor;
  struct SandWormJumpAttackBehaviour_c_DisplayClass40_0__Fields fields;
};
struct SandWormJumpAttackBehaviour_c_DisplayClass40_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SandWormJumpAttackBehaviour_c_DisplayClass40_0__StaticFields {
};
struct SandWormJumpAttackBehaviour_c_DisplayClass40_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormJumpAttackBehaviour_c_DisplayClass40_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormJumpAttackBehaviour_c_DisplayClass40_0__VTable vtable;
};

struct SandWormPatrolBehaviour__Fields {
  struct EntityBehaviourNode_1_SandWormEntity___Fields _;
  enum NavigationType__Enum PatrolZone;
  struct MoonVector3 * PatrolOrigin;
  bool LimitToAllowedZone;
  float MinDistanceBelowWater;
  float PatrolPointRange;
  float RetreatDistance;
  float m_arriveDistance;
  struct SandWormLocomotion * m_wormLocomotion;
  struct Vector3 m_targetPosition;
  float m_avoidancePowerAccumulator;
  bool _IsWaterWorm_k__BackingField;
};
struct SandWormPatrolBehaviour {
  struct SandWormPatrolBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormPatrolBehaviour__Fields fields;
};
struct SandWormPatrolBehaviour__VTable {
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
struct SandWormPatrolBehaviour__StaticFields {
};
struct SandWormPatrolBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormPatrolBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormPatrolBehaviour__VTable vtable;
};

struct SandWormReturnToSandBehaviour__Fields {
  struct EntityBehaviourNode_1_SandWormEntity___Fields _;
  float MaxCheckDistance;
  float MaxReturnTime;
  float MaxStuckTime;
  struct SandWormLocomotion * m_wormLocomotion;
  struct Vector2 m_targetPosition;
  float m_outSideSandTime;
  float m_zeroSpeedTime;
  float m_noSafePathTime;
  struct Vector3 m_lastPosition;
  int32_t m_requestID;
};
struct SandWormReturnToSandBehaviour {
  struct SandWormReturnToSandBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormReturnToSandBehaviour__Fields fields;
};
struct SandWormReturnToSandBehaviour__VTable {
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
struct SandWormReturnToSandBehaviour__StaticFields {
};
struct SandWormReturnToSandBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormReturnToSandBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormReturnToSandBehaviour__VTable vtable;
};

struct SandWormReturnToWaterBehaviour__Fields {
  struct EntityBehaviourNode_1_SandWormEntity___Fields _;
  float MaxCheckDistance;
  float MaxReturnTime;
  struct SandWormLocomotion * m_wormLocomotion;
  struct Vector2 m_targetPosition;
  float m_outSideSandTime;
  struct Transform * m_headTop;
  struct Transform * m_head;
  struct Transform * m_tail;
  int32_t m_requestID;
  float MaxStuckTime;
  float m_noSafePathTime;
};
struct SandWormReturnToWaterBehaviour {
  struct SandWormReturnToWaterBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormReturnToWaterBehaviour__Fields fields;
};
struct SandWormReturnToWaterBehaviour__VTable {
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
struct SandWormReturnToWaterBehaviour__StaticFields {
};
struct SandWormReturnToWaterBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormReturnToWaterBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormReturnToWaterBehaviour__VTable vtable;
};

struct SandWormSetSpeedSettingsBehaviour__Fields {
  struct EntityBehaviourNode_1_SandWormEntity___Fields _;
  enum SandWormLocomotion_SpeedSetting__Enum SpeedSetting;
  struct SandWormLocomotion * m_wormLocomotion;
};
struct SandWormSetSpeedSettingsBehaviour {
  struct SandWormSetSpeedSettingsBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormSetSpeedSettingsBehaviour__Fields fields;
};
struct SandWormSetSpeedSettingsBehaviour__VTable {
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
struct SandWormSetSpeedSettingsBehaviour__StaticFields {
};
struct SandWormSetSpeedSettingsBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormSetSpeedSettingsBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormSetSpeedSettingsBehaviour__VTable vtable;
};

struct SandWormUnclogBehaviour__Fields {
  struct EntityBehaviourNode_1_SandWormEntity___Fields _;
  float ArriveDistance;
  float RetreatDistance;
  float ClearanceRadius;
  float AngleStep;
  struct SandWormSandDigLocomotionBehaviour_SpeedEntry SpeedSettings;
  enum SandWormLocomotion_SpeedSetting__Enum SpeedToSetOnExit;
  struct SandWormLocomotion * m_wormLocomotion;
  struct Vector2 m_targetPosition;
  float m_avoidancePowerAccumulator;
  struct Vector3 m_unclogDirection;
  bool _IsWaterWorm_k__BackingField;
};
struct SandWormUnclogBehaviour {
  struct SandWormUnclogBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormUnclogBehaviour__Fields fields;
};
struct SandWormUnclogBehaviour__VTable {
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
struct SandWormUnclogBehaviour__StaticFields {
};
struct SandWormUnclogBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormUnclogBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormUnclogBehaviour__VTable vtable;
};

struct CageCircleTest__Fields {
  struct MonoBehaviour__Fields _;
  struct CageStructureTool * CageStructureTool;
  float Radius;
};
struct CageCircleTest {
  struct CageCircleTest__Class *klass;
  struct MonitorData *monitor;
  struct CageCircleTest__Fields fields;
};
struct CageCircleTest__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CageCircleTest__StaticFields {
};
struct CageCircleTest__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CageCircleTest__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CageCircleTest__VTable vtable;
};

struct SandWormDeathBehaviour__Fields {
  struct EntityReactionBehaviour_1_SandWormEntity___Fields _;
  struct MoonTimeline * DeathSequence;
  float DamageForceMultiplier;
  float MaxInWaterVelocity;
  struct SandwormHitReaction * m_hitReactionBehaviour;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
};
struct SandWormDeathBehaviour {
  struct SandWormDeathBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormDeathBehaviour__Fields fields;
};
struct SandWormDeathBehaviour__VTable {
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
struct SandWormDeathBehaviour__StaticFields {
};
struct SandWormDeathBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormDeathBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormDeathBehaviour__VTable vtable;
};

struct __declspec(align(8)) SandWormEntity_EnableVerletTentacles_d_185__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct SandWormEntity * __4__this;
};
struct SandWormEntity_EnableVerletTentacles_d_185 {
  struct SandWormEntity_EnableVerletTentacles_d_185__Class *klass;
  struct MonitorData *monitor;
  struct SandWormEntity_EnableVerletTentacles_d_185__Fields fields;
};
struct SandWormEntity_EnableVerletTentacles_d_185__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct SandWormEntity_EnableVerletTentacles_d_185__StaticFields {
};
struct SandWormEntity_EnableVerletTentacles_d_185__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormEntity_EnableVerletTentacles_d_185__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormEntity_EnableVerletTentacles_d_185__VTable vtable;
};

struct SandWormEntity_c {
  struct SandWormEntity_c__Class *klass;
  struct MonitorData *monitor;
};
struct SandWormEntity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SandWormEntity_c__StaticFields {
  struct SandWormEntity_c * __9;
  struct Func_1_Boolean_ * __9__198_0;
};
struct SandWormEntity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormEntity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormEntity_c__VTable vtable;
};

struct SandWormEntityEditorUpdater__Fields {
  struct MonoBehaviour__Fields _;
};
struct SandWormEntityEditorUpdater {
  struct SandWormEntityEditorUpdater__Class *klass;
  struct MonitorData *monitor;
  struct SandWormEntityEditorUpdater__Fields fields;
};
struct SandWormEntityEditorUpdater__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SandWormEntityEditorUpdater__StaticFields {
};
struct SandWormEntityEditorUpdater__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormEntityEditorUpdater__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormEntityEditorUpdater__VTable vtable;
};

struct SandWormFallReactionBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct SandWormEntity * m_wormEntity;
  struct SandWormLocomotion * m_wormLocomotion;
  float DeathOnGroundTime;
  float m_onGroundTimer;
  bool m_onGround;
  float TimeBeforeOffGround;
  float m_timeBeforeOffGround;
};
struct SandWormFallReactionBehaviour {
  struct SandWormFallReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormFallReactionBehaviour__Fields fields;
};
struct SandWormFallReactionBehaviour__VTable {
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
struct SandWormFallReactionBehaviour__StaticFields {
};
struct SandWormFallReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormFallReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormFallReactionBehaviour__VTable vtable;
};

struct SandWormSegmentTester__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Target;
  float MoveSpeed;
  float SmoothDamp;
  struct Vector3 m_velocity;
};
struct SandWormSegmentTester {
  struct SandWormSegmentTester__Class *klass;
  struct MonitorData *monitor;
  struct SandWormSegmentTester__Fields fields;
};
struct SandWormSegmentTester__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SandWormSegmentTester__StaticFields {
};
struct SandWormSegmentTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormSegmentTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormSegmentTester__VTable vtable;
};

struct SandWormThrownBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  float _Duration_k__BackingField;
  struct SandWormLocomotion * m_locomotion;
  bool m_movingToEdge;
  float m_remainingTime;
};
struct SandWormThrownBehaviour {
  struct SandWormThrownBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SandWormThrownBehaviour__Fields fields;
};
struct SandWormThrownBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ExecutingObject;
  VirtualInvokeData set_ExecutingObject;
  VirtualInvokeData get_Entity;
  VirtualInvokeData get_Status;
  VirtualInvokeData get_ShouldPauseTree;
  VirtualInvokeData get_ShouldPauseLocomotion;
  VirtualInvokeData get_Utility;
  VirtualInvokeData get_DebugData;
  VirtualInvokeData get_OnEndBehaviourEvent;
  VirtualInvokeData set_OnEndBehaviourEvent;
  VirtualInvokeData Execute;
  VirtualInvokeData Interrupt;
  VirtualInvokeData UpdateBehaviour;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_Utility_1;
  VirtualInvokeData Interrupt_1;
  VirtualInvokeData GetShouldPauseTree;
  VirtualInvokeData GetShouldPauseLocomotion;
  VirtualInvokeData OnInitialize;
  VirtualInvokeData OnExecute;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData OnEndBehaviour;
};
struct SandWormThrownBehaviour__StaticFields {
};
struct SandWormThrownBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormThrownBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormThrownBehaviour__VTable vtable;
};

struct SandWormAttackSelector {
  struct SandWormAttackSelector__Class *klass;
  struct MonitorData *monitor;
};
struct SandWormAttackSelector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SandWormAttackSelector__StaticFields {
};
struct SandWormAttackSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormAttackSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormAttackSelector__VTable vtable;
};

struct TargetTransformPostprocess__Fields {
  struct AnimationPostprocess__Fields _;
  struct TargetTransformPostprocess_TransformMapping__Array * Mappings;
  int32_t m_order;
};
struct TargetTransformPostprocess {
  struct TargetTransformPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct TargetTransformPostprocess__Fields fields;
};
struct __declspec(align(8)) TargetTransformPostprocess_TransformMapping__Fields {
  struct Transform * Transform;
  struct Transform * TargetTransform;
};
struct TargetTransformPostprocess_TransformMapping {
  struct TargetTransformPostprocess_TransformMapping__Class *klass;
  struct MonitorData *monitor;
  struct TargetTransformPostprocess_TransformMapping__Fields fields;
};
struct TargetTransformPostprocess_TransformMapping__Array {
  struct TargetTransformPostprocess_TransformMapping__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TargetTransformPostprocess_TransformMapping * vector[32];
};
struct TargetTransformPostprocess_TransformMapping__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TargetTransformPostprocess_TransformMapping__StaticFields {
};
struct TargetTransformPostprocess_TransformMapping__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TargetTransformPostprocess_TransformMapping__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TargetTransformPostprocess_TransformMapping__VTable vtable;
};
struct TargetTransformPostprocess__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_RequiresOnUpdate;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData OnUpdate_1;
  VirtualInvokeData get_TotalWeight;
  VirtualInvokeData get_HasFinished;
  VirtualInvokeData get_Order;
  VirtualInvokeData OnPostEnable;
  VirtualInvokeData OnPostDisable;
  VirtualInvokeData OnAddedToAnimator;
  VirtualInvokeData OnRemovedFromAnimator;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData Process;
  VirtualInvokeData OnSceneGui;
};
struct TargetTransformPostprocess__StaticFields {
};
struct TargetTransformPostprocess__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TargetTransformPostprocess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TargetTransformPostprocess__VTable vtable;
};}