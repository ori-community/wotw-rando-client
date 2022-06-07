namespace app {
struct ShellSlugKickupAndStunReactionBehaviour__Fields {
    struct UpperKickReactionBehaviour__Fields _;
    struct EntityTask *StunnedBehaviour;
    float AirSpinRotationAmount;
    bool m_shouldSkipUpdate;
    struct SpikeSlugLocomotion *m_slugLocomotion;
    struct SpikeSlugEntity *m_slug;
};

struct ShellSlugKickupAndStunReactionBehaviour {
    struct ShellSlugKickupAndStunReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct ShellSlugKickupAndStunReactionBehaviour__Fields fields;
};

struct ShellSlugKickupAndStunReactionBehaviour__VTable {
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

struct ShellSlugKickupAndStunReactionBehaviour__StaticFields {
};

struct ShellSlugKickupAndStunReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShellSlugKickupAndStunReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShellSlugKickupAndStunReactionBehaviour__VTable vtable;
};

struct PlayerIsNotDiggingCondition__Fields {
    struct Condition_1__Fields _;
};

struct PlayerIsNotDiggingCondition {
    struct PlayerIsNotDiggingCondition__Class *klass;
    MonitorData *monitor;
    struct PlayerIsNotDiggingCondition__Fields fields;
};

struct PlayerIsNotDiggingCondition__VTable {
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

struct PlayerIsNotDiggingCondition__StaticFields {
};

struct PlayerIsNotDiggingCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayerIsNotDiggingCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayerIsNotDiggingCondition__VTable vtable;
};

struct ShellSlugEntity__Fields {
    struct SpikeSlugEntity__Fields _;
};

struct ShellSlugEntity {
    struct ShellSlugEntity__Class *klass;
    MonitorData *monitor;
    struct ShellSlugEntity__Fields fields;
};

struct ShellSlugEntity__VTable {
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
    VirtualInvokeData get_OwnerID;
};

struct ShellSlugEntity__StaticFields {
};

struct ShellSlugEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShellSlugEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShellSlugEntity__VTable vtable;
};

struct ShellSlugShell__Fields {
    struct MonoBehaviour__Fields _;
    float WeaponForceMultiplier;
    float BashForceMultiplier;
    float WindForceMultiplier;
    float DiggingForceMultiplier;
    float RotateMultiplier;
    struct MoonTimeline *ShakeTimeline;
    float MinImpactForceForControllerShake;
    struct List_1_UnityEngine_GameObject_ *ShatterEffectPrefabs;
    struct Rigidbody *m_rigidbody;
};

struct ShellSlugShell {
    struct ShellSlugShell__Class *klass;
    MonitorData *monitor;
    struct ShellSlugShell__Fields fields;
};

struct ShellSlugShell__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IDamageReciever_get_gameObject;
    VirtualInvokeData IDamageReciever_get_transform;
    VirtualInvokeData OnRecieveDamage;
};

struct ShellSlugShell__StaticFields {
};

struct ShellSlugShell__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShellSlugShell__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShellSlugShell__VTable vtable;
};

struct WasProtectedByShellCondition__Fields {
    struct Condition_1__Fields _;
    struct Entity *Entity;
};

struct WasProtectedByShellCondition {
    struct WasProtectedByShellCondition__Class *klass;
    MonitorData *monitor;
    struct WasProtectedByShellCondition__Fields fields;
};

struct WasProtectedByShellCondition__VTable {
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

struct WasProtectedByShellCondition__StaticFields {
};

struct WasProtectedByShellCondition__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct WasProtectedByShellCondition__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct WasProtectedByShellCondition__VTable vtable;
};

struct ContinuousTimelineSequenceBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct LegacyTimelineSequence *LoopingTS;
};

struct ContinuousTimelineSequenceBehaviour {
    struct ContinuousTimelineSequenceBehaviour__Class *klass;
    MonitorData *monitor;
    struct ContinuousTimelineSequenceBehaviour__Fields fields;
};

struct ContinuousTimelineSequenceBehaviour__VTable {
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

struct ContinuousTimelineSequenceBehaviour__StaticFields {
};

struct ContinuousTimelineSequenceBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ContinuousTimelineSequenceBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ContinuousTimelineSequenceBehaviour__VTable vtable;
};

struct OneShotTimelineSequenceBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct MoonTimeline *SequenceNew;
    struct LegacyTimelineSequence *Sequence;
    bool PauseTree;
    bool PauseLocomotion;
};

struct OneShotTimelineSequenceBehaviour {
    struct OneShotTimelineSequenceBehaviour__Class *klass;
    MonitorData *monitor;
    struct OneShotTimelineSequenceBehaviour__Fields fields;
};

struct OneShotTimelineSequenceBehaviour__VTable {
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

struct OneShotTimelineSequenceBehaviour__StaticFields {
};

struct OneShotTimelineSequenceBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct OneShotTimelineSequenceBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct OneShotTimelineSequenceBehaviour__VTable vtable;
};

