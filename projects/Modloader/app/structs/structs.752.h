namespace app {
    struct WandererEntity__Fields {
        struct NPCEntity__Fields _;
        struct MessageProvider* m_lastFlavour;
        struct TalkVariant* m_lastIdleBreakup;
        TokkInteractionSpot__Enum InteractionSpot;

        WandererEntity_TokkTurningPattern__Enum TurningPattern;

        float DefaultDirection;
        struct MoonTimeline* SadToHappyRight;
        struct MoonTimeline* SadToHappyLeft;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererIdleBehaviour* m_idleBehaviour;
        struct TalkVariant* SadTalkVariantA;
        struct TalkVariant* SadTalkVariantB;
        struct TalkVariant* SadIdleBreakupA;
        struct TalkVariant* SadIdleBreakupB;
        struct TalkVariant* IdleBreakupA;
        struct TalkVariant* IdleBreakupB;
        struct TalkVariant* IdleA;
        struct TalkVariant* PresentIn;
        struct TalkVariant* PresentIdle;
        struct TalkVariant* PresentOut;
        struct SerializedIntUberState* NeedleQuestState;
        struct SerializedIntUberState* KeystoneQuestState;
        struct SerializedByteUberState* TokkState;
        struct EventTriggerAnimator* m_showRewardTrigger;
        struct EventTriggerAnimator* m_throwRewardTrigger;
        struct EventTriggerAnimator* m_collectRewardTrigger;
    };

    struct WandererEntity {
        struct WandererEntity__Class* klass;
        MonitorData* monitor;
        struct WandererEntity__Fields fields;
    };

    struct WandererIdleBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* SadIdleLeft;
        struct MoonTimeline* SadIdleRight;
        struct MoonTimeline* IdleLeft;
        struct MoonTimeline* IdleRight;
        struct MoonTimeline__Array* IdleBreakups;
        struct MoonTimeline__Array* IdleBreakupsLeft;
        struct MoonTimeline__Array* SadIdleBreakups;
        struct MoonTimeline__Array* SadIdleBreakupsLeft;
        float TimeBetweenBreakups;
        float m_breakupTimer;
        struct WandererEntity* m_wandererEntity;
        struct MoonTimeline* m_currentTimeline;
        struct MoonTimeline* m_lastBaseIdle;
        bool m_playingBreakup;
        int32_t m_breakupId;
    };

    struct WandererIdleBehaviour {
        struct WandererIdleBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererIdleBehaviour__Fields fields;
    };

    struct WandererTurningBehaviour__Fields {
        struct BaseLocomotionTurningBehaviour__Fields _;
        float m_targetLookDirectionX;
        struct GroundEntityLocomotion* m_groundLocomotion;
        struct MoonTimeline* RightToLeft;
        struct MoonTimeline* LeftToRight;
        struct MoonTimeline* SadRightToLeft;
        struct MoonTimeline* SadLeftToRight;
        struct WandererEntity* m_wandererEntity;
        struct MoonTimeline* m_currentTimeline;
        struct AnimationPlayer* m_currentTimelineAnimation;
        bool m_shouldEnd;
        float m_currentTurningDirection;
    };

    struct WandererTurningBehaviour {
        struct WandererTurningBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererTurningBehaviour__Fields fields;
    };

    enum class WandererNPC_State__Enum : int32_t {
        IdlePreDesertQuestIntroduction = 0x00000000,
        Interaction = 0x00000001,
        IdlePostDesertQuestIntroduction = 0x00000002,
        PostDesertQuestIntroductionInteraction = 0x00000003,
        DesertQuestCompletedInteraction = 0x00000004,
        IdlePostDesertQuestCompleted = 0x00000005,
        PostDesertQuestCompletedInteraction = 0x00000006,
        HandReward = 0x00000007,
        WaitForFinishTurning = 0x00000008,
    };

    struct WandererNPC_State__Enum__Boxed {
        struct WandererNPC_State__Enum__Class* klass;
        MonitorData* monitor;
        WandererNPC_State__Enum value;
    };

    struct WandererNPC__Fields {
        struct BaseNPC__Fields _;
        struct DynamicDataResolver* m_dataResolver;
        float InteractionRadius;
        float IKRadius;
        float GreetRadius;
        struct Transform* OriLeft;
        struct Transform* OriRight;
        struct Transform* OriItemLeft;
        struct Transform* OriItemRight;
        struct MessageProvider* InteractionHintMessage;
        struct AnimationPostprocess* HeadIKPostprocess;
        struct VectorAnimationParameter* HeadTarget;
        struct List_1_Moon_Timeline_MoonTimeline_* SadGreetingRight;
        struct List_1_Moon_Timeline_MoonTimeline_* SadGreetingLeft;
        struct List_1_Moon_Timeline_MoonTimeline_* GreetingRight;
        struct List_1_Moon_Timeline_MoonTimeline_* GreetingLeft;
        struct List_1_WandererNPC_InteractionLine_* DesertQuestIntroductionLines;
        struct List_1_WandererNPC_InteractionLine_* DesertQuestPostIntroductionLines;
        struct List_1_WandererNPC_InteractionLine_* DesertQuestCompleteLines;
        struct List_1_WandererNPC_InteractionLine_* DesertQuestPostCompleteLines;
        struct MoonTimeline* m_currentTalking;
        struct InteractionSettings* QuestCompleteInteraction;
        struct CameraOffsetZone* InteractionCameraOffsetZone;
        struct GameObject* ConfirmationOverlayPrefab;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererTurningBehaviour* m_turning;
        struct WandererEntity* m_entity;
        struct AimIK* m_ik;
        float m_timeInInteractionZone;
        float OriPositionMoveRate;
        struct BlendAnimation* OriMoveToPositionAnimation;
        struct FloatAnimationParameter* Speed;
        struct MoonAnimation* OriHandItemAnimationStart;
        struct MoonAnimation* OriHandItemAnimationLoop;
        struct MoonAnimation* OriHandItemAnimationEnd;
        struct MoonAnimation* OriReceiveItemAnimationStart;
        struct MoonAnimation* OriReceiveItemAnimationLoop;
        struct MoonAnimation* OriReceiveItemAnimationEnd;
        WandererNPC_State__Enum m_currentState;

        WandererNPC_State__Enum m_lastIdleState;

        float m_currentStateTime;
        bool m_moveOri;
        struct Vector2 m_oriInteractionPosition;
        struct MessageBox* m_interactionHintMessageBox;
        struct Quest* Quest;
        float m_moveTime;
        struct Vector3 m_initPos;
        float MinTimeBetweenGreetings;
        float m_timeSinceLastGreeting;
        bool m_hasLostSightOfOri;
        int32_t m_greetingIndex;
        struct Vector3 SmoothedIKPosition;
        float TurnIKTime;
        float SmoothIKTime;
        float m_maxIKWeight;
        float MaxBackIKDist;
        bool m_thrownReward;
        bool m_pickupWindowPopped;
        int32_t m_lineId;
        struct EventTriggerAnimator* m_deactivateQuestItem;
        struct MessageProvider* GiveRewardAfterMessageProvider;
        struct MoonTimeline* TakeItemTimeline;
        struct MoonTimeline* TakeItemTimelineLeft;
        int32_t m_handOutLine;
        struct MoonTimeline* HandItem;
        struct MoonTimeline* HandItemLeft;
        struct MoonTimeline* m_currentTimeline;
        float MaxPickupTime;
        float m_pickupTimer;
        struct GameObject* IronNeedlePrefab;
        struct GameObject* m_ironNeedle;
        struct GameObject* RewardPrefab;
        struct Transform* RewardParent;
        struct Transform* RewardParentLeft;
        struct Projectile* m_reward;
        struct EventTriggerAnimator* m_activateReward;
        struct EventTriggerAnimator* m_throwReward;
        bool m_rewardTaken;
    };

    struct WandererNPC {
        struct WandererNPC__Class* klass;
        MonitorData* monitor;
        struct WandererNPC__Fields fields;
    };

    struct __declspec(align(8)) List_1_WandererNPC_InteractionLine___Fields {
        struct WandererNPC_InteractionLine__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_WandererNPC_InteractionLine_ {
        struct List_1_WandererNPC_InteractionLine___Class* klass;
        MonitorData* monitor;
        struct List_1_WandererNPC_InteractionLine___Fields fields;
    };

    struct __declspec(align(8)) WandererNPC_InteractionLine__Fields {
        struct MessageProvider* Line;
        struct MoonTimeline* TimelineRight;
        struct MoonTimeline* TimelineLeft;
    };

    struct WandererNPC_InteractionLine {
        struct WandererNPC_InteractionLine__Class* klass;
        MonitorData* monitor;
        struct WandererNPC_InteractionLine__Fields fields;
    };

    struct WandererNPC_InteractionLine__Array {
        struct WandererNPC_InteractionLine__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WandererNPC_InteractionLine* vector[32];
    };

    struct IEnumerator_1_WandererNPC_InteractionLine_ {
        struct IEnumerator_1_WandererNPC_InteractionLine___Class* klass;
        MonitorData* monitor;
    };

    struct TokkInteractionSpot__Enum__VTable {
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

    struct TokkInteractionSpot__Enum__StaticFields {
    };

    struct TokkInteractionSpot__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TokkInteractionSpot__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TokkInteractionSpot__Enum__VTable vtable;
    };

    struct WandererEntity_TokkTurningPattern__Enum__VTable {
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

    struct WandererEntity_TokkTurningPattern__Enum__StaticFields {
    };

    struct WandererEntity_TokkTurningPattern__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererEntity_TokkTurningPattern__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererEntity_TokkTurningPattern__Enum__VTable vtable;
    };

    struct WandererIdleBehaviour__VTable {
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

    struct WandererIdleBehaviour__StaticFields {
    };

    struct WandererIdleBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererIdleBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererIdleBehaviour__VTable vtable;
    };

    struct WandererEntity__VTable {
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

    struct WandererEntity__StaticFields {
        struct WandererEntity* _Instance_k__BackingField;
    };

    struct WandererEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererEntity__VTable vtable;
    };

    struct WandererTurningBehaviour__VTable {
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

    struct WandererTurningBehaviour__StaticFields {
    };

    struct WandererTurningBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererTurningBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererTurningBehaviour__VTable vtable;
    };

    struct WandererNPC_InteractionLine__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WandererNPC_InteractionLine__StaticFields {
    };

    struct WandererNPC_InteractionLine__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererNPC_InteractionLine__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererNPC_InteractionLine__VTable vtable;
    };

    struct WandererNPC_InteractionLine__Array__VTable {
    };

    struct WandererNPC_InteractionLine__Array__StaticFields {
    };

    struct WandererNPC_InteractionLine__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererNPC_InteractionLine__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererNPC_InteractionLine__Array__VTable vtable;
    };

    struct IEnumerator_1_WandererNPC_InteractionLine___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_WandererNPC_InteractionLine___StaticFields {
    };

    struct IEnumerator_1_WandererNPC_InteractionLine___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_WandererNPC_InteractionLine___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_WandererNPC_InteractionLine___VTable vtable;
    };

    struct List_1_WandererNPC_InteractionLine___VTable {
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

    struct List_1_WandererNPC_InteractionLine___StaticFields {
        struct WandererNPC_InteractionLine__Array* _emptyArray;
    };

    struct List_1_WandererNPC_InteractionLine___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_WandererNPC_InteractionLine___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_WandererNPC_InteractionLine___VTable vtable;
    };

    struct WandererNPC_State__Enum__VTable {
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

    struct WandererNPC_State__Enum__StaticFields {
    };

    struct WandererNPC_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererNPC_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererNPC_State__Enum__VTable vtable;
    };

    struct WandererNPC__VTable {
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
        VirtualInvokeData GetResolverForType;
    };

    struct WandererNPC__StaticFields {
    };

    struct WandererNPC__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererNPC__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererNPC__VTable vtable;
    };

    struct WandererDesertQuestCompletedInteractionBehaviour__VTable {
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

    struct WandererDesertQuestCompletedInteractionBehaviour__StaticFields {
    };

    struct WandererDesertQuestCompletedInteractionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererDesertQuestCompletedInteractionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererDesertQuestCompletedInteractionBehaviour__VTable vtable;
    };

    struct WandererInteractionBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct WandererEntity* m_wandererEntity;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererTurningBehaviour* m_turningBehaviour;
        struct WandererNPC* m_npc;
        bool ShouldTurn;
    };

    struct WandererInteractionBehaviour {
        struct WandererInteractionBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererInteractionBehaviour__Fields fields;
    };

    struct WandererInteractionBehaviour__VTable {
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

    struct WandererInteractionBehaviour__StaticFields {
    };

    struct WandererInteractionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererInteractionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererInteractionBehaviour__VTable vtable;
    };

    struct WandererPostDesertQuestCompletedInteractionBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct WandererEntity* m_wandererEntity;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererTurningBehaviour* m_turningBehaviour;
        struct WandererNPC* m_npc;
    };

    struct WandererPostDesertQuestCompletedInteractionBehaviour {
        struct WandererPostDesertQuestCompletedInteractionBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererPostDesertQuestCompletedInteractionBehaviour__Fields fields;
    };

    struct WandererPostDesertQuestCompletedInteractionBehaviour__VTable {
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

    struct WandererPostDesertQuestCompletedInteractionBehaviour__StaticFields {
    };

    struct WandererPostDesertQuestCompletedInteractionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererPostDesertQuestCompletedInteractionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererPostDesertQuestCompletedInteractionBehaviour__VTable vtable;
    };

    struct WandererPostDesertQuestCompletedPatrolBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct WandererEntity* m_wandererEntity;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererTurningBehaviour* m_turningBehaviour;
        struct WandererNPC* m_npc;
    };

    struct WandererPostDesertQuestCompletedPatrolBehaviour {
        struct WandererPostDesertQuestCompletedPatrolBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererPostDesertQuestCompletedPatrolBehaviour__Fields fields;
    };

    struct WandererPostDesertQuestCompletedPatrolBehaviour__VTable {
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

    struct WandererPostDesertQuestCompletedPatrolBehaviour__StaticFields {
    };

    struct WandererPostDesertQuestCompletedPatrolBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WandererPostDesertQuestCompletedPatrolBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WandererPostDesertQuestCompletedPatrolBehaviour__VTable vtable;
    };

    struct WandererPostIntroductionInteractionBehaviour__Fields {
        struct EntityBehaviourNode__Fields _;
        struct WandererEntity* m_wandererEntity;
        struct GroundEntityLocomotion* m_locomotion;
        struct WandererTurningBehaviour* m_turningBehaviour;
        struct WandererNPC* m_npc;
    };

    struct WandererPostIntroductionInteractionBehaviour {
        struct WandererPostIntroductionInteractionBehaviour__Class* klass;
        MonitorData* monitor;
        struct WandererPostIntroductionInteractionBehaviour__Fields fields;
    };

    struct WandererPostIntroductionInteractionBehaviour__VTable {
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

} // namespace app
