namespace app {
struct VolumeMovementTimelineBehaviourNew__VTable {
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
struct VolumeMovementTimelineBehaviourNew__StaticFields {
};
struct VolumeMovementTimelineBehaviourNew__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VolumeMovementTimelineBehaviourNew__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VolumeMovementTimelineBehaviourNew__VTable vtable;
};

enum FallBehaviour_FallState__Enum : int32_t {
  FallBehaviour_FallState__Enum_Falling = 0,
  FallBehaviour_FallState__Enum_Landing = 1,
  FallBehaviour_FallState__Enum_BouncingOffWall = 2,
};
struct FallBehaviour_FallState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum FallBehaviour_FallState__Enum value;
};
struct FallBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct MoonAnimation * AirLoopAnimation;
  struct FloatAnimationParameter * VerticalSpeedBlendParameter;
  struct ClipAnimation * LandAnimation;
  struct MoonAnimation * HitWallFront;
  struct MoonAnimation * HitWallBack;
  struct GameObject * ImpactEffect;
  struct RootMotionProcessorData * LandRootMotionProcessor;
  bool ResetHorizontalSpeedOnLand;
  int32_t AnimationPriority;
  float LandAntecipationTime;
  struct LayerMask CollisionMask;
  struct EntityBehaviour__Array * NonInterruptableBehaviours;
  struct Locomotion * m_locomotion;
  struct ILocomotionTurningHandler * m_turningHandler;
  struct ActiveAnimationHandle m_animationState;
  enum FallBehaviour_FallState__Enum m_fallState;
  struct Rigidbody * m_rigidBody;
  struct Vector2 m_postBounceVelocity;
};
struct FallBehaviour {
  struct FallBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct FallBehaviour__Fields fields;
};
struct EntityBehaviour__Array {
  struct EntityBehaviour__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EntityBehaviour * vector[32];
};
struct FallBehaviour__VTable {
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
struct FallBehaviour__StaticFields {
};
struct FallBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FallBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FallBehaviour__VTable vtable;
};

struct GroundChaseBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct Vector3 _TargetPosition_k__BackingField;
  bool _UsePredictedOriPosition_k__BackingField;
  bool _ClampPredictedPosition_k__BackingField;
  float _TraversalSpeed_k__BackingField;
  float _NearTargetTraversalSpeed_k__BackingField;
  bool _LookAtTargetAfterArrive_k__BackingField;
  struct PlayerInsideZoneChecker * ArriveAtTargetZone;
  float TimeInsideZoneToSucceed;
  struct IEntityLocomotion * m_locomotion;
  struct ILocomotionTurningHandler * m_turningHandler;
  float m_timer;
  struct Rect m_nearTargetZone;
  float _ChasingTime_k__BackingField;
};
struct GroundChaseBehaviour {
  struct GroundChaseBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct GroundChaseBehaviour__Fields fields;
};
struct GroundChaseBehaviour__VTable {
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
struct GroundChaseBehaviour__StaticFields {
};
struct GroundChaseBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroundChaseBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroundChaseBehaviour__VTable vtable;
};

struct JumpBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct Vector3 _TargetPosition_k__BackingField;
  float _TraversalSpeed_k__BackingField;
  float JumpHeight;
  struct MoonAnimation * JumpStart;
  struct MoonAnimation * Fall;
  int32_t AnimationPriority;
  struct Locomotion * m_locomotion;
  struct ILocomotionTurningHandler * m_turningHandler;
  struct Vector2 m_jumpVelocity;
  float m_jumpTime;
  float m_fallTime;
  bool m_continuePlayingJump;
  bool m_falling;
};
struct JumpBehaviour {
  struct JumpBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct JumpBehaviour__Fields fields;
};
struct JumpBehaviour__VTable {
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
struct JumpBehaviour__StaticFields {
};
struct JumpBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpBehaviour__VTable vtable;
};

