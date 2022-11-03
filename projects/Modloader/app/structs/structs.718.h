namespace app {
    struct SkeetoNestEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoNestEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoNestEntity__VTable vtable;
    };

    struct SkeetoNestPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
        struct Vector3 SpawnPosition;
        struct SkeetoPlaceholder* PlaceholderPrefab;
        int32_t MaxSkeetoCount;
        bool LimitCountOnSwitch;
        int32_t MaxSkeetoCountOnSwitch;
        struct List_1_SkeetoPlaceholder_* Placeholders;
    };

    struct SkeetoNestPlaceholder {
        struct SkeetoNestPlaceholder__Class* klass;
        MonitorData* monitor;
        struct SkeetoNestPlaceholder__Fields fields;
    };

    struct SkeetoNestPlaceholder__VTable {
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

    struct SkeetoNestPlaceholder__StaticFields {
    };

    struct SkeetoNestPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SkeetoNestPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SkeetoNestPlaceholder__VTable vtable;
    };

    enum class BombSlugEntity_BombSlugState__Enum : int32_t {
        Unset = 0x00000000,
        Normal = 0x00000001,
        ExplosionCountdown = 0x00000002,
        Exploded = 0x00000003,
    };

    struct BombSlugEntity_BombSlugState__Enum__Boxed {
        struct BombSlugEntity_BombSlugState__Enum__Class* klass;
        MonitorData* monitor;
        BombSlugEntity_BombSlugState__Enum value;
    };

    struct BombSlugEntity__Fields {
        struct SpikeSlugEntity__Fields _;
        struct MoonTimeline* BombModeTimeline;
        float BombModeDuration;
        struct GameObject* ExplosionPrefab;
        struct DamageDealer* ContactDamageDealer;
        bool ShootProjectileOnExplode;
        struct ShootMultiProjectileRadialBehaviourNew* OnDeathShootBehaviour;
        float m_timeInState;
        BombSlugEntity_BombSlugState__Enum m_state;
    };

    struct BombSlugEntity {
        struct BombSlugEntity__Class* klass;
        MonitorData* monitor;
        struct BombSlugEntity__Fields fields;
    };

    struct ShootProjectileBehaviourNew__Fields {
        struct EntityBehaviourNode__Fields _;
        float Range;
        struct MoonTimeline* ShootGroundSequence;
        struct MoonTimeline* ShootCeilingSequence;
        struct Vector3 ShotOriginOffset;
        float ProjectileSpeed;
        float ProjectileGravity;
        float ProjectileDamage;
        DamageWeight__Enum ProjectileDamageWeight;

        float ProjectileArcHeight;
        struct EventTriggerAnimator* ShootTrigger;
        struct Locomotion* m_groundLocomotion;
        struct PrefabSpawner* m_projectileSpawner;
        struct MoonTimeline* m_currentShootSequence;
        bool m_isShooting;
        struct BlockDamageInterruptionHandler* m_blockingHandlerGround;
        struct BlockDamageInterruptionHandler* m_blockingHandlerCeiling;
    };

    struct ShootProjectileBehaviourNew {
        struct ShootProjectileBehaviourNew__Class* klass;
        MonitorData* monitor;
        struct ShootProjectileBehaviourNew__Fields fields;
    };

    struct ShootMultiProjectileRadialBehaviourNew__Fields {
        struct ShootProjectileBehaviourNew__Fields _;
        float StartAngle;
        float AngleOffset;
        int32_t NumOfProjectiles;
    };

    struct ShootMultiProjectileRadialBehaviourNew {
        struct ShootMultiProjectileRadialBehaviourNew__Class* klass;
        MonitorData* monitor;
        struct ShootMultiProjectileRadialBehaviourNew__Fields fields;
    };

    struct ShootProjectileBehaviourNew__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
        VirtualInvokeData Shoot;
    };

    struct ShootProjectileBehaviourNew__StaticFields {
    };

    struct ShootProjectileBehaviourNew__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShootProjectileBehaviourNew__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShootProjectileBehaviourNew__VTable vtable;
    };

    struct ShootMultiProjectileRadialBehaviourNew__VTable {
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
        VirtualInvokeData IsBlockingInterruption;
        VirtualInvokeData Shoot;
    };

    struct ShootMultiProjectileRadialBehaviourNew__StaticFields {
    };

    struct ShootMultiProjectileRadialBehaviourNew__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ShootMultiProjectileRadialBehaviourNew__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ShootMultiProjectileRadialBehaviourNew__VTable vtable;
    };

    struct BombSlugEntity_BombSlugState__Enum__VTable {
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

    struct BombSlugEntity_BombSlugState__Enum__StaticFields {
    };

    struct BombSlugEntity_BombSlugState__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BombSlugEntity_BombSlugState__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BombSlugEntity_BombSlugState__Enum__VTable vtable;
    };

    struct BombSlugEntity__VTable {
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
        VirtualInvokeData OnMinerPullOut;
        VirtualInvokeData OnMinerThrow;
    };

    struct BombSlugEntity__StaticFields {
    };

    struct BombSlugEntity__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BombSlugEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BombSlugEntity__VTable vtable;
    };

    struct BombSlugEntity_c {
        struct BombSlugEntity_c__Class* klass;
        MonitorData* monitor;
    };

    struct BombSlugEntity_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct BombSlugEntity_c__StaticFields {
        struct BombSlugEntity_c* __9;
        struct Action* __9__20_0;
    };

    struct BombSlugEntity_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BombSlugEntity_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BombSlugEntity_c__VTable vtable;
    };

    struct EntityBehaviourNode_1_ElectricSlugEntity___Fields {
        struct EntityBehaviourNode__Fields _;
    };

    struct EntityBehaviourNode_1_ElectricSlugEntity_ {
        struct EntityBehaviourNode_1_ElectricSlugEntity___Class* klass;
        MonitorData* monitor;
        struct EntityBehaviourNode_1_ElectricSlugEntity___Fields fields;
    };

    struct ElectricFieldSlugBehaviour__Fields {
        struct EntityBehaviourNode_1_ElectricSlugEntity___Fields _;
        struct MoonFloat* ElectricFieldTriggerRange;
        struct MoonTimeline* ElectricFieldTimeline;
        float SwellAtDistancePercentage;
        struct ElectricFieldSlugBehaviour_SwellTarget__Array* SwellTargets;
        float SwellSpeed;
        struct Event_1* StartElectricFieldEvent;
        struct Event_1* EndElectricFieldEvent;
        struct Event_1* InflateEvent;
        struct Event_1* DeflateEvent;
        float m_range;
        bool m_isInflating;
    };

    struct ElectricFieldSlugBehaviour {
        struct ElectricFieldSlugBehaviour__Class* klass;
        MonitorData* monitor;
        struct ElectricFieldSlugBehaviour__Fields fields;
    };

    struct ElectricFieldSlugBehaviour_SwellTarget {
        struct Transform* Target;
        float MaxScale;
    };

    struct ElectricFieldSlugBehaviour_SwellTarget__Boxed {
        struct ElectricFieldSlugBehaviour_SwellTarget__Class* klass;
        MonitorData* monitor;
        struct ElectricFieldSlugBehaviour_SwellTarget fields;
    };

    struct ElectricFieldSlugBehaviour_SwellTarget__Array {
        struct ElectricFieldSlugBehaviour_SwellTarget__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct EntityBehaviourNode_1_ElectricSlugEntity___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElectricFieldSlugBehaviour_SwellTarget__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ElectricFieldSlugBehaviour_SwellTarget__VTable vtable;
    };

    struct ElectricFieldSlugBehaviour_SwellTarget__Array__VTable {
    };

    struct ElectricFieldSlugBehaviour_SwellTarget__Array__StaticFields {
    };

    struct ElectricFieldSlugBehaviour_SwellTarget__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElectricFieldSlugBehaviour_SwellTarget__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ElectricFieldSlugBehaviour_SwellTarget__Array__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElectricFieldSlugBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ElectricFieldSlugBehaviour__VTable vtable;
    };

    struct ElectricSlugDamageDealer__Fields {
        struct DamageDealer__Fields _;
        struct ElectricSlugEntity* Entity;
        float m_timeCartHit;
    };

    struct ElectricSlugDamageDealer {
        struct ElectricSlugDamageDealer__Class* klass;
        MonitorData* monitor;
        struct ElectricSlugDamageDealer__Fields fields;
    };

    struct ElectricSlugEntity__Fields {
        struct SpikeSlugEntity__Fields _;
        struct GameObject* ExplosionPrefab;
        struct ElectricSlugDamageDealer* DamageDealer;
        struct ZapTrail* ZapTrailPrefab;
        float KnockOffFromRailForce;
        struct SpikeSlugHitReactionBehaviour* HitReaction;
        struct SpikeSlugFallReactionBehaviour* FallReaction;
        struct Event_1* WwiseZapEvent;
    };

    struct ElectricSlugEntity {
        struct ElectricSlugEntity__Class* klass;
        MonitorData* monitor;
        struct ElectricSlugEntity__Fields fields;
    };

    struct ZapTrail__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTrail* Trail;
        float LifeTime;
        struct Transform* m_endPosition;
        float m_timeLeft;
    };

    struct ZapTrail {
        struct ZapTrail__Class* klass;
        MonitorData* monitor;
        struct ZapTrail__Fields fields;
    };

    struct SpikeSlugHitReactionBehaviour__Fields {
        struct EntityHitReactionBehaviour_1_SpikeSlugEntity___Fields _;
        struct MoonTimeline* HitOnGround;
        struct EventTriggerAnimator* HitOnGroundStopOverride;
        struct MoonTimeline* HitAdditiveFront;
        struct MoonTimeline* HitAdditiveBack;
        struct AnimationPlayer* HitAdditiveFrontAnimPlayer;
        struct AnimationPlayer* HitAdditiveBackAnimPlayer;
        struct MoonTimeline* HitShelledFromFront;
        struct MoonTimeline* HitShelledFromBack;
        struct MoonTimeline* HitShelledFromAbove;
        struct MoonTimeline* HitShelledFromBelow;
        struct MoonFloat* m_hitAdditiveFrontWeight;
        struct MoonFloat* m_hitAdditiveBackWeight;
        struct MoonTimeline* m_currentTimeline;
        struct MoonTimeline* m_currentSecondaryTimeline;
        struct SpikeSlugFallReactionBehaviour* m_fallBehaviour;
        struct SpikeSlugLocomotion* m_locomotion;
        struct EntityDamageEvent* _DamageEvent_k__BackingField;
        struct Vector2 CeilingKnockupMultiplier;
        struct Vector2 WallKnockupMultiplier;
        float MaxKnockupForce;
        float WindKickbackMultiplier;
        float SpinRotationSpeed;
        struct MoonTimeline* HitShake;
        bool IsShellVersionOfSlug;
        struct ProtectedByShellCondition* ShellCondition;
        float ForceMultiplierWhenShellIsDestroyed;
        struct GameObject* ShatterShellEffectsPrefab;
        struct Event_1* OnAnyHitEvent;
        bool DebugHitDirections;
        struct InterfaceCache* InterruptionBlockingTasksCache;
        struct List_1_Moon_BehaviourSystem_IDamageInterruptionBlockingTask_* InterruptionBlockingTasks;
        bool m_exitEarly;
        bool m_wasCacheSerialized;
    };

    struct SpikeSlugHitReactionBehaviour {
        struct SpikeSlugHitReactionBehaviour__Class* klass;
        MonitorData* monitor;
        struct SpikeSlugHitReactionBehaviour__Fields fields;
    };

    struct ProtectedByShellCondition__Fields {
        struct Condition_1__Fields _;
        struct Entity* Entity;
        bool Not;
    };

    struct ProtectedByShellCondition {
        struct ProtectedByShellCondition__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ZapTrail__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProtectedByShellCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpikeSlugHitReactionBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElectricSlugEntity__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ElectricSlugDamageDealer__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ElectricSlugDamageDealer__VTable vtable;
    };

} // namespace app
