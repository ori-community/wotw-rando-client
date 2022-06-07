namespace app {
enum class SkeetoEntity_SkeetoType__Enum : int32_t {
    Unknown = 0x00000000,
    Small = 0x00000001,
    Normal = 0x00000002,
    Kamikaze = 0x00000003,
    Scaredy = 0x00000004,
};

struct SkeetoEntity_SkeetoType__Enum__Boxed {
    struct SkeetoEntity_SkeetoType__Enum__Class *klass;
    MonitorData *monitor;
    SkeetoEntity_SkeetoType__Enum value;
    
};

struct SkeetoEntity__Fields {
    struct EnemyEntity__Fields _;
    float PatrolYOffset;
    struct Vector2 InfluenceDistanceMultiplier;
    SkeetoSpawnType__Enum _SpawnType_k__BackingField;
    
    struct Vector3 m_currentOffet;
    SkeetoEntity_SkeetoState__Enum m_state;
    
    float MaxSwellingScale;
    float AssLerpSpeed;
    float ExplosionDamage;
    DamageWeight__Enum ExplosionDamageWeight;
    
    struct Renderer *Renderer;
    struct Color NormalColor;
    struct Color BombColor;
    bool ForceExplodeOnDeath;
    struct PrefabSpawner *Explosion;
    bool SetSpotOriBoolOnReset;
    struct Rect PrefferedAttackRange;
    bool MirrorAttackRangeHorizontally;
    bool MirrorAttackRangeVertically;
    int32_t MaxAttacksInRow;
    int32_t _AttacksInRow_k__BackingField;
    struct Color m_currentColor;
    struct GameObject *m_explosionEffect;
    float m_blendValue;
    float m_swellingAmount;
    struct SkeetoLocomotion *m_locomotion;
    SkeetoEntity_SkeetoType__Enum m_type;
    
    bool m_isAttacking;
};

struct SkeetoEntity {
    struct SkeetoEntity__Class *klass;
    MonitorData *monitor;
    struct SkeetoEntity__Fields fields;
};

struct SkeetoSpawnType__Enum__VTable {
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

struct SkeetoSpawnType__Enum__StaticFields {
};

struct SkeetoSpawnType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoSpawnType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoSpawnType__Enum__VTable vtable;
};

struct SkeetoEntity_SkeetoType__Enum__VTable {
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

struct SkeetoEntity_SkeetoType__Enum__StaticFields {
};

struct SkeetoEntity_SkeetoType__Enum__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoEntity_SkeetoType__Enum__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoEntity_SkeetoType__Enum__VTable vtable;
};

struct SkeetoEntity__VTable {
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

struct SkeetoEntity__StaticFields {
    int32_t SmallSkeetoAvoidanceRayCount;
    float SmallSkeetoAvoidanceRayDistance;
    bool ForceOffAvoidance;
    bool ForceOffMovementNoise;
};

struct SkeetoEntity__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoEntity__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoEntity__VTable vtable;
};

struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__VTable {
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
    VirtualInvokeData ExecuteDecorator;
    VirtualInvokeData ShouldEvaluateEachTick;
    VirtualInvokeData GetUtility;
};

struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__StaticFields {
};

struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NormalSkeetoAggroMoveToAttackPositionConditionDecorator__VTable vtable;
};

struct NormalSkeetoDiveAttackDecorator__Fields {
    struct DecoratorNode__Fields _;
    struct SkeetoEntity *Entity;
};

struct NormalSkeetoDiveAttackDecorator {
    struct NormalSkeetoDiveAttackDecorator__Class *klass;
    MonitorData *monitor;
    struct NormalSkeetoDiveAttackDecorator__Fields fields;
};

struct NormalSkeetoDiveAttackDecorator__VTable {
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
    VirtualInvokeData ExecuteDecorator;
    VirtualInvokeData ShouldEvaluateEachTick;
    VirtualInvokeData GetUtility;
};

struct NormalSkeetoDiveAttackDecorator__StaticFields {
};

