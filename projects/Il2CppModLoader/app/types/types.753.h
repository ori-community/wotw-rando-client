namespace app {
struct WandererPostIntroductionInteractionBehaviour__StaticFields {
};

struct WandererPostIntroductionInteractionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererPostIntroductionInteractionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererPostIntroductionInteractionBehaviour__VTable vtable;
};

struct WandererPostIntroductionPatrolBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct WandererEntity *m_wandererEntity;
    struct GroundEntityLocomotion *m_locomotion;
    struct WandererTurningBehaviour *m_turningBehaviour;
    struct WandererNPC *m_npc;
};

struct WandererPostIntroductionPatrolBehaviour {
    struct WandererPostIntroductionPatrolBehaviour__Class *klass;
    MonitorData *monitor;
    struct WandererPostIntroductionPatrolBehaviour__Fields fields;
};

struct WandererPostIntroductionPatrolBehaviour__VTable {
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

struct WandererPostIntroductionPatrolBehaviour__StaticFields {
};

struct WandererPostIntroductionPatrolBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererPostIntroductionPatrolBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererPostIntroductionPatrolBehaviour__VTable vtable;
};

struct EnumSelector_1_WandererNPC_State___Fields {
    struct CompositeNode__Fields _;
    struct List_1_WandererNPC_State_ *Options;
};

struct EnumSelector_1_WandererNPC_State_ {
    struct EnumSelector_1_WandererNPC_State___Class *klass;
    MonitorData *monitor;
    struct EnumSelector_1_WandererNPC_State___Fields fields;
};

struct WandererStateSelector__Fields {
    struct EnumSelector_1_WandererNPC_State___Fields _;
};

struct WandererStateSelector {
    struct WandererStateSelector__Class *klass;
    MonitorData *monitor;
    struct WandererStateSelector__Fields fields;
};

struct __declspec(align(8)) List_1_WandererNPC_State___Fields {
    struct WandererNPC_State__Enum__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_WandererNPC_State_ {
    struct List_1_WandererNPC_State___Class *klass;
    MonitorData *monitor;
    struct List_1_WandererNPC_State___Fields fields;
};

struct WandererNPC_State__Enum__Array {
    struct WandererNPC_State__Enum__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    WandererNPC_State__Enum vector[32];
};

struct IEnumerator_1_WandererNPC_State_ {
    struct IEnumerator_1_WandererNPC_State___Class *klass;
    MonitorData *monitor;
};

struct WandererNPC_State__Enum__Array__VTable {
};

struct WandererNPC_State__Enum__Array__StaticFields {
};

struct WandererNPC_State__Enum__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererNPC_State__Enum__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererNPC_State__Enum__Array__VTable vtable;
};

struct IEnumerator_1_WandererNPC_State___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_WandererNPC_State___StaticFields {
};

struct IEnumerator_1_WandererNPC_State___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_WandererNPC_State___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_WandererNPC_State___VTable vtable;
};

struct List_1_WandererNPC_State___VTable {
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

struct List_1_WandererNPC_State___StaticFields {
    struct WandererNPC_State__Enum__Array *_emptyArray;
};

struct List_1_WandererNPC_State___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_WandererNPC_State___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_WandererNPC_State___VTable vtable;
};

struct EnumSelector_1_WandererNPC_State___VTable {
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
    VirtualInvokeData AddChild;
    VirtualInvokeData __unknown;
};

struct EnumSelector_1_WandererNPC_State___StaticFields {
};

struct EnumSelector_1_WandererNPC_State___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EnumSelector_1_WandererNPC_State___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EnumSelector_1_WandererNPC_State___VTable vtable;
};

struct WandererStateSelector__VTable {
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
    VirtualInvokeData AddChild;
    VirtualInvokeData GetEnumValue;
};

struct WandererStateSelector__StaticFields {
};

struct WandererStateSelector__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererStateSelector__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererStateSelector__VTable vtable;
};

