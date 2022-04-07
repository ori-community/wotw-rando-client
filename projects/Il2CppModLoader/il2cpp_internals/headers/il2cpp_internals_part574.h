namespace app {
struct EntityReactionBehaviour_1_BaurEntity___StaticFields {
};
struct EntityReactionBehaviour_1_BaurEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_BaurEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_BaurEntity___VTable vtable;
};
struct EntityHitReactionBehaviour_1_BaurEntity___VTable {
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
struct EntityHitReactionBehaviour_1_BaurEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_BaurEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_BaurEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_BaurEntity___VTable vtable;
};
struct BaurHitReactionBehaviour__VTable {
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
struct BaurHitReactionBehaviour__StaticFields {
};
struct BaurHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaurHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaurHitReactionBehaviour__VTable vtable;
};

struct BaurIdle__Fields {
  struct EntityLocomotionTask__Fields _;
  struct MoonTimeline * IdleTimeline;
  struct MoonTimeline * m_currentTimeline;
};
struct BaurIdle {
  struct BaurIdle__Class *klass;
  struct MonitorData *monitor;
  struct BaurIdle__Fields fields;
};
struct BaurIdle__VTable {
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
struct BaurIdle__StaticFields {
};
struct BaurIdle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaurIdle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaurIdle__VTable vtable;
};

enum BaurInteractionBehaviour_InteractionStates__Enum : int32_t {
  BaurInteractionBehaviour_InteractionStates__Enum_None = 0,
  BaurInteractionBehaviour_InteractionStates__Enum_Intro = 1,
  BaurInteractionBehaviour_InteractionStates__Enum_AfterIntroRepeat = 2,
};
struct BaurInteractionBehaviour_InteractionStates__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BaurInteractionBehaviour_InteractionStates__Enum value;
};
struct BaurInteractionBehaviour__Fields {
  struct EntityBehaviourNode__Fields _;
  enum BaurInteractionBehaviour_InteractionStates__Enum m_currentState;
  struct MoonTimeline * m_currentTimeline;
  struct MoonReference_1_IDialogCallbackNotifier_ * IntroductionDialogNode;
  struct MoonReference_1_IDialogCallbackNotifier_ * AfterIntroRepeatDialogNode;
  struct IDialogCallbackNotifier * m_resolvedIntroductionNode;
  struct IDialogCallbackNotifier * m_resolvedAfterIntroRepeatNode;
  struct BaurEntity * m_npcEntity;
  struct MoonTimeline * TalkA;
  struct MoonTimeline * IdleA;
};
struct BaurInteractionBehaviour {
  struct BaurInteractionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct BaurInteractionBehaviour__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_IDialogCallbackNotifier___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_IDialogCallbackNotifier_ * m_cachedProxyType;
  struct IDialogCallbackNotifier * m_volatileValue;
};
struct MoonReference_1_IDialogCallbackNotifier_ {
  struct MoonReference_1_IDialogCallbackNotifier___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_IDialogCallbackNotifier___Fields fields;
};
struct IMoonType_1_IDialogCallbackNotifier_ {
  struct IMoonType_1_IDialogCallbackNotifier___Class *klass;
  struct MonitorData *monitor;
};
struct IDialogCallbackNotifier {
  struct IDialogCallbackNotifier__Class *klass;
  struct MonitorData *monitor;
};
struct IMoonType_1_IDialogCallbackNotifier___VTable {
  VirtualInvokeData Resolve;
  VirtualInvokeData SafeResolve;
  VirtualInvokeData TryResolve;
};
struct IMoonType_1_IDialogCallbackNotifier___StaticFields {
};
struct IMoonType_1_IDialogCallbackNotifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMoonType_1_IDialogCallbackNotifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMoonType_1_IDialogCallbackNotifier___VTable vtable;
};
struct IDialogCallbackNotifier__VTable {
  VirtualInvokeData get_OnActivated;
  VirtualInvokeData set_OnActivated;
  VirtualInvokeData get_OnFinished;
  VirtualInvokeData set_OnFinished;
};
struct IDialogCallbackNotifier__StaticFields {
};
struct IDialogCallbackNotifier__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IDialogCallbackNotifier__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IDialogCallbackNotifier__VTable vtable;
};
struct MoonReference_1_IDialogCallbackNotifier___VTable {
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
struct MoonReference_1_IDialogCallbackNotifier___StaticFields {
};
struct MoonReference_1_IDialogCallbackNotifier___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonReference_1_IDialogCallbackNotifier___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonReference_1_IDialogCallbackNotifier___VTable vtable;
};
struct BaurInteractionBehaviour__VTable {
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
struct BaurInteractionBehaviour__StaticFields {
};
struct BaurInteractionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaurInteractionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaurInteractionBehaviour__VTable vtable;
};

