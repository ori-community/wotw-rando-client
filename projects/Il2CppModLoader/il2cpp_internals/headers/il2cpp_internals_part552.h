namespace app {
struct BombSlugEntity__StaticFields {
};
struct BombSlugEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BombSlugEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BombSlugEntity__VTable vtable;
};

struct BombSlugEntity_c {
  struct BombSlugEntity_c__Class *klass;
  struct MonitorData *monitor;
};
struct BombSlugEntity_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BombSlugEntity_c__StaticFields {
  struct BombSlugEntity_c * __9;
  struct Action * __9__20_0;
};
struct BombSlugEntity_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BombSlugEntity_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BombSlugEntity_c__VTable vtable;
};

struct EntityBehaviourNode_1_ElectricSlugEntity___Fields {
  struct EntityBehaviourNode__Fields _;
};
struct EntityBehaviourNode_1_ElectricSlugEntity_ {
  struct EntityBehaviourNode_1_ElectricSlugEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityBehaviourNode_1_ElectricSlugEntity___Fields fields;
};
struct ElectricFieldSlugBehaviour__Fields {
  struct EntityBehaviourNode_1_ElectricSlugEntity___Fields _;
  struct MoonFloat * ElectricFieldTriggerRange;
  struct MoonTimeline * ElectricFieldTimeline;
  float SwellAtDistancePercentage;
  struct ElectricFieldSlugBehaviour_SwellTarget__Array * SwellTargets;
  float SwellSpeed;
  struct Event_1 * StartElectricFieldEvent;
  struct Event_1 * EndElectricFieldEvent;
  struct Event_1 * InflateEvent;
  struct Event_1 * DeflateEvent;
  float m_range;
  bool m_isInflating;
};
struct ElectricFieldSlugBehaviour {
  struct ElectricFieldSlugBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct ElectricFieldSlugBehaviour__Fields fields;
};
struct ElectricFieldSlugBehaviour_SwellTarget {
  struct Transform * Target;
  float MaxScale;
};
struct ElectricFieldSlugBehaviour_SwellTarget__Boxed {
  struct ElectricFieldSlugBehaviour_SwellTarget__Class *klass;
  struct MonitorData *monitor;
  struct ElectricFieldSlugBehaviour_SwellTarget fields;
};
struct ElectricFieldSlugBehaviour_SwellTarget__Array {
  struct ElectricFieldSlugBehaviour_SwellTarget__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ElectricFieldSlugBehaviour_SwellTarget vector[32];
};
struct EntityBehaviourNode_1_ElectricSlugEntity___VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData OnEntityInitialization;
  VirtualInvokeData get_InitOrder;
  VirtualInvokeData get_ShouldPauseLocomotionIsConstant;
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData CacheSerializedComponents;
  VirtualInvokeData OnEntityInitialized;
};
struct EntityBehaviourNode_1_ElectricSlugEntity___StaticFields {
};
struct EntityBehaviourNode_1_ElectricSlugEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityBehaviourNode_1_ElectricSlugEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityBehaviourNode_1_ElectricSlugEntity___VTable vtable;
};
struct ElectricFieldSlugBehaviour_SwellTarget__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ElectricFieldSlugBehaviour_SwellTarget__StaticFields {
};
struct ElectricFieldSlugBehaviour_SwellTarget__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ElectricFieldSlugBehaviour_SwellTarget__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ElectricFieldSlugBehaviour_SwellTarget__VTable vtable;
};
struct ElectricFieldSlugBehaviour__VTable {
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
struct ElectricFieldSlugBehaviour__StaticFields {
};
struct ElectricFieldSlugBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ElectricFieldSlugBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ElectricFieldSlugBehaviour__VTable vtable;
};

