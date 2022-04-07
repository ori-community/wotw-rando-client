namespace app {
struct HornbugBossHitReactionsBehaviour {
  struct HornbugBossHitReactionsBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornbugBossHitReactionsBehaviour__Fields fields;
};
struct HornbugBossHitReactionsBehaviour_Reaction {
  struct GameObject * DamageReceiver;
  struct MoonTimeline * StandAlone;
  struct MoonTimeline * Additive;
  float HeavyDamageMultiplier;
};
struct HornbugBossHitReactionsBehaviour_Reaction__Boxed {
  struct HornbugBossHitReactionsBehaviour_Reaction__Class *klass;
  struct MonitorData *monitor;
  struct HornbugBossHitReactionsBehaviour_Reaction fields;
};
struct HornbugBossHitReactionsBehaviour_Reaction__Array {
  struct HornbugBossHitReactionsBehaviour_Reaction__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HornbugBossHitReactionsBehaviour_Reaction vector[32];
};
struct HornbugBossHitReactionsBehaviour_Reaction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HornbugBossHitReactionsBehaviour_Reaction__StaticFields {
};
struct HornbugBossHitReactionsBehaviour_Reaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornbugBossHitReactionsBehaviour_Reaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornbugBossHitReactionsBehaviour_Reaction__VTable vtable;
};
struct HornbugBossHitReactionsBehaviour__VTable {
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
struct HornbugBossHitReactionsBehaviour__StaticFields {
};
struct HornbugBossHitReactionsBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornbugBossHitReactionsBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornbugBossHitReactionsBehaviour__VTable vtable;
};

struct HornBugBossJumpBehaviour__Fields {
  struct HornbugBossBaseBehaviour__Fields _;
  struct GameObject * BounceTarget;
  struct MoonTimeline * EnterTimeline;
  struct MoonTimeline * ExitTimeline;
  struct MoonTimeline * TakeOffFwdTimeline;
  struct MoonTimeline * TakeOffBwdTimeline;
  struct MoonTimeline * InAirFwdTimeline;
  struct MoonTimeline * InAirBwdTimeline;
  struct MoonTimeline * LandTimeline;
  struct EventTriggerAnimator * FlipEventTrigger;
  bool PlayEnter;
  bool PlayExit;
  struct ObjectInsideZoneChecker * WalkJumpSafeZone;
  float JumpHeight;
  float JumpDuration;
  float TargetPredictionOffsetScale;
  struct AnimationCurve * JumpYCurveNormalized;
  struct AnimationCurve * JumpXCurveNormalized;
  struct MoonTimeline * m_curTimeline;
  bool m_finished;
  struct Vector3 m_jumpOffset;
  struct RootMotionProcessorData * RootMotion;
  int32_t MaxAmountOfBounces;
  float MinDistance;
  float MaxDistance;
  struct Transform * ImpactEffectSpawnLocation;
  struct GameObject * ImpactEffect;
  float ImpactEffectScaleX;
  struct Vector3 _OriginalTarget_k__BackingField;
  int32_t _AmountOfBounces_k__BackingField;
  struct GroundEntityLocomotion * m_locomotion;
  struct DamageOwner * m_damageOwner;
};
struct HornBugBossJumpBehaviour {
  struct HornBugBossJumpBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossJumpBehaviour__Fields fields;
};
struct HornBugBossJumpBehaviour__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData ModifyRootMotion;
};
struct HornBugBossJumpBehaviour__StaticFields {
};
struct HornBugBossJumpBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossJumpBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossJumpBehaviour__VTable vtable;
};

