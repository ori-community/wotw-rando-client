namespace app {

struct WandererIdleBehaviour_c {
  struct WandererIdleBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct WandererIdleBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WandererIdleBehaviour_c__StaticFields {
  struct WandererIdleBehaviour_c * __9;
  struct Action * __9__19_0;
};
struct WandererIdleBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WandererIdleBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WandererIdleBehaviour_c__VTable vtable;
};

struct WandererMoveBehaviour__Fields {
  struct AsymLocomotionGroundMoveBehaviour__Fields _;
};
struct WandererMoveBehaviour {
  struct WandererMoveBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct WandererMoveBehaviour__Fields fields;
};
struct WandererMoveBehaviour__VTable {
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
  VirtualInvokeData get_EffectiveMinSpeed;
  VirtualInvokeData get_EffectiveMaxSpeed;
  VirtualInvokeData get_IsAnimationPlaying;
  VirtualInvokeData DeltaToPoint;
  VirtualInvokeData PlayAnimationIfNotPlaying;
  VirtualInvokeData SetAnimationSpeed;
  VirtualInvokeData PlayAnimation;
  VirtualInvokeData OnMovementStoppedPlaying;
  VirtualInvokeData OnTraversalSpeedChange;
};
struct WandererMoveBehaviour__StaticFields {
};
struct WandererMoveBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WandererMoveBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WandererMoveBehaviour__VTable vtable;
};

struct WandererTurningBehaviour_c {
  struct WandererTurningBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct WandererTurningBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WandererTurningBehaviour_c__StaticFields {
  struct WandererTurningBehaviour_c * __9;
  struct Action * __9__23_0;
};
struct WandererTurningBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WandererTurningBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WandererTurningBehaviour_c__VTable vtable;
};

struct TokkInteractionSpotCondition__Fields {
  struct Condition_1__Fields _;
  enum TokkInteractionSpot__Enum DesiredSpot;
  bool Inverse;
};
struct TokkInteractionSpotCondition {
  struct TokkInteractionSpotCondition__Class *klass;
  struct MonitorData *monitor;
  struct TokkInteractionSpotCondition__Fields fields;
};
struct TokkInteractionSpotCondition__VTable {
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
struct TokkInteractionSpotCondition__StaticFields {
};
struct TokkInteractionSpotCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TokkInteractionSpotCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TokkInteractionSpotCondition__VTable vtable;
};

enum WandererEntity_WandererAnimationState__Enum : int32_t {
  WandererEntity_WandererAnimationState__Enum_Sad = 0,
  WandererEntity_WandererAnimationState__Enum_Happy = 1,
};
struct WandererEntity_WandererAnimationState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WandererEntity_WandererAnimationState__Enum value;
};

struct WandererNPC_c {
  struct WandererNPC_c__Class *klass;
  struct MonitorData *monitor;
};
struct WandererNPC_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WandererNPC_c__StaticFields {
  struct WandererNPC_c * __9;
  struct DelayedAction_Action * __9__79_0;
  struct Action * __9__93_0;
  struct Action * __9__103_0;
  struct Action * __9__126_0;
  struct Func_1_Boolean_ * __9__126_2;
};
struct WandererNPC_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WandererNPC_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WandererNPC_c__VTable vtable;
};

struct WandererPlaceholder__Fields {
  struct NPCEntityPlaceholder__Fields _;
  enum WandererEntity_TokkTurningPattern__Enum TurningPattern;
};
struct WandererPlaceholder {
  struct WandererPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct WandererPlaceholder__Fields fields;
};
struct WandererPlaceholder__VTable {
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
struct WandererPlaceholder__StaticFields {
};
struct WandererPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WandererPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WandererPlaceholder__VTable vtable;
};

struct BuilderIdle_c {
  struct BuilderIdle_c__Class *klass;
  struct MonitorData *monitor;
};
struct BuilderIdle_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuilderIdle_c__StaticFields {
  struct BuilderIdle_c * __9;
  struct Action * __9__14_0;
  struct Action * __9__16_0;
};
struct BuilderIdle_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderIdle_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderIdle_c__VTable vtable;
};

struct WeaponMasterEntity__Fields {
  struct NPCEntity__Fields _;
  struct Condition_1 * StartFromTree;
  bool m_onGround;
  struct EventTriggerAnimator__Array * NoLongerInTreeTriggerEvent;
};
struct WeaponMasterEntity {
  struct WeaponMasterEntity__Class *klass;
  struct MonitorData *monitor;
  struct WeaponMasterEntity__Fields fields;
};
struct WeaponMasterEntity__VTable {
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
struct WeaponMasterEntity__StaticFields {
};
struct WeaponMasterEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponMasterEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponMasterEntity__VTable vtable;
};

struct WeaponMasterIdle__Fields {
  struct EntityLocomotionTask__Fields _;
  struct MoonTimeline * IdleOnGroundTimeline;
  struct MoonTimeline * IdleInTreeTimeline;
  struct EventTriggerAnimator__Array * NoLongerInTreeTriggerEvent;
  struct MoonTimeline * m_currentTimeline;
};
struct WeaponMasterIdle {
  struct WeaponMasterIdle__Class *klass;
  struct MonitorData *monitor;
  struct WeaponMasterIdle__Fields fields;
};
struct WeaponMasterIdle__VTable {
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
struct WeaponMasterIdle__StaticFields {
};
struct WeaponMasterIdle__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponMasterIdle__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponMasterIdle__VTable vtable;
};

