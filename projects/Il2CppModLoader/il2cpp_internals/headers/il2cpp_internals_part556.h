namespace app {
struct SneezeSlugEntity_c_DisplayClass48_0 {
  struct SneezeSlugEntity_c_DisplayClass48_0__Class *klass;
  struct MonitorData *monitor;
  struct SneezeSlugEntity_c_DisplayClass48_0__Fields fields;
};
enum GroundPatrolBehaviourNew_GroundPatrolModeType__Enum : int32_t {
  GroundPatrolBehaviourNew_GroundPatrolModeType__Enum_Infinite = 0,
  GroundPatrolBehaviourNew_GroundPatrolModeType__Enum_ReturnSuccessAtEachStop = 1,
};
struct GroundPatrolBehaviourNew_GroundPatrolModeType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GroundPatrolBehaviourNew_GroundPatrolModeType__Enum value;
};
struct GroundPatrolBehaviourNew__Fields {
  struct EntityBehaviourNode__Fields _;
  enum GroundPatrolBehaviourNew_GroundPatrolModeType__Enum GroundPatrolMode;
  float MinIdleInterval;
  float MaxIdleInterval;
  bool StartWithMoving;
  struct MoonVector3 * PatrolOrigin;
  float MaxPatrolRadius;
  bool UseSeparateMaxPatrolRadiusForVertical;
  float MaxVerticalPatrolRadius;
  float TraversalSpeed;
  float MinDistance;
  float m_timeUntilIdleEnd;
  struct Predicate_1_UnityEngine_Vector3_ * m_patrolTargetPredicate;
  struct Vector2 m_targetPosition;
  struct GroundEntityLocomotion * m_locomotion;
  bool m_patrollLeft;
  struct Vector3 m_leftPatrollCenter;
  struct Vector3 m_rightPatrollCenter;
  float m_halfRadius;
  struct Vector3 m_patrolOrigin;
  float m_directionToTarget;
};
struct GroundPatrolBehaviourNew {
  struct GroundPatrolBehaviourNew__Class *klass;
  struct MonitorData *monitor;
  struct GroundPatrolBehaviourNew__Fields fields;
};
struct GroundPatrolBehaviourNew__VTable {
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
struct GroundPatrolBehaviourNew__StaticFields {
};
struct GroundPatrolBehaviourNew__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GroundPatrolBehaviourNew__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GroundPatrolBehaviourNew__VTable vtable;
};
struct SneezeSlugEntity_c_DisplayClass48_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SneezeSlugEntity_c_DisplayClass48_0__StaticFields {
};
struct SneezeSlugEntity_c_DisplayClass48_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SneezeSlugEntity_c_DisplayClass48_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SneezeSlugEntity_c_DisplayClass48_0__VTable vtable;
};

struct SneezeSlugIdleAggroBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct TurningBehaviour * turnBehaviour;
  struct LegacyTimelineSequence * idleTimeline;
  struct SneezeSlugEntity * m_Entity;
  struct Locomotion * m_groundLocomotion;
};
struct SneezeSlugIdleAggroBehaviour {
  struct SneezeSlugIdleAggroBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SneezeSlugIdleAggroBehaviour__Fields fields;
};
struct SneezeSlugIdleAggroBehaviour__VTable {
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
struct SneezeSlugIdleAggroBehaviour__StaticFields {
};
struct SneezeSlugIdleAggroBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SneezeSlugIdleAggroBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SneezeSlugIdleAggroBehaviour__VTable vtable;
};

struct SneezeSlugIdleBehaviour__Fields {
  struct EntityBehaviour__Fields _;
  struct LegacyTimelineSequence * idleTimeline;
  struct SneezeSlugEntity * m_Entity;
  struct Locomotion * m_groundLocomotion;
};
struct SneezeSlugIdleBehaviour {
  struct SneezeSlugIdleBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SneezeSlugIdleBehaviour__Fields fields;
};
struct SneezeSlugIdleBehaviour__VTable {
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
struct SneezeSlugIdleBehaviour__StaticFields {
};
struct SneezeSlugIdleBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SneezeSlugIdleBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SneezeSlugIdleBehaviour__VTable vtable;
};

struct SneezeSlugPlaceholder__Fields {
  struct EntityPlaceholder__Fields _;
};
struct SneezeSlugPlaceholder {
  struct SneezeSlugPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct SneezeSlugPlaceholder__Fields fields;
};
struct SneezeSlugPlaceholder__VTable {
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
struct SneezeSlugPlaceholder__StaticFields {
};
struct SneezeSlugPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SneezeSlugPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SneezeSlugPlaceholder__VTable vtable;
};