struct ElectricSlugDamageDealer__Fields {
  struct DamageDealer__Fields _;
  struct ElectricSlugEntity * Entity;
  float m_timeCartHit;
};
struct ElectricSlugDamageDealer {
  struct ElectricSlugDamageDealer__Class *klass;
  struct MonitorData *monitor;
  struct ElectricSlugDamageDealer__Fields fields;
};
struct ElectricSlugEntity__Fields {
  struct SpikeSlugEntity__Fields _;
  struct GameObject * ExplosionPrefab;
  struct ElectricSlugDamageDealer * DamageDealer;
  struct ZapTrail * ZapTrailPrefab;
  float KnockOffFromRailForce;
  struct SpikeSlugHitReactionBehaviour * HitReaction;
  struct SpikeSlugFallReactionBehaviour * FallReaction;
  struct Event_1 * WwiseZapEvent;
};
struct ElectricSlugEntity {
  struct ElectricSlugEntity__Class *klass;
  struct MonitorData *monitor;
  struct ElectricSlugEntity__Fields fields;
};
struct ZapTrail__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTrail * Trail;
  float LifeTime;
  struct Transform * m_endPosition;
  float m_timeLeft;
};
struct ZapTrail {
  struct ZapTrail__Class *klass;
  struct MonitorData *monitor;
  struct ZapTrail__Fields fields;
};
struct SpikeSlugHitReactionBehaviour__Fields {
  struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields _;
  struct MoonTimeline * HitOnGround;
  struct EventTriggerAnimator * HitOnGroundStopOverride;
  struct MoonTimeline * HitAdditiveFront;
  struct MoonTimeline * HitAdditiveBack;
  struct AnimationPlayer * HitAdditiveFrontAnimPlayer;
  struct AnimationPlayer * HitAdditiveBackAnimPlayer;
  struct MoonTimeline * HitShelledFromFront;
  struct MoonTimeline * HitShelledFromBack;
  struct MoonTimeline * HitShelledFromAbove;
  struct MoonTimeline * HitShelledFromBelow;
  struct MoonFloat * m_hitAdditiveFrontWeight;
  struct MoonFloat * m_hitAdditiveBackWeight;
  struct MoonTimeline * m_currentTimeline;
  struct MoonTimeline * m_currentSecondaryTimeline;
  struct SpikeSlugFallReactionBehaviour * m_fallBehaviour;
  struct SpikeSlugLocomotion * m_locomotion;
  struct EntityDamageEvent * _DamageEvent_k__BackingField;
  struct Vector2 CeilingKnockupMultiplier;
  struct Vector2 WallKnockupMultiplier;
  float MaxKnockupForce;
  float WindKickbackMultiplier;
  float SpinRotationSpeed;
  struct MoonTimeline * HitShake;
  bool IsShellVersionOfSlug;
  struct ProtectedByShellCondition * ShellCondition;
  float ForceMultiplierWhenShellIsDestroyed;
  struct GameObject * ShatterShellEffectsPrefab;
  struct Event_1 * OnAnyHitEvent;
  bool DebugHitDirections;
  struct InterfaceCache * InterruptionBlockingTasksCache;
  struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_ * InterruptionBlockingTasks;
  bool m_exitEarly;
  bool m_wasCacheSerialized;
};
struct SpikeSlugHitReactionBehaviour {
  struct SpikeSlugHitReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpikeSlugHitReactionBehaviour__Fields fields;
};
struct ProtectedByShellCondition__Fields {
  struct Condition_1__Fields _;
  struct Entity * Entity;
  bool Not;
};
struct ProtectedByShellCondition {
  struct ProtectedByShellCondition__Class *klass;
  struct MonitorData *monitor;
  struct ProtectedByShellCondition__Fields fields;
};
struct ZapTrail__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ZapTrail__StaticFields {
};
struct ZapTrail__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ZapTrail__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ZapTrail__VTable vtable;
};
struct ProtectedByShellCondition__VTable {
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
struct ProtectedByShellCondition__StaticFields {
};
struct ProtectedByShellCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ProtectedByShellCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ProtectedByShellCondition__VTable vtable;
};
struct SpikeSlugHitReactionBehaviour__VTable {
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
struct SpikeSlugHitReactionBehaviour__StaticFields {
};
struct SpikeSlugHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpikeSlugHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpikeSlugHitReactionBehaviour__VTable vtable;
};
struct ElectricSlugEntity__VTable {
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
struct ElectricSlugEntity__StaticFields {
};
struct ElectricSlugEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ElectricSlugEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ElectricSlugEntity__VTable vtable;
};
struct ElectricSlugDamageDealer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnEnterPhysicsTrigger;
  VirtualInvokeData get_VirtualTimelineTarget;
  VirtualInvokeData get_VirtualTimelineGroup;
  VirtualInvokeData get_NameDisplayedOnClip;
  VirtualInvokeData OnFixedUpdate;
  VirtualInvokeData Prewarm;
  VirtualInvokeData get_BypassPlayerInvincibility;
  VirtualInvokeData AmountOfDamage;
  VirtualInvokeData Awake;
  VirtualInvokeData ApplyDamageToCollider;
  VirtualInvokeData DealDamage;
};
struct ElectricSlugDamageDealer__StaticFields {
};
struct ElectricSlugDamageDealer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ElectricSlugDamageDealer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ElectricSlugDamageDealer__VTable vtable;
};