enum KickupBehaviour_KickupState__Enum : int32_t {
  KickupBehaviour_KickupState__Enum_Kickup = 0,
  KickupBehaviour_KickupState__Enum_Falling = 1,
  KickupBehaviour_KickupState__Enum_Landing = 2,
};
struct KickupBehaviour_KickupState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KickupBehaviour_KickupState__Enum value;
};
struct KickupBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  enum KickupBehaviour_KickupState__Enum State;
  struct MoonTimeline * KickupAnimatorNew;
  struct MoonTimeline * LandingAnimatorNew;
  struct LegacyTimelineSequence * KickupAnimator;
  struct LegacyTimelineSequence * LandingAnimator;
  struct RootMotionProcessorData * RootMotion;
  struct RootMotionProcessorData * LandingRootMotion;
  struct Locomotion * m_locomotion;
  struct ILocomotionTurningHandler * m_turningHandler;
};
struct KickupBehaviour {
  struct KickupBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KickupBehaviour__Fields fields;
};
struct KickupBehaviour__VTable {
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
struct KickupBehaviour__StaticFields {
};
struct KickupBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KickupBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KickupBehaviour__VTable vtable;
};

enum KickupDeathBehaviour_KickupState__Enum : int32_t {
  KickupDeathBehaviour_KickupState__Enum_Kickup = 0,
  KickupDeathBehaviour_KickupState__Enum_Falling = 1,
  KickupDeathBehaviour_KickupState__Enum_Landing = 2,
};
struct KickupDeathBehaviour_KickupState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KickupDeathBehaviour_KickupState__Enum value;
};
struct KickupDeathBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  enum KickupDeathBehaviour_KickupState__Enum State;
  struct LegacyTimelineSequence * KickupAnimator;
  struct LegacyTimelineSequence * LandingAnimator;
  struct MoonTimeline * KickupAnimatorNew;
  struct MoonTimeline * LandingAnimatorNew;
  struct MoonAnimation * FallingLoop;
  struct RootMotionProcessorData * RootMotion;
  struct RootMotionProcessorData * LandingRootMotion;
  struct Locomotion * m_locomotion;
  struct ActiveAnimationHandle m_fallingAnim;
};
struct KickupDeathBehaviour {
  struct KickupDeathBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KickupDeathBehaviour__Fields fields;
};
struct KickupDeathBehaviour__VTable {
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
struct KickupDeathBehaviour__StaticFields {
};
struct KickupDeathBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KickupDeathBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KickupDeathBehaviour__VTable vtable;
};

struct MovementBehaviour__Fields {
  struct MonoBehaviour__Fields _;
};
struct MovementBehaviour {
  struct MovementBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MovementBehaviour__Fields fields;
};
struct MovementBehaviour__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MovementBehaviour__StaticFields {
};
struct MovementBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MovementBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MovementBehaviour__VTable vtable;
};

struct SplitTurnAnimationMoonTimeline__Fields {
  struct RangeAnimationEntry__Fields _;
  struct MoonTimeline * TurningAnimation;
  struct EventTriggerAnimator * FlipTrigger;
  bool FlipOnAnimationEnd;
  struct Action * OnStopEvent;
  struct CancelableAnimator * m_cancelable;
  bool m_canCancel;
  float m_lookDirection;
  struct ILocomotionTurningHandler * m_locomotion;
  bool m_isDone;
};
struct SplitTurnAnimationMoonTimeline {
  struct SplitTurnAnimationMoonTimeline__Class *klass;
  struct MonitorData *monitor;
  struct SplitTurnAnimationMoonTimeline__Fields fields;
};
struct SplitTurnAnimationMoonTimeline__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SplitTurnAnimationMoonTimeline__StaticFields {
};
struct SplitTurnAnimationMoonTimeline__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SplitTurnAnimationMoonTimeline__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SplitTurnAnimationMoonTimeline__VTable vtable;
};

struct SplitTurnAnimationMoonTimeline_c {
  struct SplitTurnAnimationMoonTimeline_c__Class *klass;
  struct MonitorData *monitor;
};
struct SplitTurnAnimationMoonTimeline_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SplitTurnAnimationMoonTimeline_c__StaticFields {
  struct SplitTurnAnimationMoonTimeline_c * __9;
  struct Action * __9__22_0;
};
struct SplitTurnAnimationMoonTimeline_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SplitTurnAnimationMoonTimeline_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SplitTurnAnimationMoonTimeline_c__VTable vtable;
};