struct SneezeSlugSettings__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  float SneezingCooldown;
  float SneezingRange;
  float SneezingSpeed;
  bool DrawSneezingGizmo;
  float RunningRange;
  bool DrawRunningGizmo;
  float CloudAttackRange;
  float CloudAttackSpeed;
  bool DrawCloudAttackGizmo;
  bool BurrowingEnabled;
  float BurrowingCooldown;
  float BurrowingSpeed;
};
struct SneezeSlugSettings {
  struct SneezeSlugSettings__Class *klass;
  struct MonitorData *monitor;
  struct SneezeSlugSettings__Fields fields;
};
struct SneezeSlugSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetResolverForType;
};
struct SneezeSlugSettings__StaticFields {
};
struct SneezeSlugSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SneezeSlugSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SneezeSlugSettings__VTable vtable;
};

struct SneezeSlugSneezeBehaviour__Fields {
  struct EntityBehaviour__Fields _;
};
struct SneezeSlugSneezeBehaviour {
  struct SneezeSlugSneezeBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SneezeSlugSneezeBehaviour__Fields fields;
};
struct SneezeSlugSneezeBehaviour__VTable {
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
struct SneezeSlugSneezeBehaviour__StaticFields {
};
struct SneezeSlugSneezeBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SneezeSlugSneezeBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SneezeSlugSneezeBehaviour__VTable vtable;
};

struct RetaliateShriek__Fields {
  struct Suspendable__Fields _;
  struct MoonTimeline * TimelineSequence;
  float PushForce;
  struct Transform * AnchorSpot;
  bool m_overrideOriginPosition;
  struct Vector3 m_originPosition;
  bool _IsSuspended_k__BackingField;
};
struct RetaliateShriek {
  struct RetaliateShriek__Class *klass;
  struct MonitorData *monitor;
  struct RetaliateShriek__Fields fields;
};
struct RetaliateShriek__VTable {
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
};
struct RetaliateShriek__StaticFields {
};
struct RetaliateShriek__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RetaliateShriek__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RetaliateShriek__VTable vtable;
};

struct RetaliateShriekSettings__Fields {
  struct MonoBehaviour__Fields _;
  float Duration;
  float Radius;
  float SpreadTime;
};
struct RetaliateShriekSettings {
  struct RetaliateShriekSettings__Class *klass;
  struct MonitorData *monitor;
  struct RetaliateShriekSettings__Fields fields;
};
struct RetaliateShriekSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RetaliateShriekSettings__StaticFields {
};
struct RetaliateShriekSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RetaliateShriekSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RetaliateShriekSettings__VTable vtable;
};

struct EntityBehaviourNode_1_SpiderBatEntity___Fields {
  struct EntityBehaviourNode__Fields _;
};
struct EntityBehaviourNode_1_SpiderBatEntity_ {
  struct EntityBehaviourNode_1_SpiderBatEntity___Class *klass;
  struct MonitorData *monitor;
  struct EntityBehaviourNode_1_SpiderBatEntity___Fields fields;
};
struct SpiderBatAcidSprayBehaviour__Fields {
  struct EntityBehaviourNode_1_SpiderBatEntity___Fields _;
  struct MoonTimeline * TimelineSequence;
  struct RootMotionProcessorData * RootMotion;
  bool TrackTargetWholeTime;
  struct PrefabSpawner * ProjectileSpawner;
  int32_t ProjectileDamage;
  float PushForce;
  float ProjectileSpeed;
  enum DamageWeight__Enum DamageWeight;
  struct Transform * ShootPoint;
  float TimeBetweenAcidShots;
  struct EventTriggerAnimator * ShootTrigger;
  struct EventTriggerAnimator * StopShootingTrigger;
  struct AnimationCurve * AngleCurve;
  bool m_isActivated;
  bool m_hasFinished;
  bool m_hasAnimationFinished;
  float m_shotTimer;
  bool m_canShoot;
  bool m_firstShot;
  float m_currentAttackTime;
  float m_currentAngle;
  struct Vector3 m_firstShotDirection;
};
struct SpiderBatAcidSprayBehaviour {
  struct SpiderBatAcidSprayBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBatAcidSprayBehaviour__Fields fields;
};
struct EntityBehaviourNode_1_SpiderBatEntity___VTable {
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
struct EntityBehaviourNode_1_SpiderBatEntity___StaticFields {
};
struct EntityBehaviourNode_1_SpiderBatEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EntityBehaviourNode_1_SpiderBatEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EntityBehaviourNode_1_SpiderBatEntity___VTable vtable;
};
struct SpiderBatAcidSprayBehaviour__VTable {
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
  VirtualInvokeData Shoot;
};
struct SpiderBatAcidSprayBehaviour__StaticFields {
};
struct SpiderBatAcidSprayBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBatAcidSprayBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBatAcidSprayBehaviour__VTable vtable;
};