struct ShootProjectileBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct MoonTimeline *ShootGroundSequenceNew;
    struct MoonTimeline *ShootCeilingSequenceNew;
    float Range;
    struct LegacyTimelineSequence *ShootGroundSequence;
    struct LegacyTimelineSequence *ShootCeilingSequence;
    struct Vector3 ShotOriginOffset;
    float ProjectileSpeed;
    float ProjectileGravity;
    float ProjectileDamage;
    float ProjectileArcHeight;
    struct EventTriggerAnimator *ShootTriggerNew;
    struct TimelineEventTrigger *ShootTrigger;
    struct Locomotion *m_groundLocomotion;
    struct PrefabSpawner *m_projectileSpawner;
    struct LegacyTimelineSequence *m_currentShootSequence;
    struct MoonTimeline *m_currentShootSequenceNew;
};

struct ShootProjectileBehaviour {
    struct ShootProjectileBehaviour__Class *klass;
    MonitorData *monitor;
    struct ShootProjectileBehaviour__Fields fields;
};

struct ShootMultiProjectileRadialBehaviour__Fields {
    struct ShootProjectileBehaviour__Fields _;
    float StartAngle;
    float AngleOffset;
    int32_t NumOfProjectiles;
};

struct ShootMultiProjectileRadialBehaviour {
    struct ShootMultiProjectileRadialBehaviour__Class *klass;
    MonitorData *monitor;
    struct ShootMultiProjectileRadialBehaviour__Fields fields;
};

struct TimelineEventTrigger__Fields {
    struct BaseAnimator__Fields _;
    float ClipDuration;
    struct Action_1_TimelineEventTrigger_ *m_eventStartWithTriggerInfo;
    struct Action *m_eventStart;
    struct Action *m_eventStay;
    struct Action *m_eventEnd;
};

struct TimelineEventTrigger {
    struct TimelineEventTrigger__Class *klass;
    MonitorData *monitor;
    struct TimelineEventTrigger__Fields fields;
};

struct Action_1_TimelineEventTrigger___Fields {
    struct MulticastDelegate__Fields _;
};

struct Action_1_TimelineEventTrigger_ {
    struct Action_1_TimelineEventTrigger___Class *klass;
    MonitorData *monitor;
    struct Action_1_TimelineEventTrigger___Fields fields;
};

struct Action_1_TimelineEventTrigger___VTable {
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

struct Action_1_TimelineEventTrigger___StaticFields {
};

struct Action_1_TimelineEventTrigger___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Action_1_TimelineEventTrigger___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Action_1_TimelineEventTrigger___VTable vtable;
};

struct TimelineEventTrigger__VTable {
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
    VirtualInvokeData get_EventProviderName;
    VirtualInvokeData get_EventStart;
    VirtualInvokeData set_EventStart;
    VirtualInvokeData get_EventStay;
    VirtualInvokeData set_EventStay;
    VirtualInvokeData get_EventEnd;
    VirtualInvokeData set_EventEnd;
};

struct TimelineEventTrigger__StaticFields {
};

struct TimelineEventTrigger__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct TimelineEventTrigger__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct TimelineEventTrigger__VTable vtable;
};

struct ShootProjectileBehaviour__VTable {
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
    VirtualInvokeData Shoot;
};

struct ShootProjectileBehaviour__StaticFields {
};

struct ShootProjectileBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootProjectileBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootProjectileBehaviour__VTable vtable;
};

struct ShootMultiProjectileRadialBehaviour__VTable {
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
    VirtualInvokeData Shoot;
};

struct ShootMultiProjectileRadialBehaviour__StaticFields {
};

struct ShootMultiProjectileRadialBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ShootMultiProjectileRadialBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ShootMultiProjectileRadialBehaviour__VTable vtable;
};

struct SpikeSlugKickUpReactionBehaviour__Fields {
    struct UpperKickReactionBehaviour__Fields _;
    float AirSpinRotationAmount;
    bool m_shouldSkipUpdate;
    struct SpikeSlugLocomotion *m_slugLocomotion;
    struct SpikeSlugEntity *m_slug;
};

struct SpikeSlugKickUpReactionBehaviour {
    struct SpikeSlugKickUpReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct SpikeSlugKickUpReactionBehaviour__Fields fields;
};

struct SpikeSlugKickUpReactionBehaviour__VTable {
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

struct SpikeSlugKickUpReactionBehaviour__StaticFields {
};

struct SpikeSlugKickUpReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SpikeSlugKickUpReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SpikeSlugKickUpReactionBehaviour__VTable vtable;
};

struct StepMovementBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct AnimationCurve *StepSpeedOverTimeNormalized;
    float MaxStepSpeed;
    struct Vector3 InitPosition;
    float MaxDistanceFromInitPos;
    float MaxStepTime;
    struct LegacyTimelineSequence *StepTS;
    float m_timer;
    struct Locomotion *m_locomotion;
};

