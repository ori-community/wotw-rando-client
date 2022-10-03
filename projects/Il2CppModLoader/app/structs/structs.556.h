namespace app {
    struct List_1_IAttackable_ {
        struct List_1_IAttackable___Class* klass;
        MonitorData* monitor;
        struct List_1_IAttackable___Fields fields;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinBowAttack___Fields {
        bool HasState;
        struct SeinBowAttack* State;
    };

    struct CharacterStateWrapper_1_SeinBowAttack_ {
        struct CharacterStateWrapper_1_SeinBowAttack___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinBowAttack___Fields fields;
    };

    enum class SeinBowAttack_State__Enum : int32_t {
        Idle = 0x00000000,
        Draw = 0x00000001,
        Aim = 0x00000002,
        PullCharge = 0x00000003,
        Recover = 0x00000004,
    };

    struct SeinBowAttack_State__Enum__Boxed {
        struct SeinBowAttack_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinBowAttack_State__Enum value;
    };

    struct AnimationLayerContext {
        struct MoonAnimatorLayerName LayerName;
    };

    struct AnimationLayerContext__Boxed {
        struct AnimationLayerContext__Class* klass;
        MonitorData* monitor;
        struct AnimationLayerContext fields;
    };

    struct SeinBowAttack__Fields {
        struct CharacterState__Fields _;
        struct SeinBowAttack_BalancingData* Balancing;
        struct UpgradableMultiplier* Upgradable;
        float AimChangeSpeed;
        float MaxTrajectoryLength;
        bool ConeLimitedAutoAim;
        struct LayerMask AutoAimVisionCheckMask;
        float AutoAimConeSize;
        bool AutoSnapToTargetUponShoot;
        bool SnapToTargets;
        float SnapConeSize;
        float AimDuration;
        float AimDurationCritical;
        float AirMovementMultiplier;
        float RapidFireCooldown;
        struct SeinBowAttack_Settings* GroundSettings;
        float SpeedMultiplierGround;
        float MinAimAngleGround;
        float ChargeKickbackStrengthGround;
        struct Kickback* ChargeKickbackGround;
        bool ControlAfterShotGround;
        struct SeinBowAttack_Settings* AirSettings;
        float SpeedMultiplierAir;
        float MinAimAngleAir;
        float ChargeKickbackStrengthAir;
        struct Kickback* ChargeKickbackAir;
        bool ControlAfterShotAir;
        float ArrowGravity;
        struct Vector2 RapidArrowScale;
        struct Vector2 ArrowScale;
        struct Vector2 ChargeArrowScale;
        float MaxArrowInitialSpeedDeviation;
        float MinArrowSpeed;
        float MaxArrowSpeed;
        float ArrowDamage;
        float ArrowEnergyCost;
        float RapidArrowDamage;
        float ChargeArrowSpeed;
        float ChargeArrowDamage;
        float ChargeExplosionCameraShake;
        float ChargeExplosionScale;
        float ChargeShotEnergyCost;
        float SteadyAimChargedShotDelay;
        float SteadyAimChargeShotReset;
        struct InstantiationRecycleHelper* SurfaceHitEffectRecycler;
        struct InstantiationRecycleHelper* WeaponEffectRecycler;
        int32_t WeaponFXPrewarmAmount;
        int32_t SurfaceFXPrewarmAmount;
        struct SoundProvider* DrawSound;
        struct SoundProvider* ShootSound;
        struct SoundProvider* AirChargeBeginSound;
        struct SoundProvider* AirChargeEndSound;
        struct SoundProvider* NotEnoughEnergySound;
        struct SoundSource* AimCriticalSound;
        struct RTPC* BowDamageRtpc;
        struct Event_1* ReleaseBowEvent;
        bool m_effectiveSettingsIsGround;
        float m_targetAimAngle;
        float m_currentAimAngle;
        float m_savedStickAngle;
        SeinBowAttack_State__Enum m_currentState;

        float m_currentStateTime;
        float m_currentShotTime;
        float m_timeToEnterChargedShot;
        struct Vector2 m_currentArrowScale;
        bool m_playerAimEnabled;
        bool m_attackButtonWasReleased;
        bool m_gameSuspended;
        bool m_spriteMirrorLock;
        bool m_wasGroundedAfterAirShot;
        bool m_performRapidShot;
        bool m_arrowReleased;
        struct MoonTimeline* m_curTimeline;
        struct Transform* m_leftHand;
        struct Transform* m_leftShoulder;
        struct Transform* m_rightHand;
        struct Transform* m_weapon1Jnt;
        struct IBowAttackable* m_currentAutoTarget;
        float m_currentArrowDamage;
        float m_currentArrowSpeed;
        float m_currentExplosionScale;
        float m_currentExplosionCameraShake;
        float m_currentExplosionVolume;
        float m_chargeAmount;
        float m_preChargeArrowSpeed;
        struct AnimationLayerContext m_tandemAnimationContext;
        struct HashSet_1_Moon_ISuspendable_* m_suspendables;
        struct SeinBowMark* m_currentMarkerInstance;
        bool m_initialised;
        struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
        float _ProviderCooldown_k__BackingField;
        float _ProviderCooldownTimer_k__BackingField;
        float _MoveCooldown_k__BackingField;
        float _MoveCooldownTimer_k__BackingField;
        bool _WasGroundedSinceLastExecution_k__BackingField;
        float m_moveTime;
        struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_* m_particleSystems;
        struct List_1_UnityEngine_ParticleSystem_* m_tempPSList;
        struct ActiveAnimationHandle m_aimStateAnimation;
        struct ActiveAnimationHandle m_aimStateBowAnimation;
        int32_t m_arrowCountPerPress;
        int32_t m_amountOfArrowsForStressTest;
        float m_shotIntervalStressTest;
        StressTestStatus__Enum _StressTestStatus_k__BackingField;
    };

    struct SeinBowAttack {
        struct SeinBowAttack__Class* klass;
        MonitorData* monitor;
        struct SeinBowAttack__Fields fields;
    };

    struct SeinBowAttack_BalancingData__Fields {
        struct OriAttackBalancingData__Fields _;
        float RapidArrowDamage;
        float ArrowDamage;
        float ArrowEnergyCost;
        float ChargeArrowDamage;
        float ChargeShotEnergyCost;
    };

    struct SeinBowAttack_BalancingData {
        struct SeinBowAttack_BalancingData__Class* klass;
        MonitorData* monitor;
        struct SeinBowAttack_BalancingData__Fields fields;
    };

    struct __declspec(align(8)) SeinBowAttack_Settings__Fields {
        struct MoonTimeline* DrawTimeline;
        struct MoonTimeline* DrawRapidTimeline;
        struct MoonTimeline* RecoverTimeline;
        struct MoonTimeline* PullChargeTimeline;
        struct MoonTimeline* ChargeRecoverTimeline;
        struct GameObject* AimEffect;
        struct GameObject* ChargeEffect;
        struct MoonFloat* ArrowChargeAmount;
        struct MoonAnimation* AimLoopAnimationBow;
        float SpeedMultiplier;
        float MinAimAngle;
        float ChargeKickbackStrength;
        struct Kickback* ChargeKickback;
        bool ControlAfterShot;
    };

    struct SeinBowAttack_Settings {
        struct SeinBowAttack_Settings__Class* klass;
        MonitorData* monitor;
        struct SeinBowAttack_Settings__Fields fields;
    };

    struct __declspec(align(8)) Kickback__Fields {
        struct AnimationCurve* KickbackCurve;
        float m_kickbackTimeRemaining;
        float m_kickbackMultiplier;
        struct Vector2 _KickbackDirection_k__BackingField;
    };

    struct Kickback {
        struct Kickback__Class* klass;
        MonitorData* monitor;
        struct Kickback__Fields fields;
    };

    struct __declspec(align(8)) InstantiationRecycleHelper__Fields {
        int32_t m_prewarmAmount;
        struct List_1_UnityEngine_GameObject_* m_instances;
        bool m_limitAmountOfActiveInstances;
    };

    struct InstantiationRecycleHelper {
        struct InstantiationRecycleHelper__Class* klass;
        MonitorData* monitor;
        struct InstantiationRecycleHelper__Fields fields;
    };

    struct IBowAttackable {
        struct IBowAttackable__Class* klass;
        MonitorData* monitor;
    };

    enum class SeinBowMark_State__Enum : int32_t {
        Appearing = 0x00000000,
        Playing = 0x00000001,
        Disappearing = 0x00000002,
    };

    struct SeinBowMark_State__Enum__Boxed {
        struct SeinBowMark_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinBowMark_State__Enum value;
    };

    struct SeinBowMark__Fields {
        struct Suspendable__Fields _;
        float AppearTime;
        float DisappearTime;
        float Scale;
        struct AnimationCurve* AppearScaleCurve;
        struct AnimationCurve* DisappearScaleCurve;
        struct IAttackable* Target;
        struct Transform* Mark;
        SeinBowMark_State__Enum m_currentState;

        float m_stateCurrentTime;
        bool _IsSuspended_k__BackingField;
    };

    struct SeinBowMark {
        struct SeinBowMark__Class* klass;
        MonitorData* monitor;
        struct SeinBowMark__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_UnityEngine_GameObject_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
        struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
        int32_t hashCode;
        int32_t next;
        struct GameObject* key;
        struct List_1_UnityEngine_ParticleSystem_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ fields;
    };

    struct __declspec(align(8)) List_1_UnityEngine_ParticleSystem___Fields {
        struct ParticleSystem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_UnityEngine_ParticleSystem_ {
        struct List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct List_1_UnityEngine_ParticleSystem___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array {
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields {
        struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields {
        struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields fields;
    };

    struct List_1_UnityEngine_ParticleSystem___Array {
        struct List_1_UnityEngine_ParticleSystem___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_UnityEngine_ParticleSystem_* vector[32];
    };

    struct IEnumerator_1_List_1_UnityEngine_ParticleSystem_ {
        struct IEnumerator_1_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_List_1_UnityEngine_ParticleSystem_ {
        struct ICollection_1_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
        struct GameObject* key;
        struct List_1_UnityEngine_ParticleSystem_* value;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Boxed {
        struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ fields;
    };

    struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array {
        struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
        struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_List_1_UnityEngine_ParticleSystem_ {
        struct IEnumerable_1_List_1_UnityEngine_ParticleSystem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) CharacterStateWrapper_1_SeinMeleeAttack___Fields {
        bool HasState;
        struct SeinMeleeAttack* State;
    };

    struct CharacterStateWrapper_1_SeinMeleeAttack_ {
        struct CharacterStateWrapper_1_SeinMeleeAttack___Class* klass;
        MonitorData* monitor;
        struct CharacterStateWrapper_1_SeinMeleeAttack___Fields fields;
    };

    struct SeinMeleeAttack__Fields {
        struct CharacterState__Fields _;
        struct GameObject__Array* WeaponPrefabs;
        struct MeleeWeapon__Array* Weapons;
        float CooldownAfterDamageTaken;
        bool DisableRootMotionWhenNearEnemy;
        float DisableRootMotionRadius;
        struct LayerMask DisableRootMotionCollisionMask;
        float HighlightRange;
        float DamageBlockedCooldown;
        float DamageBlockedInputLockDuration;
        struct Kickback* DamageBlockedKickback;
        struct Animator* m_seinAnimator;
        struct Transform* m_weaponJoint;
        struct Transform* m_rootJoint;
        struct CameraShake* m_cameraShake;
        bool m_spriteMirrorLock;
        bool m_unequipWeapon;
        float m_timeDamageTaken;
        float m_comboCooldownTimeLeft;
        float m_damageBlockedCooldownTimeLeft;
        struct MeleeWeapon* m_currentWeapon;
        struct MeleeComboMove* m_currentComboMove;
        struct DamageOwner* m_damageOwner;
        struct List_1_ActivateCooldownRule_* m_currentCooldownRules;
        struct Vector2 m_retainedRootMotion;
        struct List_1_ISpiritFlameAttackable_* m_lastClosestAttackables;
        struct List_1_ISpiritFlameAttackable_* m_closestAttackables;
    };

    struct SeinMeleeAttack {
        struct SeinMeleeAttack__Class* klass;
        MonitorData* monitor;
        struct SeinMeleeAttack__Fields fields;
    };

    enum class WeaponJoint__Enum : int32_t {
        Weapon1_JNT = 0x00000000,
        Weapon2_JNT = 0x00000001,
        ItemSlot_L = 0x00000002,
    };

    struct WeaponJoint__Enum__Boxed {
        struct WeaponJoint__Enum__Class* klass;
        MonitorData* monitor;
        WeaponJoint__Enum value;
    };

    struct MeleeWeapon__Fields {
        struct MonoBehaviour__Fields _;
        bool DebugWeaponOutput;
        struct DynamicDataResolver* m_dataResolver;
        struct MeleeComboTransition__Array* Transitions;
        struct MoonAnimator* Animator;
        struct MoonAnimator* HeroAnimatorPreview;
        struct Animator* LegacyWeaponAnimator;
        WeaponJoint__Enum m_weaponJoint;

        struct Transform* m_targetJoint;
        struct Transform* WeaponRoot;
        struct MoonTimeline__Array* m_allTimelines;
        struct Transform__Array* m_animatorTransforms;
        struct SeinCharacter* m_weaponOwner;
        AbilityType__Enum AbilityType;

        DamageLayerMask__Enum DamageLayerMask;

        struct DamageOwner* DamageOwner;
        struct UpgradableMultiplier* Upgradable;
        struct SerializedByteUberState* UpgradeLevel;
        struct Single__Array* UpgradeEffectiveness;
        bool InterruptComboOnDamageTaken;
        bool InterruptComboOnDamageBlocked;
        float InterruptComboMinRange;
        struct MoonAnimation* GroundBlockAnimation;
        struct AnimationCurve* GroundBlockKickbackCurve;
        struct MoonAnimation* AirBlockAnimation;
        struct AnimationCurve* AirBlockKickbackCurve;
        bool FlattenKickbackDirection;
        bool IgnoreTargetsBehind;
        struct MaterialBasedSeinEffectsMap* HitEffects;
        struct Vector2 GravityMultiplierRange;
        float GravityMultiplierIncreaseSpeed;
        float _CurrentGravityMultiplier_k__BackingField;
        struct Action_1_DamageResult_* DamageResultReceived;
        struct Nullable_1_Boolean_ m_attackButtonPressedCached;
        bool _IsPerformingCombo_k__BackingField;
        struct SeinComboHandler* ComboHandler;
        bool m_canDeactivateRoot;
        bool m_isInitialized;
        bool m_isWeaponShown;
        bool m_spriteMirrorLock;
        struct SoundHost* m_soundHost;
        float _WeaponCooldown_k__BackingField;
        float _ProviderCooldownTimer_k__BackingField;
        struct List_1_Moon_ComboSystem_IComboMove_* m_comboMoves;
        struct TrackingExclusions _TrackingExclusions_k__BackingField;
    };

    struct MeleeWeapon {
        struct MeleeWeapon__Class* klass;
        MonitorData* monitor;
        struct MeleeWeapon__Fields fields;
    };

    enum class MeleeComboTransition_StickDirection__Enum : int32_t {
        Forward = 0x00000000,
        Back = 0x00000001,
        Up = 0x00000002,
        Down = 0x00000003,
        None = 0x00000004,
        Any = 0x00000005,
    };

    struct MeleeComboTransition_StickDirection__Enum__Boxed {
        struct MeleeComboTransition_StickDirection__Enum__Class* klass;
        MonitorData* monitor;
        MeleeComboTransition_StickDirection__Enum value;
    };

    enum class MeleeComboTransition_OnGroundMode__Enum : int32_t {
        Either = 0x00000000,
        OnGround = 0x00000001,
        InAir = 0x00000002,
    };

    struct MeleeComboTransition_OnGroundMode__Enum__Boxed {
        struct MeleeComboTransition_OnGroundMode__Enum__Class* klass;
        MonitorData* monitor;
        MeleeComboTransition_OnGroundMode__Enum value;
    };

    struct __declspec(align(8)) MeleeComboTransition__Fields {
        MeleeComboTransition_StickDirection__Enum StickDirectionCondition;

        MeleeComboTransition_OnGroundMode__Enum OnGround;

        struct MeleeComboMove* TargetMove;
    };

    struct MeleeComboTransition {
        struct MeleeComboTransition__Class* klass;
        MonitorData* monitor;
        struct MeleeComboTransition__Fields fields;
    };

    struct MeleeComboMove__Fields {
        struct MonoBehaviour__Fields _;
        bool DebugBreakOnEnter;
        struct MeleeComboTransition__Array* Transitions;
        struct Vector2 RootMotionMultiplier;
        float DownwardRootMotionMultiplier;
        bool DisableRootMotion;
        bool RetainXRootMotion;
        bool RetainYRootMotion;
        float Cooldown;
        struct ActivateCooldownRule__Array* CooldownRules;
        bool RotateToGroundAngle;
        bool OnlyGround;
        float GroundMaxDistance;
        bool AutoTarget;
        float AutoTargetAngleMax;
        struct Vector2 PrimaryAttackDirection;
        float AllowedTargetPositionDeviation;
        float AllowedGroundVFXNormalDeviation;
        struct SeinComboHandler* m_comboHandler;
        struct SeinCharacter* m_sein;
        struct MeleeWeapon* m_weapon;
        struct MaterialBasedSeinEffectsMap* m_hitVFX;
        int32_t m_damageID;
        struct List_1_UnityEngine_Collider_* m_haveBeenHit;
        struct List_1_Moon_Entity_* m_haveEntityBeenHit;
        float m_lastTimeAirReset;
        struct IAttackable* m_currentTarget;
        float m_rootRotation;
        float m_groundAngle;
        float StingerAdjustSpeed;
        float StingerTargetOffset;
        float StingerRange;
        float StingerStartTime;
        float StingerMinimumDistance;
        float StingerSpeed;
        struct Nullable_1_UnityEngine_Vector3_ m_stingerTargetPosition;
        MaterialTypeVFXSettings_EffectSize__Enum ImpactSize;

        struct MeleeComboMove* m_nextMove;
        struct List_1_UnityEngine_GameObject_* m_suspendableHitEffects;
        struct Boolean__Array* m_canBeInterruptedBy;
        bool m_canInputBeQueued;
        bool m_attackButtonReleased;
        bool m_changeFacingDirForNextMove;
        float m_moveTime;
        int32_t m_animationSpeedMultiplierParameterId;
        int32_t m_weaponAnimationSpeedMultiplierParameterId;
        struct String* m_scheduledWeaponAnimation;
        float m_scheduledWeaponAnimationSpeedMultiplier;
        bool m_oneTimeOnCollisionEffectPlayed;
        bool m_oneTimeOnBigCollisionEffectPlayed;
        bool m_oneTimeHitEffectPlayed;
        struct GameObject* m_effectSpawnedThisFrame;
        struct GameObject* m_hitEffectSpawnedThisFrame;
        bool m_effectSpawnedThisFrameWasSmall;
        float _MoveCooldownTimer_k__BackingField;
        float _ProviderCooldownTimer_k__BackingField;
        bool _WasGroundedSinceLastExecution_k__BackingField;
        struct List_1_Moon_ComboSystem_IComboMove_* m_comboMoves;
    };

    struct MeleeComboMove {
        struct MeleeComboMove__Class* klass;
        MonitorData* monitor;
        struct MeleeComboMove__Fields fields;
    };

    struct __declspec(align(8)) ActivateCooldownRule__Fields {
        float _CurrentCooldown_k__BackingField;
        struct MeleeComboMove* TargetMove;
        float TargetsCooldown;
        bool ResetByLanding;
        struct IComboMove* _CooldownSourceMove_k__BackingField;
    };

    struct ActivateCooldownRule {
        struct ActivateCooldownRule__Class* klass;
        MonitorData* monitor;
        struct ActivateCooldownRule__Fields fields;
    };

    struct ActivateCooldownRule__Array {
        struct ActivateCooldownRule__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ActivateCooldownRule* vector[32];
    };

    struct SeinComboHandler__Fields {
        struct CharacterState__Fields _;
        struct SeinComboHandler_StubbedComboMove* m_analogMovement;
        struct SeinComboHandler_StubbedComboMove* m_oppositeAnalogMovement;
        struct SeinComboHandler_StubbedComboMove* m_movementAbility;
        struct SeinComboHandler_StubbedComboMove* m_attackMove;
        struct SeinComboHandler_StubbedComboMove* m_anyMove;
        struct GlobalComboDefinition* ComboDefinitions;
        struct GameObject__Array* WeaponPrefabs;
        struct MeleeWeapon__Array* Weapons;
        float CooldownAfterDamageTaken;
        bool DisableRootMotionWhenNearEnemy;
        float DisableRootMotionRadius;
        struct LayerMask DisableRootMotionCollisionMask;
        float HighlightRange;
        float DamageBlockedCooldown;
        float DamageBlockedInputLockDuration;
        struct Kickback* DamageBlockedKickback;
        struct ComboInput* m_inputBuffer;
        struct ComboInput* m_currentInput;
        struct IComboMove* m_nextMove;
        struct HashSet_1_Moon_ComboSystem_IComboMove_* m_movesToResetOnComboEndHashSet;
        struct List_1_Moon_ComboSystem_IComboMove_* m_movesToResetOnComboEndList;
        struct List_1_Moon_ComboSystem_IComboMove_* m_moves;
        struct List_1_ComboMoveStressTest_* m_moveTests;
        struct List_1_Moon_ComboSystem_IComboMoveProvider_* m_initialMoveProviders;
        bool m_weaponComboInitialized;
        struct List_1_ActivateCooldownRule_* m_currentCooldownRules;
        bool _ShouldModifyGravity_k__BackingField;
        bool _DamageDealtDuringLastMove_k__BackingField;
        struct Animator* m_seinAnimator;
        struct Transform* m_weaponJoint;
        struct Transform* m_rootJoint;
        struct CameraShake* m_cameraShake;
        bool m_unequipWeapon;
        float m_timeDamageTaken;
        float m_comboCooldownTimeLeft;
        float m_damageBlockedCooldownTimeLeft;
        struct MeleeWeapon* m_currentWeapon;
        struct IComboMove* m_currentComboMove;
        struct IComboMove* m_upcomingComboMove;
        struct DamageOwner* m_damageOwner;
        bool DebugOutput;
        struct SeinJumpHandler* m_jumpHandler;
        struct Collider__Array* m_tempColliders;
        struct List_1_ISpiritFlameAttackable_* m_lastClosestAttackables;
        struct List_1_ISpiritFlameAttackable_* m_closestAttackables;
    };

    struct SeinComboHandler {
        struct SeinComboHandler__Class* klass;
        MonitorData* monitor;
        struct SeinComboHandler__Fields fields;
    };

    struct __declspec(align(8)) SeinComboHandler_StubbedComboMove__Fields {
        struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
        AbilityType__Enum _ComboAbilityType_k__BackingField;

        float _ProviderCooldown_k__BackingField;
        float _ProviderCooldownTimer_k__BackingField;
        bool _MoveHasFinished_k__BackingField;
        ComboMoveType__Enum _ComboMoveType_k__BackingField;

        bool _IsAttackButtonDown_k__BackingField;
        bool _OnAttackButtonPressed_k__BackingField;
        bool _OnAttackButtonReleased_k__BackingField;
        float _MoveCooldown_k__BackingField;
        float _MoveCooldownTimer_k__BackingField;
        bool _WasGroundedSinceLastExecution_k__BackingField;
    };

    struct SeinComboHandler_StubbedComboMove {
        struct SeinComboHandler_StubbedComboMove__Class* klass;
        MonitorData* monitor;
        struct SeinComboHandler_StubbedComboMove__Fields fields;
    };

    struct GlobalComboDefinition__Fields {
        struct ScriptableObject__Fields _;
        struct Dictionary_2_System_Type_List_1_System_Type_* TransitionsMap;
        struct List_1_Moon_ComboSystem_ComboDataEntry_* Combos;
        struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_* m_entryByType;
    };

    struct GlobalComboDefinition {
        struct GlobalComboDefinition__Class* klass;
        MonitorData* monitor;
        struct GlobalComboDefinition__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_List_1_System_Type___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_List_1_System_Type_ {
        struct Dictionary_2_System_Type_List_1_System_Type___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_List_1_System_Type___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct List_1_System_Type_* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type___Fields {
        struct Dictionary_2_System_Type_List_1_System_Type_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type___Fields {
        struct Dictionary_2_System_Type_List_1_System_Type_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type___Fields fields;
    };

    struct List_1_System_Type___Array {
        struct List_1_System_Type___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct List_1_System_Type_* vector[32];
    };

    struct IEnumerator_1_List_1_System_Type_ {
        struct IEnumerator_1_List_1_System_Type___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_List_1_System_Type_ {
        struct ICollection_1_List_1_System_Type___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Type_List_1_System_Type_ {
        struct Type* key;
        struct List_1_System_Type_* value;
    };

    struct KeyValuePair_2_System_Type_List_1_System_Type___Boxed {
        struct KeyValuePair_2_System_Type_List_1_System_Type___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Type_List_1_System_Type_ fields;
    };

    struct KeyValuePair_2_System_Type_List_1_System_Type___Array {
        struct KeyValuePair_2_System_Type_List_1_System_Type___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Type_List_1_System_Type_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_System_Type_ {
        struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_System_Type___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_List_1_System_Type_ {
        struct IEnumerable_1_List_1_System_Type___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_ComboSystem_ComboDataEntry___Fields {
        struct ComboDataEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_ComboSystem_ComboDataEntry_ {
        struct List_1_Moon_ComboSystem_ComboDataEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_ComboSystem_ComboDataEntry___Fields fields;
    };

    struct __declspec(align(8)) ComboDataEntry__Fields {
        bool Enabled;
        struct String* MoveTypeName;
        bool IsMelee;
        struct MeleeComboMoveSettings* MeleeSpecificComboSettings;
        struct ComboMoveSettings* ComboMoveSettings;
        struct Type* MoveType;
        struct List_1_Moon_ComboSystem_TransitionEntry_* Transitions;
    };

    struct ComboDataEntry {
        struct ComboDataEntry__Class* klass;
        MonitorData* monitor;
        struct ComboDataEntry__Fields fields;
    };

    struct __declspec(align(8)) MeleeComboMoveSettings__Fields {
        struct Vector2 RootMotionMultiplier;
        float DownwardRootMotionMultiplier;
        bool DisableRootMotion;
        float Cooldown;
    };

    struct MeleeComboMoveSettings {
        struct MeleeComboMoveSettings__Class* klass;
        MonitorData* monitor;
        struct MeleeComboMoveSettings__Fields fields;
    };

    enum class ComboMoveOrderCondition__Enum : int32_t {
        AnyOrder = 0x00000000,
        OnlyFirstMove = 0x00000001,
        OnlyChainedMove = 0x00000002,
    };

    struct ComboMoveOrderCondition__Enum__Boxed {
        struct ComboMoveOrderCondition__Enum__Class* klass;
        MonitorData* monitor;
        ComboMoveOrderCondition__Enum value;
    };

    struct __declspec(align(8)) ComboMoveSettings__Fields {
        ComboMoveOrderCondition__Enum OrderCondition;

        struct List_1_Moon_ComboSystem_InputDirection_* ValidInputDirections;
        int32_t AmountOfUsesPerCombo;
        bool TransitionToAll;
        bool TransitionFromAll;
    };

    struct ComboMoveSettings {
        struct ComboMoveSettings__Class* klass;
        MonitorData* monitor;
        struct ComboMoveSettings__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_ComboSystem_InputDirection___Fields {
        struct InputDirection__Enum__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_ComboSystem_InputDirection_ {
        struct List_1_Moon_ComboSystem_InputDirection___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_ComboSystem_InputDirection___Fields fields;
    };

    struct InputDirection__Enum__Array {
        struct InputDirection__Enum__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        InputDirection__Enum vector[32];
    };

    struct IEnumerator_1_Moon_ComboSystem_InputDirection_ {
        struct IEnumerator_1_Moon_ComboSystem_InputDirection___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_Moon_ComboSystem_TransitionEntry___Fields {
        struct TransitionEntry__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_ComboSystem_TransitionEntry_ {
        struct List_1_Moon_ComboSystem_TransitionEntry___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_ComboSystem_TransitionEntry___Fields fields;
    };

    struct __declspec(align(8)) TransitionEntry__Fields {
        struct String* TypeName;
        int32_t TypeIndx;
        struct Type* Type;
    };

    struct TransitionEntry {
        struct TransitionEntry__Class* klass;
        MonitorData* monitor;
        struct TransitionEntry__Fields fields;
    };

    struct TransitionEntry__Array {
        struct TransitionEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct TransitionEntry* vector[32];
    };

    struct IEnumerator_1_Moon_ComboSystem_TransitionEntry_ {
        struct IEnumerator_1_Moon_ComboSystem_TransitionEntry___Class* klass;
        MonitorData* monitor;
    };

    struct ComboDataEntry__Array {
        struct ComboDataEntry__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ComboDataEntry* vector[32];
    };

    struct IEnumerator_1_Moon_ComboSystem_ComboDataEntry_ {
        struct IEnumerator_1_Moon_ComboSystem_ComboDataEntry___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Type_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_Moon_ComboSystem_ComboDataEntry_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_Moon_ComboSystem_ComboDataEntry_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_ {
        struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry_ {
        int32_t hashCode;
        int32_t next;
        struct Type* key;
        struct ComboDataEntry* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Type_Moon_ComboSystem_ComboDataEntry_ fields;
    };

} // namespace app