struct BaurSelectedMemoryToReplayCondition__Fields {
  struct Condition_1__Fields _;
  bool Inverse;
};
struct BaurSelectedMemoryToReplayCondition {
  struct BaurSelectedMemoryToReplayCondition__Class *klass;
  struct MonitorData *monitor;
  struct BaurSelectedMemoryToReplayCondition__Fields fields;
};
struct BaurSelectedMemoryToReplayCondition__VTable {
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
struct BaurSelectedMemoryToReplayCondition__StaticFields {
};
struct BaurSelectedMemoryToReplayCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BaurSelectedMemoryToReplayCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BaurSelectedMemoryToReplayCondition__VTable vtable;
};

struct BuilderEntity__Fields {
  struct NPCEntity__Fields _;
  struct MoonAnimation * IdleAnimationLoop;
  struct SerializedBooleanUberState * Introduced;
  struct CheckpointFunctionality ProjectPurchasedCheckpoint;
  struct MoonTimeline * DefaultCurrentProjectTimeline;
  struct MessageProvider * DefaultFinishedProjectMessage;
  bool PurchasedProject;
};
struct BuilderEntity {
  struct BuilderEntity__Class *klass;
  struct MonitorData *monitor;
  struct BuilderEntity__Fields fields;
};
struct BuilderEntity__VTable {
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
  VirtualInvokeData get_InteractableType;
  VirtualInvokeData CanInteractWithCharacter;
  VirtualInvokeData OnInteractionStart;
  VirtualInvokeData InteractionUpdate;
  VirtualInvokeData OnInteractionEnd;
  VirtualInvokeData ShouldFinishInteraction;
  VirtualInvokeData get_ActivationMode;
  VirtualInvokeData get_ActivationButton;
  VirtualInvokeData get_InteractionMessageHint;
  VirtualInvokeData get_DialogActorName;
  VirtualInvokeData get_DialogActorAnimator;
  VirtualInvokeData get_DialogActorPosition;
  VirtualInvokeData get_InteractionActorName;
  VirtualInvokeData get_InteractionActorAnimator;
  VirtualInvokeData get_InteractionActorPosition;
  VirtualInvokeData get_CanEffectivelyStartInteraction;
  VirtualInvokeData get_ActivationButton_1;
  VirtualInvokeData get_DialogActorName_1;
  VirtualInvokeData get_InteractionActorName_1;
  VirtualInvokeData UpdateAnimParameter;
  VirtualInvokeData CanInteractWithCharacter_1;
  VirtualInvokeData OnInteractionStart_1;
  VirtualInvokeData InteractionUpdate_1;
  VirtualInvokeData OnInteractionEnd_1;
  VirtualInvokeData get_ActivationMode_1;
  VirtualInvokeData SetInteractionCameraOffsetZone;
};
struct BuilderEntity__StaticFields {
  struct BuilderEntity * _Instance_k__BackingField;
};
struct BuilderEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderEntity__VTable vtable;
};

struct BuilderEntity_c {
  struct BuilderEntity_c__Class *klass;
  struct MonitorData *monitor;
};
struct BuilderEntity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuilderEntity_c__StaticFields {
  struct BuilderEntity_c * __9;
  struct Func_1_Boolean_ * __9__20_0;
};
struct BuilderEntity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderEntity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderEntity_c__VTable vtable;
};

struct BuilderIntroNode__Fields {
  struct TimelineNode__Fields _;
  struct BuilderIdle * BuilderIdle;
  struct BuilderEntity * BuilderEntity;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * StandingIntro;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * SittingIntro;
};
struct BuilderIntroNode {
  struct BuilderIntroNode__Class *klass;
  struct MonitorData *monitor;
  struct BuilderIntroNode__Fields fields;
};
struct BuilderIdle__Fields {
  struct EntityLocomotionTask__Fields _;
  struct MoonTimeline * IdleOnGroundTimeline;
  struct MoonTimeline * IdleInTreeTimeline;
  struct EventTriggerAnimator * NoLongerInTreeTriggerEvent;
  bool m_onGround;
  struct MoonTimeline * m_currentTimeline;
};
struct BuilderIdle {
  struct BuilderIdle__Class *klass;
  struct MonitorData *monitor;
  struct BuilderIdle__Fields fields;
};
struct BuilderIdle__VTable {
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
struct BuilderIdle__StaticFields {
};
struct BuilderIdle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderIdle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderIdle__VTable vtable;
};
struct BuilderIntroNode__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Initialize;
  VirtualInvokeData get_Actor;
  VirtualInvokeData get_Transitions;
  VirtualInvokeData get_Decorators;
  VirtualInvokeData get_InteractionNodeStatus;
  VirtualInvokeData get_InteractionSettings;
  VirtualInvokeData get_HasInputTransitions;
  VirtualInvokeData UpdateState;
  VirtualInvokeData OnEnter;
  VirtualInvokeData OnExit;
  VirtualInvokeData GetStateId;
  VirtualInvokeData get_OnActivated;
  VirtualInvokeData set_OnActivated;
  VirtualInvokeData get_OnFinished;
  VirtualInvokeData set_OnFinished;
  VirtualInvokeData Initialize_1;
  VirtualInvokeData UpdateState_1;
  VirtualInvokeData OnEnter_1;
  VirtualInvokeData OnExit_1;
};
struct BuilderIntroNode__StaticFields {
};
struct BuilderIntroNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderIntroNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderIntroNode__VTable vtable;
};

