namespace app {
struct TurningAnimation {
  struct TurningAnimation__Class *klass;
  struct MonitorData *monitor;
  struct TurningAnimation__Fields fields;
};
struct TurningAnimation__Array {
  struct TurningAnimation__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TurningAnimation * vector[32];
};
struct MinerBuilderEntity__Fields {
  struct EnemyEntity__Fields _;
  bool dialogStarted;
  struct AnimationPostprocess * hitReactionFront;
  struct AnimationPostprocess * hitReactionBack;
  struct GroundEntityLocomotion * m_groundLocomotion;
  struct AnimationPostprocess * m_lastRanHitReaction;
  struct IKLookPostprocess * lookPostprocess;
  struct MultiTimelineFloatValueMin * lookPostprocessMinWeight;
  struct Transform * faceCameraRotationTransform;
  float cameraFaceLerpCoeff;
  float rotateTowardsCaracterWhenNotFacing;
  float m_faceCameraAngle;
};
struct MinerBuilderEntity {
  struct MinerBuilderEntity__Class *klass;
  struct MonitorData *monitor;
  struct MinerBuilderEntity__Fields fields;
};
struct IKLookPostprocess__Fields {
  struct IKPostprocess__Fields _;
  bool LimitTarget;
  struct Rect TargetAllowedZone;
  float dontLookBackLimit;
  float lookLerpCoeff;
  struct Vector3 m_smoothedPos;
  struct Vector3 m_limitAxis;
  struct Vector2 m_targetLimitOffset;
};
struct IKLookPostprocess {
  struct IKLookPostprocess__Class *klass;
  struct MonitorData *monitor;
  struct IKLookPostprocess__Fields fields;
};
struct __declspec(align(8)) MultiTimelineFloatValue__Fields {
  float defaultValue;
  struct FloatCurveAnimator__Array * timelineAnimators;
};
struct MultiTimelineFloatValue {
  struct MultiTimelineFloatValue__Class *klass;
  struct MonitorData *monitor;
  struct MultiTimelineFloatValue__Fields fields;
};
struct MultiTimelineFloatValueMin__Fields {
  struct MultiTimelineFloatValue__Fields _;
};
struct MultiTimelineFloatValueMin {
  struct MultiTimelineFloatValueMin__Class *klass;
  struct MonitorData *monitor;
  struct MultiTimelineFloatValueMin__Fields fields;
};
struct FloatCurveAnimator__Fields {
  struct BaseAnimator__Fields _;
  struct AnimationCurve * valueCurve;
  int32_t priority;
  float valueFloat;
  float lastSampledTime;
};
struct FloatCurveAnimator {
  struct FloatCurveAnimator__Class *klass;
  struct MonitorData *monitor;
  struct FloatCurveAnimator__Fields fields;
};
struct FloatCurveAnimator__Array {
  struct FloatCurveAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FloatCurveAnimator * vector[32];
};
struct GetWorldEventCondition__VTable {
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
struct GetWorldEventCondition__StaticFields {
};
struct GetWorldEventCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GetWorldEventCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GetWorldEventCondition__VTable vtable;
};
struct BuilderNPC__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData Awake;
  VirtualInvokeData OnDestroy;
};
struct BuilderNPC__StaticFields {
};
struct BuilderNPC__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderNPC__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderNPC__VTable vtable;
};
struct TurningAnimation__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TurningAnimation__StaticFields {
};
struct TurningAnimation__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurningAnimation__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurningAnimation__VTable vtable;
};
struct TurningBehaviour__VTable {
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
};
struct TurningBehaviour__StaticFields {
};
struct TurningBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TurningBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TurningBehaviour__VTable vtable;
};
struct IKLookPostprocess__VTable {
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
struct IKLookPostprocess__StaticFields {
};
struct IKLookPostprocess__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IKLookPostprocess__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IKLookPostprocess__VTable vtable;
};
struct FloatCurveAnimator__VTable {
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
  VirtualInvokeData Moon_IAnimatedValueProvider_System_Single__get_name;
  VirtualInvokeData Moon_IAnimatedValueProvider_System_Single__GetValue;
  VirtualInvokeData Moon_IAnimatedValueProvider_System_Boolean__get_name;
  VirtualInvokeData Moon_IAnimatedValueProvider_System_Boolean__GetValue;
};
struct FloatCurveAnimator__StaticFields {
};
struct FloatCurveAnimator__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatCurveAnimator__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatCurveAnimator__VTable vtable;
};
struct MultiTimelineFloatValue__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Value;
};
struct MultiTimelineFloatValue__StaticFields {
};
struct MultiTimelineFloatValue__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiTimelineFloatValue__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiTimelineFloatValue__VTable vtable;
};
struct MultiTimelineFloatValueMin__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Value;
};
struct MultiTimelineFloatValueMin__StaticFields {
};
struct MultiTimelineFloatValueMin__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MultiTimelineFloatValueMin__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MultiTimelineFloatValueMin__VTable vtable;
};
struct MinerBuilderEntity__VTable {
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
};
struct MinerBuilderEntity__StaticFields {
};
struct MinerBuilderEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerBuilderEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerBuilderEntity__VTable vtable;
};
struct MinerBuilderDialogBehaviour__VTable {
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
struct MinerBuilderDialogBehaviour__StaticFields {
};
struct MinerBuilderDialogBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerBuilderDialogBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerBuilderDialogBehaviour__VTable vtable;
};