struct NormalSkeetoDiveAttackDecorator__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct NormalSkeetoDiveAttackDecorator__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct NormalSkeetoDiveAttackDecorator__VTable vtable;
};

struct SkeetoDeathReaction__Fields {
    struct EntityReactionBehaviour_1_SkeetoEntity___Fields _;
    struct MoonTimeline *DeathStartTimeline;
    struct MoonTimeline *Death;
    struct MoonTimeline *DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject *SplashPrefab;
    struct MoonTimeline *m_currentTimeline;
    struct SkeetoFallingReactionBehaviour *m_fallReaction;
    struct SkeetoHitReaction *m_hitReaction;
    struct CharacterPlatformMovement *m_platformMovement;
    struct SkeetoLocomotion *m_locomotion;
    bool m_waitingForDeath;
    struct DeathStartEffectSpawnSetting *DeathStartEffect;
    bool m_isDrowning;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
    bool m_wasCacheSerialized;
};

struct SkeetoDeathReaction {
    struct SkeetoDeathReaction__Class *klass;
    MonitorData *monitor;
    struct SkeetoDeathReaction__Fields fields;
};

struct SkeetoFallingReactionBehaviour__Fields {
    struct ReactionFallingBehaviour__Fields _;
    float LandSlowDownRate;
    struct SkeetoEntity *m_skeetoEntity;
    struct SkeetoLocomotion *m_skeetoLocomotion;
    struct SkeetoDeathReaction *_DeathReaction_k__BackingField;
};

struct SkeetoFallingReactionBehaviour {
    struct SkeetoFallingReactionBehaviour__Class *klass;
    MonitorData *monitor;
    struct SkeetoFallingReactionBehaviour__Fields fields;
};

struct SkeetoFallingReactionBehaviour__VTable {
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
    VirtualInvokeData get_ShouldLand;
    VirtualInvokeData OnEnterFalling;
    VirtualInvokeData OnExitFalling;
    VirtualInvokeData OnExitLanding;
    VirtualInvokeData FallingUpdate;
    VirtualInvokeData OnEnterLand;
    VirtualInvokeData LandUpdate;
    VirtualInvokeData OnEndLand;
    VirtualInvokeData OnEnterCollision;
    VirtualInvokeData CollisionUpdate;
};

struct SkeetoFallingReactionBehaviour__StaticFields {
};

struct SkeetoFallingReactionBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoFallingReactionBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoFallingReactionBehaviour__VTable vtable;
};

struct SkeetoDeathReaction__VTable {
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

struct SkeetoDeathReaction__StaticFields {
};

struct SkeetoDeathReaction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoDeathReaction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoDeathReaction__VTable vtable;
};

struct SkeetoDeathReaction_c {
    struct SkeetoDeathReaction_c__Class *klass;
    MonitorData *monitor;
};

struct SkeetoDeathReaction_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkeetoDeathReaction_c__StaticFields {
    struct SkeetoDeathReaction_c *__9;
    struct Action *__9__21_0;
    struct Action *__9__35_0;
};

struct SkeetoDeathReaction_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoDeathReaction_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoDeathReaction_c__VTable vtable;
};

struct SkeetoHitReaction_c {
    struct SkeetoHitReaction_c__Class *klass;
    MonitorData *monitor;
};

struct SkeetoHitReaction_c__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SkeetoHitReaction_c__StaticFields {
    struct SkeetoHitReaction_c *__9;
    struct Action *__9__33_0;
};

struct SkeetoHitReaction_c__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoHitReaction_c__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoHitReaction_c__VTable vtable;
};

struct SkeetoPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct GameObject *SkeetoEntityPrefab;
    SkeetoSpawnType__Enum m_spawnType;
    
};

struct SkeetoPlaceholder {
    struct SkeetoPlaceholder__Class *klass;
    MonitorData *monitor;
    struct SkeetoPlaceholder__Fields fields;
};

struct SkeetoPlaceholder__VTable {
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

struct SkeetoPlaceholder__StaticFields {
};

struct SkeetoPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoPlaceholder__VTable vtable;
};

struct SkeetoResetAttacksInRowIfOverMaxNode__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct SkeetoEntity *m_skeetoEntity;
};

