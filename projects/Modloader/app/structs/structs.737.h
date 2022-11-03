namespace app {
    struct TurtlePlaceholder {
        struct TurtlePlaceholder__Class* klass;
        MonitorData* monitor;
        struct TurtlePlaceholder__Fields fields;
    };

    struct TurtlePlaceholder__VTable {
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

    struct TurtlePlaceholder__StaticFields {
    };

    struct TurtlePlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtlePlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtlePlaceholder__VTable vtable;
    };

    struct TurtleRollBackBehaviour__Fields {
        struct EntityLocomotionTask__Fields _;
        struct MoonTimeline* TimelineSequence;
        struct RootMotionProcessorData* RootMotion;
        struct GroundEntityLocomotion* m_groundLocomotion;
    };

    struct TurtleRollBackBehaviour {
        struct TurtleRollBackBehaviour__Class* klass;
        MonitorData* monitor;
        struct TurtleRollBackBehaviour__Fields fields;
    };

    struct TurtleRollBackBehaviour__VTable {
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
        VirtualInvokeData RootMotionRollBackModifier;
    };

    struct TurtleRollBackBehaviour__StaticFields {
    };

    struct TurtleRollBackBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleRollBackBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleRollBackBehaviour__VTable vtable;
    };

    struct TurtleScreamBehaviour__Fields {
        struct EntityBehaviour__Fields _;
        struct LegacyTimelineSequence* ScreamTimeline;
        struct Locomotion* m_groundLocomotion;
    };

    struct TurtleScreamBehaviour {
        struct TurtleScreamBehaviour__Class* klass;
        MonitorData* monitor;
        struct TurtleScreamBehaviour__Fields fields;
    };

    struct TurtleScreamBehaviour__VTable {
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

    struct TurtleScreamBehaviour__StaticFields {
    };

    struct TurtleScreamBehaviour__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleScreamBehaviour__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleScreamBehaviour__VTable vtable;
    };

    struct TurtleScreamBehaviourNew__Fields {
        struct EntityBehaviourNode__Fields _;
        struct MoonTimeline* ScreamTimeline;
        struct Locomotion* m_groundLocomotion;
        struct AnimationPlayer* m_screamAnimation;
        bool Blocking;
    };

    struct TurtleScreamBehaviourNew {
        struct TurtleScreamBehaviourNew__Class* klass;
        MonitorData* monitor;
        struct TurtleScreamBehaviourNew__Fields fields;
    };

    struct TurtleScreamBehaviourNew__VTable {
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

    struct TurtleScreamBehaviourNew__StaticFields {
    };

    struct TurtleScreamBehaviourNew__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleScreamBehaviourNew__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleScreamBehaviourNew__VTable vtable;
    };

    struct TurtleShell__Fields {
        struct LegacyEntity__Fields _;
        struct Transform* ShellRig;
        struct LegacyTimelineSequence* ShellAttackTimeline;
        struct LegacyTimelineSequence* ShellEquipByTurtle;
        struct LegacyTimelineSequence* ShellEquipByTurtleFliped;
        struct LegacyTimelineSequence* ShellEquipByTurtleUpsideDown;
        struct LegacyTimelineSequence* ShellEquipByTurtleUpsideDownFliped;
        struct LegacyTimelineSequence* ShellTurn;
        struct LegacyTimelineSequence* ShellTurnA;
        struct LegacyTimelineSequence* ShellFullTurn;
        struct MoonTimeline* ShakeTimeline;
        float MinImpactForceForControllerShake;
        struct MoonAnimator* Animator;
        struct MoonAnimation* DefaultAnimation;
        int32_t AnimationPriority;
        struct SoundProvider* HitSound;
        struct TurtleShell_DamageReactionMultipler__Array* DamageReactionMultipliers;
        bool LimitVelocity;
        float VelocityLimit;
        bool m_equiped;
        struct Rigidbody* m_rigidbody;
        struct Collider* m_collider;
        struct Transform* m_transform;
        bool m_beingPulledByLeash;
        struct Vector3 m_leashTarget;
        float m_timer;
        struct IEquipableOwner* _Owner_k__BackingField;
        bool _IsClaimed_k__BackingField;
        struct Vector2 RootMotionMultiplier;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct TurtleShell {
        struct TurtleShell__Class* klass;
        MonitorData* monitor;
        struct TurtleShell__Fields fields;
    };

    struct TurtleShell_DamageReactionMultipler {
        DamageType__Enum DamageType;

        float Multiplier;
    };

    struct TurtleShell_DamageReactionMultipler__Boxed {
        struct TurtleShell_DamageReactionMultipler__Class* klass;
        MonitorData* monitor;
        struct TurtleShell_DamageReactionMultipler fields;
    };

    struct TurtleShell_DamageReactionMultipler__Array {
        struct TurtleShell_DamageReactionMultipler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TurtleShell_DamageReactionMultipler vector[32];
    };

    struct IEquipableOwner {
        struct IEquipableOwner__Class* klass;
        MonitorData* monitor;
    };

    struct TurtleShell_DamageReactionMultipler__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TurtleShell_DamageReactionMultipler__StaticFields {
    };

    struct TurtleShell_DamageReactionMultipler__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleShell_DamageReactionMultipler__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleShell_DamageReactionMultipler__VTable vtable;
    };

    struct TurtleShell_DamageReactionMultipler__Array__VTable {
    };

    struct TurtleShell_DamageReactionMultipler__Array__StaticFields {
    };

    struct TurtleShell_DamageReactionMultipler__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleShell_DamageReactionMultipler__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleShell_DamageReactionMultipler__Array__VTable vtable;
    };

    struct IEquipableOwner__VTable {
        VirtualInvokeData get_OwnerID;
    };

    struct IEquipableOwner__StaticFields {
    };

    struct IEquipableOwner__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEquipableOwner__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEquipableOwner__VTable vtable;
    };

    struct TurtleShell__VTable {
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
        VirtualInvokeData OnTimedRespawn;
        VirtualInvokeData RegisterRespawnDelegate;
        VirtualInvokeData OnFrustumEnter;
        VirtualInvokeData OnFrustumExit;
        VirtualInvokeData get_InsideFrustum;
        VirtualInvokeData get_Bounds;
        VirtualInvokeData get_AllowCacheBounds;
        VirtualInvokeData Moon_IHitStopReceiver_get_gameObject;
        VirtualInvokeData GetHitStopAutoSuspendables;
        VirtualInvokeData OnHitStopStart;
        VirtualInvokeData OnHitStopEnd;
        VirtualInvokeData GetHitStopAutoSuspendables_1;
        VirtualInvokeData CanBeOptimized;
        VirtualInvokeData get_Position;
        VirtualInvokeData OnFreeze;
        VirtualInvokeData OnUnfreeze;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnHitStopStart_1;
        VirtualInvokeData OnHitStopEnd_1;
        VirtualInvokeData CanBeEquipedBy;
        VirtualInvokeData Equip;
        VirtualInvokeData Drop;
        VirtualInvokeData Claim;
        VirtualInvokeData ReleaseClaim;
        VirtualInvokeData get_Owner;
        VirtualInvokeData set_Owner;
        VirtualInvokeData get_IsClaimed;
        VirtualInvokeData get_IsEquiped;
        VirtualInvokeData get_Position_1;
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
        VirtualInvokeData OnEnterBash_1;
        VirtualInvokeData OnBashHighlight;
        VirtualInvokeData OnBashDehighlight;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData get_HammerPriority;
        VirtualInvokeData get_HammerEnableAutoTarget;
        VirtualInvokeData CanBeEquipedBy_1;
        VirtualInvokeData Drop_1;
    };

    struct TurtleShell__StaticFields {
    };

    struct TurtleShell__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleShell__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleShell__VTable vtable;
    };

    struct TurtleShell_c {
        struct TurtleShell_c__Class* klass;
        MonitorData* monitor;
    };

    struct TurtleShell_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TurtleShell_c__StaticFields {
        struct TurtleShell_c* __9;
        struct Func_1_Boolean_* __9__43_0;
    };

    struct TurtleShell_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleShell_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleShell_c__VTable vtable;
    };

    struct TurtleShellStateSelector {
        struct TurtleShellStateSelector__Class* klass;
        MonitorData* monitor;
    };

    struct TurtleShellStateSelector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct TurtleShellStateSelector__StaticFields {
    };

    struct TurtleShellStateSelector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct TurtleShellStateSelector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct TurtleShellStateSelector__VTable vtable;
    };

    struct WaterSerpentPlaceholder__Fields {
        struct EntityPlaceholder__Fields _;
    };

    struct WaterSerpentPlaceholder {
        struct WaterSerpentPlaceholder__Class* klass;
        MonitorData* monitor;
        struct WaterSerpentPlaceholder__Fields fields;
    };

    struct PoisonousWaterSerpentPlaceholder__Fields {
        struct WaterSerpentPlaceholder__Fields _;
    };

    struct PoisonousWaterSerpentPlaceholder {
        struct PoisonousWaterSerpentPlaceholder__Class* klass;
        MonitorData* monitor;
        struct PoisonousWaterSerpentPlaceholder__Fields fields;
    };

    struct WaterSerpentPlaceholder__VTable {
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

    struct WaterSerpentPlaceholder__StaticFields {
    };

    struct WaterSerpentPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterSerpentPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterSerpentPlaceholder__VTable vtable;
    };

    struct PoisonousWaterSerpentPlaceholder__VTable {
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

    struct PoisonousWaterSerpentPlaceholder__StaticFields {
    };

    struct PoisonousWaterSerpentPlaceholder__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PoisonousWaterSerpentPlaceholder__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PoisonousWaterSerpentPlaceholder__VTable vtable;
    };

    struct __declspec(align(8)) List_1_Damage___Fields {
        struct Damage__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Damage_ {
        struct List_1_Damage___Class* klass;
        MonitorData* monitor;
        struct List_1_Damage___Fields fields;
    };

    struct Damage__Array {
        struct Damage__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Damage* vector[32];
    };

    struct IEnumerator_1_Damage_ {
        struct IEnumerator_1_Damage___Class* klass;
        MonitorData* monitor;
    };

    struct Damage__Array__VTable {
    };

    struct Damage__Array__StaticFields {
    };

    struct Damage__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Damage__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Damage__Array__VTable vtable;
    };

    struct IEnumerator_1_Damage___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Damage___StaticFields {
    };

    struct IEnumerator_1_Damage___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Damage___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_Damage___VTable vtable;
    };

    struct List_1_Damage___VTable {
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

    struct List_1_Damage___StaticFields {
        struct Damage__Array* _emptyArray;
    };

    struct List_1_Damage___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Damage___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Damage___VTable vtable;
    };

    struct WaterPoisonCloud__Fields {
        struct MonoBehaviour__Fields _;
        bool ClipToWaterZone;
        bool ClipUVsToWaterZone;
        float BlobSizeMultiplierForDamage;
        float DamageAmound;
        float DamageKickbackForce;
        DamageType__Enum DamageType;

        struct DamageOwner* Owner;
        AbilityType__Enum AbilityType;

        DamageWeight__Enum DamageWeight;

        bool DebugDrawDamageZones;
        struct Color DebugDamageZoneColor;
        struct Color DebugDamageZoneOutlineColor;
        struct Mesh* m_mesh;
        struct List_1_UnityEngine_Vector3_* m_vertices;
        struct List_1_UnityEngine_Vector3_* m_normals;
        struct List_1_UnityEngine_Vector3_* m_uvs;
        struct List_1_UnityEngine_Color_* m_colors;
        struct List_1_System_Int32_* m_triangles;
        struct List_1_WaterPoisonCloud_Blob_* m_blobs;
        struct Vector3 m_vertexCache0;
        struct Vector3 m_vertexCache1;
        struct Vector3 m_vertexCache2;
        struct Vector3 m_vertexCache3;
        struct Vector2 m_uvUpperLeftCache;
        struct Vector2 m_uvLowerRightCache;
        struct Vector3 m_boundMin;
        struct Vector3 m_boundMax;
        bool m_destroyOnCleared;
    };

    struct WaterPoisonCloud {
        struct WaterPoisonCloud__Class* klass;
        MonitorData* monitor;
        struct WaterPoisonCloud__Fields fields;
    };

    struct __declspec(align(8)) List_1_WaterPoisonCloud_Blob___Fields {
        struct WaterPoisonCloud_Blob__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_WaterPoisonCloud_Blob_ {
        struct List_1_WaterPoisonCloud_Blob___Class* klass;
        MonitorData* monitor;
        struct List_1_WaterPoisonCloud_Blob___Fields fields;
    };

    struct WaterPoisonCloud_Blob {
        struct Vector3 Position;
        float Size;
        float Alpha;
        float CurrentTime;
    };

    struct WaterPoisonCloud_Blob__Boxed {
        struct WaterPoisonCloud_Blob__Class* klass;
        MonitorData* monitor;
        struct WaterPoisonCloud_Blob fields;
    };

    struct WaterPoisonCloud_Blob__Array {
        struct WaterPoisonCloud_Blob__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WaterPoisonCloud_Blob vector[32];
    };

    struct IEnumerator_1_WaterPoisonCloud_Blob_ {
        struct IEnumerator_1_WaterPoisonCloud_Blob___Class* klass;
        MonitorData* monitor;
    };

    struct WaterPoisonCloud_Blob__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterPoisonCloud_Blob__StaticFields {
    };

    struct WaterPoisonCloud_Blob__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterPoisonCloud_Blob__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterPoisonCloud_Blob__VTable vtable;
    };

    struct WaterPoisonCloud_Blob__Array__VTable {
    };

    struct WaterPoisonCloud_Blob__Array__StaticFields {
    };

    struct WaterPoisonCloud_Blob__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterPoisonCloud_Blob__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterPoisonCloud_Blob__Array__VTable vtable;
    };

    struct IEnumerator_1_WaterPoisonCloud_Blob___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_WaterPoisonCloud_Blob___StaticFields {
    };

    struct IEnumerator_1_WaterPoisonCloud_Blob___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_WaterPoisonCloud_Blob___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_WaterPoisonCloud_Blob___VTable vtable;
    };

    struct List_1_WaterPoisonCloud_Blob___VTable {
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

    struct List_1_WaterPoisonCloud_Blob___StaticFields {
        struct WaterPoisonCloud_Blob__Array* _emptyArray;
    };

    struct List_1_WaterPoisonCloud_Blob___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_WaterPoisonCloud_Blob___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_WaterPoisonCloud_Blob___VTable vtable;
    };

    struct WaterPoisonCloud__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetDamageForPosition;
    };

    struct WaterPoisonCloud__StaticFields {
    };

    struct WaterPoisonCloud__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterPoisonCloud__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterPoisonCloud__VTable vtable;
    };

    struct WaterPoisonCloud_Blob___VTable {
    };

    struct WaterPoisonCloud_Blob___StaticFields {
    };

    struct WaterPoisonCloud_Blob___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterPoisonCloud_Blob___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterPoisonCloud_Blob___VTable vtable;
    };

    struct WaterPoisonCloudTrail__Fields {
        struct MonoBehaviour__Fields _;
        struct WaterPoisonCloud* Cloud;
        float SpawnEveryDistance;
        struct AnimationCurve* VertexAlphaOverLifetime;
        float MinSize;
        float MaxSize;
        struct AnimationCurve* SizeOverLifetime;
        float BlobLifeTime;
        struct Vector3 m_lastPosition;
        bool m_spawnActive;
    };

    struct WaterPoisonCloudTrail {
        struct WaterPoisonCloudTrail__Class* klass;
        MonitorData* monitor;
        struct WaterPoisonCloudTrail__Fields fields;
    };

    struct WaterPoisonCloudTrail__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct WaterPoisonCloudTrail__StaticFields {
    };

    struct WaterPoisonCloudTrail__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterPoisonCloudTrail__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterPoisonCloudTrail__VTable vtable;
    };

    struct WaterPoisonTrail_DamagePoint___VTable {
    };

    struct WaterPoisonTrail_DamagePoint___StaticFields {
    };

    struct WaterPoisonTrail_DamagePoint___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct WaterPoisonTrail_DamagePoint___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct WaterPoisonTrail_DamagePoint___VTable vtable;
    };

    struct KillVolumeChaseController__Fields {
        struct MonoBehaviour__Fields _;
        struct MoonTimeline* EscapeTimeline;
        struct List_1_Moon_ScalableAnimationPlayer_* m_scalableAnimations;
        struct Transform* ReferencePosition;
        struct RubberBandedValueProvider* RubberBanding;
        SuspendableMask__Enum _Mask_k__BackingField;

        bool _IsSuspended_k__BackingField;
    };

    struct KillVolumeChaseController {
        struct KillVolumeChaseController__Class* klass;
        MonitorData* monitor;
        struct KillVolumeChaseController__Fields fields;
    };

    struct KillVolumeChaseController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData OnFixedUpdate;
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
    };

} // namespace app