struct CartographerIdleBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline *IdleLeft;
    struct MoonTimeline *IdleRight;
    struct MoonTimeline__Array *IdleBreakups;
    struct MoonTimeline__Array *IdleBreakupsLeft;
    float TimeBetweenBreakups;
    float m_breakupTimer;
    struct CartographerEntity *m_cartographerEntity;
    struct MoonTimeline *m_currentTimeline;
    bool m_playingBreakup;
    int32_t m_breakupId;
};

struct CartographerIdleBehaviour {
    struct CartographerIdleBehaviour__Class *klass;
    MonitorData *monitor;
    struct CartographerIdleBehaviour__Fields fields;
};

struct CartographerEntity__Fields {
    struct NPCEntity__Fields _;
    struct MessageProvider *m_lastFlavour;
    struct TalkVariant *m_lastIdleBreakup;
    struct MessageProvider *FirstEncounterMessageProvider;
    struct SerializedBooleanUberState *EncounteredLupo;
    struct GameWorldArea *DefaultArea;
    struct TalkVariant *Purchase;
    struct FloatAnimationParameter *CharacterInteractionSlopeParameter;
    struct TalkVariant *IdleBreakupA;
    struct TalkVariant *IdleBreakupB;
    struct Condition_1 *MapQuestCompletedCondition;
    float MapQuestCompletedMapCostModifier;
};

struct CartographerEntity {
    struct CartographerEntity__Class *klass;
    MonitorData *monitor;
    struct CartographerEntity__Fields fields;
};

struct CartographerEntity__VTable {
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

struct CartographerEntity__StaticFields {
    struct CartographerEntity *_Instance_k__BackingField;
};

struct CartographerEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerEntity__VTable vtable;
};

struct CartographerIdleBehaviour__VTable {
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

struct CartographerIdleBehaviour__StaticFields {
};

struct CartographerIdleBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerIdleBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerIdleBehaviour__VTable vtable;
};

struct CartographerIdleBehaviour_c {
    struct CartographerIdleBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct CartographerIdleBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartographerIdleBehaviour_c__StaticFields {
    struct CartographerIdleBehaviour_c *__9;
    struct Action *__9__14_0;
};

struct CartographerIdleBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerIdleBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerIdleBehaviour_c__VTable vtable;
};

struct CartographerTurningBehaviour__Fields {
    struct BaseLocomotionTurningBehaviour__Fields _;
    float m_targetLookDirectionX;
    struct GroundEntityLocomotion *m_groundLocomotion;
    struct MoonTimeline *RightToLeft;
    struct MoonTimeline *LeftToRight;
    struct CartographerEntity *m_cartographerEntity;
    struct MoonTimeline *m_currentTimeline;
    struct AnimationPlayer *m_currentTimelineAnimation;
    bool m_shouldEnd;
    float m_currentTurningDirection;
};

struct CartographerTurningBehaviour {
    struct CartographerTurningBehaviour__Class *klass;
    MonitorData *monitor;
    struct CartographerTurningBehaviour__Fields fields;
};

struct CartographerTurningBehaviour__VTable {
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

struct CartographerTurningBehaviour__StaticFields {
};

struct CartographerTurningBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerTurningBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerTurningBehaviour__VTable vtable;
};

struct CartographerTurningBehaviour_c {
    struct CartographerTurningBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct CartographerTurningBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct CartographerTurningBehaviour_c__StaticFields {
    struct CartographerTurningBehaviour_c *__9;
    struct Action *__9__21_0;
};

struct CartographerTurningBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct CartographerTurningBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct CartographerTurningBehaviour_c__VTable vtable;
};

struct WandererIdleBehaviour_c {
    struct WandererIdleBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct WandererIdleBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WandererIdleBehaviour_c__StaticFields {
    struct WandererIdleBehaviour_c *__9;
    struct Action *__9__19_0;
};

struct WandererIdleBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererIdleBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererIdleBehaviour_c__VTable vtable;
};

struct WandererMoveBehaviour__Fields {
    struct AsymLocomotionGroundMoveBehaviour__Fields _;
};

struct WandererMoveBehaviour {
    struct WandererMoveBehaviour__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererMoveBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererMoveBehaviour__VTable vtable;
};

struct WandererTurningBehaviour_c {
    struct WandererTurningBehaviour_c__Class *klass;
    MonitorData *monitor;
};

