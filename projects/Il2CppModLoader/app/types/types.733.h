namespace app {
struct SwarmAllowedArea__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SwarmAllowedArea__StaticFields {
};

struct SwarmAllowedArea__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmAllowedArea__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmAllowedArea__VTable vtable;
};

struct EntityBehaviourNode_1_SwarmEntity___Fields {
    struct EntityBehaviourNode__Fields _;
};

struct EntityBehaviourNode_1_SwarmEntity_ {
    struct EntityBehaviourNode_1_SwarmEntity___Class *klass;
    MonitorData *monitor;
    struct EntityBehaviourNode_1_SwarmEntity___Fields fields;
};

struct SwarmAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    float BeforeAttackWaitDuration;
    float AttackXDistance;
    float AttackYDistance;
    float MaxAttackDistance;
    float m_timer;
    float m_nextAttackTime;
    bool m_attackCompleated;
    struct Vector3 m_lockedTarget;
    bool m_hasLockedTarget;
};

struct SwarmAttackBehaviour {
    struct SwarmAttackBehaviour__Class *klass;
    MonitorData *monitor;
    struct SwarmAttackBehaviour__Fields fields;
};

struct EntityBehaviourNode_1_SwarmEntity___VTable {
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

struct EntityBehaviourNode_1_SwarmEntity___StaticFields {
};

struct EntityBehaviourNode_1_SwarmEntity___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct EntityBehaviourNode_1_SwarmEntity___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct EntityBehaviourNode_1_SwarmEntity___VTable vtable;
};

struct SwarmAttackBehaviour__VTable {
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

struct SwarmAttackBehaviour__StaticFields {
};

struct SwarmAttackBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmAttackBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmAttackBehaviour__VTable vtable;
};

struct SwarmChainAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    float m_launchAttackTimer;
    float m_timer;
    struct Vector3 m_lockedTarget;
    bool m_hasLockedTarget;
    float AttackXDistance;
    float AttackYDistance;
    float MaxAttackDistance;
    struct Event_1 *AttackStartWwiseEvent;
    struct Event_1 *LaunchSwarmMemberEvent;
};

struct SwarmChainAttackBehaviour {
    struct SwarmChainAttackBehaviour__Class *klass;
    MonitorData *monitor;
    struct SwarmChainAttackBehaviour__Fields fields;
};

struct SwarmChainAttackBehaviour__VTable {
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

struct SwarmChainAttackBehaviour__StaticFields {
};

struct SwarmChainAttackBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmChainAttackBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmChainAttackBehaviour__VTable vtable;
};

struct __declspec(align(8)) SwarmEntity_c_DisplayClass87_0__Fields {
    struct SwarmAgent *agent;
};

struct SwarmEntity_c_DisplayClass87_0 {
    struct SwarmEntity_c_DisplayClass87_0__Class *klass;
    MonitorData *monitor;
    struct SwarmEntity_c_DisplayClass87_0__Fields fields;
};

struct SwarmEntity_c_DisplayClass87_0__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};

struct SwarmEntity_c_DisplayClass87_0__StaticFields {
};

struct SwarmEntity_c_DisplayClass87_0__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmEntity_c_DisplayClass87_0__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmEntity_c_DisplayClass87_0__VTable vtable;
};

struct SwarmEntityTargeting__Fields {
    struct EntityTargetting__Fields _;
};

struct SwarmEntityTargeting {
    struct SwarmEntityTargeting__Class *klass;
    MonitorData *monitor;
    struct SwarmEntityTargeting__Fields fields;
};