struct StunnBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct ClipAnimation * StunnAnimation;
  struct SoundProvider * SoundProvider;
  bool ResetHorizontalSpeed;
  int32_t AnimationPriority;
  bool FaceTarget;
  struct RootMotionProcessorData * RootMotion;
  struct Locomotion * m_locomotion;
  struct ILocomotionTurningHandler * m_turninghandler;
  struct ActiveAnimationHandle m_animationState;
};
struct StunnBehaviour {
  struct StunnBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct StunnBehaviour__Fields fields;
};
struct StaggerBehaviour__Fields {
  struct StunnBehaviour__Fields _;
};
struct StaggerBehaviour {
  struct StaggerBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct StaggerBehaviour__Fields fields;
};
struct StunnBehaviour__VTable {
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
struct StunnBehaviour__StaticFields {
};
struct StunnBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StunnBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StunnBehaviour__VTable vtable;
};
struct StaggerBehaviour__VTable {
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
struct StaggerBehaviour__StaticFields {
};
struct StaggerBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StaggerBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StaggerBehaviour__VTable vtable;
};

enum StunnedBehaviour_StunnedState__Enum : int32_t {
  StunnedBehaviour_StunnedState__Enum_Stunned = 0,
  StunnedBehaviour_StunnedState__Enum_Recovering = 1,
};
struct StunnedBehaviour_StunnedState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StunnedBehaviour_StunnedState__Enum value;
};
struct StunnedBehaviour__Fields {
  struct EntityTask__Fields _;
  float StunnedTime;
  struct MoonTimeline * StunnedIdleAnimatorNew;
  struct MoonTimeline * RecoveryAnimatorNew;
  struct LegacyTimelineSequence * StunnedIdleAnimator;
  struct LegacyTimelineSequence * RecoveryAnimator;
  struct Locomotion * m_locomotion;
  float m_timer;
  enum StunnedBehaviour_StunnedState__Enum State;
};
struct StunnedBehaviour {
  struct StunnedBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct StunnedBehaviour__Fields fields;
};
struct StunnedBehaviour__VTable {
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
struct StunnedBehaviour__StaticFields {
};
struct StunnedBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StunnedBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StunnedBehaviour__VTable vtable;
};

struct TimelineBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct LegacyTimelineSequence * _TimelineSequence_k__BackingField;
  float _AnimationSpeed_k__BackingField;
  bool nonInterruptable;
  bool stopMovement;
  struct RootMotionProcessorData * RootMotion;
  struct Locomotion * m_groundLocomotion;
};
struct TimelineBehaviour {
  struct TimelineBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct TimelineBehaviour__Fields fields;
};
struct TimelineBehaviour__VTable {
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
struct TimelineBehaviour__StaticFields {
};
struct TimelineBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineBehaviour__VTable vtable;
};

struct TimelineDeathBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct LegacyTimelineSequence * DeathTimeline;
  struct MoonTimeline * DeathTimelineNew;
  struct RootMotionProcessorData * RootMotion;
  struct Locomotion * m_locomotion;
};
struct TimelineDeathBehaviour {
  struct TimelineDeathBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct TimelineDeathBehaviour__Fields fields;
};
struct TimelineDeathBehaviour__VTable {
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
struct TimelineDeathBehaviour__StaticFields {
};
struct TimelineDeathBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimelineDeathBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimelineDeathBehaviour__VTable vtable;
};

