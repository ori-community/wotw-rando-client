namespace app {
    struct LizardHitReactionBehaviour__StaticFields {
    };

    struct LizardHitReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardHitReactionBehaviour__VTable vtable;
    };

    struct KamikazeLizardHitReactionBehaviour__VTable {
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
        VirtualInvokeData StartTimeline;
    };

    struct KamikazeLizardHitReactionBehaviour__StaticFields {
    };

    struct KamikazeLizardHitReactionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KamikazeLizardHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KamikazeLizardHitReactionBehaviour__VTable vtable;
    };

    struct LizardCamouflageEntity__Fields {
        struct LizardEntity__Fields _;
        struct MoonTimeline* BecomeVisibleTimeline;
        struct MoonTimeline* BecomeInvisibleTimeline;
        struct MoonTimeline* StayInvisibleTimeline;
        float m_invisibilityTimer;
    };

    struct LizardCamouflageEntity {
        struct LizardCamouflageEntity__Class* klass;
        MonitorData* monitor;
        struct LizardCamouflageEntity__Fields fields;
    };

    struct LizardCamouflageEntity__VTable {
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

    struct LizardCamouflageEntity__StaticFields {
    };

    struct LizardCamouflageEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardCamouflageEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardCamouflageEntity__VTable vtable;
    };

    enum class LizardDeathReaction_DeathState__Enum : int32_t {
        Invalid = -1,
        Launch = 0x00000000,
        Spin = 0x00000001,
        Land = 0x00000002,
        Drowning = 0x00000003,
    };

    struct LizardDeathReaction_DeathState__Enum__Boxed {
        struct LizardDeathReaction_DeathState__Enum__Class* klass;
        MonitorData* monitor;
        LizardDeathReaction_DeathState__Enum value;
    };

    struct LizardDeathReaction__Fields {
        struct EntityReactionBehaviour_1_LizardEntity___Fields _;
        struct MoonTimeline* LaunchTimeline;
        struct MoonTimeline* SpinTimeline;
        struct MoonTimeline* LandTimeline;
        struct DeathStartEffectSpawnSetting* DeathStartEffect;
        struct KamikazeLizardExplosion* ExplosionPrefab;
        float ExplosionDamageAmound;
        DamageWeight__Enum ExplosionDamageWeight;

        struct MoonTimeline* DrownTimeline;
        float InitialDrowningSubmersion;
        struct GameObject* SplashPrefab;
        struct MoonTimeline* m_currentTimeline;
        struct LizardHitReactionBehaviour* m_hitReactionBehaviour;
        struct CharacterPlatformMovement* m_platformMovement;
        struct GroundEntityLocomotion* m_locomotion;
        bool m_waitingForDeath;
        LizardDeathReaction_DeathState__Enum m_currentState;

        float BounceSpeedY;
        float DeathKickbackMinMagnitude;
        float DeathKickbackMinBoost;
        float DeathKickbackMinUpDirection;
        bool m_startedFalling;
        float m_timeDrowning;
        struct Vector2 m_initialDrowningSpeed;
        struct EntityWeightData_EntityWeightSettings m_weightData;
        struct RootMotionProcessorData* DrowningRootMotion;
        struct GameObject* FireDeathEffect;
        struct Transform* m_fireDeathEffectInstance;
        bool m_wasCacheSerialized;
    };

    struct LizardDeathReaction {
        struct LizardDeathReaction__Class* klass;
        MonitorData* monitor;
        struct LizardDeathReaction__Fields fields;
    };

    struct KamikazeLizardExplosion__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_DamageDealer_* DamageDealers;
    };

    struct KamikazeLizardExplosion {
        struct KamikazeLizardExplosion__Class* klass;
        MonitorData* monitor;
        struct KamikazeLizardExplosion__Fields fields;
    };

    struct KamikazeLizardExplosion__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct KamikazeLizardExplosion__StaticFields {
    };

    struct KamikazeLizardExplosion__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct KamikazeLizardExplosion__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct KamikazeLizardExplosion__VTable vtable;
    };

    struct LizardDeathReaction_DeathState__Enum__VTable {
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

    struct LizardDeathReaction_DeathState__Enum__StaticFields {
    };

    struct LizardDeathReaction_DeathState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardDeathReaction_DeathState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardDeathReaction_DeathState__Enum__VTable vtable;
    };

    struct LizardDeathReaction__VTable {
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

    struct LizardDeathReaction__StaticFields {
    };

    struct LizardDeathReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardDeathReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardDeathReaction__VTable vtable;
    };

    struct LizardDeathReaction_c {
        struct LizardDeathReaction_c__Class* klass;
        MonitorData* monitor;
    };

    struct LizardDeathReaction_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LizardDeathReaction_c__StaticFields {
        struct LizardDeathReaction_c* __9;
        struct Action* __9__32_0;
    };

    struct LizardDeathReaction_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardDeathReaction_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardDeathReaction_c__VTable vtable;
    };

    struct LizardDodgeReaction__Fields {
        struct EntityReactionBehaviour_1_LizardEntity___Fields _;
        struct MoonTimeline* DodgeRoll;
        struct RootMotionProcessorData* DodgeRollRootMotion;
        bool SetCounterAttackBool;
        struct String* CounterAttackVarName;
        float MaxDistanceToTargetToStartDodge;
        bool DebugReaction;
        struct List_1_Moon_Timeline_MoonTimeline_* AdditiveHitAnims;
        struct GroundEntityLocomotion* m_locomotion;
    };

    struct LizardDodgeReaction {
        struct LizardDodgeReaction__Class* klass;
        MonitorData* monitor;
        struct LizardDodgeReaction__Fields fields;
    };

    struct LizardDodgeReaction__VTable {
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

    struct LizardDodgeReaction__StaticFields {
    };

    struct LizardDodgeReaction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardDodgeReaction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardDodgeReaction__VTable vtable;
    };

    struct LizardDodgeEvent__Fields {
        struct EntityEvent__Fields _;
    };

    struct LizardDodgeEvent {
        struct LizardDodgeEvent__Class* klass;
        MonitorData* monitor;
        struct LizardDodgeEvent__Fields fields;
    };

    struct LizardDodgeEvent__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LizardDodgeEvent__StaticFields {
    };

    struct LizardDodgeEvent__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardDodgeEvent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardDodgeEvent__VTable vtable;
    };

    struct LizardEntity_c {
        struct LizardEntity_c__Class* klass;
        MonitorData* monitor;
    };

    struct LizardEntity_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LizardEntity_c__StaticFields {
        struct LizardEntity_c* __9;
    };

    struct LizardEntity_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardEntity_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardEntity_c__VTable vtable;
    };

    struct LizardEntityReactions__Fields {
        struct GroundEntityReactions__Fields _;
        struct LizardDodgeReaction* DodgeReaction;
    };

    struct LizardEntityReactions {
        struct LizardEntityReactions__Class* klass;
        MonitorData* monitor;
        struct LizardEntityReactions__Fields fields;
    };

    struct LizardEntityReactions__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnEntityInitialization;
        VirtualInvokeData get_InitOrder;
        VirtualInvokeData OnCacheSerializedComponents;
        VirtualInvokeData OnAwake;
        VirtualInvokeData ProcessEntityEvent;
    };

    struct LizardEntityReactions__StaticFields {
    };

    struct LizardEntityReactions__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardEntityReactions__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardEntityReactions__VTable vtable;
    };

    struct __declspec(align(8)) LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Fields {
        struct MoonReference_1_Moon_BehaviourSystem_ITask_* Task;
        struct List_1_DamageType_* DamageTypes;
    };

    struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition {
        struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class* klass;
        MonitorData* monitor;
        struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Fields fields;
    };

    struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields {
    };

    struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardHitReactionBehaviour_NonInterruptibleTaskCondition__VTable vtable;
    };

    struct LizardHitReactionBehaviour_c {
        struct LizardHitReactionBehaviour_c__Class* klass;
        MonitorData* monitor;
    };

    struct LizardHitReactionBehaviour_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LizardHitReactionBehaviour_c__StaticFields {
        struct LizardHitReactionBehaviour_c* __9;
        struct Action* __9__43_0;
    };

    struct LizardHitReactionBehaviour_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardHitReactionBehaviour_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardHitReactionBehaviour_c__VTable vtable;
    };

    struct LizardSpawnSetup__Fields {
        struct EntitySpawnSetup__Fields _;
    };

    struct LizardSpawnSetup {
        struct LizardSpawnSetup__Class* klass;
        MonitorData* monitor;
        struct LizardSpawnSetup__Fields fields;
    };

    struct LizardSpawnSetup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct LizardSpawnSetup__StaticFields {
    };

    struct LizardSpawnSetup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardSpawnSetup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardSpawnSetup__VTable vtable;
    };

    struct LizardSpawnTask__Fields {
        struct EntitySpawnTask__Fields _;
        struct MoonTimeline* ForegroundSpawnTimeline;
        struct MoonTimeline* BackgroundSpawnTimeline;
        struct MoonTimeline* m_currentTimeline;
    };

    struct LizardSpawnTask {
        struct LizardSpawnTask__Class* klass;
        MonitorData* monitor;
        struct LizardSpawnTask__Fields fields;
    };

    struct LizardSpawnTask__VTable {
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

    struct LizardSpawnTask__StaticFields {
    };

    struct LizardSpawnTask__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardSpawnTask__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardSpawnTask__VTable vtable;
    };

    enum class LizardAttackEffects_Type__Enum : int32_t {
        ClawReceived = 0x00000000,
        ClawBlocked = 0x00000001,
        ClawLizard = 0x00000002,
        BiteReceived = 0x00000003,
        BiteBlocked = 0x00000004,
        BiteLizard = 0x00000005,
        PounceReceived = 0x00000006,
        PounceBlocked = 0x00000007,
        PounceLizard = 0x00000008,
    };

    struct LizardAttackEffects_Type__Enum__Boxed {
        struct LizardAttackEffects_Type__Enum__Class* klass;
        MonitorData* monitor;
        LizardAttackEffects_Type__Enum value;
    };

    struct LizardAttackEffects_Type__Enum__VTable {
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

    struct LizardAttackEffects_Type__Enum__StaticFields {
    };

    struct LizardAttackEffects_Type__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LizardAttackEffects_Type__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LizardAttackEffects_Type__Enum__VTable vtable;
    };

    struct TurtleAIUtilities__Fields {
        struct MonoBehaviour__Fields _;
        struct AnimationCurve* TargetDistanceToDodgeUtility;
        struct AnimationCurve* TargetDistanceToAttackUtility;
        struct AnimationCurve* TargetSpeedToRunningAttackUtility;
        struct Sensor* m_sensor;
        float m_utilityDodge;
        float m_utilityAttack;
        struct DynamicDataResolver* m_dataResolver;
    };

    struct TurtleAIUtilities {
        struct TurtleAIUtilities__Class* klass;
        MonitorData* monitor;
        struct TurtleAIUtilities__Fields fields;
    };

    struct TurtleAIUtilities__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetResolverForType;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
    };

    struct TurtleAIUtilities__StaticFields {
    };

    struct TurtleAIUtilities__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleAIUtilities__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleAIUtilities__VTable vtable;
    };

    struct TurtleAttackSelector {
        struct TurtleAttackSelector__Class* klass;
        MonitorData* monitor;
    };

    struct TurtleAttackSelector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TurtleAttackSelector__StaticFields {
    };

    struct TurtleAttackSelector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleAttackSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleAttackSelector__VTable vtable;
    };

    struct TurtleDamageCondition__Fields {
        struct Condition_1__Fields _;
        struct StunnBehaviour* StunnedBehavior;
        struct Vitals* Vitals;
    };

    struct TurtleDamageCondition {
        struct TurtleDamageCondition__Class* klass;
        MonitorData* monitor;
        struct TurtleDamageCondition__Fields fields;
    };

    struct TurtleDamageCondition__VTable {
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

    struct TurtleDamageCondition__StaticFields {
    };

    struct TurtleDamageCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleDamageCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleDamageCondition__VTable vtable;
    };

    struct TurtleEvasionBehaviour__Fields {
        struct EntityBehaviour__Fields _;
    };

    struct TurtleEvasionBehaviour {
        struct TurtleEvasionBehaviour__Class* klass;
        MonitorData* monitor;
        struct TurtleEvasionBehaviour__Fields fields;
    };

    struct TurtleEvasionBehaviour__VTable {
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

    struct TurtleEvasionBehaviour__StaticFields {
    };

    struct TurtleEvasionBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleEvasionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleEvasionBehaviour__VTable vtable;
    };

    struct TurtleGroundPatrolBehaviour__Fields {
        struct EntityBehaviour__Fields _;
    };

    struct TurtleGroundPatrolBehaviour {
        struct TurtleGroundPatrolBehaviour__Class* klass;
        MonitorData* monitor;
        struct TurtleGroundPatrolBehaviour__Fields fields;
    };

    struct TurtleGroundPatrolBehaviour__VTable {
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

    struct TurtleGroundPatrolBehaviour__StaticFields {
    };

    struct TurtleGroundPatrolBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleGroundPatrolBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleGroundPatrolBehaviour__VTable vtable;
    };

    struct TurtleMovementBehaviour__Fields {
        struct MovementBehaviour__Fields _;
    };

    struct TurtleMovementBehaviour {
        struct TurtleMovementBehaviour__Class* klass;
        MonitorData* monitor;
        struct TurtleMovementBehaviour__Fields fields;
    };

    struct TurtleMovementBehaviour__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TurtleMovementBehaviour__StaticFields {
    };

    struct TurtleMovementBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleMovementBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleMovementBehaviour__VTable vtable;
    };

    struct TurtleNoShellRootSelector {
        struct TurtleNoShellRootSelector__Class* klass;
        MonitorData* monitor;
    };

    struct TurtleNoShellRootSelector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TurtleNoShellRootSelector__StaticFields {
    };

    struct TurtleNoShellRootSelector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleNoShellRootSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleNoShellRootSelector__VTable vtable;
    };

    struct TurtlePlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct GameObject* LizardPrefab;
        LizardSpawnType__Enum m_spawnType;
    };

} // namespace app
