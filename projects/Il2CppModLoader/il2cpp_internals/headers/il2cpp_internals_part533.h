namespace app {
struct MantisFallReactionBehaviour {
  struct MantisFallReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MantisFallReactionBehaviour__Fields fields;
};
struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields {
  struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields _;
  struct List_1_DamageType_ * DamageTypePreventingInterruption;
  struct List_1_DamageWeight_ * DamageWeightPreventingInterruption;
  struct HashSet_1_DamageType_ * m_damageTypePreventingInterruption;
  struct HashSet_1_DamageWeight_ * m_damageWeightPreventingInterruption;
  bool _HasLocomotion_k__BackingField;
  struct CharacterPlatformMovement * m_platformMovement;
  enum EntityWeightData_EntityWeight__Enum m_weight;
  struct HitReactionSettings * m_kickbackSettings;
};
struct EntityHitReactionBehaviour_1_MantisGrayboxEntity_ {
  struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields fields;
};
struct MantisHitReactionBehaviour__Fields {
  struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Fields _;
  struct MoonTimeline * HitAdditiveFront;
  struct MoonTimeline * HitAdditiveBack;
  struct MoonTimeline * HitAdditiveWhileJumping;
  struct MoonTimeline * Knockup;
  struct List_1_Moon_Timeline_MoonTimeline_ * JumpAnticeTimelines;
  struct Event_1 * OnAnyHitEvent;
  struct MoonFloat * m_hitAdditiveFrontWeight;
  struct MoonFloat * m_hitAdditiveBackWeight;
  struct MoonFloat * m_hitAdditiveWhileJumpingWeight;
  struct MantisFallReactionBehaviour * m_fallBehaviour;
  struct MantisDeathReactionBehaviour * m_deathBehaviour;
  struct GroundEntityLocomotion * m_locomotion;
  struct EntityDamageEvent * _DamageEvent_k__BackingField;
  struct MoonTimeline * m_currentTimeline;
  struct MoonTimeline * m_currentSecondaryTimeline;
  bool m_exitEarly;
  struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_ * InterruptionBlockingTasks;
};
struct MantisHitReactionBehaviour {
  struct MantisHitReactionBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct MantisHitReactionBehaviour__Fields fields;
};
struct EntityReactionBehaviour_1_MantisGrayboxEntity___VTable {
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
  VirtualInvokeData ShouldPauseLocomotion;
  VirtualInvokeData get_RunInParallel;
  VirtualInvokeData get_CanInterruptSelf;
  VirtualInvokeData OnCacheSerializedComponents;
  VirtualInvokeData CanInterrupt;
  VirtualInvokeData HandleReasonToNotInterrupt;
};
struct EntityReactionBehaviour_1_MantisGrayboxEntity___StaticFields {
};
struct EntityReactionBehaviour_1_MantisGrayboxEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityReactionBehaviour_1_MantisGrayboxEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityReactionBehaviour_1_MantisGrayboxEntity___VTable vtable;
};
struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___VTable {
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
struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___StaticFields {
};
struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityHitReactionBehaviour_1_MantisGrayboxEntity___VTable vtable;
};
struct MantisHitReactionBehaviour__VTable {
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
struct MantisHitReactionBehaviour__StaticFields {
};
struct MantisHitReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisHitReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisHitReactionBehaviour__VTable vtable;
};
struct MantisFallReactionBehaviour__VTable {
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
  VirtualInvokeData get_EffectiveLandSequence;
  VirtualInvokeData get_EffectiveLandSequenceNew;
  VirtualInvokeData OnEnterFalling;
  VirtualInvokeData FallingUpdate;
  VirtualInvokeData OnEnterLand;
  VirtualInvokeData LandUpdate;
  VirtualInvokeData OnEnterCollision;
  VirtualInvokeData CollisionUpdate;
};
struct MantisFallReactionBehaviour__StaticFields {
};
struct MantisFallReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisFallReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisFallReactionBehaviour__VTable vtable;
};
struct MantisDeathReactionBehaviour__VTable {
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
struct MantisDeathReactionBehaviour__StaticFields {
};
struct MantisDeathReactionBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisDeathReactionBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisDeathReactionBehaviour__VTable vtable;
};