struct ShellSlugKickupAndStunReactionBehaviour__Fields {
  struct UpperKickReactionBehaviour__Fields _;
  struct EntityTask * StunnedBehaviour;
  float AirSpinRotationAmount;
  bool m_shouldSkipUpdate;
  struct SpikeSlugLocomotion * m_slugLocomotion;
  struct SpikeSlugEntity * m_slug;
};
struct ShellSlugKickupAndStunReactionBehaviour {
  struct ShellSlugKickupAndStunReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShellSlugKickupAndStunReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShellSlugKickupAndStunReactionBehaviour__VTable vtable;
};

struct PlayerIsNotDiggingCondition__Fields {
  struct Condition_1__Fields _;
};
struct PlayerIsNotDiggingCondition {
  struct PlayerIsNotDiggingCondition__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerIsNotDiggingCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerIsNotDiggingCondition__VTable vtable;
};

struct ShellSlugEntity__Fields {
  struct SpikeSlugEntity__Fields _;
};
struct ShellSlugEntity {
  struct ShellSlugEntity__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShellSlugEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShellSlugEntity__VTable vtable;
};

struct ShellSlugShell__Fields {
  struct MonoBehaviour__Fields _;
  float WeaponForceMultiplier;
  float BashForceMultiplier;
  float WindForceMultiplier;
  float DiggingForceMultiplier;
  float RotateMultiplier;
  struct MoonTimeline * ShakeTimeline;
  float MinImpactForceForControllerShake;
  struct List_1_UnityEngine_GameObject_ * ShatterEffectPrefabs;
  struct Rigidbody * m_rigidbody;
};
struct ShellSlugShell {
  struct ShellSlugShell__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShellSlugShell__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShellSlugShell__VTable vtable;
};

struct WasProtectedByShellCondition__Fields {
  struct Condition_1__Fields _;
  struct Entity * Entity;
};
struct WasProtectedByShellCondition {
  struct WasProtectedByShellCondition__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WasProtectedByShellCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WasProtectedByShellCondition__VTable vtable;
};

struct ContinuousTimelineSequenceBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct LegacyTimelineSequence * LoopingTS;
};
struct ContinuousTimelineSequenceBehaviour {
  struct ContinuousTimelineSequenceBehaviour__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContinuousTimelineSequenceBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContinuousTimelineSequenceBehaviour__VTable vtable;
};

struct OneShotTimelineSequenceBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct MoonTimeline * SequenceNew;
  struct LegacyTimelineSequence * Sequence;
  bool PauseTree;
  bool PauseLocomotion;
};
struct OneShotTimelineSequenceBehaviour {
  struct OneShotTimelineSequenceBehaviour__Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct OneShotTimelineSequenceBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct OneShotTimelineSequenceBehaviour__VTable vtable;
};

struct ShootProjectileBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct MoonTimeline * ShootGroundSequenceNew;
  struct MoonTimeline * ShootCeilingSequenceNew;
  float Range;
  struct LegacyTimelineSequence * ShootGroundSequence;
  struct LegacyTimelineSequence * ShootCeilingSequence;
  struct Vector3 ShotOriginOffset;
  float ProjectileSpeed;
  float ProjectileGravity;
  float ProjectileDamage;
  float ProjectileArcHeight;
  struct EventTriggerAnimator * ShootTriggerNew;
  struct TimelineEventTrigger * ShootTrigger;
  struct Locomotion * m_groundLocomotion;
  struct PrefabSpawner * m_projectileSpawner;
  struct LegacyTimelineSequence * m_currentShootSequence;
  struct MoonTimeline * m_currentShootSequenceNew;
};
struct ShootProjectileBehaviour {
  struct ShootProjectileBehaviour__Class *klass;
  struct MonitorData *monitor;
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
  struct MonitorData *monitor;
  struct ShootMultiProjectileRadialBehaviour__Fields fields;
};
struct TimelineEventTrigger__Fields {
  struct BaseAnimator__Fields _;
  float ClipDuration;
  struct Action_1_TimelineEventTrigger_ * m_eventStartWithTriggerInfo;
  struct Action * m_eventStart;
  struct Action * m_eventStay;
  struct Action * m_eventEnd;
};
struct TimelineEventTrigger {
  struct TimelineEventTrigger__Class *klass;
  struct MonitorData *monitor;
  struct TimelineEventTrigger__Fields fields;
};
struct Action_1_TimelineEventTrigger___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_TimelineEventTrigger_ {
  struct Action_1_TimelineEventTrigger___Class *klass;
  struct MonitorData *monitor;
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
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_TimelineEventTrigger___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_TimelineEventTrigger___VTable vtable;
};}