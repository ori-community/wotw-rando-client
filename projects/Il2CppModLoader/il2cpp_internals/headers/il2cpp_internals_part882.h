namespace app {

struct FacesPointXCondition__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * Origin;
  struct MoonVector3 * TargetA;
  struct MoonVector3 * TargetB;
};
struct FacesPointXCondition {
  struct FacesPointXCondition__Class *klass;
  struct MonitorData *monitor;
  struct FacesPointXCondition__Fields fields;
};
struct FacesPointXCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct FacesPointXCondition__StaticFields {
};
struct FacesPointXCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FacesPointXCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FacesPointXCondition__VTable vtable;
};

struct HasLineOfSightCondition__Fields {
  struct Condition__Fields _;
  struct MoonReference_1_UnityEngine_GameObject_ * CheckTarget;
  struct LayerMask LayerMask;
  bool IgnoreTags;
  struct String__Array * Tags;
  struct RaycastHit__Array * m_raycastHits;
};
struct HasLineOfSightCondition {
  struct HasLineOfSightCondition__Class *klass;
  struct MonitorData *monitor;
  struct HasLineOfSightCondition__Fields fields;
};
struct HasLineOfSightCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct HasLineOfSightCondition__StaticFields {
};
struct HasLineOfSightCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HasLineOfSightCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HasLineOfSightCondition__VTable vtable;
};

struct IsInRangeFromTarget__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * Target;
  struct MoonVector3 * Origin;
  struct Rect Range;
  bool MirrorHorizontal;
  bool MirrorVertical;
};
struct IsInRangeFromTarget {
  struct IsInRangeFromTarget__Class *klass;
  struct MonitorData *monitor;
  struct IsInRangeFromTarget__Fields fields;
};
struct IsInRangeFromTarget__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct IsInRangeFromTarget__StaticFields {
};
struct IsInRangeFromTarget__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsInRangeFromTarget__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsInRangeFromTarget__VTable vtable;
};

struct IsPositionInNoGoZoneCondition__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * Target;
};
struct IsPositionInNoGoZoneCondition {
  struct IsPositionInNoGoZoneCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsPositionInNoGoZoneCondition__Fields fields;
};
struct IsPositionInNoGoZoneCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct IsPositionInNoGoZoneCondition__StaticFields {
};
struct IsPositionInNoGoZoneCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsPositionInNoGoZoneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsPositionInNoGoZoneCondition__VTable vtable;
};

struct IsPositionInZoneCondition__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * Target;
  struct ObjectInsideZoneChecker * ZoneChecker;
  struct PlayerInsideZoneChecker * PlayerZoneChecker;
};
struct IsPositionInZoneCondition {
  struct IsPositionInZoneCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsPositionInZoneCondition__Fields fields;
};
struct IsPositionInZoneCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct IsPositionInZoneCondition__StaticFields {
};
struct IsPositionInZoneCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsPositionInZoneCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsPositionInZoneCondition__VTable vtable;
};

struct IsTargetInAreaOfTypeCondition__Fields {
  struct Condition__Fields _;
  struct MoonReference_1_UnityEngine_GameObject_ * CheckTarget;
  enum NavigationType__Enum AreaType;
};
struct IsTargetInAreaOfTypeCondition {
  struct IsTargetInAreaOfTypeCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsTargetInAreaOfTypeCondition__Fields fields;
};
struct IsTargetInAreaOfTypeCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct IsTargetInAreaOfTypeCondition__StaticFields {
};
struct IsTargetInAreaOfTypeCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsTargetInAreaOfTypeCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsTargetInAreaOfTypeCondition__VTable vtable;
};

struct PositionInBoxColliderCondition__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * Target;
  struct BoxCollider * Collider;
};
struct PositionInBoxColliderCondition {
  struct PositionInBoxColliderCondition__Class *klass;
  struct MonitorData *monitor;
  struct PositionInBoxColliderCondition__Fields fields;
};
struct PositionInBoxColliderCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct PositionInBoxColliderCondition__StaticFields {
};
struct PositionInBoxColliderCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PositionInBoxColliderCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PositionInBoxColliderCondition__VTable vtable;
};