struct MantisHitReactionBehaviour_c {
  struct MantisHitReactionBehaviour_c__Class *klass;
  struct MonitorData *monitor;
};
struct MantisHitReactionBehaviour_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MantisHitReactionBehaviour_c__StaticFields {
  struct MantisHitReactionBehaviour_c * __9;
  struct Action * __9__22_0;
};
struct MantisHitReactionBehaviour_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MantisHitReactionBehaviour_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MantisHitReactionBehaviour_c__VTable vtable;
};

enum MinerSpawnType__Enum : int32_t {
  MinerSpawnType__Enum_Instant = 0,
  MinerSpawnType__Enum_WallBurst = 1,
  MinerSpawnType__Enum_FromForeground = 2,
};
struct MinerSpawnType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MinerSpawnType__Enum value;
};
struct CorruptMinerPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  struct GameObject * MinerEntityPrefab;
  enum MinerSpawnType__Enum m_spawnType;
};
struct CorruptMinerPlaceholder {
  struct CorruptMinerPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct CorruptMinerPlaceholder__Fields fields;
};
struct CorruptMinerPlaceholder__VTable {
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
  VirtualInvokeData get_SpawnType;
};
struct CorruptMinerPlaceholder__StaticFields {
};
struct CorruptMinerPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CorruptMinerPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CorruptMinerPlaceholder__VTable vtable;
};

struct MinerEntity__Fields {
  struct EnemyEntity__Fields _;
  enum MinerSpawnType__Enum _SpawnType_k__BackingField;
  struct EnemyShield * Shield;
  bool MoveTowardsTargetIfAggro;
  bool DoPerspectiveCorrection;
  struct Transform * m_perspectiveCorrectionNode;
  struct GroundEntityMovementProcessor * m_movementProcessor;
  struct GroundEntityLocomotion * m_locomotion;
  struct CharacterPlatformMovement * m_platformMovemt;
  int32_t m_GoThroughPlatformUpdateCounter;
};
struct MinerEntity {
  struct MinerEntity__Class *klass;
  struct MonitorData *monitor;
  struct MinerEntity__Fields fields;
};
struct MinerEntity__VTable {
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
struct MinerEntity__StaticFields {
};
struct MinerEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerEntity__VTable vtable;
};

struct FeralMinerPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  struct GameObject * MinerEntityPrefab;
  enum MinerSpawnType__Enum m_spawnType;
};
struct FeralMinerPlaceholder {
  struct FeralMinerPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct FeralMinerPlaceholder__Fields fields;
};
struct FeralMinerPlaceholder__VTable {
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
struct FeralMinerPlaceholder__StaticFields {
};
struct FeralMinerPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FeralMinerPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FeralMinerPlaceholder__VTable vtable;
};

struct IcyFeralMinerPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
  struct GameObject * MinerEntityPrefab;
  enum MinerSpawnType__Enum m_spawnType;
};
struct IcyFeralMinerPlaceholder {
  struct IcyFeralMinerPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct IcyFeralMinerPlaceholder__Fields fields;
};
struct IcyFeralMinerPlaceholder__VTable {
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
struct IcyFeralMinerPlaceholder__StaticFields {
};
struct IcyFeralMinerPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IcyFeralMinerPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IcyFeralMinerPlaceholder__VTable vtable;
};