struct NPCEntityPlaceholder_NPCInteractionSettings {
  bool OverrideAnchorSetup;
  enum NPCAnchorConfiguration__Enum AnchorSetup;
  bool OverridePlayerAnchors;
  struct Vector2 PlayerAnchorLeft;
  struct Vector2 PlayerAnchorRight;
  bool OverrideInteractionSetup;
  float InteractionRadius;
  struct Vector2 InteractionOffset;
  bool OverrideInteractionCameraSettings;
  struct Vector3 NpcCameraTargetLeft;
  struct Vector3 NpcCameraTargetRight;
  bool OverrideInteractionCameraShopSettings;
  struct Vector3 ShopNpcCameraTargetLeft;
  struct Vector3 ShopNpcCameraTargetRight;
};
struct NPCEntityPlaceholder_NPCInteractionSettings__Boxed {
  struct NPCEntityPlaceholder_NPCInteractionSettings__Class *klass;
  struct MonitorData *monitor;
  struct NPCEntityPlaceholder_NPCInteractionSettings fields;
};
struct NPCEntityPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  struct MoonReference_1_Moon_InteractionGraph_IInteractionNode_ * Interaction;
  struct QuestNodeSetup * OverrideQuestNodeSetup;
  struct MessageProvider * OverrideInteractionHintMessage;
  bool ApplyRigOffset;
  float RigOffsetZ;
  bool OverrideInteractionSettings;
  struct NPCEntityPlaceholder_NPCInteractionSettings InteractionSettings;
  bool AttachToTransform;
  struct Transform * AttachTransform;
  struct Vector3 AttachAnchor;
};
struct NPCEntityPlaceholder {
  struct NPCEntityPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct NPCEntityPlaceholder__Fields fields;
};
struct BuilderPlaceholder__Fields {
  struct NPCEntityPlaceholder__Fields _;
  struct EventTriggerGameplayAnimator * LookEvent;
  bool m_wasLookingLeft;
  bool m_hadInstance;
};
struct BuilderPlaceholder {
  struct BuilderPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct BuilderPlaceholder__Fields fields;
};
struct QuestNodeSetup__Fields {
  struct ScriptableObject__Fields _;
  struct List_1_QuestNodeSetup_QuestInteractionSetup_ * QuestInteractionSets;
};
struct QuestNodeSetup {
  struct QuestNodeSetup__Class *klass;
  struct MonitorData *monitor;
  struct QuestNodeSetup__Fields fields;
};
struct __declspec(align(8)) List_1_QuestNodeSetup_QuestInteractionSetup___Fields {
  struct QuestNodeSetup_QuestInteractionSetup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_QuestNodeSetup_QuestInteractionSetup_ {
  struct List_1_QuestNodeSetup_QuestInteractionSetup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_QuestNodeSetup_QuestInteractionSetup___Fields fields;
};
struct __declspec(align(8)) QuestNodeSetup_QuestInteractionSetup__Fields {
  struct SerializedIntUberState * QuestUberState;
  struct SceneMetaData * SceneMetaData;
  struct List_1_QuestNodeSetup_QuestInteractionSet_ * InteractionSets;
};
struct QuestNodeSetup_QuestInteractionSetup {
  struct QuestNodeSetup_QuestInteractionSetup__Class *klass;
  struct MonitorData *monitor;
  struct QuestNodeSetup_QuestInteractionSetup__Fields fields;
};
struct QuestNodeSetup_QuestInteractionSetup__Array {
  struct QuestNodeSetup_QuestInteractionSetup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct QuestNodeSetup_QuestInteractionSetup * vector[32];
};
struct __declspec(align(8)) List_1_QuestNodeSetup_QuestInteractionSet___Fields {
  struct QuestNodeSetup_QuestInteractionSet__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_QuestNodeSetup_QuestInteractionSet_ {
  struct List_1_QuestNodeSetup_QuestInteractionSet___Class *klass;
  struct MonitorData *monitor;
  struct List_1_QuestNodeSetup_QuestInteractionSet___Fields fields;
};
struct __declspec(align(8)) QuestNodeSetup_QuestInteractionSet__Fields {
  int32_t QuestUberStateValue;
  struct List_1_QuestNodeSetup_QuestInteraction_ * Interactions;
};
struct QuestNodeSetup_QuestInteractionSet {
  struct QuestNodeSetup_QuestInteractionSet__Class *klass;
  struct MonitorData *monitor;
  struct QuestNodeSetup_QuestInteractionSet__Fields fields;
};
struct QuestNodeSetup_QuestInteractionSet__Array {
  struct QuestNodeSetup_QuestInteractionSet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct QuestNodeSetup_QuestInteractionSet * vector[32];
};
struct __declspec(align(8)) List_1_QuestNodeSetup_QuestInteraction___Fields {
  struct QuestNodeSetup_QuestInteraction__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_QuestNodeSetup_QuestInteraction_ {
  struct List_1_QuestNodeSetup_QuestInteraction___Class *klass;
  struct MonitorData *monitor;
  struct List_1_QuestNodeSetup_QuestInteraction___Fields fields;
};
enum QuestNodeSetup_RewardType__Enum : int32_t {
  QuestNodeSetup_RewardType__Enum_None = 0,
  QuestNodeSetup_RewardType__Enum_CompletedReward = 1,
  QuestNodeSetup_RewardType__Enum_WelcomeReward = 2,
};
struct QuestNodeSetup_RewardType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum QuestNodeSetup_RewardType__Enum value;
};
struct __declspec(align(8)) QuestNodeSetup_QuestInteraction__Fields {
  bool LocationIndependent;
  bool TopPriority;
  bool InvertCondition;
  struct ConditionUberState * Condition;
  struct MessageProvider * MessageProvider;
  bool IncrementQuestUberState;
  bool Autocontinue;
  struct DesiredUberStateComposite * StateChange;
  enum QuestNodeSetup_RewardType__Enum Reward;
};
struct QuestNodeSetup_QuestInteraction {
  struct QuestNodeSetup_QuestInteraction__Class *klass;
  struct MonitorData *monitor;
  struct QuestNodeSetup_QuestInteraction__Fields fields;
};
struct QuestNodeSetup_QuestInteraction__Array {
  struct QuestNodeSetup_QuestInteraction__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct QuestNodeSetup_QuestInteraction * vector[32];
};
struct IEnumerator_1_QuestNodeSetup_QuestInteraction_ {
  struct IEnumerator_1_QuestNodeSetup_QuestInteraction___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet_ {
  struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup_ {
  struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___Class *klass;
  struct MonitorData *monitor;
};
struct QuestNodeSetup_QuestInteraction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QuestNodeSetup_QuestInteraction__StaticFields {
};
struct QuestNodeSetup_QuestInteraction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QuestNodeSetup_QuestInteraction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QuestNodeSetup_QuestInteraction__VTable vtable;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteraction___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteraction___StaticFields {
};
struct IEnumerator_1_QuestNodeSetup_QuestInteraction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_QuestNodeSetup_QuestInteraction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_QuestNodeSetup_QuestInteraction___VTable vtable;
};
struct List_1_QuestNodeSetup_QuestInteraction___VTable {
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
struct List_1_QuestNodeSetup_QuestInteraction___StaticFields {
  struct QuestNodeSetup_QuestInteraction__Array * _emptyArray;
};
struct List_1_QuestNodeSetup_QuestInteraction___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_QuestNodeSetup_QuestInteraction___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_QuestNodeSetup_QuestInteraction___VTable vtable;
};
struct QuestNodeSetup_QuestInteractionSet__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QuestNodeSetup_QuestInteractionSet__StaticFields {
};
struct QuestNodeSetup_QuestInteractionSet__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QuestNodeSetup_QuestInteractionSet__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QuestNodeSetup_QuestInteractionSet__VTable vtable;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___StaticFields {
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_QuestNodeSetup_QuestInteractionSet___VTable vtable;
};
struct List_1_QuestNodeSetup_QuestInteractionSet___VTable {
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
struct List_1_QuestNodeSetup_QuestInteractionSet___StaticFields {
  struct QuestNodeSetup_QuestInteractionSet__Array * _emptyArray;
};
struct List_1_QuestNodeSetup_QuestInteractionSet___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_QuestNodeSetup_QuestInteractionSet___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_QuestNodeSetup_QuestInteractionSet___VTable vtable;
};
struct QuestNodeSetup_QuestInteractionSetup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct QuestNodeSetup_QuestInteractionSetup__StaticFields {
};
struct QuestNodeSetup_QuestInteractionSetup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct QuestNodeSetup_QuestInteractionSetup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct QuestNodeSetup_QuestInteractionSetup__VTable vtable;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___StaticFields {
};
struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_QuestNodeSetup_QuestInteractionSetup___VTable vtable;
};
struct List_1_QuestNodeSetup_QuestInteractionSetup___VTable {
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
};}