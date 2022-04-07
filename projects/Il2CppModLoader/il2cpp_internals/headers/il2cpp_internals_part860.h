namespace app {
struct PetrifiedOwlLookBehaviour__StaticFields {
};
struct PetrifiedOwlLookBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlLookBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlLookBehaviour__VTable vtable;
};

struct PetrifiedOwlLookStateAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct PetrifiedOwlStats * Stats;
  enum PetrifiedOwlLookState__Enum LookState;
  float m_duration;
  enum PetrifiedOwlLookState__Enum m_originalLookState;
};
struct PetrifiedOwlLookStateAnimator {
  struct PetrifiedOwlLookStateAnimator__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlLookStateAnimator__Fields fields;
};
struct PetrifiedOwlLookStateAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData get_IsInScene;
  VirtualInvokeData set_IsInScene;
  VirtualInvokeData Convert;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData get_IsLooping;
  VirtualInvokeData get_CurrentTime;
  VirtualInvokeData set_CurrentTime;
  VirtualInvokeData OnPoolSpawned_1;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
  VirtualInvokeData Play;
  VirtualInvokeData Stop;
  VirtualInvokeData Pause;
  VirtualInvokeData OnFixedUpdate_1;
  VirtualInvokeData CacheOriginals;
  VirtualInvokeData SampleValue;
  VirtualInvokeData UpdateDurationAndTimeCache;
  VirtualInvokeData OnStartPlay;
  VirtualInvokeData OnStopPlay;
  VirtualInvokeData get_Duration;
  VirtualInvokeData RestoreToOriginalState;
  VirtualInvokeData Convert_1;
};
struct PetrifiedOwlLookStateAnimator__StaticFields {
};
struct PetrifiedOwlLookStateAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlLookStateAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlLookStateAnimator__VTable vtable;
};

struct PetrifiedOwlScreamBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float HornDestroyedScore;
  struct Kickback * ScreamKickback;
  float KickbackStrength;
  struct PetrifiedOwlStats * OwlStats;
  struct BaseAnimator * BreakHornLeftAnimator;
  struct BaseAnimator * BreakHornRightAnimator;
  struct BaseAnimator * ScreamAnimator;
  struct PlayerStayInsideZoneTrigger * ScreamAffectingZone;
  struct TimelineEventTrigger * ScreamPushEvent;
  bool m_rightHornDestructionPlayed;
  bool m_leftHornDestructionPlayed;
  struct BaseAnimator * m_hornBreakAnimator;
};
struct PetrifiedOwlScreamBehaviour {
  struct PetrifiedOwlScreamBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlScreamBehaviour__Fields fields;
};
struct PetrifiedOwlScreamBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlScreamBehaviour__StaticFields {
};
struct PetrifiedOwlScreamBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlScreamBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlScreamBehaviour__VTable vtable;
};

struct PetrifiedOwlShakeOffBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float AgitationPerShakeOff;
  float GrabbingLegScore;
  float BelowShakeOffHeightScore;
  struct GameObject * OwlEntity;
  struct PetrifiedOwlStats * Stats;
  struct Transform * ShakeOffHeightThreshold;
  struct BaseAnimator * ShakeLeftAnimator;
  struct BaseAnimator * ShakeRightAnimator;
  struct Kickback * PushKickback;
  float PushKickbackStrength;
  struct TimelineEventTrigger__Array * PushEvents;
  struct BaseAnimator * m_currentAnimator;
  bool m_playerStoppedGrabbing;
};
struct PetrifiedOwlShakeOffBehaviour {
  struct PetrifiedOwlShakeOffBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlShakeOffBehaviour__Fields fields;
};
struct PetrifiedOwlShakeOffBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlShakeOffBehaviour__StaticFields {
};
struct PetrifiedOwlShakeOffBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlShakeOffBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlShakeOffBehaviour__VTable vtable;
};

struct PetrifiedOwlSideStepBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float Score;
  float SteppingDirectionPredictability;
  struct GameObject * OwlEntity;
  struct GameObject * OwlAnimator;
  struct Transform * RightStilt;
  struct Transform * LeftStilt;
  struct BaseAnimator * SideStepLeftAnimator;
  struct BaseAnimator * SideStepRightAnimator;
  struct BaseAnimator * m_currentAnimator;
  struct MoonAnimator * m_owlAnimator;
};
struct PetrifiedOwlSideStepBehaviour {
  struct PetrifiedOwlSideStepBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSideStepBehaviour__Fields fields;
};
struct PetrifiedOwlSideStepBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlSideStepBehaviour__StaticFields {
};
struct PetrifiedOwlSideStepBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSideStepBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSideStepBehaviour__VTable vtable;
};