struct UpperKickReactionBehaviour__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * UpperKickSequenceNew;
  struct MoonTimeline * DownKickSequenceNew;
  struct MoonTimeline * EarlyCollisionGroundNew;
  struct MoonTimeline * EarlyCollisionCeillingNew;
  struct LegacyTimelineSequence * UpperKickSequence;
  struct LegacyTimelineSequence * EarlyCollisionGround;
  struct LegacyTimelineSequence * EarlyCollisionCeilling;
  struct RootMotionProcessorData * RootMotion;
  struct RootMotionProcessorData * EarlyCollisionRootMotion;
  struct Event_1 * UpperKickSoundEvent;
  struct Switch_1 * UpperKickSoundSwitch;
  struct Condition_1 * UpperKickSoundSwitchCondition;
  struct Event_1 * DownKickSoundEvent;
  struct Switch_1 * DownKickSoundSwitch;
  struct Condition_1 * DownKickSoundSwitchCondition;
  struct Locomotion * m_locomotion;
  struct LegacyTimelineSequence * m_runningSequence;
  struct MoonTimeline * m_runningSequenceNew;
};
struct UpperKickReactionBehaviour {
  struct UpperKickReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct UpperKickReactionBehaviour__Fields fields;
};
struct UpperKickReactionBehaviour__VTable {
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
struct UpperKickReactionBehaviour__StaticFields {
};
struct UpperKickReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpperKickReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpperKickReactionBehaviour__VTable vtable;
};

struct UpperKickReactionBehaviour_c {
  struct UpperKickReactionBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct UpperKickReactionBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UpperKickReactionBehaviour_c__StaticFields {
  struct UpperKickReactionBehaviour_c * __9;
  struct Action * __9__23_0;
  struct Action * __9__24_0;
  struct Action * __9__28_0;
  struct Action * __9__28_1;
  struct Action * __9__28_2;
  struct Action * __9__28_3;
  struct Action * __9__28_4;
  struct Action * __9__28_5;
};
struct UpperKickReactionBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpperKickReactionBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpperKickReactionBehaviour_c__VTable vtable;
};

struct WorldEventsSelector {
  struct WorldEventsSelector__Class *klass;
  struct MonitorData *monitor;
};
struct WorldEventsSelector__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WorldEventsSelector__StaticFields {
};
struct WorldEventsSelector__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WorldEventsSelector__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WorldEventsSelector__VTable vtable;
};

struct EntitySpawnTask__Fields {
  struct EntityTask__Fields _;
  struct List_1_Moon_Timeline_EventTriggerAnimator_ * ReactivateDamageDealersTriggers;
  bool m_areDamageDealersActive;
  enum AnimatorCullingMode__Enum m_originalAnimatorCullingMode;
  struct EntitySpawnSetup * _SpawnSetup_k__BackingField;
};
struct EntitySpawnTask {
  struct EntitySpawnTask__Class *klass;
  struct MonitorData *monitor;
  struct EntitySpawnTask__Fields fields;
};
struct CommonSpawnTask__Fields {
  struct EntitySpawnTask__Fields _;
  struct MoonTimeline * SpawnTimeline;
  struct MoonTimeline * m_currentTimeline;
};
struct CommonSpawnTask {
  struct CommonSpawnTask__Class *klass;
  struct MonitorData *monitor;
  struct CommonSpawnTask__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_Timeline_EventTriggerAnimator___Fields {
  struct EventTriggerAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_Timeline_EventTriggerAnimator_ {
  struct List_1_Moon_Timeline_EventTriggerAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_Timeline_EventTriggerAnimator___Fields fields;
};
struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator_ {
  struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___StaticFields {
};
struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_Timeline_EventTriggerAnimator___VTable vtable;
};
struct List_1_Moon_Timeline_EventTriggerAnimator___VTable {
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
struct List_1_Moon_Timeline_EventTriggerAnimator___StaticFields {
  struct EventTriggerAnimator__Array * _emptyArray;
};
struct List_1_Moon_Timeline_EventTriggerAnimator___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_Timeline_EventTriggerAnimator___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_Timeline_EventTriggerAnimator___VTable vtable;
};
struct EntitySpawnTask__VTable {
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
  VirtualInvokeData __unknown_1;
  VirtualInvokeData SetActivateDamageDealers;
  VirtualInvokeData SetPlatformMovementColliderEnabledState;
};
struct EntitySpawnTask__StaticFields {
};
struct EntitySpawnTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntitySpawnTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntitySpawnTask__VTable vtable;
};}