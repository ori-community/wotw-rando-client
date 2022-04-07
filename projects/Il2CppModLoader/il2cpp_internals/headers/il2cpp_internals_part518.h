namespace app {
struct LegacyBabyWaterWorm__StaticFields {
};
struct LegacyBabyWaterWorm__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyBabyWaterWorm__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyBabyWaterWorm__VTable vtable;
};

struct SetScaleAfterAnimation__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * TargetTransform;
  struct Vector3 Scale;
};
struct SetScaleAfterAnimation {
  struct SetScaleAfterAnimation__Class *klass;
  struct MonitorData *monitor;
  struct SetScaleAfterAnimation__Fields fields;
};
struct SetScaleAfterAnimation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetScaleAfterAnimation__StaticFields {
};
struct SetScaleAfterAnimation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetScaleAfterAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetScaleAfterAnimation__VTable vtable;
};

struct SpawnWormsAttack__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * WaterWormPrefab;
  struct EventTriggerAnimator * SpawnAttackTrigger;
  struct List_1_UnityEngine_Transform_ * SpawnPoints;
};
struct SpawnWormsAttack {
  struct SpawnWormsAttack__Class *klass;
  struct MonitorData *monitor;
  struct SpawnWormsAttack__Fields fields;
};
struct SpawnWormsAttack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpawnWormsAttack__StaticFields {
};
struct SpawnWormsAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpawnWormsAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpawnWormsAttack__VTable vtable;
};

struct TextSpawner__Fields {
  struct MonoBehaviour__Fields _;
  struct String * TextToSpawn;
  struct GameObject * TextCommentPrefab;
};
struct TextSpawner {
  struct TextSpawner__Class *klass;
  struct MonitorData *monitor;
  struct TextSpawner__Fields fields;
};
struct TextSpawner__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TextSpawner__StaticFields {
};
struct TextSpawner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TextSpawner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TextSpawner__VTable vtable;
};

enum HealthCondition_ConditionOp__Enum : int32_t {
  HealthCondition_ConditionOp__Enum_Equals = 0,
  HealthCondition_ConditionOp__Enum_LessThanOrEquals = 1,
  HealthCondition_ConditionOp__Enum_LessThan = 2,
  HealthCondition_ConditionOp__Enum_MoreThanOrEquals = 3,
  HealthCondition_ConditionOp__Enum_MoreThan = 4,
};
struct HealthCondition_ConditionOp__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HealthCondition_ConditionOp__Enum value;
};
struct HealthCondition__Fields {
  struct Condition_1__Fields _;
  struct Vitals * Vitals;
  struct MoonReference_1_Vitals_ * VitalsReference;
  enum HealthCondition_ConditionOp__Enum Operation;
  float Value;
};
struct HealthCondition {
  struct HealthCondition__Class *klass;
  struct MonitorData *monitor;
  struct HealthCondition__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Vitals___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Vitals_ * m_cachedProxyType;
  struct Vitals * m_volatileValue;
};
struct MoonReference_1_Vitals_ {
  struct MoonReference_1_Vitals___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Vitals___Fields fields;
};
struct IMoonType_1_Vitals_ {
  struct IMoonType_1_Vitals___Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_Vitals___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_Vitals___StaticFields {
};
struct IMoonType_1_Vitals___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_Vitals___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_Vitals___VTable vtable;
};
struct MoonReference_1_Vitals___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
  VirtualInvokeData get_IsStaticValue;
  VirtualInvokeData GetTypeData;
  VirtualInvokeData CanResolve;
  VirtualInvokeData get_IsCrossSceneReference;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
};
struct MoonReference_1_Vitals___StaticFields {
};
struct MoonReference_1_Vitals___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_Vitals___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_Vitals___VTable vtable;
};
struct HealthCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Validate;
  VirtualInvokeData Validate_1;
  VirtualInvokeData ResetCondition;
  VirtualInvokeData UpdateCondition;
  VirtualInvokeData GetNiceName;
};
struct HealthCondition__StaticFields {
};
struct HealthCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HealthCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HealthCondition__VTable vtable;
};