struct HornBugBossRollBackBehaviour_new__Fields {
  struct HornBugBossTimelineBehaviour__Fields _;
  struct DamageDealer__Array * m_DamageDealers;
};
struct HornBugBossRollBackBehaviour_new {
  struct HornBugBossRollBackBehaviour_new__Class *klass;
  struct MonitorData *monitor;
  struct HornBugBossRollBackBehaviour_new__Fields fields;
};
struct HornBugBossRollBackBehaviour_new__VTable {
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
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData InitializeCancellableController;
  VirtualInvokeData CanCancel;
  VirtualInvokeData InitializeHitReactionController;
  VirtualInvokeData CanAccumulateHits;
  VirtualInvokeData CanHitReact;
  VirtualInvokeData ComputeUtility;
  VirtualInvokeData ModifyRootMotion;
  VirtualInvokeData RootMotionModifier;
};
struct HornBugBossRollBackBehaviour_new__StaticFields {
};
struct HornBugBossRollBackBehaviour_new__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HornBugBossRollBackBehaviour_new__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HornBugBossRollBackBehaviour_new__VTable vtable;
};

struct FloatFraction {
  float Value;
  float Max;
};
struct FloatFraction__Boxed {
  struct FloatFraction__Class *klass;
  struct MonitorData *monitor;
  struct FloatFraction fields;
};
struct JumperEntity__Fields {
  struct GroundMovingEntity__Fields _;
  struct Transform * agent;
  bool isOnScreen;
  float onScreenDelay;
  float m_onScreenTime;
  struct FloatFraction AggroTimer;
  struct FloatFraction Stamina;
  float StaminaRegenRate;
  struct Vector2 damageSpeed;
  struct IKLimb__Array * limbsIK;
  struct Collider * Collider;
  struct LayerMask obstacleMask;
  float IKWeight;
  bool _Aggro_k__BackingField;
};
struct JumperEntity {
  struct JumperEntity__Class *klass;
  struct MonitorData *monitor;
  struct JumperEntity__Fields fields;
};
struct FloatFraction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FloatFraction__StaticFields {
};
struct FloatFraction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FloatFraction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FloatFraction__VTable vtable;
};
struct JumperEntity__VTable {
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
};
struct JumperEntity__StaticFields {
};
struct JumperEntity__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumperEntity__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumperEntity__VTable vtable;
};

struct FallingRocksArea__Fields {
  struct MonoBehaviour__Fields _;
  bool ShowGizmos;
  struct Bounds Bounds;
  bool Active;
  float Area;
};
struct FallingRocksArea {
  struct FallingRocksArea__Class *klass;
  struct MonitorData *monitor;
  struct FallingRocksArea__Fields fields;
};
struct FallingRocksArea__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FallingRocksArea__StaticFields {
};
struct FallingRocksArea__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FallingRocksArea__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FallingRocksArea__VTable vtable;
};

