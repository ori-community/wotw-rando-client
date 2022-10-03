namespace app {
    struct List_1_PowerFuse___StaticFields {
        struct PowerFuse__Array* _emptyArray;
    };

    struct List_1_PowerFuse___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_PowerFuse___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_PowerFuse___VTable vtable;
    };

    struct PowerLineSetup__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData Apply;
        VirtualInvokeData get_ApplyOnEditor;
        VirtualInvokeData get_AffectingUberStates;
        VirtualInvokeData get_AllTargets;
        VirtualInvokeData Validate;
        VirtualInvokeData GetRequirementsForTimeline;
    };

    struct PowerLineSetup__StaticFields {
    };

    struct PowerLineSetup__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PowerLineSetup__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PowerLineSetup__VTable vtable;
    };

    struct BounceProjectile__Fields {
        struct Projectile__Fields _;
        float bounceTime;
        float Bounciness;
        float Friction;
        struct Vector3 m_oldVelocity;
        struct Vector3 m_oldVelocity2;
        struct Vector3 m_oldVelocity3;
    };

    struct BounceProjectile {
        struct BounceProjectile__Class* klass;
        MonitorData* monitor;
        struct BounceProjectile__Fields fields;
    };

    struct BounceProjectile__VTable {
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
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_BashPriority;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnBashHighlight;
        VirtualInvokeData OnBashDehighlight;
        VirtualInvokeData CountsTowardsPowerOfLightAchievement;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData get_Direction;
        VirtualInvokeData set_Direction;
        VirtualInvokeData get_Speed;
        VirtualInvokeData set_Speed;
        VirtualInvokeData get_LastReflector;
        VirtualInvokeData set_LastReflector;
        VirtualInvokeData CanBeReflected;
        VirtualInvokeData OnGrabbed;
        VirtualInvokeData OnReleased;
        VirtualInvokeData OnReflected;
        VirtualInvokeData get_Position_1;
        VirtualInvokeData set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData CountsTowardsSuperJumpAchievement;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_HeavySpiritSlashPriority;
        VirtualInvokeData OnHeavySpiritSlashHighlight;
        VirtualInvokeData OnHeavySpiritSlashDehighlight;
        VirtualInvokeData get_HammerPriority;
        VirtualInvokeData get_HammerEnableAutoTarget;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData OnBeforeTeleportation;
        VirtualInvokeData Teleport;
        VirtualInvokeData OnAfterTeleportation;
        VirtualInvokeData ITeleportBeaconAttackable_get_Position;
        VirtualInvokeData get_CanGoThroughPortals;
        VirtualInvokeData CanBeBashed_1;
        VirtualInvokeData OnRecieveDamage_1;
        VirtualInvokeData OnBashed;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnPoolDespawned_1;
        VirtualInvokeData OnGoThroughPortal_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnDamageDealt;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData OnBeforeExplodeOnWater;
        VirtualInvokeData Launch;
        VirtualInvokeData ExplodeProjectile;
        VirtualInvokeData OnRicochet;
        VirtualInvokeData OnCollisionEnter;
        VirtualInvokeData UpdateVelocity;
        VirtualInvokeData HandleGravity;
    };

    struct BounceProjectile__StaticFields {
    };

    struct BounceProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct BounceProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct BounceProjectile__VTable vtable;
    };

    struct GenericAttackable__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* m_transform;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct GenericAttackable {
        struct GenericAttackable__Class* klass;
        MonitorData* monitor;
        struct GenericAttackable__Fields fields;
    };

    struct GenericAttackable__VTable {
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
    };

    struct GenericAttackable__StaticFields {
    };

    struct GenericAttackable__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GenericAttackable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GenericAttackable__VTable vtable;
    };

    struct HomingProjectile__Fields {
        struct Projectile__Fields _;
        float TurningSpeed;
        struct Transform* m_target;
    };

    struct HomingProjectile {
        struct HomingProjectile__Class* klass;
        MonitorData* monitor;
        struct HomingProjectile__Fields fields;
    };

    struct HomingProjectile__VTable {
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
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_BashPriority;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnBashHighlight;
        VirtualInvokeData OnBashDehighlight;
        VirtualInvokeData CountsTowardsPowerOfLightAchievement;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData get_Direction;
        VirtualInvokeData set_Direction;
        VirtualInvokeData get_Speed;
        VirtualInvokeData set_Speed;
        VirtualInvokeData get_LastReflector;
        VirtualInvokeData set_LastReflector;
        VirtualInvokeData CanBeReflected;
        VirtualInvokeData OnGrabbed;
        VirtualInvokeData OnReleased;
        VirtualInvokeData OnReflected;
        VirtualInvokeData get_Position_1;
        VirtualInvokeData set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData CountsTowardsSuperJumpAchievement;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_HeavySpiritSlashPriority;
        VirtualInvokeData OnHeavySpiritSlashHighlight;
        VirtualInvokeData OnHeavySpiritSlashDehighlight;
        VirtualInvokeData get_HammerPriority;
        VirtualInvokeData get_HammerEnableAutoTarget;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData OnBeforeTeleportation;
        VirtualInvokeData Teleport;
        VirtualInvokeData OnAfterTeleportation;
        VirtualInvokeData ITeleportBeaconAttackable_get_Position;
        VirtualInvokeData get_CanGoThroughPortals;
        VirtualInvokeData CanBeBashed_1;
        VirtualInvokeData OnRecieveDamage_1;
        VirtualInvokeData OnBashed;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnPoolDespawned_1;
        VirtualInvokeData OnGoThroughPortal_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnDamageDealt;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData OnBeforeExplodeOnWater;
        VirtualInvokeData Launch;
        VirtualInvokeData ExplodeProjectile;
        VirtualInvokeData OnRicochet;
        VirtualInvokeData OnCollisionEnter;
        VirtualInvokeData UpdateVelocity;
        VirtualInvokeData HandleGravity;
    };

    struct HomingProjectile__StaticFields {
    };

    struct HomingProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HomingProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HomingProjectile__VTable vtable;
    };

    struct OwlProjectileTest__Fields {
        struct BrainScript__Fields _;
        struct ProjectileSpawner* SpawnerL;
        struct ProjectileSpawner* SpawnerR;
        float Rate;
        struct GameObject* Target;
        float timer;
        bool left;
    };

    struct OwlProjectileTest {
        struct OwlProjectileTest__Class* klass;
        MonitorData* monitor;
        struct OwlProjectileTest__Fields fields;
    };

    struct OwlProjectileTest__VTable {
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
        VirtualInvokeData UpdateEntries;
        VirtualInvokeData ExecuteEntry;
        VirtualInvokeData ExecuteEntry_1;
        VirtualInvokeData UpdateEntries_1;
    };

    struct OwlProjectileTest__StaticFields {
    };

    struct OwlProjectileTest__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OwlProjectileTest__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OwlProjectileTest__VTable vtable;
    };

    struct Projectile_c {
        struct Projectile_c__Class* klass;
        MonitorData* monitor;
    };

    struct Projectile_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Projectile_c__StaticFields {
        struct Projectile_c* __9;
        struct Action_1_Projectile_* __9__195_0;
        struct Action_1_Projectile_* __9__195_1;
        struct Action_1_Projectile_* __9__195_2;
    };

    struct Projectile_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Projectile_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Projectile_c__VTable vtable;
    };

    struct ProjectilePoisonousWaterTrail__Fields {
        struct MonoBehaviour__Fields _;
        struct Projectile* Projectile;
        struct GameObject* TrailPrefab;
        struct Transform* Anchor;
        float WaterGravity;
        float WaterSpeedDampening;
        struct WaterPoisonTrail* m_instance;
        bool m_touchedWater;
    };

    struct ProjectilePoisonousWaterTrail {
        struct ProjectilePoisonousWaterTrail__Class* klass;
        MonitorData* monitor;
        struct ProjectilePoisonousWaterTrail__Fields fields;
    };

    struct ProjectilePoisonousWaterTrail__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct ProjectilePoisonousWaterTrail__StaticFields {
    };

    struct ProjectilePoisonousWaterTrail__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ProjectilePoisonousWaterTrail__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ProjectilePoisonousWaterTrail__VTable vtable;
    };

    struct SpawnProjectileAction__Fields {
        struct ActionMethod__Fields _;
        struct ProjectileSpawner* Spawner;
    };

    struct SpawnProjectileAction {
        struct SpawnProjectileAction__Class* klass;
        MonitorData* monitor;
        struct SpawnProjectileAction__Fields fields;
    };

    struct SpawnProjectileAction__VTable {
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

    struct SpawnProjectileAction__StaticFields {
    };

    struct SpawnProjectileAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SpawnProjectileAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SpawnProjectileAction__VTable vtable;
    };

    struct SeekingProjectile__Fields {
        struct Projectile__Fields _;
        struct AnimationCurve* SpeedOverTime;
        float SpeedScale;
        struct AnimationCurve* AccelerationOverTime;
        float AccelerationScale;
        struct AnimationCurve* TurningSpeedOverTime;
        float TurningSpeedScale;
        float HomingBoostScale;
        float DistanceToStopHoming;
        float DistanceToBoostHoming;
        float Damage;
        DamageWeight__Enum Weight;

        float NearDistance;
        struct Rigidbody* m_rigidbody;
        struct Transform* m_target;
        struct IDamageReciever* m_targetReceiver;
        struct Vector3 m_desiredDirection;
        float m_fixedTime;
        float m_distanceToTarget;
        struct Vector3 m_zLockPosition;
        bool m_isSeeking;
        float m_homingBoost;
        struct DamageOwner* m_damageOwner;
    };

    struct SeekingProjectile {
        struct SeekingProjectile__Class* klass;
        MonitorData* monitor;
        struct SeekingProjectile__Fields fields;
    };

    struct SeekingProjectile__VTable {
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
        VirtualInvokeData get_Mask;
        VirtualInvokeData set_Mask;
        VirtualInvokeData get_IsSuspended;
        VirtualInvokeData set_IsSuspended;
        VirtualInvokeData get_BashPriority;
        VirtualInvokeData OnEnterBash;
        VirtualInvokeData OnBashHighlight;
        VirtualInvokeData OnBashDehighlight;
        VirtualInvokeData CountsTowardsPowerOfLightAchievement;
        VirtualInvokeData IDamageReciever_get_gameObject;
        VirtualInvokeData IDamageReciever_get_transform;
        VirtualInvokeData OnRecieveDamage;
        VirtualInvokeData get_Direction;
        VirtualInvokeData set_Direction;
        VirtualInvokeData get_Speed;
        VirtualInvokeData set_Speed;
        VirtualInvokeData get_LastReflector;
        VirtualInvokeData set_LastReflector;
        VirtualInvokeData CanBeReflected;
        VirtualInvokeData OnGrabbed;
        VirtualInvokeData OnReleased;
        VirtualInvokeData OnReflected;
        VirtualInvokeData get_Position_1;
        VirtualInvokeData set_Position;
        VirtualInvokeData IPortalVisitor_get_Speed;
        VirtualInvokeData IPortalVisitor_set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
        VirtualInvokeData CountsTowardsSuperJumpAchievement;
        VirtualInvokeData OnPoolSpawned;
        VirtualInvokeData OnPoolDespawned;
        VirtualInvokeData get_HeavySpiritSlashPriority;
        VirtualInvokeData OnHeavySpiritSlashHighlight;
        VirtualInvokeData OnHeavySpiritSlashDehighlight;
        VirtualInvokeData get_HammerPriority;
        VirtualInvokeData get_HammerEnableAutoTarget;
        VirtualInvokeData get_TrackTranformChangesForRecording;
        VirtualInvokeData get_TrackingExclusions;
        VirtualInvokeData get_ParsingGroup;
        VirtualInvokeData OnBeforeTeleportation;
        VirtualInvokeData Teleport;
        VirtualInvokeData OnAfterTeleportation;
        VirtualInvokeData ITeleportBeaconAttackable_get_Position;
        VirtualInvokeData get_CanGoThroughPortals;
        VirtualInvokeData CanBeBashed_1;
        VirtualInvokeData OnRecieveDamage_1;
        VirtualInvokeData OnBashed;
        VirtualInvokeData OnPoolSpawned_1;
        VirtualInvokeData OnPoolDespawned_1;
        VirtualInvokeData OnGoThroughPortal_1;
        VirtualInvokeData Awake;
        VirtualInvokeData OnEnable;
        VirtualInvokeData OnDisable;
        VirtualInvokeData OnDamageDealt;
        VirtualInvokeData FixedUpdate;
        VirtualInvokeData OnBeforeExplodeOnWater;
        VirtualInvokeData Launch;
        VirtualInvokeData ExplodeProjectile;
        VirtualInvokeData OnRicochet;
        VirtualInvokeData OnCollisionEnter;
        VirtualInvokeData UpdateVelocity;
        VirtualInvokeData HandleGravity;
    };

    struct SeekingProjectile__StaticFields {
    };

    struct SeekingProjectile__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SeekingProjectile__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SeekingProjectile__VTable vtable;
    };

    struct RedirectionPortal__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Target;
        struct LegacyScaleAnimator* ShakeAnimator;
        struct Varying2DSoundProvider* RedirectSoundProvider;
    };

    struct RedirectionPortal {
        struct RedirectionPortal__Class* klass;
        MonitorData* monitor;
        struct RedirectionPortal__Fields fields;
    };

    struct RedirectionPortal__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RedirectionPortal__StaticFields {
    };

    struct RedirectionPortal__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RedirectionPortal__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RedirectionPortal__VTable vtable;
    };

    struct Reflector__Fields {
        struct MonoBehaviour__Fields _;
        bool ShouldIncreaceSpeed;
        bool ShouldScale;
        float SpeedFactor;
        float ScaleFactor;
        float MaximumReflectableDamage;
    };

    struct Reflector {
        struct Reflector__Class* klass;
        MonitorData* monitor;
        struct Reflector__Fields fields;
    };

    struct Reflector__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct Reflector__StaticFields {
    };

    struct Reflector__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Reflector__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Reflector__VTable vtable;
    };

    struct RigidBodyPortalVistor__Fields {
        struct MonoBehaviour__Fields _;
        struct Rigidbody* m_rigidbody;
    };

    struct RigidBodyPortalVistor {
        struct RigidBodyPortalVistor__Class* klass;
        MonitorData* monitor;
        struct RigidBodyPortalVistor__Fields fields;
    };

    struct RigidBodyPortalVistor__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Position;
        VirtualInvokeData set_Position;
        VirtualInvokeData get_Speed;
        VirtualInvokeData set_Speed;
        VirtualInvokeData OnGoThroughPortal;
        VirtualInvokeData OnPortalOverlapEnter;
        VirtualInvokeData OnPortalOverlapExit;
    };

    struct RigidBodyPortalVistor__StaticFields {
    };

    struct RigidBodyPortalVistor__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RigidBodyPortalVistor__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RigidBodyPortalVistor__VTable vtable;
    };

    enum class SandstormController_State__Enum : int32_t {
        Outside = 0x00000000,
        Inside = 0x00000001,
    };

    struct SandstormController_State__Enum__Boxed {
        struct SandstormController_State__Enum__Class* klass;
        MonitorData* monitor;
        SandstormController_State__Enum value;
    };

    struct SandstormController__Fields {
        struct MonoBehaviour__Fields _;
        struct SandstormController* m_instance;
        SandstormController_State__Enum CurrentState;

        float CurrentStateTime;
        struct AnimationCurve* Curve;
        struct AnimationCurve* FadeOutCurve;
        struct SandstormZone* m_lastZone;
    };

    struct SandstormController {
        struct SandstormController__Class* klass;
        MonitorData* monitor;
        struct SandstormController__Fields fields;
    };

    struct SandstormZone__Fields {
        struct RectangleGameplayZone__Fields _;
        float WindStrength;
        struct Vector2 StormDirection;
        float WindCycleLength;
        struct AnimationCurve* WindStrengthCycleCurve;
        struct Renderer* DebugRenderer;
        struct Vector2 InnerBoundsOffset_deleteThis;
        bool IgnoreWindStrength;
        struct Bounds m_innerBounds;
        struct Bounds m_outerBounds;
        float m_timer;
        float m_startAlpha;
    };

    struct SandstormZone {
        struct SandstormZone__Class* klass;
        MonitorData* monitor;
        struct SandstormZone__Fields fields;
    };

    struct SandstormController_State__Enum__VTable {
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

    struct SandstormController_State__Enum__StaticFields {
    };

    struct SandstormController_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandstormController_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandstormController_State__Enum__VTable vtable;
    };

    struct SandstormZone__VTable {
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
        VirtualInvokeData get_Category;
        VirtualInvokeData get_UpdateType;
        VirtualInvokeData OnUpdate;
        VirtualInvokeData get_ShouldUpdateWhileDisabled;
        VirtualInvokeData ContainsPoint;
        VirtualInvokeData OnEnableRuntime;
        VirtualInvokeData OnDisableRuntime;
        VirtualInvokeData OnZoneUpdate;
        VirtualInvokeData get_Category_1;
        VirtualInvokeData get_ShouldSerialize;
        VirtualInvokeData get_UpdateType_1;
        VirtualInvokeData get_ShouldUpdateWhileDisabled_1;
        VirtualInvokeData AwakeInternal;
        VirtualInvokeData DestroyInternal;
        VirtualInvokeData OnEnableEditor;
        VirtualInvokeData OnDisableEditor;
        VirtualInvokeData EditorUpdate;
        VirtualInvokeData ShouldTriggerZoneChange;
        VirtualInvokeData OnZoneChange;
        VirtualInvokeData get_EditorBounds;
        VirtualInvokeData set_EditorBounds;
        VirtualInvokeData RefreshBounds;
        VirtualInvokeData GetRtpcValue;
    };

    struct SandstormZone__StaticFields {
    };

    struct SandstormZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandstormZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandstormZone__VTable vtable;
    };

    struct SandstormController__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct SandstormController__StaticFields {
    };

    struct SandstormController__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SandstormController__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SandstormController__VTable vtable;
    };

    struct DestroyOnMenuOpen__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct DestroyOnMenuOpen {
        struct DestroyOnMenuOpen__Class* klass;
        MonitorData* monitor;
        struct DestroyOnMenuOpen__Fields fields;
    };

    struct DestroyOnMenuOpen__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DestroyOnMenuOpen__StaticFields {
    };

    struct DestroyOnMenuOpen__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DestroyOnMenuOpen__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DestroyOnMenuOpen__VTable vtable;
    };

    struct DisabledSavePedestalSaver__Fields {
        struct MonoBehaviour__Fields _;
        struct SavePedestal* PedestalToSave;
    };

    struct DisabledSavePedestalSaver {
        struct DisabledSavePedestalSaver__Class* klass;
        MonitorData* monitor;
        struct DisabledSavePedestalSaver__Fields fields;
    };

    struct DisabledSavePedestalSaver__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct DisabledSavePedestalSaver__StaticFields {
    };

    struct DisabledSavePedestalSaver__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct DisabledSavePedestalSaver__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct DisabledSavePedestalSaver__VTable vtable;
    };

    struct HideOnMenuOpen__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct HideOnMenuOpen {
        struct HideOnMenuOpen__Class* klass;
        MonitorData* monitor;
        struct HideOnMenuOpen__Fields fields;
    };

    struct HideOnMenuOpen__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HideOnMenuOpen__StaticFields {
    };

    struct HideOnMenuOpen__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HideOnMenuOpen__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HideOnMenuOpen__VTable vtable;
    };

    struct RestoreHealthAction__Fields {
        struct ActionMethod__Fields _;
        float FillDurationPerUnit;
        float m_startHealth;
        float m_startEnergy;
        float m_time;
        struct SoundPlayer* m_fillSound;
        float m_soundDuration;
        float m_healthDuration;
        float m_energyDuration;
        float m_healthTime;
        float m_energyTime;
    };

    struct RestoreHealthAction {
        struct RestoreHealthAction__Class* klass;
        MonitorData* monitor;
        struct RestoreHealthAction__Fields fields;
    };

} // namespace app