struct MinerBuilderIdleBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct LegacyTimelineSequence * idleTimeline;
  struct MinerBuilderEntity * m_minerBuilderEntity;
  struct Locomotion * m_groundLocomotion;
};
struct MinerBuilderIdleBehaviour {
  struct MinerBuilderIdleBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MinerBuilderIdleBehaviour__Fields fields;
};
struct MinerBuilderIdleBehaviour__VTable {
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
struct MinerBuilderIdleBehaviour__StaticFields {
};
struct MinerBuilderIdleBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerBuilderIdleBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerBuilderIdleBehaviour__VTable vtable;
};

struct CrazyMinerEntity__Fields {
  struct MinerEntity__Fields _;
};
struct CrazyMinerEntity {
  struct CrazyMinerEntity__Class *klass;
  struct MonitorData *monitor;
  struct CrazyMinerEntity__Fields fields;
};
struct CrazyMinerEntity__VTable {
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
};
struct CrazyMinerEntity__StaticFields {
};
struct CrazyMinerEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrazyMinerEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrazyMinerEntity__VTable vtable;
};

struct CrazyMinerPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
};
struct CrazyMinerPlaceholder {
  struct CrazyMinerPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct CrazyMinerPlaceholder__Fields fields;
};
struct CrazyMinerPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData IDisableOnRecordablePreview_get_gameObject;
  VirtualInvokeData OnSceneRootPreDisable;
  VirtualInvokeData get_Prefab;
  VirtualInvokeData get_RequiresGroundToSpawn;
  VirtualInvokeData get_CheckForOverlap;
  VirtualInvokeData ClearPrefabLinks;
  VirtualInvokeData get_CanSpawn;
  VirtualInvokeData InstantiateInstance;
  VirtualInvokeData PoolCurrentInstance;
  VirtualInvokeData Spawn;
  VirtualInvokeData OnStart;
  VirtualInvokeData OnPlaceholderEnable;
  VirtualInvokeData OnPlaceholderDisable;
  VirtualInvokeData OnRestoreCheckpoint;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnHealthZero;
  VirtualInvokeData OnDeath;
  VirtualInvokeData UpdateAutoSpawnState;
  VirtualInvokeData UpdateSpawnOnEventState;
  VirtualInvokeData get_IsOnScreenPaddedExtended;
  VirtualInvokeData get_IsOnScreenPadded;
  VirtualInvokeData get_IsOnScreen;
  VirtualInvokeData InstantiateFromPooledObj;
  VirtualInvokeData IsUsingVariations;
  VirtualInvokeData CanUseAutosetupPositionInOnSand;
};
struct CrazyMinerPlaceholder__StaticFields {
};
struct CrazyMinerPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CrazyMinerPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CrazyMinerPlaceholder__VTable vtable;
};