struct SwarmEntityTargeting__VTable {
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
    VirtualInvokeData get_SpiritFlamePriority;
    VirtualInvokeData get_OriDistanceFromAttackable;
    VirtualInvokeData get_SpiritFlameRange;
    VirtualInvokeData get_RequiresSpiritFlameAbilityToTarget;
    VirtualInvokeData OnSpiritFlameHighlight;
    VirtualInvokeData OnSpiritFlameDehighlight;
    VirtualInvokeData GenerateSpiritFlameProjectileOffset;
    VirtualInvokeData get_BashPriority;
    VirtualInvokeData OnEnterBash;
    VirtualInvokeData OnBashHighlight;
    VirtualInvokeData OnBashDehighlight;
    VirtualInvokeData OnChargeDashHighlight;
    VirtualInvokeData OnChargeDashDehighlight;
    VirtualInvokeData CountsTowardsPowerOfLightAchievement;
    VirtualInvokeData CountsTowardsSuperJumpAchievement;
    VirtualInvokeData get_SpiritSlashPriority;
    VirtualInvokeData OnSpiritSlashHighlight;
    VirtualInvokeData OnSpiritSlashDehighlight;
    VirtualInvokeData GetSpiritSlashDamageAmount;
    VirtualInvokeData get_SpiritLeashCost;
    VirtualInvokeData OnSpiritLeashHighlight;
    VirtualInvokeData OnSpiritLeashDehighlight;
    VirtualInvokeData OnSpiritLeashed;
    VirtualInvokeData get_HookTargetTransform;
    VirtualInvokeData get_PositionOffset;
    VirtualInvokeData get_OriCloseEnoughDistance;
    VirtualInvokeData get_ShouldDecelerateOnApproach;
    VirtualInvokeData get_CanBeSustained;
    VirtualInvokeData get_LeashInteractionMode;
    VirtualInvokeData get_HeavySpiritSlashPriority;
    VirtualInvokeData OnHeavySpiritSlashHighlight;
    VirtualInvokeData OnHeavySpiritSlashDehighlight;
    VirtualInvokeData get_HomingMissileSpellPriority;
    VirtualInvokeData OnHomingMissileSpellHighlight;
    VirtualInvokeData OnHomingMissileSpellDehighlight;
    VirtualInvokeData CanTrap;
    VirtualInvokeData Trap;
    VirtualInvokeData Untrap;
    VirtualInvokeData get_BowPriority;
    VirtualInvokeData get_BowEnableAutoTarget;
    VirtualInvokeData ShouldArrowExplode;
    VirtualInvokeData get_BowAutoTargetPosition;
    VirtualInvokeData ShouldArrowBeReflected;
    VirtualInvokeData get_HammerPriority;
    VirtualInvokeData get_HammerEnableAutoTarget;
    VirtualInvokeData get_IsFireShardAttackable;
    VirtualInvokeData OnBeforeTeleportation;
    VirtualInvokeData Teleport;
    VirtualInvokeData OnAfterTeleportation;
    VirtualInvokeData ITeleportBeaconAttackable_get_Position;
    VirtualInvokeData OnGlowReceived;
    VirtualInvokeData OnCameraFrustumSuspended;
    VirtualInvokeData OnCameraFrustumResumed;
    VirtualInvokeData get_UpdateType;
    VirtualInvokeData OnUpdate;
    VirtualInvokeData Prewarm;
    VirtualInvokeData ISwarmAttackable_ShouldSpawnEffect;
};

struct SwarmEntityTargeting__StaticFields {
    int32_t m_maxEffects;
    int32_t m_spawnedEffects;
};

struct SwarmEntityTargeting__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmEntityTargeting__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmEntityTargeting__VTable vtable;
};

struct SwarmFollowPathBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    struct IEntityLocomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turningHandler;
    float m_timer;
    struct Vector3 m_pathNodePosition;
    struct List_1_UnityEngine_Vector2_ *m_patrolNodes;
    int32_t m_currentPatrolNode;
    float m_pathFollowAccuracy;
    float m_nodeReachMaxTime;
    struct Vector3 m_targetPos;
};

struct SwarmFollowPathBehaviour {
    struct SwarmFollowPathBehaviour__Class *klass;
    MonitorData *monitor;
    struct SwarmFollowPathBehaviour__Fields fields;
};

struct SwarmFollowPathBehaviour__VTable {
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

struct SwarmFollowPathBehaviour__StaticFields {
};

struct SwarmFollowPathBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmFollowPathBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmFollowPathBehaviour__VTable vtable;
};

struct SwarmMinigunAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    float BeforeAttackWaitDuration;
    float m_timer;
    bool m_attackCompleated;
    struct Vector3 m_lockedTarget;
    bool m_hasLockedTarget;
    struct List_1_SwarmAgent_ *m_bulletAgents;
    struct List_1_SwarmAgent_ *m_allAgents;
    struct List_1_UnityEngine_Transform_ *m_bulletChamberLocations;
    int32_t m_numberOfBullets;
    float m_nextAttackTime;
    bool initialized;
    struct Event_1 *AttackStartWwiseEvent;
    struct Event_1 *LaunchSwarmMemberEvent;
};