struct ReceivedDamageCondition__Fields {
  struct Condition__Fields _;
  bool m_damageReceived;
  bool m_subscribed;
  struct Entity * m_entity;
};
struct ReceivedDamageCondition {
  struct ReceivedDamageCondition__Class *klass;
  struct MonitorData *monitor;
  struct ReceivedDamageCondition__Fields fields;
};
struct ReceivedDamageCondition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct ReceivedDamageCondition__StaticFields {
};
struct ReceivedDamageCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReceivedDamageCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReceivedDamageCondition__VTable vtable;
};

struct EntityTask_c {
  struct EntityTask_c__Class *klass;
  struct MonitorData *monitor;
};
struct EntityTask_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EntityTask_c__StaticFields {
  struct EntityTask_c * __9;
  struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_ * __9__37_0;
};
struct EntityTask_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityTask_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityTask_c__VTable vtable;
};

enum GroundPatrolWithDirectionTask_GroundPatrolMode__Enum : int32_t {
  GroundPatrolWithDirectionTask_GroundPatrolMode__Enum_Infinite = 0,
  GroundPatrolWithDirectionTask_GroundPatrolMode__Enum_ReturnSuccessAtEachStop = 1,
};
struct GroundPatrolWithDirectionTask_GroundPatrolMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GroundPatrolWithDirectionTask_GroundPatrolMode__Enum value;
};
enum GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum : int32_t {
  GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum_ToggleDirection = 0,
  GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum_AlwaysLeft = 1,
  GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum_AlwaysRight = 2,
};
struct GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum value;
};
struct GroundPatrolWithDirectionTask__Fields {
  struct EntityTask__Fields _;
  enum GroundPatrolWithDirectionTask_GroundPatrolMode__Enum PatrolMode;
  enum GroundPatrolWithDirectionTask_GroundPatrolDirectionMode__Enum PatrolDirectionMode;
  bool IdleBeforeTurning;
  struct MoonVector3 * m_patrolOrigin;
  float MaxPatrolRadius;
  bool ShouldIdle;
  float MinIdleInterval;
  float MaxIdleInterval;
  float MinMovingInterval;
  float MaxMovingInterval;
  bool StartWithMoving;
  float TraversalSpeed;
  float m_timeUntilIdleEnd;
  float m_timeUntilMovingEnd;
  struct GroundEntityLocomotion * m_locomotion;
  bool m_movingLeft;
  bool m_isMoving;
  struct Vector2 m_effectivePatrolOrigin;
  int32_t m_standingOnLedge;
  int32_t m_wallHitreqId;
};
struct GroundPatrolWithDirectionTask {
  struct GroundPatrolWithDirectionTask__Class *klass;
  struct MonitorData *monitor;
  struct GroundPatrolWithDirectionTask__Fields fields;
};
struct GroundPatrolWithDirectionTask__VTable {
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
};
struct GroundPatrolWithDirectionTask__StaticFields {
};
struct GroundPatrolWithDirectionTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroundPatrolWithDirectionTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroundPatrolWithDirectionTask__VTable vtable;
};

enum WaitNodeNonFixedRandom_WaitNodeReturnType__Enum : int32_t {
  WaitNodeNonFixedRandom_WaitNodeReturnType__Enum_Running = 0,
  WaitNodeNonFixedRandom_WaitNodeReturnType__Enum_Blocking = 1,
};
struct WaitNodeNonFixedRandom_WaitNodeReturnType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WaitNodeNonFixedRandom_WaitNodeReturnType__Enum value;
};
struct WaitNodeNonFixedRandom__Fields {
  struct BehaviourNode__Fields _;
  struct MoonFloat * WaitTime;
  bool RandomValue;
  struct MoonFloat * MinTime;
  struct MoonFloat * MaxTime;
  enum WaitNodeNonFixedRandom_WaitNodeReturnType__Enum ReturnStatus;
  float m_timeEntered;
  float m_waitTime;
};
struct WaitNodeNonFixedRandom {
  struct WaitNodeNonFixedRandom__Class *klass;
  struct MonitorData *monitor;
  struct WaitNodeNonFixedRandom__Fields fields;
};
struct WaitNodeNonFixedRandom__VTable {
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
};
struct WaitNodeNonFixedRandom__StaticFields {
};
struct WaitNodeNonFixedRandom__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WaitNodeNonFixedRandom__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WaitNodeNonFixedRandom__VTable vtable;
};