struct EntityBehaviourNode_1_HornBugBossEntity___Fields {
  struct EntityBehaviourNode__Fields _;
};
struct EntityBehaviourNode_1_HornBugBossEntity_ {
  struct EntityBehaviourNode_1_HornBugBossEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityBehaviourNode_1_HornBugBossEntity___Fields fields;
};
struct HornbugBossBaseBehaviour__Fields {
  struct EntityBehaviourNode_1_HornBugBossEntity___Fields _;
  struct DynamicDataResolver * m_dataResolver;
  bool IsBlocking;
  struct CancellableController * m_cancellableController;
  struct HitReactionController * m_hitReactionController;
};
struct HornbugBossBaseBehaviour {
  struct HornbugBossBaseBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornbugBossBaseBehaviour__Fields fields;
};
struct HornBugBossBullChargeBehaviour__Fields {
  struct HornbugBossBaseBehaviour__Fields _;
  struct MoonTimeline * Antic;
  struct MoonTimeline * Run;
  struct MoonTimeline * Attack;
  struct MoonTimeline * Recover;
  struct GameObject * AttackTarget;
  struct GameObject * ImpactEffect;
  struct RootMotionProcessorData * RootMotion;
  float RunSpeed;
  float RunTimeScale;
  float AttackDistance;
  float AttackTimeScale;
  struct GroundEntityLocomotion * m_locomotion;
  struct MoonTimeline * m_curTimeline;
};
struct HornBugBossBullChargeBehaviour {
  struct HornBugBossBullChargeBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossBullChargeBehaviour__Fields fields;
};
struct HornBugBossBullChargeBehaviour__VTable {
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
  VirtualInvokeData ModifyRootMotion;
};
struct HornBugBossBullChargeBehaviour__StaticFields {
};
struct HornBugBossBullChargeBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossBullChargeBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossBullChargeBehaviour__VTable vtable;
};
struct EntityBehaviourNode_1_HornBugBossEntity___VTable {
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
struct EntityBehaviourNode_1_HornBugBossEntity___StaticFields {
};
struct EntityBehaviourNode_1_HornBugBossEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityBehaviourNode_1_HornBugBossEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityBehaviourNode_1_HornBugBossEntity___VTable vtable;
};
struct HornbugBossBaseBehaviour__VTable {
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
  VirtualInvokeData ModifyRootMotion;
};
struct HornbugBossBaseBehaviour__StaticFields {
};
struct HornbugBossBaseBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornbugBossBaseBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornbugBossBaseBehaviour__VTable vtable;
};

struct HornbugBossBaseBehaviour_HornbugBossBaseStatesSet {
  struct HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class *klass;
  struct MonitorData *monitor;
};
struct HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__StaticFields {
};
struct HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornbugBossBaseBehaviour_HornbugBossBaseStatesSet__VTable vtable;
};

struct HornBugBossDeathBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * DeathSequence;
  struct RootMotionProcessorData * RootMotion;
  struct GroundEntityLocomotion * m_locomotion;
};
struct HornBugBossDeathBehaviour {
  struct HornBugBossDeathBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossDeathBehaviour__Fields fields;
};
struct HornBugBossDeathBehaviour__VTable {
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
struct HornBugBossDeathBehaviour__StaticFields {
};
struct HornBugBossDeathBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossDeathBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossDeathBehaviour__VTable vtable;
};

struct HornBugBossDeathBehaviour_new__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * DeathSequence;
  struct RootMotionProcessorData * RootMotion;
  struct GroundEntityLocomotion * m_locomotion;
};
struct HornBugBossDeathBehaviour_new {
  struct HornBugBossDeathBehaviour_new__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossDeathBehaviour_new__Fields fields;
};
struct HornBugBossDeathBehaviour_new__VTable {
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
struct HornBugBossDeathBehaviour_new__StaticFields {
};
struct HornBugBossDeathBehaviour_new__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossDeathBehaviour_new__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossDeathBehaviour_new__VTable vtable;
};