struct FallingRocksGroup__Fields {
  struct MonoBehaviour__Fields _;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct List_1_FallingRocksGroup_RockInfo_ * RockTypes;
  struct GameObject * RockExplosionPrefab;
  struct GameObject * RockWaterExplosionPrefab;
  struct WeightedGroup_1_FallingRocksGroup_RockInfo_ * m_randomRockSelector;
  struct Vector2 InitialSpeedRandomRange;
  float AnticTime;
  struct List_1_FallingRocksArea_ * m_fallingRockAreas;
  float m_timer;
  int32_t m_rocksSpawned;
  float m_timeBetweenRocks;
  float m_minTimeBetweenFalingRock;
  float m_maxTimeBetweenFalingRock;
  int32_t m_numberOfRocks;
  struct List_1_FallingRocksGroup_AnticSpawnInfo_ * m_delayedAntics;
  bool m_rockFallTriggered;
};
struct FallingRocksGroup {
  struct FallingRocksGroup__Class *klass;
  struct MonitorData *monitor;
  struct FallingRocksGroup__Fields fields;
};
struct __declspec(align(8)) List_1_FallingRocksGroup_RockInfo___Fields {
  struct FallingRocksGroup_RockInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FallingRocksGroup_RockInfo_ {
  struct List_1_FallingRocksGroup_RockInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FallingRocksGroup_RockInfo___Fields fields;
};
struct __declspec(align(8)) FallingRocksGroup_RockInfo__Fields {
  struct GameObject * Prefab;
  bool ShowAntic;
  struct GameObject * AnticGroundPrefab;
  struct GameObject * AnticWaterPrefab;
  float RandomSelectionWeight;
};
struct FallingRocksGroup_RockInfo {
  struct FallingRocksGroup_RockInfo__Class *klass;
  struct MonitorData *monitor;
  struct FallingRocksGroup_RockInfo__Fields fields;
};
struct FallingRocksGroup_RockInfo__Array {
  struct FallingRocksGroup_RockInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FallingRocksGroup_RockInfo * vector[32];
};
struct IEnumerator_1_FallingRocksGroup_RockInfo_ {
  struct IEnumerator_1_FallingRocksGroup_RockInfo___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) WeightedGroup_1_FallingRocksGroup_RockInfo___Fields {
  struct List_1_FallingRocksGroup_RockInfo_ * elements;
  struct List_1_System_Single_ * weights;
  float totalWeight;
};
struct WeightedGroup_1_FallingRocksGroup_RockInfo_ {
  struct WeightedGroup_1_FallingRocksGroup_RockInfo___Class *klass;
  struct MonitorData *monitor;
  struct WeightedGroup_1_FallingRocksGroup_RockInfo___Fields fields;
};
struct __declspec(align(8)) List_1_FallingRocksArea___Fields {
  struct FallingRocksArea__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FallingRocksArea_ {
  struct List_1_FallingRocksArea___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FallingRocksArea___Fields fields;
};
struct FallingRocksArea__Array {
  struct FallingRocksArea__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FallingRocksArea * vector[32];
};
struct IEnumerator_1_FallingRocksArea_ {
  struct IEnumerator_1_FallingRocksArea___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_FallingRocksGroup_AnticSpawnInfo___Fields {
  struct FallingRocksGroup_AnticSpawnInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FallingRocksGroup_AnticSpawnInfo_ {
  struct List_1_FallingRocksGroup_AnticSpawnInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FallingRocksGroup_AnticSpawnInfo___Fields fields;
};
struct __declspec(align(8)) FallingRocksGroup_AnticSpawnInfo__Fields {
  struct GameObject * Owner;
  struct GameObject * Prefab;
  float Countdown;
  struct Vector3 SpawnPos;
  struct Quaternion SpawnRot;
};
struct FallingRocksGroup_AnticSpawnInfo {
  struct FallingRocksGroup_AnticSpawnInfo__Class *klass;
  struct MonitorData *monitor;
  struct FallingRocksGroup_AnticSpawnInfo__Fields fields;
};
struct FallingRocksGroup_AnticSpawnInfo__Array {
  struct FallingRocksGroup_AnticSpawnInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FallingRocksGroup_AnticSpawnInfo * vector[32];
};
struct IEnumerator_1_FallingRocksGroup_AnticSpawnInfo_ {
  struct IEnumerator_1_FallingRocksGroup_AnticSpawnInfo___Class *klass;
  struct MonitorData *monitor;
};
struct FallingRocksGroup_RockInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData CompareTo;
};
struct FallingRocksGroup_RockInfo__StaticFields {
};
struct FallingRocksGroup_RockInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FallingRocksGroup_RockInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FallingRocksGroup_RockInfo__VTable vtable;
};
struct IEnumerator_1_FallingRocksGroup_RockInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FallingRocksGroup_RockInfo___StaticFields {
};
struct IEnumerator_1_FallingRocksGroup_RockInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FallingRocksGroup_RockInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FallingRocksGroup_RockInfo___VTable vtable;
};
struct List_1_FallingRocksGroup_RockInfo___VTable {
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
struct List_1_FallingRocksGroup_RockInfo___StaticFields {
  struct FallingRocksGroup_RockInfo__Array * _emptyArray;
};
struct List_1_FallingRocksGroup_RockInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FallingRocksGroup_RockInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FallingRocksGroup_RockInfo___VTable vtable;
};
struct WeightedGroup_1_FallingRocksGroup_RockInfo___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WeightedGroup_1_FallingRocksGroup_RockInfo___StaticFields {
};
struct WeightedGroup_1_FallingRocksGroup_RockInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WeightedGroup_1_FallingRocksGroup_RockInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WeightedGroup_1_FallingRocksGroup_RockInfo___VTable vtable;
};
struct IEnumerator_1_FallingRocksArea___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FallingRocksArea___StaticFields {
};
struct IEnumerator_1_FallingRocksArea___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FallingRocksArea___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FallingRocksArea___VTable vtable;
};
struct List_1_FallingRocksArea___VTable {
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
struct List_1_FallingRocksArea___StaticFields {
  struct FallingRocksArea__Array * _emptyArray;
};
struct List_1_FallingRocksArea___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FallingRocksArea___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FallingRocksArea___VTable vtable;
};
struct FallingRocksGroup_AnticSpawnInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FallingRocksGroup_AnticSpawnInfo__StaticFields {
};
struct FallingRocksGroup_AnticSpawnInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FallingRocksGroup_AnticSpawnInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FallingRocksGroup_AnticSpawnInfo__VTable vtable;
};
struct IEnumerator_1_FallingRocksGroup_AnticSpawnInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_FallingRocksGroup_AnticSpawnInfo___StaticFields {
};
struct IEnumerator_1_FallingRocksGroup_AnticSpawnInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_FallingRocksGroup_AnticSpawnInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_FallingRocksGroup_AnticSpawnInfo___VTable vtable;
};
struct List_1_FallingRocksGroup_AnticSpawnInfo___VTable {
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
struct List_1_FallingRocksGroup_AnticSpawnInfo___StaticFields {
  struct FallingRocksGroup_AnticSpawnInfo__Array * _emptyArray;
};
struct List_1_FallingRocksGroup_AnticSpawnInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_FallingRocksGroup_AnticSpawnInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_FallingRocksGroup_AnticSpawnInfo___VTable vtable;
};
struct FallingRocksGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct FallingRocksGroup__StaticFields {
};
struct FallingRocksGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FallingRocksGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FallingRocksGroup__VTable vtable;
};