struct SpiderBatClimbBehaviour__Fields {
  struct EntityBehaviourNode_1_SpiderBatEntity___Fields _;
  struct MoonTimeline * TimelineSequence;
  bool ClimbUp;
  bool m_isActivated;
  bool m_hasFinished;
  bool m_hasAnimationFinished;
};
struct SpiderBatClimbBehaviour {
  struct SpiderBatClimbBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBatClimbBehaviour__Fields fields;
};
struct SpiderBatClimbBehaviour__VTable {
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
struct SpiderBatClimbBehaviour__StaticFields {
};
struct SpiderBatClimbBehaviour__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBatClimbBehaviour__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBatClimbBehaviour__VTable vtable;
};

struct SpiderBatDeathReaction__Fields {
  struct EntityReactionBehaviour__Fields _;
  struct MoonTimeline * DeathStartTimeline;
  struct MoonTimeline * Death;
  float DeathDamageForceMultiplier;
  struct DeathStartEffectSpawnSetting * DeathStartEffect;
  struct MoonTimeline * m_currentTimeline;
  struct ReactionFallingBehaviour * m_fallReaction;
  struct CharacterPlatformMovement * m_platformMovement;
  bool m_waitingForDeath;
  bool m_wasCacheSerialized;
};
struct SpiderBatDeathReaction {
  struct SpiderBatDeathReaction__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBatDeathReaction__Fields fields;
};
struct SpiderBatDeathReaction__VTable {
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
struct SpiderBatDeathReaction__StaticFields {
};
struct SpiderBatDeathReaction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBatDeathReaction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBatDeathReaction__VTable vtable;
};

struct SpiderBatDeathReaction_c {
  struct SpiderBatDeathReaction_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpiderBatDeathReaction_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiderBatDeathReaction_c__StaticFields {
  struct SpiderBatDeathReaction_c * __9;
  struct Action * __9__11_0;
};
struct SpiderBatDeathReaction_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiderBatDeathReaction_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiderBatDeathReaction_c__VTable vtable;
};