struct SkeetoResetAttacksInRowIfOverMaxNode {
    struct SkeetoResetAttacksInRowIfOverMaxNode__Class *klass;
    MonitorData *monitor;
    struct SkeetoResetAttacksInRowIfOverMaxNode__Fields fields;
};

struct SkeetoResetAttacksInRowIfOverMaxNode__VTable {
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

struct SkeetoResetAttacksInRowIfOverMaxNode__StaticFields {
};

struct SkeetoResetAttacksInRowIfOverMaxNode__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoResetAttacksInRowIfOverMaxNode__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoResetAttacksInRowIfOverMaxNode__VTable vtable;
};

struct SkeetoSpawnTask__Fields {
    struct EntitySpawnTask__Fields _;
    struct MoonTimeline *ZPosSpawnTimeline;
    struct MoonTimeline *ZNegSpawnTimeline;
    struct MoonTimeline *NestSpawnTimeline;
    struct MoonTimeline *m_currentTimeline;
};

struct SkeetoSpawnTask {
    struct SkeetoSpawnTask__Class *klass;
    MonitorData *monitor;
    struct SkeetoSpawnTask__Fields fields;
};

struct SkeetoSpawnTask__VTable {
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

struct SkeetoSpawnTask__StaticFields {
};

struct SkeetoSpawnTask__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoSpawnTask__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoSpawnTask__VTable vtable;
};

struct SkeetoNestEntity__Fields {
    struct Entity__Fields _;
    float FirstWaveSpawnTimeout;
    float SpawnTimeout;
    float SpawnAfterKillMinimumTime;
    float MiniDistanceToSpawnSkeeto;
    int32_t MaxExpOrbs;
    struct MoonTimeline *IdleTimeline;
    struct MoonTimeline *SpawnTimeline;
    struct MoonTimeline *DeathTimeline;
    struct List_1_SkeetoPlaceholder_ *m_skeetoPlaceholders;
    float m_spawnTimer;
    int32_t m_expOrbsToAssign;
    int32_t m_expPerSkeeto;
    float m_repelForceDistance;
    bool m_initiated;
    int32_t m_spawnCount;
    struct Vector2 InfluenceDistanceMultiplier;
};

struct SkeetoNestEntity {
    struct SkeetoNestEntity__Class *klass;
    MonitorData *monitor;
    struct SkeetoNestEntity__Fields fields;
};

struct __declspec(align(8)) List_1_SkeetoPlaceholder___Fields {
    struct SkeetoPlaceholder__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_SkeetoPlaceholder_ {
    struct List_1_SkeetoPlaceholder___Class *klass;
    MonitorData *monitor;
    struct List_1_SkeetoPlaceholder___Fields fields;
};

struct SkeetoPlaceholder__Array {
    struct SkeetoPlaceholder__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct SkeetoPlaceholder *vector[32];
};

struct IEnumerator_1_SkeetoPlaceholder_ {
    struct IEnumerator_1_SkeetoPlaceholder___Class *klass;
    MonitorData *monitor;
};

struct SkeetoPlaceholder__Array__VTable {
};

struct SkeetoPlaceholder__Array__StaticFields {
};

struct SkeetoPlaceholder__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SkeetoPlaceholder__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SkeetoPlaceholder__Array__VTable vtable;
};

struct IEnumerator_1_SkeetoPlaceholder___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_SkeetoPlaceholder___StaticFields {
};

struct IEnumerator_1_SkeetoPlaceholder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_SkeetoPlaceholder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_SkeetoPlaceholder___VTable vtable;
};

struct List_1_SkeetoPlaceholder___VTable {
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

struct List_1_SkeetoPlaceholder___StaticFields {
    struct SkeetoPlaceholder__Array *_emptyArray;
};

struct List_1_SkeetoPlaceholder___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_SkeetoPlaceholder___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_SkeetoPlaceholder___VTable vtable;
};

struct SkeetoNestEntity__VTable {
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
};

struct SkeetoNestEntity__StaticFields {
    bool AllowNestRepelForce;
};

}