enum PetrifiedOwlSingleClawBehaviour_ClawType__Enum : int32_t {
  PetrifiedOwlSingleClawBehaviour_ClawType__Enum_Left = 0,
  PetrifiedOwlSingleClawBehaviour_ClawType__Enum_Right = 1,
};
struct PetrifiedOwlSingleClawBehaviour_ClawType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PetrifiedOwlSingleClawBehaviour_ClawType__Enum value;
};
struct PetrifiedOwlSingleClawBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float StaminaPerAttack;
  float StaminaThreshold;
  float StaminaThresholdScore;
  float StayInsideTriggerScore;
  float ClawHurtScore;
  enum PetrifiedOwlSingleClawBehaviour_ClawType__Enum Claw;
  struct PetrifiedOwlStats * Stats;
  struct BaseAnimator * AttackAnimator;
  struct GameObject * OwlAnimator;
  struct PlayerStayInsideZoneTrigger * AttackZoneTrigger;
  struct PlayerStayInsideZoneTrigger * IKPointClampZone;
  struct TimelineEventTrigger * IKUpdateEvent;
  struct VectorAnimationParameter * AttackTargetParameter;
  float ClawIKFollowPointOffsetZ;
  struct MoonAnimator * m_owlAnimator;
};
struct PetrifiedOwlSingleClawBehaviour {
  struct PetrifiedOwlSingleClawBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSingleClawBehaviour__Fields fields;
};
struct PetrifiedOwlSingleClawBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlSingleClawBehaviour__StaticFields {
};
struct PetrifiedOwlSingleClawBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSingleClawBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSingleClawBehaviour__VTable vtable;
};

enum PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum : int32_t {
  PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum_Left = 0,
  PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum_Right = 1,
};
struct PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum value;
};
struct PetrifiedOwlSingleClawHighBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float StaminaPerAttack;
  float StaminaThreshold;
  float StaminaThresholdScore;
  float StayInsideTriggerScore;
  float ClawHurtScore;
  enum PetrifiedOwlSingleClawHighBehaviour_ClawType__Enum Claw;
  struct PetrifiedOwlStats * Stats;
  struct BaseAnimator * AttackAnimator;
  struct PlayerStayInsideZoneTrigger * AttackZoneTrigger;
};
struct PetrifiedOwlSingleClawHighBehaviour {
  struct PetrifiedOwlSingleClawHighBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlSingleClawHighBehaviour__Fields fields;
};
struct PetrifiedOwlSingleClawHighBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlSingleClawHighBehaviour__StaticFields {
};
struct PetrifiedOwlSingleClawHighBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlSingleClawHighBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlSingleClawHighBehaviour__VTable vtable;
};

struct PetrifiedOwlStompBehaviour__Fields {
  struct BrainBehaviour__Fields _;
  float StayInsideTriggerScore;
  float GrabInnerStiltScore;
  float ScorePerAgitation;
  float SeinPositionPredictionTime;
  struct GameObject * OwlEntity;
  struct PetrifiedOwlStats * Stats;
  struct BaseAnimator * LeftStompAnimator;
  struct BaseAnimator * RightStompAnimator;
  struct PlayerStayInsideZoneTrigger * LeftStompTrigger;
  struct PlayerStayInsideZoneTrigger * RightStompTrigger;
  struct BaseAnimator * m_currentAnimator;
};
struct PetrifiedOwlStompBehaviour {
  struct PetrifiedOwlStompBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct PetrifiedOwlStompBehaviour__Fields fields;
};
struct PetrifiedOwlStompBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnStartBehaviour;
  VirtualInvokeData OnEndBehaviour;
  VirtualInvokeData OnUpdateBehaviour;
  VirtualInvokeData EndCondition;
  VirtualInvokeData GetScore;
  VirtualInvokeData ResetBehaviour;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData OnEnable;
  VirtualInvokeData OnDisable;
};
struct PetrifiedOwlStompBehaviour__StaticFields {
};
struct PetrifiedOwlStompBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PetrifiedOwlStompBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PetrifiedOwlStompBehaviour__VTable vtable;
};

struct Entity_c {
  struct Entity_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_Moon_IEntityOwned___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_Moon_IEntityOwned_ {
  struct Comparison_1_Moon_IEntityOwned___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_Moon_IEntityOwned___Fields fields;
};
struct Comparison_1_Moon_IEntityOwned___VTable {
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
struct Comparison_1_Moon_IEntityOwned___StaticFields {
};
struct Comparison_1_Moon_IEntityOwned___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_Moon_IEntityOwned___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_Moon_IEntityOwned___VTable vtable;
};
struct Entity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Entity_c__StaticFields {
  struct Entity_c * __9;
  struct Comparison_1_Moon_IEntityOwned_ * __9__212_0;
  struct Action * __9__359_0;
};
struct Entity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Entity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Entity_c__VTable vtable;
};