struct MinerBasketEntity__Fields {
  struct MonoBehaviour__Fields _;
  float RotationLimit;
  float RotationSpeed;
  struct Vector3 m_groundNormal;
  struct Vector3 rotationNoiseAmp;
  struct Vector3 rotationNoiseScale;
  struct Vector3 rotationNoiseShift;
  float velocityDamp;
  float clampSpeed;
  struct Rigidbody * body;
  struct Collider * platformCollider;
  float addRotation;
  float animationInfluence;
};
struct MinerBasketEntity {
  struct MinerBasketEntity__Class *klass;
  struct MonitorData *monitor;
  struct MinerBasketEntity__Fields fields;
};
struct MinerBasketEntity__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MinerBasketEntity__StaticFields {
};
struct MinerBasketEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerBasketEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerBasketEntity__VTable vtable;
};

struct MinerDamagedBehavior__Fields {
  struct MonoBehaviour__Fields _;
};
struct MinerDamagedBehavior {
  struct MinerDamagedBehavior__Class *klass;
  struct MonitorData *monitor;
  struct MinerDamagedBehavior__Fields fields;
};
struct MinerDamagedBehavior__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MinerDamagedBehavior__StaticFields {
};
struct MinerDamagedBehavior__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerDamagedBehavior__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerDamagedBehavior__VTable vtable;
};

struct MinerThrowAttackSettings__Fields {
  struct MonoBehaviour__Fields _;
  float ProjectileSpeed;
  float ProjectileGravity;
  float ProjectileDamage;
};
struct MinerThrowAttackSettings {
  struct MinerThrowAttackSettings__Class *klass;
  struct MonitorData *monitor;
  struct MinerThrowAttackSettings__Fields fields;
};
struct MinerThrowAttackSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MinerThrowAttackSettings__StaticFields {
};
struct MinerThrowAttackSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerThrowAttackSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerThrowAttackSettings__VTable vtable;
};

struct MinerPickaxeAttack__Fields {
  struct GroundMovementTimelineBehaviourNew__Fields _;
  bool UseShield;
  struct EnemyShield * Shield;
  struct EventTriggerAnimator * PutShieldDownTrigger;
  struct EventTriggerAnimator * PickShieldUpTrigger;
  bool ForceProtectedStateOnExit;
  bool AdjustAnimBlendBasedOnSlope;
  struct Transform * GroundCheckOrigin;
  struct Vector2 GroundCheckOffset;
  float SlopeDepth;
  float RaycastOriginOffset;
  struct FloatAnimationParameter * BlendParam;
  struct EventTriggerAnimator * SlopeUpdateTrigger;
  bool DebugSlopeHit;
  float m_debugSlopeBlendValue;
  struct Vector2 m_debugSlopeHitCheckOrigin;
  struct Vector2 m_debugSlopeHitPoint;
  struct EventTriggerAnimator * GroundHitTrigger;
  struct Transform * PickaxeEndPoint;
  struct Rigidbody * m_groundRigidbody;
};
struct MinerPickaxeAttack {
  struct MinerPickaxeAttack__Class *klass;
  struct MonitorData *monitor;
  struct MinerPickaxeAttack__Fields fields;
};
struct MinerPickaxeAttack__VTable {
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
struct MinerPickaxeAttack__StaticFields {
};
struct MinerPickaxeAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerPickaxeAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerPickaxeAttack__VTable vtable;
};

struct MinerPunchAttack__Fields {
  struct GroundMovementTimelineBehaviourNew__Fields _;
};
struct MinerPunchAttack {
  struct MinerPunchAttack__Class *klass;
  struct MonitorData *monitor;
  struct MinerPunchAttack__Fields fields;
};
struct MinerPunchAttack__VTable {
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
struct MinerPunchAttack__StaticFields {
};
struct MinerPunchAttack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerPunchAttack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerPunchAttack__VTable vtable;
};