struct DistanceToClosestMortarPosition__Fields {
  struct Condition__Fields _;
  struct MoonVector3 * Target;
  enum CompareMethod__Enum CheckType;
  struct MoonFloat * Distance;
  float FloatingPoint;
};
struct DistanceToClosestMortarPosition {
  struct DistanceToClosestMortarPosition__Class *klass;
  struct MonitorData *monitor;
  struct DistanceToClosestMortarPosition__Fields fields;
};
struct DistanceToClosestMortarPosition__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnBeforeSerialize;
  VirtualInvokeData OnAfterDeserialize;
  VirtualInvokeData OnValidate;
  VirtualInvokeData get_Info;
  VirtualInvokeData PerformSanityCheck;
  VirtualInvokeData OnCheck;
};
struct DistanceToClosestMortarPosition__StaticFields {
};
struct DistanceToClosestMortarPosition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DistanceToClosestMortarPosition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DistanceToClosestMortarPosition__VTable vtable;
};

struct MoveEventWindowAnimator__Fields {
  struct TimelineEntity__Fields _;
  enum MoveEventType__Enum EventType;
  struct Action_1_Moon_Timeline_MoveEventType_ * m_eventStart;
  struct Action_1_Moon_Timeline_MoveEventType_ * m_eventStay;
  struct Action_1_Moon_Timeline_MoveEventType_ * m_eventEnd;
  float m_time;
  bool DebugStartAndEndTimes;
};
struct MoveEventWindowAnimator {
  struct MoveEventWindowAnimator__Class *klass;
  struct MonitorData *monitor;
  struct MoveEventWindowAnimator__Fields fields;
};
struct Action_1_Moon_Timeline_MoveEventType___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_Timeline_MoveEventType_ {
  struct Action_1_Moon_Timeline_MoveEventType___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_Timeline_MoveEventType___Fields fields;
};
struct Action_1_Moon_Timeline_MoveEventType___VTable {
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
struct Action_1_Moon_Timeline_MoveEventType___StaticFields {
};
struct Action_1_Moon_Timeline_MoveEventType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_Timeline_MoveEventType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_Timeline_MoveEventType___VTable vtable;
};
struct MoveEventWindowAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct MoveEventWindowAnimator__StaticFields {
};
struct MoveEventWindowAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveEventWindowAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveEventWindowAnimator__VTable vtable;
};

struct MoveEventWindowAnimator_c {
  struct MoveEventWindowAnimator_c__Class *klass;
  struct MonitorData *monitor;
};
struct MoveEventWindowAnimator_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoveEventWindowAnimator_c__StaticFields {
  struct MoveEventWindowAnimator_c * __9;
  struct Action_1_Moon_Timeline_MoveEventType_ * __9__18_0;
  struct Action_1_Moon_Timeline_MoveEventType_ * __9__18_1;
  struct Action_1_Moon_Timeline_MoveEventType_ * __9__18_2;
};
struct MoveEventWindowAnimator_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoveEventWindowAnimator_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoveEventWindowAnimator_c__VTable vtable;
};

struct BlockDamageInterruption_c {
  struct BlockDamageInterruption_c__Class *klass;
  struct MonitorData *monitor;
};
struct BlockDamageInterruption_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BlockDamageInterruption_c__StaticFields {
  struct BlockDamageInterruption_c * __9;
  struct Action_1_DamageWeightMask_ * __9__18_0;
  struct Action_1_DamageWeightMask_ * __9__18_1;
  struct Action_1_DamageWeightMask_ * __9__18_2;
};
struct BlockDamageInterruption_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BlockDamageInterruption_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BlockDamageInterruption_c__VTable vtable;
};

enum SandWormAnimationPlayer_StopBehaviourType__Enum : int32_t {
  SandWormAnimationPlayer_StopBehaviourType__Enum_StopAnimation = 0,
  SandWormAnimationPlayer_StopBehaviourType__Enum_None = 1,
};
struct SandWormAnimationPlayer_StopBehaviourType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SandWormAnimationPlayer_StopBehaviourType__Enum value;
};
struct SandWormAnimationPlayer__Fields {
  struct TimelineEntity__Fields _;
  enum SandWormAnimationPlayer_StopBehaviourType__Enum StopBehaviour;
  struct SandWormEntity * SandWorm;
  struct SandWormEntity_SandWormBodyAnimation * Animation;
  int32_t Priority;
  float Speed;
};
struct SandWormAnimationPlayer {
  struct SandWormAnimationPlayer__Class *klass;
  struct MonitorData *monitor;
  struct SandWormAnimationPlayer__Fields fields;
};
struct SandWormAnimationPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData HasFinished;
};
struct SandWormAnimationPlayer__StaticFields {
};
struct SandWormAnimationPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormAnimationPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormAnimationPlayer__VTable vtable;
};