struct WeaponMasterIdle_c {
  struct WeaponMasterIdle_c__Class *klass;
  struct MonitorData *monitor;
};
struct WeaponMasterIdle_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WeaponMasterIdle_c__StaticFields {
  struct WeaponMasterIdle_c * __9;
  struct Action * __9__11_0;
  struct Action * __9__13_0;
};
struct WeaponMasterIdle_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponMasterIdle_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponMasterIdle_c__VTable vtable;
};

struct WeaponMasterIntroNode__Fields {
  struct TimelineNode__Fields _;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * InTreeIntro;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * OnGroundIntro;
};
struct WeaponMasterIntroNode {
  struct WeaponMasterIntroNode__Class *klass;
  struct MonitorData *monitor;
  struct WeaponMasterIntroNode__Fields fields;
};
struct WeaponMasterIntroNode__VTable {
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
struct WeaponMasterIntroNode__StaticFields {
};
struct WeaponMasterIntroNode__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponMasterIntroNode__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponMasterIntroNode__VTable vtable;
};

struct WeaponMasterPlaceholder__Fields {
  struct NPCEntityPlaceholder__Fields _;
  struct MoonReference_1_ICondition_ * ShouldSpawnCondition;
  bool OverrideIdleVariants;
  struct TalkVariant * IdleVariantA;
  struct TalkVariant * IdleVariantB;
  bool OverrideTalkVariants;
  struct TalkVariant * TalkVariantA;
  struct TalkVariant * TalkVariantB;
  struct ICondition * m_resolvedCondition;
};
struct WeaponMasterPlaceholder {
  struct WeaponMasterPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct WeaponMasterPlaceholder__Fields fields;
};
struct WeaponMasterPlaceholder__VTable {
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
struct WeaponMasterPlaceholder__StaticFields {
};
struct WeaponMasterPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeaponMasterPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeaponMasterPlaceholder__VTable vtable;
};

struct WispTrigger__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * m_message;
  struct Vector3 Offset;
  struct MoonReference_1_IUberState_ * m_state;
  struct DynamicDataResolver * m_dataResolver;
  struct Transform * WispObject;
  struct Transform * FollowedTransform;
  float Speed;
  struct MoonAnimator * m_wisp;
  struct MoonTimeline * m_timeline;
};
struct WispTrigger {
  struct WispTrigger__Class *klass;
  struct MonitorData *monitor;
  struct WispTrigger__Fields fields;
};
struct WispTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData OnFixedUpdate;
};
struct WispTrigger__StaticFields {
};
struct WispTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WispTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WispTrigger__VTable vtable;
};

struct AchievementMenuItem__Fields {
  struct MonoBehaviour__Fields _;
};
struct AchievementMenuItem {
  struct AchievementMenuItem__Class *klass;
  struct MonitorData *monitor;
  struct AchievementMenuItem__Fields fields;
};
struct AchievementMenuItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementMenuItem__StaticFields {
};
struct AchievementMenuItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementMenuItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementMenuItem__VTable vtable;
};

struct AchievementScreen__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * LockedAchievementPrefab;
  struct GameObject * SecretAchievementPrefab;
  struct GameObject * EarntAchievementPrefab;
  struct Rect Area;
  int32_t Columns;
};
struct AchievementScreen {
  struct AchievementScreen__Class *klass;
  struct MonitorData *monitor;
  struct AchievementScreen__Fields fields;
};
struct AchievementScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementScreen__StaticFields {
};
struct AchievementScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementScreen__VTable vtable;
};

