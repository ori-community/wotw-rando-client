namespace app {
    struct SeinLifeAbsorbSpell {
        struct SeinLifeAbsorbSpell__Class* klass;
        MonitorData* monitor;
        struct SeinLifeAbsorbSpell__Fields fields;
    };

    struct __declspec(align(8)) List_1_SeinLifeAbsorbArm___Fields {
        struct SeinLifeAbsorbArm__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_SeinLifeAbsorbArm_ {
        struct List_1_SeinLifeAbsorbArm___Class* klass;
        MonitorData* monitor;
        struct List_1_SeinLifeAbsorbArm___Fields fields;
    };

    struct SeinLifeAbsorbArm__Fields {
        struct MonoBehaviour__Fields _;
        struct SeinCharacter* m_sein;
        struct IAttackable* Target;
        struct Vector3 TargetPosition;
        float Distance;
        int32_t ArmVertexCount;
        struct LineRenderer* LineRenderer;
        float m_seed;
        struct LegacyTransparencyAnimator* TransparencyAnimator;
        struct LegacyTransparencyAnimator* GlowAnimator;
        struct SoundProvider* AttachSound;
        struct SoundProvider* DetachSound;
    };

    struct SeinLifeAbsorbArm {
        struct SeinLifeAbsorbArm__Class* klass;
        MonitorData* monitor;
        struct SeinLifeAbsorbArm__Fields fields;
    };

    struct SeinLifeAbsorbArm__Array {
        struct SeinLifeAbsorbArm__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SeinLifeAbsorbArm* vector[32];
    };

    struct IEnumerator_1_SeinLifeAbsorbArm_ {
        struct IEnumerator_1_SeinLifeAbsorbArm___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinMeditateSpell___Fields {
        bool HasState;
        struct SeinMeditateSpell* State;
    };

    struct CharacterStateWrapper_1_SeinMeditateSpell_ {
        struct CharacterStateWrapper_1_SeinMeditateSpell___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinMeditateSpell___Fields fields;
    };

    enum class SeinMeditateSpell_State__Enum : int32_t {
        Idle = 0x00000000,
        DelayedStart = 0x00000001,
        IdleToLoop = 0x00000002,
        Loop = 0x00000003,
        Heal = 0x00000004,
    };

    struct SeinMeditateSpell_State__Enum__Boxed {
        struct SeinMeditateSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinMeditateSpell_State__Enum value;
    };

    struct SeinMeditateSpell__Fields {
        struct CharacterState__Fields _;
        float DelayBetweenHeals;
        struct SeinMeditateSpell_BalancingData* Balancing;
        float DelayBeforeCharging;
        float IdleToChargingDuration;
        float HealDuration;
        float VisualHealthBarFillSpeed;
        float MinPlayTimeWhenHealthFull;
        struct MoonAnimation* IdleToChargingAnimation;
        struct MoonAnimation* HealAnimation;
        struct MoonAnimation* HealLoopAnimation;
        struct GameObject* HealEndEffect;
        struct Event_1* ChargingSoundEvent;
        struct Event_1* ChargingCompleteSoundEvent;
        struct Event_1* HealthAlreadyFullSoundEvent;
        struct RTPC* NormalizedHealthRTPC;
        struct GameObject* ChargeEffect;
        struct Transform* ChargeEffectPosition;
        struct GlowChargeEffect* m_currentChargeEffect;
        bool m_notifiedOutOfEnergy;
        bool m_notifiedFullHealth;
        float m_epsilon;
        float m_healthGained;
        float m_delayBeforeStart;
        float m_spentEnergy;
        SeinMeditateSpell_State__Enum CurrentState;

        float m_currentStateTime;
        struct WwiseEventSystem_SoundHandle m_soundHandle;
    };

    struct SeinMeditateSpell {
        struct SeinMeditateSpell__Class* klass;
        MonitorData* monitor;
        struct SeinMeditateSpell__Fields fields;
    };

    struct SeinMeditateSpell_BalancingData__Fields {
        struct OriAttackBalancingData__Fields _;
        struct SerializedByteUberState* EnlightenmentUpgradeLevel;
        float m_healthPercentagePerHeal;
        float m_healthPerHeal;
        float m_energyPerHeal;
        float m_upgradedHealthPercentagePerHeal;
        float m_upgradedHealthPerHeal;
        float EnergyPerFullHeal;
    };

    struct SeinMeditateSpell_BalancingData {
        struct SeinMeditateSpell_BalancingData__Class* klass;
        MonitorData* monitor;
        struct SeinMeditateSpell_BalancingData__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinChargeShotSpell___Fields {
        bool HasState;
        struct SeinChargeShotSpell* State;
    };

    struct CharacterStateWrapper_1_SeinChargeShotSpell_ {
        struct CharacterStateWrapper_1_SeinChargeShotSpell___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinChargeShotSpell___Fields fields;
    };

    enum class SeinChargeShotSpell_State__Enum : int32_t {
        Normal = 0x00000000,
        PreCharge = 0x00000001,
        Charging = 0x00000002,
        FullyCharged = 0x00000003,
        PreAirShot = 0x00000004,
        AirShot = 0x00000005,
    };

    struct SeinChargeShotSpell_State__Enum__Boxed {
        struct SeinChargeShotSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinChargeShotSpell_State__Enum value;
    };

    struct SeinChargeShotSpell__Fields {
        struct CharacterState__Fields _;
        bool DisableWallJump;
        float MinDamage;
        float MaxDamage;
        float MaxDamageChargeTime;
        float MinDamageProjectileScale;
        float MaxDamageProjectileScale;
        float MinDamageEnergyCost;
        float MaxDamageEnergyCost;
        float MinDamageCameraShakeStrength;
        float MaxDamageCameraShakeStrength;
        float ChargeStartDelay;
        float AirShotDelay;
        float CoolDown;
        float Speed;
        bool StopInAir;
        struct GameObject* Projectile;
        struct SoundProvider* ProjectileReleaseSound;
        struct SoundProvider* NotEnoughEnergySound;
        struct SoundSource* ChargingSoundLoop;
        struct SoundSource* FullyChargedSoundLoop;
        struct AnimationCurve* SlowdownCurve;
        bool ShootAwayFromWall;
        SeinChargeShotSpell_State__Enum m_currentState;

        float m_currentProjectileDamage;
        float m_currentProjectileScale;
        float m_currentCameraShakeStrength;
        float m_currentChargeTime;
        float m_chargeStartHealth;
        float m_chargeCostPerSecond;
        float m_energyAvailable;
        float m_energySpendStep;
        bool m_facingLeftWhenShooting;
        struct Transform* m_projectileTransform;
        struct SpiritShotProjectile* m_projectile;
        float m_currentStateTime;
        float m_coolDownTime;
        struct MoonAnimation* ChargeShotStart;
        struct MoonAnimation* ChargeShotHold;
        struct MoonAnimation* ChargeShotRecoil;
        struct MoonAnimation* ChargeShotAir;
    };

    struct SeinChargeShotSpell {
        struct SeinChargeShotSpell__Class* klass;
        MonitorData* monitor;
        struct SeinChargeShotSpell__Fields fields;
    };

    enum class Projectile_CollisionVFXOrientationType__Enum : int32_t {
        GroundNormal = 0x00000000,
        ProjectileVeolicty = 0x00000001,
    };

    struct Projectile_CollisionVFXOrientationType__Enum__Boxed {
        struct Projectile_CollisionVFXOrientationType__Enum__Class* klass;
        MonitorData* monitor;
        Projectile_CollisionVFXOrientationType__Enum value;
    };

    struct Projectile_RicochetShardSettings {
        bool Allowed;
        struct SoundProvider* Sound;
    };

    struct Projectile_RicochetShardSettings__Boxed {
        struct Projectile_RicochetShardSettings__Class* klass;
        MonitorData* monitor;
        struct Projectile_RicochetShardSettings fields;
    };

    struct Projectile__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* Owner;
        struct DamageOwner* DamageOwner;
        struct DamageDealer* DamageDealer;
        bool CanProjectileBeBashed;
        bool CanProjectileBeTeleportedByBeacon;
        float CollisionGracePeriod;
        bool EnableCollisionGracePeriod;
        float Gravity;
        float MaximumLiveTime;
        struct SoundProvider* ProjectileLoop;
        bool IncreaseDamageAfterBash;
        float BashSpeed;
        bool UseBashSpeed;
        bool CancelGravityOnBash;
        bool RotateSpriteToDirection;
        float SpriteTurnSpeed;
        bool ExplodeInWater;
        bool PreventDestroyOnDamageDealt;
        float InWaterSpeedDamping;
        bool SmoothlyMoveToZzero;
        float SmoothMoveZSpeed;
        bool ForceToZzeroInstantly;
        bool HasBeenRedirectedByOri;
        AbilityType__Enum AbilityType;

        struct MoonTimeline* DestroyTimeline;
        struct GameObject* OnCollisionVFX;
        Projectile_CollisionVFXOrientationType__Enum CollisionVFXOrientation;

        struct Action_1_Projectile_* OnBashEvent;
        struct Action_1_Projectile_* OnReflectEvent;
        struct Action_1_Projectile_* OnExplodeEvent;
        struct Projectile_RicochetShardSettings RicochetShardInteraction;
        float CurrentTime;
        bool m_explode;
        float m_originalGravity;
        bool m_explodeLater;
        bool m_isBeingReflected;
        int32_t m_bouncesRemaining;
        struct Rigidbody* Rigidbody;
        struct Transform* Transform;
        struct DamageDealer* m_damageDealer;
        struct Collider* m_collider;
        struct Projectile_ExplodeCollisionInfo* m_explodeCollision;
        struct Projectile_ExplodeCollisionInfo* _RicochetCollision_k__BackingField;
        struct WaterInteraction* m_waterInteractionComponent;
        float m_preBashDamage;
        bool m_wasKinematic;
        bool m_isSuspended;
        struct Vector3 m_cachedUnsuspendedVelocity;
        struct Component_1__Array* m_onKillRecievers;
        bool ChangeDamageLayerAfterBash;
        DamageLayerMask__Enum ChangedDamageLayerMask;

        struct Vector3 _Displacement_k__BackingField;
        int32_t _HeavySpiritSlashPriority_k__BackingField;
        struct Vector3 _Direction_k__BackingField;
        float _Speed_k__BackingField;
        struct GameObject* _LastReflector_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        int32_t m_piercingCount;
        struct ArtificialSoundHostReference m_soundHost;
        struct TrackingExclusions _TrackingExclusions_k__BackingField;
        struct IDamageReciever__Array* m_damageReceivers;
    };

    struct Projectile {
        struct Projectile__Class* klass;
        MonitorData* monitor;
        struct Projectile__Fields fields;
    };

    struct SpiritShotProjectile__Fields {
        struct Projectile__Fields _;
        float m_explosionScale;
        float m_explosionCameraShakeStrength;
    };

    struct SpiritShotProjectile {
        struct SpiritShotProjectile__Class* klass;
        MonitorData* monitor;
        struct SpiritShotProjectile__Fields fields;
    };

    struct Action_1_Projectile___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Projectile_ {
        struct Action_1_Projectile___Class* klass;
        MonitorData* monitor;
        struct Action_1_Projectile___Fields fields;
    };

    struct __declspec(align(8)) Projectile_ExplodeCollisionInfo__Fields {
        struct Vector3 Position;
        struct Vector3 Normal;
        struct Collider* Collider;
    };

    struct Projectile_ExplodeCollisionInfo {
        struct Projectile_ExplodeCollisionInfo__Class* klass;
        MonitorData* monitor;
        struct Projectile_ExplodeCollisionInfo__Fields fields;
    };

    struct WaterInteraction__Fields {
        struct MonoBehaviour__Fields _;
        struct GameObject* WaterSplashEffect;
        struct RTPC* UnderwaterRTPC;
        struct Action* OnWaterZoneEnterAction;
        struct Action* OnWaterZoneExitAction;
        struct List_1_WaterZone_* m_crossedWaterZone;
    };

    struct WaterInteraction {
        struct WaterInteraction__Class* klass;
        MonitorData* monitor;
        struct WaterInteraction__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinJumpShotSpell___Fields {
        bool HasState;
        struct SeinJumpShotSpell* State;
    };

    struct CharacterStateWrapper_1_SeinJumpShotSpell_ {
        struct CharacterStateWrapper_1_SeinJumpShotSpell___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinJumpShotSpell___Fields fields;
    };

    enum class SeinJumpShotSpell_State__Enum : int32_t {
        Inactive = 0x00000000,
        Active = 0x00000001,
        ShieldActive = 0x00000002,
    };

    struct SeinJumpShotSpell_State__Enum__Boxed {
        struct SeinJumpShotSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinJumpShotSpell_State__Enum value;
    };

    struct SeinJumpShotSpell__Fields {
        struct CharacterState__Fields _;
        bool DisappearOnEnemyHit;
        float ActiveTime;
        float ShieldActiveTime;
        float EnergyCost;
        float Damage;
        float DamageRadius;
        float BounceStrength;
        float BounceAngle;
        struct SoundProvider* NotEnoughEnergySound;
        struct SoundProvider* ActivateSound;
        struct SoundProvider* DeactivateSound;
        struct SoundProvider* BounceSound;
        struct SoundProvider* RicochetSound;
        struct GameObject* Shield;
        struct MoonAnimation* Jump;
        SeinJumpShotSpell_State__Enum m_currentState;

        float m_activeTimeLeft;
        float m_shieldActiveTimeLeft;
        struct GameObject* m_shield;
        float m_shieldRotationDirection;
        struct IAttackable* m_closestAttackable;
        float m_flyTowardsEnemyRemainingTime;
        float FlyTowardsEnemyDuration;
        float FlyTowardsEnemySpeed;
        float FlyJumpSpeed;
        struct Vector2 m_flyTowardsPosition;
    };

    struct SeinJumpShotSpell {
        struct SeinJumpShotSpell__Class* klass;
        MonitorData* monitor;
        struct SeinJumpShotSpell__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinChakramSpell___Fields {
        bool HasState;
        struct SeinChakramSpell* State;
    };

    struct CharacterStateWrapper_1_SeinChakramSpell_ {
        struct CharacterStateWrapper_1_SeinChakramSpell___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinChakramSpell___Fields fields;
    };

    enum class SeinChakramSpell_State__Enum : int32_t {
        Normal = 0x00000000,
        PreCharge = 0x00000001,
        FullyCharged = 0x00000002,
        PreAirShot = 0x00000003,
        AirShot = 0x00000004,
        PostShot = 0x00000005,
    };

    struct SeinChakramSpell_State__Enum__Boxed {
        struct SeinChakramSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinChakramSpell_State__Enum value;
    };

    struct SeinChakramSpell__Fields {
        struct CharacterState__Fields _;
        struct FloatAnimationParameter* AnimationAimParameter;
        struct MoonAnimation* ChakramThrow;
        struct MoonAnimation* ChakramThrowAir;
        struct MoonAnimation* ChakramCatch;
        struct MoonAnimation* ChakramCatchAir;
        struct MoonTimeline* ThrowTimeline;
        struct GameObject* Projectile;
        struct GameObject* ProjectileTrail;
        struct PrefabSpawner* ChakramCaughtPrefabSpawner;
        struct SoundProvider* ProjectileReleaseSound;
        struct SoundProvider* NotEnoughEnergySound;
        struct SoundSource* FullyChargedSoundLoop;
        struct SeinChakramSpell_BalancingData* Balancing;
        struct UpgradableMultiplier* Upgradable;
        float GroundShotDelay;
        float AirShotDelay;
        float GroundPostShotDelay;
        float AirPostShotDelay;
        float CoolDownTime;
        int32_t MaxChakrams;
        float CatchEffectSpawnDelay;
        struct LayerMask AutoAimVisionCheckMask;
        bool AutoAimEnabled;
        float AutoAimConeSize;
        struct Vector2 EnterVelocityGroundMultiplier;
        struct Vector2 EnterVelocityAirMultiplier;
        float MinAirVerticalVelocity;
        struct HorizontalPlatformMovementSettings_SpeedSet* AirHorizontalMovement;
        struct HorizontalPlatformMovementSettings_SpeedSet* GroundHorizontalMovement;
        bool ModifyGravitySetttings;
        float Gravity;
        struct Event_1* ThrowSoundEvent;
        struct Event_1* CatchSoundEvent;
        SeinChakramSpell_State__Enum m_currentState;

        bool m_facingLeftWhenShooting;
        struct Vector2 m_directionWhenShooting;
        struct Transform* m_projectileTransform;
        struct ChakramProjectile* m_projectile;
        float m_currentStateTime;
        float m_coolDownTime;
        int32_t m_currentActiveChakrams;
        struct IBowAttackable* m_currentAutoTarget;
        float m_targetAimAngle;
        struct ChakramProjectile* m_prefabChakramProjectile;
        float m_autoAimMaxDist;
        bool m_forceStopThrowAnimation;
        bool m_spriteMirrorLock;
        float _MoveCooldown_k__BackingField;
        float _MoveCooldownTimer_k__BackingField;
        bool _WasGroundedSinceLastExecution_k__BackingField;
        struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
        float _ProviderCooldownTimer_k__BackingField;
    };

    struct SeinChakramSpell {
        struct SeinChakramSpell__Class* klass;
        MonitorData* monitor;
        struct SeinChakramSpell__Fields fields;
    };

    struct PrefabSpawner__Fields {
        struct MonoBehaviour__Fields _;
        struct PrefabProvider* Prefab;
        int32_t PrewarmAmount;
        struct Transform* Parent;
        bool UseParentOfParent;
        bool UseRotation;
        bool SpawnAtStart;
        bool SpawnOffscreen;
        float OnScreenPadding;
        struct Transform* InitialPositionProvider;
        struct Vector3 InitialVelocity;
        struct GameObject* m_prefab;
    };

    struct PrefabSpawner {
        struct PrefabSpawner__Class* klass;
        MonitorData* monitor;
        struct PrefabSpawner__Fields fields;
    };

    struct PrefabProvider__Fields {
        struct MonoBehaviour__Fields _;
    };

    struct PrefabProvider {
        struct PrefabProvider__Class* klass;
        MonitorData* monitor;
        struct PrefabProvider__Fields fields;
    };

    struct DamageBasedPrefabProvider__Fields {
        struct PrefabProvider__Fields _;
        struct List_1_DamageTypePrefabPair_* Prefabs;
        struct PrefabProvider* Default;
    };

    struct DamageBasedPrefabProvider {
        struct DamageBasedPrefabProvider__Class* klass;
        MonitorData* monitor;
        struct DamageBasedPrefabProvider__Fields fields;
    };

    struct __declspec(align(8)) List_1_DamageTypePrefabPair___Fields {
        struct DamageTypePrefabPair__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DamageTypePrefabPair_ {
        struct List_1_DamageTypePrefabPair___Class* klass;
        MonitorData* monitor;
        struct List_1_DamageTypePrefabPair___Fields fields;
    };

    struct __declspec(align(8)) DamageTypePrefabPair__Fields {
        DamageType__Enum DamageType;

        struct PrefabProvider* PrefabProvider;
    };

    struct DamageTypePrefabPair {
        struct DamageTypePrefabPair__Class* klass;
        MonitorData* monitor;
        struct DamageTypePrefabPair__Fields fields;
    };

    struct DamageTypePrefabPair__Array {
        struct DamageTypePrefabPair__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DamageTypePrefabPair* vector[32];
    };

    struct IEnumerator_1_DamageTypePrefabPair_ {
        struct IEnumerator_1_DamageTypePrefabPair___Class* klass;
        MonitorData* monitor;
    };

    struct SeinChakramSpell_BalancingData__Fields {
        struct OriAttackBalancingData__Fields _;
        struct SerializedByteUberState* UpgradeLevel;
        struct SeinChakramSpell_BalancingData_ChakramSettings* ChakramSettingsLevel1;
        struct SeinChakramSpell_BalancingData_ChakramSettings* ChakramSettingsLevel2;
    };

    struct SeinChakramSpell_BalancingData {
        struct SeinChakramSpell_BalancingData__Class* klass;
        MonitorData* monitor;
        struct SeinChakramSpell_BalancingData__Fields fields;
    };

    struct __declspec(align(8)) SeinChakramSpell_BalancingData_ChakramSettings__Fields {
        bool CanSpin;
        float EnergyCost;
        struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Array* DamageSettings;
    };

    struct SeinChakramSpell_BalancingData_ChakramSettings {
        struct SeinChakramSpell_BalancingData_ChakramSettings__Class* klass;
        MonitorData* monitor;
        struct SeinChakramSpell_BalancingData_ChakramSettings__Fields fields;
    };

    struct __declspec(align(8)) SeinChakramSpell_BalancingData_ChakramDamageSettings__Fields {
        float Damage;
        DamageWeight__Enum DamageWeight;
    };

    struct SeinChakramSpell_BalancingData_ChakramDamageSettings {
        struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Class* klass;
        MonitorData* monitor;
        struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Fields fields;
    };

    struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Array {
        struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SeinChakramSpell_BalancingData_ChakramDamageSettings* vector[32];
    };

    enum class ChakramProjectile_ChakramState__Enum : int32_t {
        None = 0x00000000,
        Forward = 0x00000001,
        Hold = 0x00000002,
        Spin = 0x00000003,
        Return = 0x00000004,
    };

    struct ChakramProjectile_ChakramState__Enum__Boxed {
        struct ChakramProjectile_ChakramState__Enum__Class* klass;
        MonitorData* monitor;
        ChakramProjectile_ChakramState__Enum value;
    };

    struct ChakramProjectile__Fields {
        struct Projectile__Fields _;
        struct GameObject* ChakramSpinEffect;
        struct GameObject* ChakramSpinParticles;
        struct Transform* ChakramParent;
        struct Transform* Chakram;
        float BaseSpeed;
        struct LayerMask AutoAimVisionCheckMask;
        bool AutoAimEnabled;
        float MaxAutoaimAngle;
        float AutoAimTurnSpeed;
        float BaseRotationSpeed;
        float SpinHoldRotationSpeed;
        bool CanSpin;
        bool SpinHoldMode;
        float SpinHoldMinTime;
        float TargetFollowSpeed;
        float TargetMaxRange;
        float TravelDistance;
        struct AnimationCurve* VelocityOverDistanceCurve;
        struct AnimationCurve* ForwardRotationCurve;
        float HoldTime;
        struct AnimationCurve* HoldRotationCurve;
        float SpinTime;
        float SpinDeceleration;
        float SpinTargetDeceleration;
        struct Vector3 SpinScale;
        float SpinScaleSpeed;
        bool StayCloseToTarget;
        float StartReturnSpeed;
        float ReturnAcceleration;
        float MaxReturnSpeed;
        float ReturnScaleSpeed;
        float ReturnRotationSpeed;
        struct Event_1* SpinSoundEvent;
        struct Event_1* ReturnSoundEvent;
        struct Action* OnDestroyed;
        struct Action* OnSpinStop;
        ChakramProjectile_ChakramState__Enum m_currentState;

        struct Collider* m_col;
        struct Vector2 m_previousPosition;
        float m_distanceTraveled;
        float m_timer;
        float m_actualHoldTime;
        struct EntityTargetting* m_currentTarget;
        struct Vector3 m_originalScale;
        bool m_spinHoldReleased;
        bool m_wallCollideReturn;
        bool m_spinned;
        struct SeinChakramSpell* m_seinChakramSpell;
        struct SoundHost* m_soundHost;
        struct Vector3 m_directionFromOri;
        struct Vector3 m_directionToOri;
        bool m_isInitialized;
        int32_t m_hitNumber;
        struct SeinChakramSpell_BalancingData_ChakramDamageSettings* m_currentDamageSettings;
    };

    struct ChakramProjectile {
        struct ChakramProjectile__Class* klass;
        MonitorData* monitor;
        struct ChakramProjectile__Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinBlazeSpell___Fields {
        bool HasState;
        struct SeinBlazeSpell* State;
    };

    struct CharacterStateWrapper_1_SeinBlazeSpell_ {
        struct CharacterStateWrapper_1_SeinBlazeSpell___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinBlazeSpell___Fields fields;
    };

    enum class SeinBlazeSpell_BlazeTypes__Enum : int32_t {
        Invalid = -1,
        Ground = 0x00000000,
        Air = 0x00000001,
        Count = 0x00000002,
    };

    struct SeinBlazeSpell_BlazeTypes__Enum__Boxed {
        struct SeinBlazeSpell_BlazeTypes__Enum__Class* klass;
        MonitorData* monitor;
        SeinBlazeSpell_BlazeTypes__Enum value;
    };

    struct SeinBlazeSpell__Fields {
        struct CharacterState__Fields _;
        struct SeinBlazeSpell_BalancingData* Balancing;
        struct MoonTimeline* BlazeReleaseTimelineGround;
        struct EventTriggerAnimator* BlazeReleaseTriggerGround;
        struct MoonTimeline* BlazeReleaseTimelineAir;
        struct EventTriggerAnimator* BlazeReleaseTriggerAir;
        struct MoonTimeline* BlazeFullChargeTimeline;
        struct MoonTimeline* BlazeFullTimeline;
        struct EventTriggerAnimator* BlazeFullReleaseTrigger;
        struct HorizontalPlatformMovementSettings_SpeedSet* GroundMovementSettings;
        struct HorizontalPlatformMovementSettings_SpeedSet* AirMovementSettings;
        float QuickBlazeRange;
        DamageWeight__Enum QuickBlazeWeight;

        DamageWeight__Enum FullBlazeWeight;

        struct GameObject* ChargeEffectPrefab;
        struct GlowChargeEffect* m_currentChargeEffect;
        bool m_hasReleasedBlaze;
        struct SeinBlazeSpell_BlazeSetupInfo__Array* m_blazeSetups;
        SeinBlazeSpell_BlazeTypes__Enum m_currentBlaze;

        struct SeinBlazeSpell_States* BlazeStates;
        struct StateMachine_2* m_stateMachine;
    };

    struct SeinBlazeSpell {
        struct SeinBlazeSpell__Class* klass;
        MonitorData* monitor;
        struct SeinBlazeSpell__Fields fields;
    };

    struct SeinBlazeSpell_BalancingData__Fields {
        struct OriAttackBalancingData__Fields _;
        struct SerializedByteUberState* ChargeUpgradeLevel;
        struct SeinBlazeSpell_BalancingData_BlazeSettings* BlazeSettingsLevel1;
        struct SeinBlazeSpell_BalancingData_BlazeSettings* BlazeSettingsLevel2;
        struct SeinBlazeSpell_BalancingData_BlazeSettings* BlazeSettingsLevel3;
    };

    struct SeinBlazeSpell_BalancingData {
        struct SeinBlazeSpell_BalancingData__Class* klass;
        MonitorData* monitor;
        struct SeinBlazeSpell_BalancingData__Fields fields;
    };

    struct __declspec(align(8)) SeinBlazeSpell_BalancingData_BlazeSettings__Fields {
        float BlazeCost;
        float FullBlazeCost;
        float BlazeReleaseDamage;
        float FullBlazeReleaseDamage;
        float BlazeDamageAmount;
        float BlazeDamageInterval;
        float BlazeDamageDuration;
    };

    struct SeinBlazeSpell_BalancingData_BlazeSettings {
        struct SeinBlazeSpell_BalancingData_BlazeSettings__Class* klass;
        MonitorData* monitor;
        struct SeinBlazeSpell_BalancingData_BlazeSettings__Fields fields;
    };

    struct __declspec(align(8)) SeinBlazeSpell_BlazeSetupInfo__Fields {
        struct MoonTimeline* ReleaseTimeline;
        struct EventTriggerAnimator* ReleaseTrigger;
    };

    struct SeinBlazeSpell_BlazeSetupInfo {
        struct SeinBlazeSpell_BlazeSetupInfo__Class* klass;
        MonitorData* monitor;
        struct SeinBlazeSpell_BlazeSetupInfo__Fields fields;
    };

    struct SeinBlazeSpell_BlazeSetupInfo__Array {
        struct SeinBlazeSpell_BlazeSetupInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct SeinBlazeSpell_BlazeSetupInfo* vector[32];
    };

    struct __declspec(align(8)) SeinBlazeSpell_States__Fields {
        struct State_2* BlazeReady;
        struct State_2* BlazeQuick;
        struct State_2* BlazeFullCharge;
        struct State_2* BlazeFull;
    };

    struct SeinBlazeSpell_States {
        struct SeinBlazeSpell_States__Class* klass;
        MonitorData* monitor;
        struct SeinBlazeSpell_States__Fields fields;
    };

    struct SeinFireburstSpell__Fields {
        struct CharacterState__Fields _;
        struct ParticleSystem* FireParticles;
        float MinAimGroundAnimationAngle;
        float MaxAimGroundAnimationAngle;
        float MaxFallSpeed;
        float GravityMultiplier;
        struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* MoveSpeed;
        struct SoundSource* LoopingSound;
        struct SoundProvider* BeginCastingSoundProvider;
        struct SoundProvider* EndCastingSoundProvider;
        float EnergyCostPerSecond;
        struct FloatAnimationParameter* AimAngle;
        struct MoonAnimation* Air;
        struct MoonAnimation* Idle;
        struct MoonAnimation* WalkBwd;
        struct MoonAnimation* WalkFwd;
        struct MoonAnimation* AirStart;
        struct MoonAnimation* GroundStart;
        float AirStartAttackPointNormalized;
        float GroundStartAttackPointNormalized;
        float m_delayTillNextHit;
        struct ParticleSystem_Particle__Array* m_particles;
        int32_t m_particleCount;
        bool m_particlesCasting;
        bool m_playingStartAnim;
        bool m_wasOnGround;
        bool m_spellActive;
        float m_flameAngle;
        float m_animationAimAngle;
    };

    struct SeinFireburstSpell {
        struct SeinFireburstSpell__Class* klass;
        MonitorData* monitor;
        struct SeinFireburstSpell__Fields fields;
    };

    struct SeinFirewhirlSpell__Fields {
        struct CharacterState__Fields _;
        struct GameObject* BeamPrefab;
        float DistanceBetweenBeams;
        float BeamsPerSecond;
        int32_t BeamCount;
        float HitsPerSecond;
        float DamageAmount;
        float EnergyCost;
        float CooldownDuration;
        float AirBeamSinkDistance;
        struct SoundProvider* StartCastingSound;
        float m_delayTillNextHit;
        float m_spellCoolDown;
        struct List_1_FirewhirlBeam_* m_beams;
        struct List_1_UnityEngine_Rect_* m_beamRectangles;
        struct Vector3 m_burstPosition;
        struct Vector3 m_direction;
        int32_t m_remainingBursts;
        float m_nextBurstRemainingTime;
        struct DamageOwner* m_damageOwner;
        bool m_lastBeamInAir;
    };

    struct SeinFirewhirlSpell {
        struct SeinFirewhirlSpell__Class* klass;
        MonitorData* monitor;
        struct SeinFirewhirlSpell__Fields fields;
    };

    struct __declspec(align(8)) List_1_FirewhirlBeam___Fields {
        struct FirewhirlBeam__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_FirewhirlBeam_ {
        struct List_1_FirewhirlBeam___Class* klass;
        MonitorData* monitor;
        struct List_1_FirewhirlBeam___Fields fields;
    };

    struct FirewhirlBeam__Fields {
        struct MonoBehaviour__Fields _;
        struct Transform* Shape;
        struct Rect Bounds;
        float m_speed;
        float Gravity;
        bool InAir;
    };

    struct FirewhirlBeam {
        struct FirewhirlBeam__Class* klass;
        MonitorData* monitor;
        struct FirewhirlBeam__Fields fields;
    };

    struct FirewhirlBeam__Array {
        struct FirewhirlBeam__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct FirewhirlBeam* vector[32];
    };

    struct IEnumerator_1_FirewhirlBeam_ {
        struct IEnumerator_1_FirewhirlBeam___Class* klass;
        MonitorData* monitor;
    };

    enum class SeinLockOnSpell_State__Enum : int32_t {
        Normal = 0x00000000,
        Tagging = 0x00000001,
        Firing = 0x00000002,
    };

    struct SeinLockOnSpell_State__Enum__Boxed {
        struct SeinLockOnSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinLockOnSpell_State__Enum value;
    };

    struct SeinLockOnSpell__Fields {
        struct CharacterState__Fields _;
        struct GameObject* LockedOnMarker;
        struct GameObject* Projectile;
        float EnergyCost;
        float MinTagRange;
        float MaxTagRange;
        float MaxTags;
        float Damage;
        struct MoonAnimation* LockOnFromGround;
        float GroundRootMotionScale;
        struct MoonAnimation* LockOnFromAir;
        float AirRootMotionScale;
        struct SoundProvider* BeginTaggingSoundProvider;
        struct SoundProvider* EndTaggingSoundProvider;
        struct SoundProvider* NotEnoughEnergySoundProvider;
        struct Vector2 m_lastRootSpeed;
        struct Dictionary_2_IAttackable_LockOnTarget_* m_lockOnTargets;
        struct Stack_1_LockOnTarget_* m_targetsToShoot;
        float m_shotDelayRemaining;
        float DelayBetweenShots;
        struct ActiveAnimationHandle m_activeAnimation;
        SeinLockOnSpell_State__Enum m_currentState;
    };

    struct SeinLockOnSpell {
        struct SeinLockOnSpell__Class* klass;
        MonitorData* monitor;
        struct SeinLockOnSpell__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_IAttackable_LockOnTarget___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_IAttackable_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget_* values;
        struct Object* _syncRoot;
    };

} // namespace app