struct SwarmMinigunAttackBehaviour {
    struct SwarmMinigunAttackBehaviour__Class *klass;
    MonitorData *monitor;
    struct SwarmMinigunAttackBehaviour__Fields fields;
};

struct SwarmMinigunAttackBehaviour__VTable {
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

struct SwarmMinigunAttackBehaviour__StaticFields {
};

struct SwarmMinigunAttackBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmMinigunAttackBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmMinigunAttackBehaviour__VTable vtable;
};

struct SwarmNestPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct SwarmPlaceholder *SwarmPlaceholder;
    struct MeshRenderer *GraphicMeshRenderer;
    float SpawnSwarmAgentTimeout;
    float FollowOriRadius;
    struct SwarmNestEntity *m_entity;
    bool m_spawned;
};

struct SwarmNestPlaceholder {
    struct SwarmNestPlaceholder__Class *klass;
    MonitorData *monitor;
    struct SwarmNestPlaceholder__Fields fields;
};

struct SwarmPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct SwarmNestPlaceholder *SwarmNestPlaceholder;
    int32_t SwarmCount;
    struct SwarmEntity *m_swarm;
};

struct SwarmPlaceholder {
    struct SwarmPlaceholder__Class *klass;
    MonitorData *monitor;
    struct SwarmPlaceholder__Fields fields;
};

struct SwarmPlaceholder__VTable {
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

struct SwarmPlaceholder__StaticFields {
};

struct SwarmPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmPlaceholder__VTable vtable;
};

struct SwarmNestPlaceholder__VTable {
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

struct SwarmNestPlaceholder__StaticFields {
};

struct SwarmNestPlaceholder__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmNestPlaceholder__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmNestPlaceholder__VTable vtable;
};

struct SwarmTargetingBehaviour__Fields {
    struct EntityBehaviourNode_1_SwarmEntity___Fields _;
    struct Transform *TargetsParent;
    struct IEntityLocomotion *m_locomotion;
    struct ILocomotionTurningHandler *m_turningHandler;
    float m_timer;
    float m_targetReachMaxTime;
    struct Vector3 m_targetPos;
    struct List_1_UnityEngine_Vector3_ *TargetCandidates;
};

struct SwarmTargetingBehaviour {
    struct SwarmTargetingBehaviour__Class *klass;
    MonitorData *monitor;
    struct SwarmTargetingBehaviour__Fields fields;
};

struct SwarmTargetingBehaviour__VTable {
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

struct SwarmTargetingBehaviour__StaticFields {
};

struct SwarmTargetingBehaviour__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct SwarmTargetingBehaviour__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct SwarmTargetingBehaviour__VTable vtable;
};

struct PlayExternalTimelineAction__Fields {
    struct ActionMethod__Fields _;
    struct MoonReference_1_Moon_Timeline_ITimelineEntity_ *Timeline;
    struct MoonTimeline *m_targetTimeline;
};

struct PlayExternalTimelineAction {
    struct PlayExternalTimelineAction__Class *klass;
    MonitorData *monitor;
    struct PlayExternalTimelineAction__Fields fields;
};

struct PlayExternalTimelineAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct PlayExternalTimelineAction__StaticFields {
};

struct PlayExternalTimelineAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayExternalTimelineAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayExternalTimelineAction__VTable vtable;
};

struct PlayMoonTimelineAction__Fields {
    struct ActionMethod__Fields _;
    struct MoonTimeline *Timeline;
};

struct PlayMoonTimelineAction {
    struct PlayMoonTimelineAction__Class *klass;
    MonitorData *monitor;
    struct PlayMoonTimelineAction__Fields fields;
};

struct PlayMoonTimelineAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct PlayMoonTimelineAction__StaticFields {
};

struct PlayMoonTimelineAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayMoonTimelineAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayMoonTimelineAction__VTable vtable;
};

struct PlayRandomTimelineAction__Fields {
    struct ActionMethod__Fields _;
    struct List_1_LegacyTimelineSequence_ *Timelines;
};

struct PlayRandomTimelineAction {
    struct PlayRandomTimelineAction__Class *klass;
    MonitorData *monitor;
    struct PlayRandomTimelineAction__Fields fields;
};