struct MinerMinibossSpawnTask__Fields {
  struct EntitySpawnTask__Fields _;
};
struct MinerMinibossSpawnTask {
  struct MinerMinibossSpawnTask__Class *klass;
  struct MonitorData *monitor;
  struct MinerMinibossSpawnTask__Fields fields;
};
struct MinerMinibossSpawnTask__VTable {
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
struct MinerMinibossSpawnTask__StaticFields {
};
struct MinerMinibossSpawnTask__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerMinibossSpawnTask__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerMinibossSpawnTask__VTable vtable;
};

struct ActivationChild__Fields {
  struct MonoBehaviour__Fields _;
  struct ActivationParent * Parent;
};
struct ActivationChild {
  struct ActivationChild__Class *klass;
  struct MonitorData *monitor;
  struct ActivationChild__Fields fields;
};
struct ActivationParent__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_ActivationChild_ * Children;
  struct String * LastErrorMessage;
};
struct ActivationParent {
  struct ActivationParent__Class *klass;
  struct MonitorData *monitor;
  struct ActivationParent__Fields fields;
};
struct __declspec(align(8)) List_1_ActivationChild___Fields {
  struct ActivationChild__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ActivationChild_ {
  struct List_1_ActivationChild___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ActivationChild___Fields fields;
};
struct ActivationChild__Array {
  struct ActivationChild__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ActivationChild * vector[32];
};
struct IEnumerator_1_ActivationChild_ {
  struct IEnumerator_1_ActivationChild___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_ActivationChild___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ActivationChild___StaticFields {
};
struct IEnumerator_1_ActivationChild___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ActivationChild___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ActivationChild___VTable vtable;
};
struct List_1_ActivationChild___VTable {
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
struct List_1_ActivationChild___StaticFields {
  struct ActivationChild__Array * _emptyArray;
};
struct List_1_ActivationChild___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ActivationChild___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ActivationChild___VTable vtable;
};
struct ActivationParent__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActivationParent__StaticFields {
  bool TreatAsDebugTool;
};
struct ActivationParent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivationParent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivationParent__VTable vtable;
};
struct ActivationChild__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ActivationChild__StaticFields {
};
struct ActivationChild__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivationChild__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivationChild__VTable vtable;
};

struct EnemyShield_c {
  struct EnemyShield_c__Class *klass;
  struct MonitorData *monitor;
};
struct EnemyShield_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EnemyShield_c__StaticFields {
  struct EnemyShield_c * __9;
  struct Action * __9__43_0;
};
struct EnemyShield_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EnemyShield_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EnemyShield_c__VTable vtable;
};

struct EntityWeightData__Fields {
  struct ScriptableObject__Fields _;
  struct EntityWeightData_EntityWeightSettings Light;
  struct EntityWeightData_EntityWeightSettings LightAir;
  struct EntityWeightData_EntityWeightSettings Medium;
  struct EntityWeightData_EntityWeightSettings Heavy;
  struct EntityWeightData_EntityWeightSettings HeavyAir;
  struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ * Settings;
};
struct EntityWeightData {
  struct EntityWeightData__Class *klass;
  struct MonitorData *monitor;
  struct EntityWeightData__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_EntityWeightData_EntityWeight_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
  struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
  int32_t hashCode;
  int32_t next;
  enum EntityWeightData_EntityWeight__Enum key;
  struct EntityWeightData_EntityWeightSettings value;
};
struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array {
  struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ vector[32];
};
struct IEqualityComparer_1_EntityWeightData_EntityWeight_ {
  struct IEqualityComparer_1_EntityWeightData_EntityWeight___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields {
  struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings___Fields fields;
};
struct EntityWeightData_EntityWeight__Enum__Array {
  struct EntityWeightData_EntityWeight__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum EntityWeightData_EntityWeight__Enum vector[32];
};}