struct InWaterBrain__Fields {
  struct MonoBehaviour__Fields _;
  struct WaterInteraction * WaterInteractionComponent;
  struct Enum__Array * Entries;
};
struct InWaterBrain {
  struct InWaterBrain__Class *klass;
  struct MonitorData *monitor;
  struct InWaterBrain__Fields fields;
};
struct InWaterBrain__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetEntries;
  VirtualInvokeData Evaluate;
  VirtualInvokeData get_ShouldSkip;
};
struct InWaterBrain__StaticFields {
};
struct InWaterBrain__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InWaterBrain__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InWaterBrain__VTable vtable;
};

enum KwolokAttackCategory__Enum : int32_t {
  KwolokAttackCategory__Enum_Common = 0,
  KwolokAttackCategory__Enum_Special = 1,
  KwolokAttackCategory__Enum_NonAttack = 2,
  KwolokAttackCategory__Enum_Cinematic = 3,
};
struct KwolokAttackCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokAttackCategory__Enum value;
};
struct __declspec(align(8)) KwolokBehaviourSettings__Fields {
  struct KwolokBossEntity_Phases__Enum__Array * AllowedPhases;
  bool IsBlocking;
  enum KwolokAttackCategory__Enum Category;
};
struct KwolokBehaviourSettings {
  struct KwolokBehaviourSettings__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBehaviourSettings__Fields fields;
};
enum KwolokBossEntity_Phases__Enum : int32_t {
  KwolokBossEntity_Phases__Enum_Prefight = 0,
  KwolokBossEntity_Phases__Enum_Intro = 1,
  KwolokBossEntity_Phases__Enum_Escape = 2,
  KwolokBossEntity_Phases__Enum_Dry = 3,
  KwolokBossEntity_Phases__Enum_CleanWater = 4,
  KwolokBossEntity_Phases__Enum_CorruptedWater = 5,
  KwolokBossEntity_Phases__Enum_Defeated = 6,
  KwolokBossEntity_Phases__Enum_WispCollected = 7,
};
struct KwolokBossEntity_Phases__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KwolokBossEntity_Phases__Enum value;
};
struct KwolokBossEntity_Phases__Enum__Array {
  struct KwolokBossEntity_Phases__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum KwolokBossEntity_Phases__Enum vector[32];
};
struct KwolokBehaviourSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KwolokBehaviourSettings__StaticFields {
};
struct KwolokBehaviourSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KwolokBehaviourSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KwolokBehaviourSettings__VTable vtable;
};