struct EntityState__Fields {
  struct MonoBehaviour__Fields _;
  bool _IsRunning_k__BackingField;
};
struct EntityState {
  struct EntityState__Class *klass;
  struct MonitorData *monitor;
  struct EntityState__Fields fields;
};
struct EntityState__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
  VirtualInvokeData UpdateState_1;
};
struct EntityState__StaticFields {
};
struct EntityState__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityState__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityState__VTable vtable;
};

struct EntityBehaviourParameter {
  struct EntityBehaviourParameter__Class *klass;
  struct MonitorData *monitor;
};
struct EntityBehaviourParameter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_TypeId;
  VirtualInvokeData Match;
  VirtualInvokeData IsDefaultAttribute;
};
struct EntityBehaviourParameter__StaticFields {
};
struct EntityBehaviourParameter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityBehaviourParameter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityBehaviourParameter__VTable vtable;
};

struct EntityDeathEvent__Fields {
  struct EntityDamageEvent__Fields _;
};
struct EntityDeathEvent {
  struct EntityDeathEvent__Class *klass;
  struct MonitorData *monitor;
  struct EntityDeathEvent__Fields fields;
};
struct EntityDeathEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityDeathEvent__StaticFields {
};
struct EntityDeathEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityDeathEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityDeathEvent__VTable vtable;
};

struct EntityKickbackEvent__Fields {
  struct EntityDamageEvent__Fields _;
  struct Vector2 Direction;
  float Multiplier;
  bool Instant;
  struct Vector2 ForceBeforeMultiplier;
};
struct EntityKickbackEvent {
  struct EntityKickbackEvent__Class *klass;
  struct MonitorData *monitor;
  struct EntityKickbackEvent__Fields fields;
};
struct EntityKickbackEvent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityKickbackEvent__StaticFields {
};
struct EntityKickbackEvent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityKickbackEvent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityKickbackEvent__VTable vtable;
};

struct LocomotionGoal_c {
  struct LocomotionGoal_c__Class *klass;
  struct MonitorData *monitor;
};
struct LocomotionGoal_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LocomotionGoal_c__StaticFields {
  struct LocomotionGoal_c * __9;
  struct Action * __9__1_0;
  struct Action_1_Moon_LocomotionGoal_GoalStatus_ * __9__1_1;
};
struct LocomotionGoal_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LocomotionGoal_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LocomotionGoal_c__VTable vtable;
};

struct Locomotion_StateTransitionEntry {
  struct EntityLocomotionTask * TargetTask;
  struct Func_1_Boolean_ * Condition;
};
struct Locomotion_StateTransitionEntry__Boxed {
  struct Locomotion_StateTransitionEntry__Class *klass;
  struct MonitorData *monitor;
  struct Locomotion_StateTransitionEntry fields;
};
struct Locomotion_StateTransitionEntry__Array {
  struct Locomotion_StateTransitionEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Locomotion_StateTransitionEntry vector[32];
};
struct Locomotion_StateTransitionEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Locomotion_StateTransitionEntry__StaticFields {
};
struct Locomotion_StateTransitionEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Locomotion_StateTransitionEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Locomotion_StateTransitionEntry__VTable vtable;
};

struct __declspec(align(8)) Locomotion_c_DisplayClass85_0__Fields {
  struct Func_1_Boolean_ * condition;
  struct EntityLocomotionTask * targetTask;
  struct Locomotion * __4__this;
};
struct Locomotion_c_DisplayClass85_0 {
  struct Locomotion_c_DisplayClass85_0__Class *klass;
  struct MonitorData *monitor;
  struct Locomotion_c_DisplayClass85_0__Fields fields;
};
struct Locomotion_c_DisplayClass85_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Locomotion_c_DisplayClass85_0__StaticFields {
};
struct Locomotion_c_DisplayClass85_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Locomotion_c_DisplayClass85_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Locomotion_c_DisplayClass85_0__VTable vtable;
};