struct MinerThrowAttack__Fields {
  struct GroundMovementTimelineBehaviourNew__Fields _;
  struct EventTriggerAnimator * ThrowTrigger;
  struct EventTriggerAnimator * AimTrigger;
  struct EventTriggerAnimator * PullOutTrigger;
  struct PrefabSpawner * ProjectileSpawner;
  struct MinerThrowAttackSettings * Settings;
  float m_projectileSpeed;
  float m_projectileGravity;
  float m_projectileDamage;
  bool ShootHighAngle;
  struct Transform * ThrowingHand;
  struct Vector3 shootTargetPos;
  struct MinerThrowAttack_ProjectileInstance * m_projectileInstance;
};
struct MinerThrowAttack {
  struct MinerThrowAttack__Class *klass;
  struct MonitorData *monitor;
  struct MinerThrowAttack__Fields fields;
};
struct __declspec(align(8)) MinerThrowAttack_ProjectileInstance__Fields {
  struct SpiritGrenade * m_spiritProjectile;
  struct Transform * m_projectileTranform;
  struct IMinerThrowable * m_minerThrowable;
};
struct MinerThrowAttack_ProjectileInstance {
  struct MinerThrowAttack_ProjectileInstance__Class *klass;
  struct MonitorData *monitor;
  struct MinerThrowAttack_ProjectileInstance__Fields fields;
};
struct SpiritGrenade__Fields {
  struct MonoBehaviour__Fields _;
  float Gravity;
  struct DamageDealer * DamageDealer;
  struct DamageOwner * DamageOwner;
  struct GameObject * Explosion;
  float Duration;
  float DelayBeforeBashable;
  struct Event_1 * LoopingSound;
  float m_time;
  struct Rigidbody * m_rigidbody;
  struct IgnitableSpiritTorch * m_ignitableTorch;
  bool ForceExplodeOnAttackableImpact;
  bool ForceExplodeOnCollision;
  bool Bashable;
  bool InstantlyExplodesOnAttackableSwitches;
  float InstantExplosionDistance;
  float KickbackMultiplier;
  float KickbackGravity;
  bool Fractures;
  bool _IsFracturedPiece_k__BackingField;
  bool ChangeDamageLayerAfterBash;
  enum DamageLayerMask__Enum TargetDamageLayerMaskAfterBash;
  bool m_isBashed;
  float m_preBashedDamage;
  enum DamageLayerMask__Enum m_damageLayerMask;
  struct ArtificialSoundHostReference m_artificialSoundHost;
  struct SoundHost * m_soundHost;
  struct ParticleSystem__Array * m_particleSystems;
  struct MoonTrail__Array * m_trails;
  bool m_canBeBashed;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct SpiritGrenade {
  struct SpiritGrenade__Class *klass;
  struct MonitorData *monitor;
  struct SpiritGrenade__Fields fields;
};
struct IMinerThrowable {
  struct IMinerThrowable__Class *klass;
  struct MonitorData *monitor;
};
struct SpiritGrenade__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
  VirtualInvokeData get_BashPriority;
  VirtualInvokeData OnEnterBash;
  VirtualInvokeData OnBashHighlight;
  VirtualInvokeData OnBashDehighlight;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData OnPoolSpawned;
  VirtualInvokeData OnPoolDespawned;
  VirtualInvokeData Invalidate;
  VirtualInvokeData Explode;
  VirtualInvokeData SetTrajectory;
  VirtualInvokeData get_HammerPriority;
  VirtualInvokeData get_HammerEnableAutoTarget;
  VirtualInvokeData OnCollisionEnter;
};
struct SpiritGrenade__StaticFields {
};
struct SpiritGrenade__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritGrenade__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritGrenade__VTable vtable;
};
struct IMinerThrowable__VTable {
  VirtualInvokeData OnMinerPullOut;
  VirtualInvokeData OnMinerThrow;
};
struct IMinerThrowable__StaticFields {
};
struct IMinerThrowable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IMinerThrowable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IMinerThrowable__VTable vtable;
};
struct MinerThrowAttack_ProjectileInstance__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MinerThrowAttack_ProjectileInstance__StaticFields {
};
struct MinerThrowAttack_ProjectileInstance__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MinerThrowAttack_ProjectileInstance__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MinerThrowAttack_ProjectileInstance__VTable vtable;
};}