struct __declspec(align(8)) List_1_LegacyTimelineSequence___Fields {
    struct LegacyTimelineSequence__Array *_items;
    int32_t _size;
    int32_t _version;
    struct Object *_syncRoot;
};

struct List_1_LegacyTimelineSequence_ {
    struct List_1_LegacyTimelineSequence___Class *klass;
    MonitorData *monitor;
    struct List_1_LegacyTimelineSequence___Fields fields;
};

struct LegacyTimelineSequence__Array {
    struct LegacyTimelineSequence__Array__Class *klass;
    MonitorData *monitor;
    Il2CppArrayBounds *bounds;
    il2cpp_array_size_t max_length;
    struct LegacyTimelineSequence *vector[32];
};

struct IEnumerator_1_LegacyTimelineSequence_ {
    struct IEnumerator_1_LegacyTimelineSequence___Class *klass;
    MonitorData *monitor;
};

struct LegacyTimelineSequence__Array__VTable {
};

struct LegacyTimelineSequence__Array__StaticFields {
};

struct LegacyTimelineSequence__Array__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct LegacyTimelineSequence__Array__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct LegacyTimelineSequence__Array__VTable vtable;
};

struct IEnumerator_1_LegacyTimelineSequence___VTable {
    VirtualInvokeData get_Current;
};

struct IEnumerator_1_LegacyTimelineSequence___StaticFields {
};

struct IEnumerator_1_LegacyTimelineSequence___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct IEnumerator_1_LegacyTimelineSequence___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct IEnumerator_1_LegacyTimelineSequence___VTable vtable;
};

struct List_1_LegacyTimelineSequence___VTable {
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

struct List_1_LegacyTimelineSequence___StaticFields {
    struct LegacyTimelineSequence__Array *_emptyArray;
};

struct List_1_LegacyTimelineSequence___Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct List_1_LegacyTimelineSequence___StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct List_1_LegacyTimelineSequence___VTable vtable;
};

struct PlayRandomTimelineAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct PlayRandomTimelineAction__StaticFields {
};

struct PlayRandomTimelineAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayRandomTimelineAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayRandomTimelineAction__VTable vtable;
};

struct PlayTimelineAction__Fields {
    struct ActionMethod__Fields _;
    struct LegacyTimelineSequence *Timeline;
};

struct PlayTimelineAction {
    struct PlayTimelineAction__Class *klass;
    MonitorData *monitor;
    struct PlayTimelineAction__Fields fields;
};

struct PlayTimelineAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct PlayTimelineAction__StaticFields {
};

struct PlayTimelineAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct PlayTimelineAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct PlayTimelineAction__VTable vtable;
};

struct StopMoonTimelineAction__Fields {
    struct ActionMethod__Fields _;
    struct MoonTimeline *Timeline;
};

struct StopMoonTimelineAction {
    struct StopMoonTimelineAction__Class *klass;
    MonitorData *monitor;
    struct StopMoonTimelineAction__Fields fields;
};

struct StopMoonTimelineAction__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Serialize;
    VirtualInvokeData RegisterToSaveSceneManager;
    VirtualInvokeData Serialize_1;
    VirtualInvokeData Perform;
    VirtualInvokeData GetNiceName;
    VirtualInvokeData Perform_1;
};

struct StopMoonTimelineAction__StaticFields {
};

struct StopMoonTimelineAction__Class {
    Il2CppClass_0 _0;
    Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
    struct StopMoonTimelineAction__StaticFields *static_fields;
    const Il2CppRGCTXData *rgctx_data;
    Il2CppClass_1 _1;
    struct StopMoonTimelineAction__VTable vtable;
};

struct TentacleDeath__Fields {
    struct EntityReactionBehaviour__Fields _;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct MoonTimeline *DeathTimeline;
    struct FloatAnimator *positionAlignmentCurve;
    struct EventTriggerAnimator *hideTrigger;
    struct LayerMask DeadLayer;
    struct FloatAnimator *wiggleCurve;
    float wiggleTorque;
    float wigglePhaseSpeed;
    float wiggleSegmentPhaseShift;
    float m_wigglePhase;
    struct TentacleEntity *m_tentacleEntity;
    struct TentacleHitReaction *m_hitReaction;
    int32_t m_deadLayerInt;
    bool m_wasCacheSerialized;
};

}