struct SimpleGroundNavigation__Fields {
  struct MonoBehaviour__Fields _;
  struct GroundEntityLocomotion * Locomotion;
  float sphereRadius;
  float arriveDistance;
  float maxJumpHeight;
  float minJumpHeight;
  float maxJumpDistance;
  float minJumpDistance;
  float jumpTryStepDistance;
  float avoidEdgeDistance;
  float maxFloorDistance;
  float maxCeilingDistance;
  float obstacleRayDistance;
  float ledgeRayOriginDistance;
  float obstacleNormalThreshold;
  float maxGroundProjectDistance;
  float runAwayTime;
  float timeSlice;
  struct Vector3 groundTarget;
  struct Vector3 moveVector;
  struct Vector3 nextMovePoint;
  bool directView;
  bool obstacleAhead;
  bool pitAhead;
  bool ceilingUp;
  bool underGround;
  bool abovePlatform;
  bool deadEnd;
  bool runningAway;
  bool canJump;
  float m_runningAway;
  float m_runSide;
  float m_timeout;
};
struct SimpleGroundNavigation {
  struct SimpleGroundNavigation__Class *klass;
  struct MonitorData *monitor;
  struct SimpleGroundNavigation__Fields fields;
};
struct SimpleGroundNavigation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SimpleGroundNavigation__StaticFields {
};
struct SimpleGroundNavigation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SimpleGroundNavigation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SimpleGroundNavigation__VTable vtable;
};

struct Vitals_DamageProcessHelper_c {
  struct Vitals_DamageProcessHelper_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ {
  struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Fields fields;
};
struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___VTable {
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
struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___StaticFields {
};
struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry___VTable vtable;
};
struct Vitals_DamageProcessHelper_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Vitals_DamageProcessHelper_c__StaticFields {
  struct Vitals_DamageProcessHelper_c * __9;
  struct Comparison_1_Moon_Vitals_DamageProcessHelper_SortedDamageEntry_ * __9__10_0;
};
struct Vitals_DamageProcessHelper_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vitals_DamageProcessHelper_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vitals_DamageProcessHelper_c__VTable vtable;
};

struct Vitals_c {
  struct Vitals_c__Class *klass;
  struct MonitorData *monitor;
};
struct Vitals_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Vitals_c__StaticFields {
  struct Vitals_c * __9;
  struct Action_1_DamageResult_ * __9__101_0;
  struct Action_1_DamageResult_ * __9__101_1;
};
struct Vitals_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vitals_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vitals_c__VTable vtable;
};

struct __declspec(align(8)) ExecutionOrderMap__Fields {
  struct Dictionary_2_System_Type_System_Int32_ * m_orderByType;
};
struct ExecutionOrderMap {
  struct ExecutionOrderMap__Class *klass;
  struct MonitorData *monitor;
  struct ExecutionOrderMap__Fields fields;
};
struct ExecutionOrderMap__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData TryGetExecutionOrderFor;
};
struct ExecutionOrderMap__StaticFields {
};
struct ExecutionOrderMap__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ExecutionOrderMap__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ExecutionOrderMap__VTable vtable;
};

struct FlameExtinguisher__Fields {
  struct MonoBehaviour__Fields _;
};
struct FlameExtinguisher {
  struct FlameExtinguisher__Class *klass;
  struct MonitorData *monitor;
  struct FlameExtinguisher__Fields fields;
};
struct FlameExtinguisher__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFlameEnter;
};
struct FlameExtinguisher__StaticFields {
};
struct FlameExtinguisher__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlameExtinguisher__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlameExtinguisher__VTable vtable;
};

struct FlameSpark__Fields {
  struct MonoBehaviour__Fields _;
  struct LayerMask InteractionMask;
  float Radius;
  struct Vector3 Offset;
  int32_t SparkFrames;
  enum Flammable_FlameColor__Enum Color;
  int32_t m_framesRemaining;
};
struct FlameSpark {
  struct FlameSpark__Class *klass;
  struct MonitorData *monitor;
  struct FlameSpark__Fields fields;
};
struct FlameSpark__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FlameSpark__StaticFields {
  struct Collider__Array * s_colliders;
};
struct FlameSpark__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FlameSpark__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FlameSpark__VTable vtable;
};

struct Flammable_c {
  struct Flammable_c__Class *klass;
  struct MonitorData *monitor;
};
struct Flammable_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Flammable_c__StaticFields {
  struct Flammable_c * __9;
  struct Action_1_Moon_Flammable_ * __9__59_0;
};
struct Flammable_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Flammable_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Flammable_c__VTable vtable;
};