struct EntityBehaviourNode_1_KwolokBossEntity___Fields {
  struct EntityBehaviourNode__Fields _;
};
struct EntityBehaviourNode_1_KwolokBossEntity_ {
  struct EntityBehaviourNode_1_KwolokBossEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityBehaviourNode_1_KwolokBossEntity___Fields fields;
};
struct KwolokBossBaseBehaviour__Fields {
  struct EntityBehaviourNode_1_KwolokBossEntity___Fields _;
  struct DynamicDataResolver * m_dataResolver;
  struct KwolokBehaviourSettings * Settings;
  struct CancellableController * m_cancellableController;
  struct HitReactionController * m_hitReactionController;
};
struct KwolokBossBaseBehaviour {
  struct KwolokBossBaseBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossBaseBehaviour__Fields fields;
};
struct KwolokBossButtSlamBehaviour__Fields {
  struct KwolokBossBaseBehaviour__Fields _;
  struct MoonTimeline * PositioningLoopTimeline;
  struct MoonTimeline * ButtSlamTimeline;
  struct FirewhirlBeamSpawner * BeamSpawnerR;
  struct FirewhirlBeamSpawner * BeamSpawnerL;
  struct EventTriggerAnimator * BeamSpawnEvent;
  struct EventTriggerAnimator * LookAngleFreezeWindow;
  struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_ * GroundBreakStateChange;
  struct KwolokBossLocomotion_StayAtRangeSettings * StayAtRangeSettings;
  float MaxMovementSpeed;
  float AccelerationMultiplier;
  float DecelerationMultiplier;
  float PositioningTimeOut;
  float DistanceXToSlam;
  float MinumumPositioningTime;
  struct StateMachine_2 * m_stateMachine;
  struct KwolokBossButtSlamBehaviour_States * m_states;
};
struct KwolokBossButtSlamBehaviour {
  struct KwolokBossButtSlamBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct KwolokBossButtSlamBehaviour__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_Setups_ChangeStateOnCondition___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_Setups_ChangeStateOnCondition_ * m_cachedProxyType;
  struct ChangeStateOnCondition * m_volatileValue;
};
struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_ {
  struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_Setups_ChangeStateOnCondition___Fields fields;
};
struct IMoonType_1_Moon_Setups_ChangeStateOnCondition_ {
  struct IMoonType_1_Moon_Setups_ChangeStateOnCondition___Class *klass;
  struct MonitorData *monitor;
};
enum CheckpointFunctionality_CheckpointPositionMode__Enum : int32_t {
  CheckpointFunctionality_CheckpointPositionMode__Enum_CharacterPosition = 0,
  CheckpointFunctionality_CheckpointPositionMode__Enum_ManualPosition = 1,
};
struct CheckpointFunctionality_CheckpointPositionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CheckpointFunctionality_CheckpointPositionMode__Enum value;
};
struct CheckpointFunctionality {
  enum CheckpointFunctionality_CheckpointPositionMode__Enum Mode;
  struct Transform * RespawnTransform;
  struct Vector2 RespawnOffset;
  bool RefillHealthAndEnergy;
  bool ApplyRefillInstantly;
};}