struct SandWormBodyWavePlayer__Fields {
  struct TimelineEntity__Fields _;
  struct SandWormEntity * SandWorm;
  struct SandWormEntity_SandWormBodyWave * Animation;
  float Speed;
};
struct SandWormBodyWavePlayer {
  struct SandWormBodyWavePlayer__Class *klass;
  struct MonitorData *monitor;
  struct SandWormBodyWavePlayer__Fields fields;
};
struct SandWormBodyWavePlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct SandWormBodyWavePlayer__StaticFields {
};
struct SandWormBodyWavePlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormBodyWavePlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormBodyWavePlayer__VTable vtable;
};

struct SandWormSquetchPlayer__Fields {
  struct TimelineEntity__Fields _;
  struct SandWormEntity * SandWorm;
  struct SandWormEntity_SandWormSquetch * Animation;
  float Speed;
};
struct SandWormSquetchPlayer {
  struct SandWormSquetchPlayer__Class *klass;
  struct MonitorData *monitor;
  struct SandWormSquetchPlayer__Fields fields;
};
struct SandWormSquetchPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
};
struct SandWormSquetchPlayer__StaticFields {
};
struct SandWormSquetchPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SandWormSquetchPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SandWormSquetchPlayer__VTable vtable;
};

struct TentacleAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct Transform * referenceTargetPoint;
  struct TentaclePhysicsController * physicsController;
  struct AnimationCurve * alignmentForceCurve;
  float m_time;
};
struct TentacleAnimator {
  struct TentacleAnimator__Class *klass;
  struct MonitorData *monitor;
  struct TentacleAnimator__Fields fields;
};
struct TentacleAnimator__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData OnTimelineSample;
};
struct TentacleAnimator__StaticFields {
};
struct TentacleAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TentacleAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TentacleAnimator__VTable vtable;
};

struct RecorderAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
  int32_t RecorderSetupComplete;
  struct TextAsset * TextAsset;
  bool m_shouldLoadScenes;
  struct List_1_System_String_ * m_ignoredScenes;
  struct List_1_RuntimeSceneMetaData_ * m_runtimeSceneMetaDatas;
  bool m_finished;
  bool m_started;
  float m_time;
  bool m_loaded;
  int32_t m_enabledCount;
  struct RecorderData * m_recorderData;
};
struct RecorderAnimatorEntity {
  struct RecorderAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct RecorderAnimatorEntity__Fields fields;
};
struct RecorderAnimatorEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_EventReciever;
  VirtualInvokeData set_EventReciever;
  VirtualInvokeData StartPlayback;
  VirtualInvokeData StopPlayback;
  VirtualInvokeData PausePlayback;
  VirtualInvokeData ResumePlayback;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData get_PlayState;
  VirtualInvokeData get_PlaybackStatus;
  VirtualInvokeData get_Hash;
  VirtualInvokeData get_Name;
  VirtualInvokeData get_ExecutionOrderOffset;
  VirtualInvokeData get_UpdateType;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData PostEvent;
  VirtualInvokeData PostEvent_1;
  VirtualInvokeData PostRequest;
  VirtualInvokeData get_Hash_1;
  VirtualInvokeData get_UpdateType_1;
  VirtualInvokeData get_UpdateCategory;
  VirtualInvokeData SetTimeScale;
  VirtualInvokeData OnValidate;
  VirtualInvokeData OnPausePlayback;
  VirtualInvokeData OnResumePlayback;
  VirtualInvokeData OnStartPlayback;
  VirtualInvokeData OnStopPlayback;
  VirtualInvokeData OnUpdateEntity;
  VirtualInvokeData CanUpdate;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData SynchronizeData;
  VirtualInvokeData SynchronizePad;
  VirtualInvokeData PostEvent_2;
  VirtualInvokeData PostEvent_3;
  VirtualInvokeData PostRequest_1;
  VirtualInvokeData OnRootScopeStopped;
  VirtualInvokeData HasFinished;
};
struct RecorderAnimatorEntity__StaticFields {
};
struct RecorderAnimatorEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RecorderAnimatorEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RecorderAnimatorEntity__VTable vtable;
};}