struct HornBugBossEntity__Fields {
  struct GroundMovingEntity__Fields _;
  struct Transform * BodyTransform;
  struct PlayerInsideZoneChecker * MoveFwdZone;
  struct PlayerInsideZoneChecker * MoveBwdZone;
  struct PlayerInsideZoneChecker * TurnZone;
  struct PlayerInsideZoneChecker * TurnAttackZone;
  struct PlayerInsideZoneChecker * GroundSlamZone;
  struct PlayerInsideZoneChecker * JumpStompZone;
  struct PlayerInsideZoneChecker * BullChargeZone;
  struct ObjectInsideZoneChecker * JumpSafeZone;
  float SafeMoveFwdDist;
  float SafeMoveBwdDist;
  float SafeTurnAttackBwdDist;
  float GroundSlamMinWallDist;
  float BullChargeMinWallDist;
  float BullChargePrefWallDist;
  float GiveSpaceMinDist;
  struct Transform * ArenaWallLft;
  struct Transform * ArenaWallRgt;
  struct MoonTimeline * BlockedHitTimeline;
  struct EffectSpawn BlockedHitEffect;
  struct GameObject * BloodEffect;
  struct SerializedIntUberState * EncounterState;
  int32_t ShouldBeDeadStateIndexMin;
  int32_t ShouldNotSpawnOrbsIndexMin;
  struct EntityBehaviourNode__Array * LastBlowNotAllowed;
  struct MoonTimeline * m_healthBarTransparencySequence;
  float m_combatElapsedTime;
  struct EntityPlaceholderScalingData * Scaling;
  struct EntityPlaceholderScalingLink * ScalingLink;
  bool HasStartPosition;
  struct Vector3 StartPosition;
  struct List_1_Moon_DamageReceiver_ * ArmorParts;
  float MoveFwdCooldownAfterMoveBwd;
  float MoveBwdCooldownAfterMoveFwd;
  float m_moveFwd_DisableUntilTime;
  float m_moveBwd_DisableUntilTime;
  float m_move_CommitTimeMin;
  float m_move_CommitTimeMax;
  struct HornbugBossBaseBehaviour * MoveFwdBehaviour;
  struct HornbugBossBaseBehaviour * MoveBwdBehaviour;
  struct HornbugBossBaseBehaviour * TurnBehaviour;
  struct HornbugBossBaseBehaviour * TurnAttackBehaviour;
  struct HornbugBossBaseBehaviour * GroundSlamBehaviour;
  struct HornbugBossBaseBehaviour * JumpStompBehaviour;
  struct HornbugBossBaseBehaviour * BullChargeBehaviour;
  struct HornbugBossBaseBehaviour * m_curBehaviour;
  float m_curBehaviourEnterTime;
};
struct HornBugBossEntity {
  struct HornBugBossEntity__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossEntity__Fields fields;
};
struct EntityPlaceholderScalingLink__Fields {
  struct MonoBehaviour__Fields _;
  struct EntityPlaceholderScalingData * ScalingData;
};
struct EntityPlaceholderScalingLink {
  struct EntityPlaceholderScalingLink__Class *klass;
  struct MonitorData *monitor;
  struct EntityPlaceholderScalingLink__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_DamageReceiver___Fields {
  struct DamageReceiver__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_DamageReceiver_ {
  struct List_1_Moon_DamageReceiver___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_DamageReceiver___Fields fields;
};
struct IEnumerator_1_Moon_DamageReceiver_ {
  struct IEnumerator_1_Moon_DamageReceiver___Class *klass;
  struct MonitorData *monitor;
};
struct EntityPlaceholderScalingLink__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityPlaceholderScalingLink__StaticFields {
};
struct EntityPlaceholderScalingLink__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityPlaceholderScalingLink__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityPlaceholderScalingLink__VTable vtable;
};
struct IEnumerator_1_Moon_DamageReceiver___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_DamageReceiver___StaticFields {
};
struct IEnumerator_1_Moon_DamageReceiver___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_DamageReceiver___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_DamageReceiver___VTable vtable;
};
struct List_1_Moon_DamageReceiver___VTable {
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
struct List_1_Moon_DamageReceiver___StaticFields {
  struct DamageReceiver__Array * _emptyArray;
};
struct List_1_Moon_DamageReceiver___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_DamageReceiver___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_DamageReceiver___VTable vtable;
};
struct HornBugBossEntity__VTable {
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
};
struct HornBugBossEntity__StaticFields {
};
struct HornBugBossEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossEntity__VTable vtable;
};

struct HornBugBossActivate__Fields {
  struct ActionMethod__Fields _;
  struct HornBugBossEntity * HornBugBossEntity;
};
struct HornBugBossActivate {
  struct HornBugBossActivate__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossActivate__Fields fields;
};
struct HornBugBossActivate__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData Perform;
  VirtualInvokeData GetNiceName;
  VirtualInvokeData Perform_1;
};
struct HornBugBossActivate__StaticFields {
};
struct HornBugBossActivate__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossActivate__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossActivate__VTable vtable;
};

struct HornBugBossTimelineBehaviour__Fields {
  struct HornbugBossBaseBehaviour__Fields _;
  struct MoonTimeline * m_timeline;
  struct EventTriggerAnimator * FlipTrigger;
  struct RootMotionProcessorData * RootMotion;
};
struct HornBugBossTimelineBehaviour {
  struct HornBugBossTimelineBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossTimelineBehaviour__Fields fields;
};
struct HornBugBossHeadSlamBehaviour_new__Fields {
  struct HornBugBossTimelineBehaviour__Fields _;
  struct FirewhirlBeamSpawner * FirewhirlSpawner;
  struct EventTriggerAnimator * AreaDamageTrigger;
  struct Transform * AreaDamageSpawnReference;
  struct DamageOwner * m_damageOwner;
};
struct HornBugBossHeadSlamBehaviour_new {
  struct HornBugBossHeadSlamBehaviour_new__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossHeadSlamBehaviour_new__Fields fields;
};
struct HornBugBossTimelineBehaviour__VTable {
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
  VirtualInvokeData ModifyRootMotion;
  VirtualInvokeData RootMotionModifier;
};
struct HornBugBossTimelineBehaviour__StaticFields {
};
struct HornBugBossTimelineBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossTimelineBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossTimelineBehaviour__VTable vtable;
};
struct HornBugBossHeadSlamBehaviour_new__VTable {
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
  VirtualInvokeData ModifyRootMotion;
  VirtualInvokeData RootMotionModifier;
};
struct HornBugBossHeadSlamBehaviour_new__StaticFields {
};
struct HornBugBossHeadSlamBehaviour_new__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossHeadSlamBehaviour_new__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossHeadSlamBehaviour_new__VTable vtable;
};

struct HornbugBossHitReactionsBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct HornbugBossHitReactionsBehaviour_Reaction__Array * Reactions;
  struct AnimationAdditiveStrengthContext * m_additiveStrengthContext;
  struct ContextSet * m_timelineContext;
  struct MoonTimeline * m_stopOnExit;
};}