enum TriggerEnterPrefabSpawner_VelocityCheckMode__Enum : int32_t {
  TriggerEnterPrefabSpawner_VelocityCheckMode__Enum_Self = 0,
  TriggerEnterPrefabSpawner_VelocityCheckMode__Enum_Other = 1,
};
struct TriggerEnterPrefabSpawner_VelocityCheckMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TriggerEnterPrefabSpawner_VelocityCheckMode__Enum value;
};
struct TriggerEnterPrefabSpawner__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject__Array * Prefabs;
  enum TriggerEnterPrefabSpawner_VelocityCheckMode__Enum VelocityCheckObject;
  float MinimumVelocity;
  bool UseCollisionNormalAsUpRotation;
  struct Transform * SpecificSpawnPoint;
  struct Rigidbody * m_rigidbody;
};
struct TriggerEnterPrefabSpawner {
  struct TriggerEnterPrefabSpawner__Class *klass;
  struct MonitorData *monitor;
  struct TriggerEnterPrefabSpawner__Fields fields;
};
struct TriggerEnterPrefabSpawner__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TriggerEnterPrefabSpawner__StaticFields {
};
struct TriggerEnterPrefabSpawner__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TriggerEnterPrefabSpawner__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TriggerEnterPrefabSpawner__VTable vtable;
};

enum CartographerDesertPatrolBehaviour_State__Enum : int32_t {
  CartographerDesertPatrolBehaviour_State__Enum_Inactive = 0,
  CartographerDesertPatrolBehaviour_State__Enum_MoveToCrate = 1,
  CartographerDesertPatrolBehaviour_State__Enum_MoveToMap = 2,
  CartographerDesertPatrolBehaviour_State__Enum_MoveToFarRight = 3,
  CartographerDesertPatrolBehaviour_State__Enum_Breakup = 4,
  CartographerDesertPatrolBehaviour_State__Enum_WaitingBefore = 5,
  CartographerDesertPatrolBehaviour_State__Enum_WaitingAfter = 6,
};
struct CartographerDesertPatrolBehaviour_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CartographerDesertPatrolBehaviour_State__Enum value;
};
struct CartographerDesertPatrolBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
  enum CartographerDesertPatrolBehaviour_State__Enum m_prevState;
  enum CartographerDesertPatrolBehaviour_State__Enum m_currentState;
  float m_waitTimer;
  float TraversalSpeed;
  struct CartographerDesertPatrolBehaviour_IdleStop * CrateStop;
  struct CartographerDesertPatrolBehaviour_IdleStop * RockStop;
  struct CartographerDesertPatrolBehaviour_IdleStop * FarRightStop;
  struct CartographerDesertPatrolBehaviour_IdleStop * m_currentTargetStop;
  bool m_arrivedAtGoal;
  struct MoonTimeline * m_currentTimeline;
  int32_t m_breakupId;
  int32_t m_breakupsToPlay;
  struct GroundEntityLocomotion * m_groundLocomotion;
};
struct CartographerDesertPatrolBehaviour {
  struct CartographerDesertPatrolBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct CartographerDesertPatrolBehaviour__Fields fields;
};
enum CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum : int32_t {
  CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum_Crate = 0,
  CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum_Rock = 1,
  CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum_FarRight = 2,
};
struct CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum value;
};
struct __declspec(align(8)) CartographerDesertPatrolBehaviour_IdleStop__Fields {
  struct MoonTimeline * IdleLoopRight;
  struct MoonTimeline * IdleLoopLeft;
  struct MoonTimeline__Array * BreakupsRight;
  struct MoonTimeline__Array * BreakupsLeft;
  struct MoonReference_1_UnityEngine_GameObject_ * PositionRightObject;
  struct MoonReference_1_UnityEngine_GameObject_ * PositionLeftObject;
  bool StopsLeft;
  bool StopsRight;
  bool EndingStop;
  enum CartographerDesertPatrolBehaviour_IdleStop_StopType__Enum StopName;
  float WaitTimeBeforeBreakup;
  float WaitTimeAfter;
  int32_t BreakupsToPlay;
  struct GameObject * m_left;
  struct GameObject * m_right;
};
struct CartographerDesertPatrolBehaviour_IdleStop {
  struct CartographerDesertPatrolBehaviour_IdleStop__Class *klass;
  struct MonitorData *monitor;
  struct CartographerDesertPatrolBehaviour_IdleStop__Fields fields;
};
struct CartographerDesertPatrolBehaviour_IdleStop__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CartographerDesertPatrolBehaviour_IdleStop__StaticFields {
};
struct CartographerDesertPatrolBehaviour_IdleStop__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CartographerDesertPatrolBehaviour_IdleStop__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CartographerDesertPatrolBehaviour_IdleStop__VTable vtable;
};
struct CartographerDesertPatrolBehaviour__VTable {
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