enum SpiderBatEntity_ClimbBehaviourType__Enum : int32_t {
  SpiderBatEntity_ClimbBehaviourType__Enum_UpDown = 0,
  SpiderBatEntity_ClimbBehaviourType__Enum_DownOnly = 1,
  SpiderBatEntity_ClimbBehaviourType__Enum_None = 2,
};
struct SpiderBatEntity_ClimbBehaviourType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiderBatEntity_ClimbBehaviourType__Enum value;
};
struct SpiderBatEntity__Fields {
  struct EnemyEntity__Fields _;
  float LightKnockBackForce;
  float MediumKnockBackForce;
  float HeavyKnockBackForce;
  float HeavyStunDuration;
  struct Rigidbody * RigidbodyRopeClimber;
  float RotationSpring;
  float RotationDampening;
  struct MoonTimeline * RestingTimelineSequence;
  struct AnimationCurve * ClimbSpeedCurve;
  struct Transform * WebRopeConnectPoint;
  struct Transform * RotationTransform;
  struct GameObject * BaseModel;
  struct GameObject * AcidModel;
  enum SpiderBatEntity_ClimbBehaviourType__Enum ClimbType;
  bool m_isAttacking;
  bool AllowClimb;
  int32_t AttacksSinceClimbedUp;
  int32_t AttackToClimb;
  bool ClimbUpDirection;
  struct Rope * m_ropeToAttachTo;
  float m_ropeTotalLength;
  struct LineRenderer * m_ropeLineRenderer;
  struct Rigidbody * m_rigidbody;
  struct Rigidbody * m_ropeClimberRigidbody;
  int32_t m_ropeLinkIndex;
  float m_ropeLinkOffset;
  struct SpiderBatPlatformMovement * m_spiderBatPlatformMovement;
  struct SpiderBatLocomotion * m_spiderBatLocomotion;
  struct Action_1_Damage_ * m_receivedDamageEvent;
  float m_stunnedTimer;
  bool m_isAggro;
  struct ReactionFallingBehaviour * m_falling;
  struct BehaviourNode * SpitNode;
  struct BehaviourNode * MultiShotNode;
  struct BehaviourNode * SprayNode;
  struct BehaviourNode * MixedNode;
  struct BehaviourNode * AcidNode;
  bool SpawnReady;
  struct ConfigurableJoint * m_generatedConfigurableJoint;
};
struct SpiderBatEntity {
  struct SpiderBatEntity__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBatEntity__Fields fields;
};
struct Rope__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector2 LineRendererEndOffset;
  struct Vector2 LineRendererStartOffset;
  bool IsManagedByPhysicsSystemManager;
  float RopeWidth;
  float LinkDensity;
  struct RopePhysicsSettings * PhysicsSettings;
  struct List_1_UnityEngine_Transform_ * Links;
  bool FreeRotationAtTheStart;
  struct LineRenderer * m_lineRenderer;
  bool UseNewTypeJoint;
  struct AttachJointSettings * NewTypeJointSettings;
  struct Vector3 _OffsetBetweenLinks_k__BackingField;
  float _EffectiveLinkDensity_k__BackingField;
  struct Rope_LinkData__Array * m_linkData;
  bool m_isInitialised;
  bool m_updateLineRendererInPlayMode;
  bool m_isSuspended;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct Rope {
  struct Rope__Class *klass;
  struct MonitorData *monitor;
  struct Rope__Fields fields;
};
struct __declspec(align(8)) RopePhysicsSettings__Fields {
  float AngularSpringDamping;
  float AngularSpringStiffness;
  float LengthSpringDamping;
  float LengthSpringStiffness;
  float AngularMotorDamping;
  float AngularMotorStiffness;
  float LinkDrag;
  float LinkMass;
  int32_t PhysicsIterationCount;
};
struct RopePhysicsSettings {
  struct RopePhysicsSettings__Class *klass;
  struct MonitorData *monitor;
  struct RopePhysicsSettings__Fields fields;
};
struct __declspec(align(8)) AttachJointSettings__Fields {
  bool lockRotation;
  bool lockPosition;
  bool lockHorizontalMovement;
  float hingeAngleLimit;
  float hingeSpring;
  float hingeDamper;
  float positionSpring;
  float positionDamper;
  float positionLimit;
  float massScale;
  bool useAngularDrive;
  float angularDriveSpring;
  float angularDriveDamper;
  bool UseHingeSpring;
  float HingeSpringSpring;
  float HingeSpringDamper;
};
struct AttachJointSettings {
  struct AttachJointSettings__Class *klass;
  struct MonitorData *monitor;
  struct AttachJointSettings__Fields fields;
};
struct Rope_LinkData {
  struct Vector3 AngularVelocity;
  struct Vector3 Position;
  struct Rigidbody * Rigidbody;
  struct Quaternion Rotation;
  struct Transform * Transform;
  struct Vector3 Velocity;
  struct Vector3 OriginalPosition;
};
struct Rope_LinkData__Boxed {
  struct Rope_LinkData__Class *klass;
  struct MonitorData *monitor;
  struct Rope_LinkData fields;
};
struct Rope_LinkData__Array {
  struct Rope_LinkData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Rope_LinkData vector[32];
};
struct IPhysicsAttachable {
  struct IPhysicsAttachable__Class *klass;
  struct MonitorData *monitor;
};
struct SpiderBatPlatformMovement__Fields {
  struct EnemyPlatformMovement__Fields _;
  bool m_suspended;
  bool m_isDeathFalling;
  struct Vector3 m_velocityBeforeSuspension;
  struct Vector3 m_angularVelocityBeforeSuspension;
};
struct SpiderBatPlatformMovement {
  struct SpiderBatPlatformMovement__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBatPlatformMovement__Fields fields;
};
struct SpiderBatLocomotion__Fields {
  struct AirEntityLocomotion__Fields _;
  struct MoonTimeline * RestingIdleTimeline;
  struct MoonTimeline * AttackingIdleTimeline;
  struct LocomotionIdleBehaviour * LocomotionIdleBehaviourRef;
};
struct SpiderBatLocomotion {
  struct SpiderBatLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct SpiderBatLocomotion__Fields fields;
};
struct RopePhysicsSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RopePhysicsSettings__StaticFields {
};
struct RopePhysicsSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RopePhysicsSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RopePhysicsSettings__VTable vtable;
};
struct AttachJointSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AttachJointSettings__StaticFields {
};
struct AttachJointSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AttachJointSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AttachJointSettings__VTable vtable;
};
struct Rope_LinkData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Rope_LinkData__StaticFields {
};
struct Rope_LinkData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Rope_LinkData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Rope_LinkData__VTable vtable;
};
struct IPhysicsAttachable__VTable {
  VirtualInvokeData GetRigidbody;
  VirtualInvokeData Attach;
  VirtualInvokeData WasAttached;
  VirtualInvokeData AttachedBodyEnabled;
};
struct IPhysicsAttachable__StaticFields {
};
struct IPhysicsAttachable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IPhysicsAttachable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IPhysicsAttachable__VTable vtable;
};
struct Rope__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData GetRigidbody;
  VirtualInvokeData Attach;
  VirtualInvokeData WasAttached;
  VirtualInvokeData AttachedBodyEnabled;
};
struct Rope__StaticFields {
  struct Color ROPE_END_LINK_COLOR;
  struct Color ROPE_INTERMEDIATE_LINK_COLOR;
};
struct Rope__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Rope__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Rope__VTable vtable;
};
struct SpiderBatPlatformMovement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_IsOnGround;
  VirtualInvokeData get_HasWallLeft;
  VirtualInvokeData get_HasWallRight;
  VirtualInvokeData get_IsOnWall;
  VirtualInvokeData get_MovingHorizontally;
  VirtualInvokeData get_Jumping;
  VirtualInvokeData get_LocalSpeed;
  VirtualInvokeData set_LocalSpeed;
  VirtualInvokeData get_WorldSpeed;
  VirtualInvokeData set_WorldSpeed;
  VirtualInvokeData get_GravityAngle;
  VirtualInvokeData set_GravityAngle;
  VirtualInvokeData get_GroundAngle;
  VirtualInvokeData get_Position;
  VirtualInvokeData set_Position;
  VirtualInvokeData get_FeetPosition;
  VirtualInvokeData set_FeetPosition;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_GoThroughPlatformTestingRayLeft;
  VirtualInvokeData get_GoThroughPlatformTestingRayRight;
  VirtualInvokeData GoThroughPlatformTestingRayLeftRight;
  VirtualInvokeData get_GoThroughPlatformTesterCollider;
  VirtualInvokeData get_GoThroughPlatformTestingRayRadius;
  VirtualInvokeData GetResolverForType;
  VirtualInvokeData Prewarm;
  VirtualInvokeData get_OnGroundSpeedTreshold;
  VirtualInvokeData get_IsOnGround_1;
  VirtualInvokeData get_IsGroundHurting;
  VirtualInvokeData get_LocalSpeed_1;
  VirtualInvokeData set_LocalSpeed_1;
  VirtualInvokeData get_LocalSpeedX;
  VirtualInvokeData set_LocalSpeedX;
  VirtualInvokeData get_LocalSpeedY;
  VirtualInvokeData set_LocalSpeedY;
  VirtualInvokeData get_WorldSpeed_1;
  VirtualInvokeData set_WorldSpeed_1;
  VirtualInvokeData get_Position_1;
  VirtualInvokeData set_Position_1;
  VirtualInvokeData get_IsAllowedNonZeroZPosition;
  VirtualInvokeData get_IsSuspended_1;
  VirtualInvokeData set_IsSuspended_1;
  VirtualInvokeData WorldToLocal;
  VirtualInvokeData LocalToWorld;
  VirtualInvokeData OnAwake;
  VirtualInvokeData OnPrewarm;
  VirtualInvokeData OnCacheNonSerializedComponents;
  VirtualInvokeData OnDestroy;
  VirtualInvokeData OnDisable;
  VirtualInvokeData PlaceOnGround;
  VirtualInvokeData get_StickToMovingPlatform;
  VirtualInvokeData Move;
  VirtualInvokeData OnUpdate;
  VirtualInvokeData ScheduleJobs;
  VirtualInvokeData CompleteUpdate;
  VirtualInvokeData CalculatePositionDelta;
  VirtualInvokeData get_FeetRayPosition;
  VirtualInvokeData get_HeadRayPosition;
};}