struct WandererTurningBehaviour_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WandererTurningBehaviour_c__StaticFields {
    struct WandererTurningBehaviour_c *__9;
    struct Action *__9__23_0;
};

struct WandererTurningBehaviour_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererTurningBehaviour_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererTurningBehaviour_c__VTable vtable;
};

struct TokkInteractionSpotCondition__Fields {
    struct Condition_1__Fields _;
    TokkInteractionSpot__Enum DesiredSpot;
    
    bool Inverse;
};

struct TokkInteractionSpotCondition {
    struct TokkInteractionSpotCondition__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TokkInteractionSpotCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TokkInteractionSpotCondition__VTable vtable;
};

enum class WandererEntity_WandererAnimationState__Enum : int32_t {
    Sad = 0x00000000,
    Happy = 0x00000001,
};

struct WandererEntity_WandererAnimationState__Enum__Boxed {
    struct WandererEntity_WandererAnimationState__Enum__Class *klass;
    MonitorData *monitor;
    WandererEntity_WandererAnimationState__Enum value;
    
};

struct WandererEntity_WandererAnimationState__Enum__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CompareTo;
    VirtualInvokeData ToString_1;
    VirtualInvokeData GetTypeCode;
    VirtualInvokeData System_IConvertible_ToBoolean;
    VirtualInvokeData System_IConvertible_ToChar;
    VirtualInvokeData System_IConvertible_ToSByte;
    VirtualInvokeData System_IConvertible_ToByte;
    VirtualInvokeData System_IConvertible_ToInt16;
    VirtualInvokeData System_IConvertible_ToUInt16;
    VirtualInvokeData System_IConvertible_ToInt32;
    VirtualInvokeData System_IConvertible_ToUInt32;
    VirtualInvokeData System_IConvertible_ToInt64;
    VirtualInvokeData System_IConvertible_ToUInt64;
    VirtualInvokeData System_IConvertible_ToSingle;
    VirtualInvokeData System_IConvertible_ToDouble;
    VirtualInvokeData System_IConvertible_ToDecimal;
    VirtualInvokeData System_IConvertible_ToDateTime;
    VirtualInvokeData ToString_2;
    VirtualInvokeData System_IConvertible_ToType;
};

struct WandererEntity_WandererAnimationState__Enum__StaticFields {
};

struct WandererEntity_WandererAnimationState__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererEntity_WandererAnimationState__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererEntity_WandererAnimationState__Enum__VTable vtable;
};

struct WandererNPC_c {
    struct WandererNPC_c__Class *klass;
    MonitorData *monitor;
};

struct WandererNPC_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct WandererNPC_c__StaticFields {
    struct WandererNPC_c *__9;
    struct DelayedAction_Action *__9__79_0;
    struct Action *__9__93_0;
    struct Action *__9__103_0;
    struct Action *__9__126_0;
    struct Func_1_Boolean_ *__9__126_2;
};

struct WandererNPC_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererNPC_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererNPC_c__VTable vtable;
};

struct WandererPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
    WandererEntity_TokkTurningPattern__Enum TurningPattern;
    
};

struct WandererPlaceholder {
    struct WandererPlaceholder__Class *klass;
    MonitorData *monitor;
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
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WandererPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WandererPlaceholder__VTable vtable;
};

struct BuilderIdle_c {
    struct BuilderIdle_c__Class *klass;
    MonitorData *monitor;
};

struct BuilderIdle_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct BuilderIdle_c__StaticFields {
    struct BuilderIdle_c *__9;
    struct Action *__9__14_0;
    struct Action *__9__16_0;
};

struct BuilderIdle_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct BuilderIdle_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct BuilderIdle_c__VTable vtable;
};

struct WeaponMasterEntity__Fields {
    struct NPCEntity__Fields _;
    struct Condition_1 *StartFromTree;
    bool m_onGround;
    struct EventTriggerAnimator__Array *NoLongerInTreeTriggerEvent;
};

struct WeaponMasterEntity {
    struct WeaponMasterEntity__Class *klass;
    MonitorData *monitor;
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

}