struct StepMovementBehaviour {
    struct StepMovementBehaviour__Class *klass;
    MonitorData *monitor;
    struct StepMovementBehaviour__Fields fields;
};

struct StepMovementBehaviour__VTable {
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

struct StepMovementBehaviour__StaticFields {
};

struct StepMovementBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StepMovementBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StepMovementBehaviour__VTable vtable;
};

struct SlugHitBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct ClipAnimation *KickBackAnimation;
    struct ClipAnimation *KickBackAirAnimation;
    struct SoundProvider *KickBackSoundProvider;
    struct ClipAnimation *KickForwardAnimation;
    struct ClipAnimation *KickForwardAirAnimation;
    struct SoundProvider *KickForwardSoundProvider;
    struct RootMotionProcessor *RootMotion;
    int32_t AnimationPriority;
    bool RestartAnimationForEachExecution;
    struct DamageDealer__Array *disableDamageDealers;
    struct Locomotion *m_locomotion;
    struct IActiveAnimation *m_animationState;
    struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ *m_animToSoundDic;
    struct Damage *m_lastDamageReceived;
};

struct SlugHitBehaviour {
    struct SlugHitBehaviour__Class *klass;
    MonitorData *monitor;
    struct SlugHitBehaviour__Fields fields;
};

struct __declspec(align(8)) Dictionary_2_Moon_ClipAnimation_SoundProvider___Fields {
    struct Int32__Array *buckets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array *entries;
    int32_t count;
    int32_t version;
    int32_t freeList;
    int32_t freeCount;
    struct IEqualityComparer_1_Moon_ClipAnimation_ *comparer;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider_ *keys;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider_ *values;
    struct Object *_syncRoot;
};

struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ {
    struct Dictionary_2_Moon_ClipAnimation_SoundProvider___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_Moon_ClipAnimation_SoundProvider___Fields fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider_ {
    int32_t hashCode;
    int32_t next;
    struct ClipAnimation *key;
    struct SoundProvider *value;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Boxed {
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider_ fields;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array {
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider_ vector[32];
};

struct IEqualityComparer_1_Moon_ClipAnimation_ {
    struct IEqualityComparer_1_Moon_ClipAnimation___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___Fields {
    struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ *dictionary;
};

struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider_ {
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_KeyCollection_Moon_ClipAnimation_SoundProvider___Fields fields;
};

struct ClipAnimation__Array {
    struct ClipAnimation__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct ClipAnimation *vector[32];
};

struct IEnumerator_1_Moon_ClipAnimation_ {
    struct IEnumerator_1_Moon_ClipAnimation___Class *klass;
    MonitorData *monitor;
};

struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___Fields {
    struct Dictionary_2_Moon_ClipAnimation_SoundProvider_ *dictionary;
};

struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider_ {
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___Class *klass;
    MonitorData *monitor;
    struct Dictionary_2_TKey_TValue_ValueCollection_Moon_ClipAnimation_SoundProvider___Fields fields;
};

struct SoundProvider__Array {
    struct SoundProvider__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SoundProvider *vector[32];
};

struct IEnumerator_1_SoundProvider_ {
    struct IEnumerator_1_SoundProvider___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_Moon_ClipAnimation_ {
    struct ICollection_1_Moon_ClipAnimation___Class *klass;
    MonitorData *monitor;
};

struct ICollection_1_SoundProvider_ {
    struct ICollection_1_SoundProvider___Class *klass;
    MonitorData *monitor;
};

struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ {
    struct ClipAnimation *key;
    struct SoundProvider *value;
};

struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Boxed {
    struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Class *klass;
    MonitorData *monitor;
    struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ fields;
};

struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Array {
    struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ vector[32];
};

struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider_ {
    struct IEnumerator_1_KeyValuePair_2_Moon_ClipAnimation_SoundProvider___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_Moon_ClipAnimation_ {
    struct IEnumerable_1_Moon_ClipAnimation___Class *klass;
    MonitorData *monitor;
};

struct IEnumerable_1_SoundProvider_ {
    struct IEnumerable_1_SoundProvider___Class *klass;
    MonitorData *monitor;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___VTable vtable;
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array__VTable {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array__StaticFields {
};

struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct Dictionary_2_TKey_TValue_Entry_Moon_ClipAnimation_SoundProvider___Array__VTable vtable;
};

struct IEqualityComparer_1_Moon_ClipAnimation___VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData GetHashCode;
};

struct IEqualityComparer_1_Moon_ClipAnimation___StaticFields {
};

struct IEqualityComparer_1_Moon_ClipAnimation___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEqualityComparer_1_Moon_ClipAnimation___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEqualityComparer_1_Moon_ClipAnimation___VTable vtable;
};

struct ClipAnimation__Array__VTable {
};

struct ClipAnimation__Array__StaticFields {
};

struct ClipAnimation__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct ClipAnimation__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct ClipAnimation__Array__VTable vtable;
};

}