struct AchievementDatabase__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_AchievementAsset_ * m_achievements;
};
struct AchievementDatabase {
  struct AchievementDatabase__Class *klass;
  struct MonitorData *monitor;
  struct AchievementDatabase__Fields fields;
};
struct __declspec(align(8)) List_1_AchievementAsset___Fields {
  struct AchievementAsset__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AchievementAsset_ {
  struct List_1_AchievementAsset___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AchievementAsset___Fields fields;
};
struct AchievementAsset__Array {
  struct AchievementAsset__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AchievementAsset * vector[32];
};
struct IEnumerator_1_AchievementAsset_ {
  struct IEnumerator_1_AchievementAsset___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) ReadOnlyCollection_1_AchievementAsset___Fields {
  struct IList_1_AchievementAsset_ * list;
  struct Object * _syncRoot;
};
struct ReadOnlyCollection_1_AchievementAsset_ {
  struct ReadOnlyCollection_1_AchievementAsset___Class *klass;
  struct MonitorData *monitor;
  struct ReadOnlyCollection_1_AchievementAsset___Fields fields;
};
struct IList_1_AchievementAsset_ {
  struct IList_1_AchievementAsset___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AchievementAsset___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AchievementAsset___StaticFields {
};
struct IEnumerator_1_AchievementAsset___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AchievementAsset___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AchievementAsset___VTable vtable;
};
struct List_1_AchievementAsset___VTable {
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
struct List_1_AchievementAsset___StaticFields {
  struct AchievementAsset__Array * _emptyArray;
};
struct List_1_AchievementAsset___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AchievementAsset___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AchievementAsset___VTable vtable;
};
struct AchievementDatabase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementDatabase__StaticFields {
};
struct AchievementDatabase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementDatabase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementDatabase__VTable vtable;
};
struct IList_1_AchievementAsset___VTable {
  VirtualInvokeData get_Item;
  VirtualInvokeData set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData Insert;
  VirtualInvokeData RemoveAt;
};
struct IList_1_AchievementAsset___StaticFields {
};
struct IList_1_AchievementAsset___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IList_1_AchievementAsset___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IList_1_AchievementAsset___VTable vtable;
};
struct ReadOnlyCollection_1_AchievementAsset___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IList_T__get_Item;
  VirtualInvokeData System_Collections_Generic_IList_T__set_Item;
  VirtualInvokeData IndexOf;
  VirtualInvokeData System_Collections_Generic_IList_T__Insert;
  VirtualInvokeData System_Collections_Generic_IList_T__RemoveAt;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_T__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_T__Remove;
  VirtualInvokeData GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_IList_get_Item;
  VirtualInvokeData System_Collections_IList_set_Item;
  VirtualInvokeData System_Collections_IList_Add;
  VirtualInvokeData System_Collections_IList_Contains;
  VirtualInvokeData System_Collections_IList_Clear;
  VirtualInvokeData System_Collections_IList_get_IsReadOnly;
  VirtualInvokeData System_Collections_IList_get_IsFixedSize;
  VirtualInvokeData System_Collections_IList_IndexOf;
  VirtualInvokeData System_Collections_IList_Insert;
  VirtualInvokeData System_Collections_IList_Remove;
  VirtualInvokeData System_Collections_IList_RemoveAt;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Item;
  VirtualInvokeData get_Count_2;
};
struct ReadOnlyCollection_1_AchievementAsset___StaticFields {
};
struct ReadOnlyCollection_1_AchievementAsset___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReadOnlyCollection_1_AchievementAsset___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReadOnlyCollection_1_AchievementAsset___VTable vtable;
};

struct CleverMenuOptionsList__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Item;
  float Spacing;
  struct Transform * Origin;
  struct List_1_UnityEngine_GameObject_ * m_items;
  struct Transform * ScrollPivot;
  bool Scrollable;
  int32_t OnScreenLimit;
  float m_scrollPosition;
  float m_scrollPositionTarget;
  float ScrollingSpeed;
  struct CleverMenuItemSelectionManager * m_selectionManager;
};
struct CleverMenuOptionsList {
  struct CleverMenuOptionsList__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuOptionsList__Fields fields;
};
struct AlphabetOptions__Fields {
  struct CleverMenuOptionsList__Fields _;
  struct String * m_currentlySelected;
  uint16_t m_firstFilter;
  uint16_t m_secondFilter;
  struct Boolean__Array * m_filtering;
};
struct AlphabetOptions {
  struct AlphabetOptions__Class *klass;
  struct MonitorData *monitor;
  struct AlphabetOptions__Fields fields;
};
struct CleverMenuOptionsList__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct CleverMenuOptionsList__StaticFields {
};
struct CleverMenuOptionsList__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverMenuOptionsList__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverMenuOptionsList__VTable vtable;
};
struct AlphabetOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct AlphabetOptions__StaticFields {
};
struct AlphabetOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AlphabetOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AlphabetOptions__VTable vtable;
};

struct __declspec(align(8)) AlphabetOptions_c_DisplayClass11_0__Fields {
  struct String * s;
  struct AlphabetOptions * __4__this;
};
struct AlphabetOptions_c_DisplayClass11_0 {
  struct AlphabetOptions_c_DisplayClass11_0__Class *klass;
  struct MonitorData *monitor;
  struct AlphabetOptions_c_DisplayClass11_0__Fields fields;
};
struct AlphabetOptions_c_DisplayClass11_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AlphabetOptions_c_DisplayClass11_0__StaticFields {
};
struct AlphabetOptions_c_DisplayClass11_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AlphabetOptions_c_DisplayClass11_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AlphabetOptions_c_DisplayClass11_0__VTable vtable;
};

struct AudioAPIOptions__Fields {
  struct CleverMenuOptionsList__Fields _;
  struct CleverMenuItemSelectionManager * SelectionManager;
  struct MessageProvider * Wasapi;
  struct MessageProvider * XAudio2;
  struct MessageProvider * DirectSound;
  struct MessageProvider * Default;
  struct GameObject * PromptPrefab;
};
struct AudioAPIOptions {
  struct AudioAPIOptions__Class *klass;
  struct MonitorData *monitor;
  struct AudioAPIOptions__Fields fields;
};
struct AudioAPIOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct AudioAPIOptions__StaticFields {
};
struct AudioAPIOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioAPIOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioAPIOptions__VTable vtable;
};}