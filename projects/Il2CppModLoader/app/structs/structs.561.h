namespace app {
    struct SeinPowerOfFriendshipSpell {
        struct SeinPowerOfFriendshipSpell__Class* klass;
        MonitorData* monitor;
        struct SeinPowerOfFriendshipSpell__Fields fields;
    };

    struct SeinLightningSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinLightningSpell {
        struct SeinLightningSpell__Class* klass;
        MonitorData* monitor;
        struct SeinLightningSpell__Fields fields;
    };

    struct SeinSpiritFlareSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinSpiritFlareSpell {
        struct SeinSpiritFlareSpell__Class* klass;
        MonitorData* monitor;
        struct SeinSpiritFlareSpell__Fields fields;
    };

    struct SeinEntanglingRootsSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinEntanglingRootsSpell {
        struct SeinEntanglingRootsSpell__Class* klass;
        MonitorData* monitor;
        struct SeinEntanglingRootsSpell__Fields fields;
    };

    struct SeinMarkOfTheWildsSpell__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinMarkOfTheWildsSpell {
        struct SeinMarkOfTheWildsSpell__Class* klass;
        MonitorData* monitor;
        struct SeinMarkOfTheWildsSpell__Fields fields;
    };

    enum class SeinHomingMissileSpell_State__Enum : int32_t {
        Idle = 0x00000000,
        Tagging = 0x00000001,
        Attacking = 0x00000002,
    };

    struct SeinHomingMissileSpell_State__Enum__Boxed {
        struct SeinHomingMissileSpell_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinHomingMissileSpell_State__Enum value;
    };

    struct SeinHomingMissileSpell__Fields {
        struct CharacterState__Fields _;
        struct SeinHomingMissileSpell_BalancingData* Balancing;
        struct UpgradableMultiplier* Upgradable;
        struct GameObject* HomingMissile;
        float AttackCooldown;
        struct SoundProvider* SpawnSound;
        struct MoonAnimation* HomingMissileAnimation;
        SeinHomingMissileSpell_State__Enum m_currentState;

        float m_currentStateTime;
        float m_remainingCooldown;
        struct List_1_IHomingMissileSpellAttackable_* m_closestAttackables;
        struct Transform* m_currentTargetTransform;
        float LockOnChargeUpTime;
        struct GameObject* LockedOnMarker;
        float MinTagRange;
        float MaxTagRange;
        float MaxTags;
        struct Dictionary_2_IAttackable_LockOnTarget_* m_lockOnTargets;
        struct Stack_1_IAttackable_* m_targetsToShoot;
        float m_shotDelayRemaining;
        float DelayBetweenShots;
    };

    struct SeinHomingMissileSpell {
        struct SeinHomingMissileSpell__Class* klass;
        MonitorData* monitor;
        struct SeinHomingMissileSpell__Fields fields;
    };

    struct SeinHomingMissileSpell_BalancingData__Fields {
        struct OriAttackBalancingData__Fields _;
        float DamageAmount;
        float EnergyCost;
    };

    struct SeinHomingMissileSpell_BalancingData {
        struct SeinHomingMissileSpell_BalancingData__Class* klass;
        MonitorData* monitor;
        struct SeinHomingMissileSpell_BalancingData__Fields fields;
    };

    struct __declspec(align(8)) List_1_IHomingMissileSpellAttackable___Fields {
        struct IHomingMissileSpellAttackable__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IHomingMissileSpellAttackable_ {
        struct List_1_IHomingMissileSpellAttackable___Class* klass;
        MonitorData* monitor;
        struct List_1_IHomingMissileSpellAttackable___Fields fields;
    };

    struct IHomingMissileSpellAttackable {
        struct IHomingMissileSpellAttackable__Class* klass;
        MonitorData* monitor;
    };

    struct IHomingMissileSpellAttackable__Array {
        struct IHomingMissileSpellAttackable__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IHomingMissileSpellAttackable* vector[32];
    };

    struct IEnumerator_1_IHomingMissileSpellAttackable_ {
        struct IEnumerator_1_IHomingMissileSpellAttackable___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Stack_1_IAttackable___Fields {
        struct IAttackable__Array* _array;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct Stack_1_IAttackable_ {
        struct Stack_1_IAttackable___Class* klass;
        MonitorData* monitor;
        struct Stack_1_IAttackable___Fields fields;
    };

    struct SeinSpiritCrescentSpell__Fields {
        struct CharacterState__Fields _;
        struct SeinGrenadeAttack_QuickThrowAnimations* QuickThrow;
        struct GameObject* Boomerang;
        struct SoundProvider* ThrowSound;
        struct SoundProvider* CatchSound;
        struct SoundProvider* NotEnoughEnergySound;
        float EnergyCost;
        float EnergyRegain;
        float ThrowSpeed;
        bool Upgraded;
        float AimDeadzone;
    };

    struct SeinSpiritCrescentSpell {
        struct SeinSpiritCrescentSpell__Class* klass;
        MonitorData* monitor;
        struct SeinSpiritCrescentSpell__Fields fields;
    };

    struct __declspec(align(8)) SeinGrenadeAttack_QuickThrowAnimations__Fields {
        struct MoonAnimation* FallIdleThrow;
        struct MoonAnimation* FallThrow;
        struct MoonAnimation* RunThrow;
        struct MoonAnimation* JogThrow;
        struct MoonAnimation* WalkThrow;
        struct MoonAnimation* JumpThrow;
        struct MoonAnimation* JumpIdleThrow;
        struct MoonAnimation* IdleThrow;
        struct MoonAnimation* WallThrow;
    };

    struct SeinGrenadeAttack_QuickThrowAnimations {
        struct SeinGrenadeAttack_QuickThrowAnimations__Class* klass;
        MonitorData* monitor;
        struct SeinGrenadeAttack_QuickThrowAnimations__Fields fields;
    };

    struct SeinMineSpell__Fields {
        struct CharacterState__Fields _;
        struct GameObject* MinePrefab;
        float EnergyCost;
    };

    struct SeinMineSpell {
        struct SeinMineSpell__Class* klass;
        MonitorData* monitor;
        struct SeinMineSpell__Fields fields;
    };

    struct SeinController__Fields {
        struct SaveSerialize__Fields _;
        bool IgnoreControllerInput;
        struct LayerMask RayTestLayerMask;
        struct SeinCharacter* Sein;
        struct Action* OnHorizontalInputPostCalculate;
        struct Transform* GetItemTransform;
        bool DisableAttacksOnHurt;
        struct Transform* m_transform;
        struct SeinPlayAnimationController* m_playAnimationController;
        struct Component_1__Array* m_suspendables;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct Action* OnTriggeredAnimationFinished;
        struct Action* OnGoThroughPortalAction;
        struct IPressurePlate* m_pressurePlate;
    };

    struct SeinController {
        struct SeinController__Class* klass;
        MonitorData* monitor;
        struct SeinController__Fields fields;
    };

    struct __declspec(align(8)) SeinPlayAnimationController__Fields {
        struct SeinCharacter* Sein;
        bool IsPlayingAnimation;
    };

    struct SeinPlayAnimationController {
        struct SeinPlayAnimationController__Class* klass;
        MonitorData* monitor;
        struct SeinPlayAnimationController__Fields fields;
    };

    enum class SeinCutsceneBlocked_State__Enum : int32_t {
        Normal = 0x00000000,
        Backwards = 0x00000001,
    };

    struct SeinCutsceneBlocked_State__Enum__Boxed {
        struct SeinCutsceneBlocked_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinCutsceneBlocked_State__Enum value;
    };

    struct SeinCutsceneBlocked__Fields {
        struct CharacterState__Fields _;
        SeinCutsceneBlocked_State__Enum CurrentState;
    };

    struct SeinCutsceneBlocked {
        struct SeinCutsceneBlocked__Class* klass;
        MonitorData* monitor;
        struct SeinCutsceneBlocked__Fields fields;
    };

    struct SeinCutsceneMovement__Fields {
        struct CharacterState__Fields _;
    };

    struct SeinCutsceneMovement {
        struct SeinCutsceneMovement__Class* klass;
        MonitorData* monitor;
        struct SeinCutsceneMovement__Fields fields;
    };

    enum class SeinDoorHandler_State__Enum : int32_t {
        Idle = 0x00000000,
        Fading = 0x00000001,
        WaitingForScene = 0x00000002,
        GoingThroughDoor = 0x00000003,
    };

    struct SeinDoorHandler_State__Enum__Boxed {
        struct SeinDoorHandler_State__Enum__Class* klass;
        MonitorData* monitor;
        SeinDoorHandler_State__Enum value;
    };

    struct SeinDoorHandler__Fields {
        struct GuidOwner__Fields _;
        struct SeinCharacter* Sein;
        bool _IsOverlappingDoor_k__BackingField;
        struct MessageProvider* EnterDoorMessage;
        struct MoonAnimation* SeinEnterDoorAnimation;
        float UseDoorVerticalInputAmount;
        struct MessageBox* m_enterDoorHint;
        bool m_createCheckpoint;
        bool m_isOverlappingDoor;
        struct LegacyDoor* m_targetDoor;
        bool m_scenesLoaded;
        bool m_scenesEnabled;
        bool m_includedScenesLoaded;
        struct RuntimeSceneMetaData__Array* m_runtimeSceneMetaData;
        SeinDoorHandler_State__Enum m_state;

        struct LegacyDoor* m_door;
        bool m_justUsedDoor;
        float m_goingThroughDoorFaderTimeout;
        float m_stateTimer;
    };

    struct SeinDoorHandler {
        struct SeinDoorHandler__Class* klass;
        MonitorData* monitor;
        struct SeinDoorHandler__Fields fields;
    };

    struct LegacyDoor__Fields {
        struct MonoBehaviour__Fields _;
        struct String* OtherDoorName;
        bool CreateCheckpoint;
        float TransitionDelay;
        struct ActionMethod* EnterDoorAction;
        struct ActionMethod* ComeOutOfDoorAction;
        struct MessageProvider* OverrideEnterDoorMessage;
        struct Condition_1* Condition;
        struct ChangeStateSetupHolder* StateChange;
        struct SceneMetaData__Array* AdditionalScenesToBlockOn;
    };

    struct LegacyDoor {
        struct LegacyDoor__Class* klass;
        MonitorData* monitor;
        struct LegacyDoor__Fields fields;
    };

    struct StateHolder_1_Moon_Setups_ChangeStateSetupData___Fields {
        struct StateHolder__Fields _;
        struct List_1_Moon_Setups_ChangeStateSetupData_* StateData;
        struct List_1_IIndexedItem_* m_cachedStates;
    };

    struct StateHolder_1_Moon_Setups_ChangeStateSetupData_ {
        struct StateHolder_1_Moon_Setups_ChangeStateSetupData___Class* klass;
        MonitorData* monitor;
        struct StateHolder_1_Moon_Setups_ChangeStateSetupData___Fields fields;
    };

    struct TransitionBasedSetupHolder_1_Moon_Setups_ChangeStateSetupData___Fields {
        struct StateHolder_1_Moon_Setups_ChangeStateSetupData___Fields _;
    };

    struct TransitionBasedSetupHolder_1_Moon_Setups_ChangeStateSetupData_ {
        struct TransitionBasedSetupHolder_1_Moon_Setups_ChangeStateSetupData___Class* klass;
        MonitorData* monitor;
        struct TransitionBasedSetupHolder_1_Moon_Setups_ChangeStateSetupData___Fields fields;
    };

    struct ChangeStateSetupHolder__Fields {
        struct TransitionBasedSetupHolder_1_Moon_Setups_ChangeStateSetupData___Fields _;
    };

    struct ChangeStateSetupHolder {
        struct ChangeStateSetupHolder__Class* klass;
        MonitorData* monitor;
        struct ChangeStateSetupHolder__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_Setups_ChangeStateSetupData___Fields {
        struct ChangeStateSetupData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_Setups_ChangeStateSetupData_ {
        struct List_1_Moon_Setups_ChangeStateSetupData___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_Setups_ChangeStateSetupData___Fields fields;
    };

    struct __declspec(align(8)) ChangeStateSetupData__Fields {
        struct MoonReference_1_Moon_Timeline_MoonTimeline_* m_transition;
        float m_desiredValue;
    };

    struct ChangeStateSetupData {
        struct ChangeStateSetupData__Class* klass;
        MonitorData* monitor;
        struct ChangeStateSetupData__Fields fields;
    };

    struct ChangeStateSetupData__Array {
        struct ChangeStateSetupData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ChangeStateSetupData* vector[32];
    };

    struct IEnumerator_1_Moon_Setups_ChangeStateSetupData_ {
        struct IEnumerator_1_Moon_Setups_ChangeStateSetupData___Class* klass;
        MonitorData* monitor;
    };

    struct RuntimeSceneMetaData__Array {
        struct RuntimeSceneMetaData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct RuntimeSceneMetaData* vector[32];
    };

    struct SeinSoulFlame__Fields {
        struct CharacterState__Fields _;
        struct BaseAnimator* ChargeEffectAnimator;
        struct GameObject* CheckpointMarker;
        struct ActionMethod* CheckpointSequence;
        struct AnimationCurve* ParticleRateOverSpeed;
        struct AchievementAsset* CreateManySoulLinkAchievement;
        struct MessageProvider* SkillTreeRekindleMessage;
        struct MessageProvider* SkillTreeMessage;
        struct MessageProvider* NotSafeZoneMessage;
        struct MessageProvider* NotSafeEnemiesMessage;
        struct MessageProvider* NotSafeGroundMessage;
        struct MessageProvider* SavePedestalZoneMessage;
        struct MessageProvider* NotReadyMessage;
        struct LayerMask UnsafeMask;
        struct MessageBox* m_notSafeHint;
        struct MessageBox* m_notReadyHint;
        struct MessageBox* m_skillTreeHint;
        struct GameObject* m_checkpointMarkerGameObject;
        struct SoulFlame* m_soulFlame;
        int32_t m_numberOfSoulFlamesCast;
        float m_holdDownTime;
        float HoldDownDuration;
        float m_nagTimer;
        float NagDuration;
        bool LockSoulFlame;
        struct SoundProvider* NotSafeSound;
        struct SoundProvider* NotReadySound;
        struct SoundSource* ChargingSound;
        struct SoundSource* AbortChargingSound;
        struct SoundProvider* FullyAbortedSound;
        struct SoundProvider* SoulFlameReadySoundProvider;
        struct GameObject* SoulFlameReadyEffect;
        struct GameObject* SoulFlameReadyText;
        float CooldownDuration;
        float RekindleCooldownDuration;
        float m_cooldownRemaining;
        bool m_readyForReadySequence;
        float m_tapRemainingTime;
        struct MoonGuid* m_sceneCheckpoint;
        bool m_isCasting;
        float m_castingDuration;
        float m_delayOnGround;
    };

    struct SeinSoulFlame {
        struct SeinSoulFlame__Class* klass;
        MonitorData* monitor;
        struct SeinSoulFlame__Fields fields;
    };

    struct SoulFlame__Fields {
        struct MonoBehaviour__Fields _;
        struct BaseAnimator* AppearAnimator;
        struct ActionSequence* TriggerSequence;
        struct GameObject* RekindleEffect;
        float EnterRadius;
        float ExitRadius;
        bool m_isInside;
        struct Transform* m_transform;
    };

    struct SoulFlame {
        struct SoulFlame__Class* klass;
        MonitorData* monitor;
        struct SoulFlame__Fields fields;
    };

    struct SeinInventory__Fields {
        struct GuidOwner__Fields _;
        int32_t SkillPointsCollected;
        struct Dictionary_2_System_Object_System_Int32_* m_allocatedKeystones;
    };

    struct SeinInventory {
        struct SeinInventory__Class* klass;
        MonitorData* monitor;
        struct SeinInventory__Fields fields;
    };

    struct FloatRange_1 {
        float Min;
        float Max;
    };

    struct FloatRange_1__Boxed {
        struct FloatRange_1__Class* klass;
        MonitorData* monitor;
        struct FloatRange_1 fields;
    };

    struct SeinEnvironmentForceController__Fields {
        struct CharacterState__Fields _;
        float LandOnWallImpulsePerUnitOfSpeed;
        float LandOnWallMaxImpluse;
        float LandOnCeilingImpulsePerUnitOfSpeed;
        float LandOnCeilingMaxImpulse;
        float WeightOfPlayerForce;
        struct Transform* CenterOfMassPoint;
        struct Transform* GroundPoint;
        float CenterOfMassMotionImpulse;
        struct FloatRange_1 GroundImpulseRange;
        float GroundImpulseLandingTimeout;
        bool useDebug;
        struct Vector3 m_oldVelocity;
        struct Vector3 m_oldCenterPos;
        struct Vector3 m_oldCenterVelocity;
        struct Rigidbody* m_groundRigidbody;
        struct Collider* GroundCollider;
        struct Vector3 GroundNormal;
    };

    struct SeinEnvironmentForceController {
        struct SeinEnvironmentForceController__Class* klass;
        MonitorData* monitor;
        struct SeinEnvironmentForceController__Fields fields;
    };

    struct __declspec(align(8)) SeinInput__Fields {
        struct Input_InputButtonProcessor* Down;
        struct Input_InputButtonProcessor* Left;
        struct Input_InputButtonProcessor* Right;
        struct Input_InputButtonProcessor* Up;
        struct SeinCharacter* m_sein;
    };

    struct SeinInput {
        struct SeinInput__Class* klass;
        MonitorData* monitor;
        struct SeinInput__Fields fields;
    };

    struct SeinLevel__Fields {
        struct GuidOwner__Fields _;
        int32_t SkillPoints;
        int32_t Current;
        float ExperienceVisualMin;
        float ExperienceVisualMax;
        struct AnimationCurve* ExperienceRequiredPerLevel;
        struct GameObject* OnLevelUpGameObject;
        float ExperienceGainPerSecond;
        struct SeinCharacter* m_sein;
    };

    struct SeinLevel {
        struct SeinLevel__Class* klass;
        MonitorData* monitor;
        struct SeinLevel__Fields fields;
    };

    struct SeinEnergy__Fields {
        struct GuidOwner__Fields _;
        float MinEnergyPercentAfterRespawn;
        float MinVisual;
        float MaxVisual;
        float BaseMaxEnergyCap;
        bool m_energyDirty;
        float m_energyCached;
        float m_maxEnergyCached;
        bool m_maxEnergyDirty;
        float m_actualMaxEnergyCached;
        bool m_actualMaxEnergyDirty;
        bool m_baseMaxEnergyDirty;
        float m_baseMaxEnergyCached;
        bool m_energyCostMultiplierDirty;
        float m_energyCostMultiplierCached;
        float m_maxEnergyBonus;
        struct SoundProvider* OutOfEnergySound;
        struct SeinCharacter* m_sein;
        bool m_bloodPactHPCostDirty;
        float m_bloodPactHPCostCached;
        bool m_bloodPactEquippedCached;
        bool _ApplyOnEditor_k__BackingField;
        struct IUberState__Array* _AffectingUberStates_k__BackingField;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    };

    struct SeinEnergy {
        struct SeinEnergy__Class* klass;
        MonitorData* monitor;
        struct SeinEnergy__Fields fields;
    };

    struct __declspec(align(8)) SeinMortality__Fields {
        struct SeinDamageReciever* DamageReciever;
        struct SeinHealthController* Health;
        struct CapsuleCrushDetector* CrushDetector;
        struct ZonesProperties* ZonesProperties;
        struct SeinPetrifiedFogController* SeinPetrifiedFogController;
        struct SeinDeadlyDarknessController* SeinDeadlyDarknessController;
    };

    struct SeinMortality {
        struct SeinMortality__Class* klass;
        MonitorData* monitor;
        struct SeinMortality__Fields fields;
    };

    struct SeinDamageReciever__Fields {
        struct CharacterState__Fields _;
        float BadlyHurtAmount;
        bool IsImmortal;
        bool DebugImmortalMode;
        bool _IsDrowning_k__BackingField;
        bool m_kickbackEnabled;
        int32_t m_lastRoundedHeath;
        DamageWeight__Enum m_damageWeight;

        struct ActiveAnimationHandle m_activeAnim;
        struct CapsuleCollider* m_receiverCollider;
        struct Rigidbody* m_rigidbody;
        struct Action_1_Damage_* OnTakeDamage;
        struct Action_1_Damage_* OnKickback;
        struct Dictionary_2_DamageType_System_Single_* m_invicibilityTimeByDamageType;
        struct List_1_DamageType_* m_currentInvincibilityDamageTypes;
        float LightKickGravityMultiplier;
        float MediumKickGravityMultiplier;
        float HeavyKickGravityMultiplier;
        float HurtDropPickupSpeed;
        float m_invincibleTimeRemaining;
        float m_invincibleToEnemiesTimeRemaining;
        float m_invincibleOnRespawnTimeRemaining;
        float m_invincibleToEnemyEntityTimeRemaining;
        struct Entity* m_ignoredEnemyEntity;
        bool m_died;
        struct GameObject* GameOverScreen;
        float TouchDamageSpeedTransfer;
        float TouchDamageSpeedTransferUpModifier;
        float TouchDamageSpeedTransferDownModifier;
        float DefaultHurtDuration;
        float VeryLightHurtDuration;
        float LightHurtDuration;
        float MediumHurtDuration;
        float HeavyHurtDuration;
        float HeavierHurtDuration;
        struct Vector2 DefaultSpeedDir;
        struct Vector2 VeryLightSpeedDir;
        struct Vector2 LightSpeedDir;
        struct Vector2 MediumSpeedDir;
        struct Vector2 HeavySpeedDir;
        struct Vector2 HeavierSpeedDir;
        float DefaultHurtSpeed;
        float VeryLightHurtSpeeds;
        float LightHurtSpeed;
        float MediumHurtSpeed;
        float HeavyHurtSpeed;
        float HeavierHurtSpeed;
        struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* MoveSpeed;
        struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* LongKickMoveSpeed;
        float GravityMultiplier;
        struct GameObject* HurtEffect;
        struct GameObject* HurtDropPickup;
        float m_hurtTimeRemaining;
        struct GameObject* KillFader;
        float DeathDuration;
        float OneLifeDeathDuration;
        float SpawnDuration;
        float DeathFadeInDuration;
        float DeathFadeOutDuration;
        struct DamageBasedPrefabProvider* DeathEffectProvider;
        int32_t m_serializationFiller;
        bool m_isLeached;
        struct Vector3 m_lastLeachPosition;
        bool m_isPinned;
        struct Vector3 m_lastPinPosition;
        bool m_isRavage;
    };

    struct SeinDamageReciever {
        struct SeinDamageReciever__Class* klass;
        MonitorData* monitor;
        struct SeinDamageReciever__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_DamageType_System_Single___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_DamageType_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_DamageType_System_Single_ {
        struct Dictionary_2_DamageType_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_DamageType_System_Single___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single_ {
        int32_t hashCode;
        int32_t next;
        DamageType__Enum key;

        float value;
    };

    struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Array {
        struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single_ vector[32];
    };

    struct IEqualityComparer_1_DamageType_ {
        struct IEqualityComparer_1_DamageType___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single___Fields {
        struct Dictionary_2_DamageType_System_Single_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single___Fields fields;
    };

    struct IEnumerator_1_DamageType_ {
        struct IEnumerator_1_DamageType___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single___Fields {
        struct Dictionary_2_DamageType_System_Single_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single___Fields fields;
    };

    struct ICollection_1_DamageType_ {
        struct ICollection_1_DamageType___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_DamageType_System_Single_ {
        DamageType__Enum key;

        float value;
    };

    struct KeyValuePair_2_DamageType_System_Single___Boxed {
        struct KeyValuePair_2_DamageType_System_Single___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_DamageType_System_Single_ fields;
    };

    struct KeyValuePair_2_DamageType_System_Single___Array {
        struct KeyValuePair_2_DamageType_System_Single___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_DamageType_System_Single_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_DamageType_System_Single_ {
        struct IEnumerator_1_KeyValuePair_2_DamageType_System_Single___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_DamageType_ {
        struct IEnumerable_1_DamageType___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_DamageType___Fields {
        struct DamageType__Enum__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DamageType_ {
        struct List_1_DamageType___Class* klass;
        MonitorData* monitor;
        struct List_1_DamageType___Fields fields;
    };

    struct SeinHealthController__Fields {
        struct GuidOwner__Fields _;
        struct PlayerUberStateDescriptor* PlayerUberState;
        bool m_amountDirty;
        float m_amountCached;
        bool m_maxHealthDirty;
        float m_maxHealthCached;
        bool m_actualMaxHealthDirty;
        float m_actualMaxHealthCached;
        float m_overMaxHealthBoost;
        bool m_baseMaxHealthDirty;
        int32_t m_baseMaxHealthCached;
        float HealthPercentAfterRespawn;
        float VisualMinAmount;
        float VisualMaxAmount;
        int32_t BaseMaxHealthCap;
        float m_visualFillSpeedMin;
        float m_visualFillSpeedMax;
        float m_visualFillSpeedExtra;
        float m_maxHealthBonus;
        struct GameObject* RespawnEffect;
        bool m_lastResortThresholdDirty;
        float m_lastResortThresholdCached;
        bool m_hasLastResortCached;
        struct SeinCharacter* m_sein;
        bool _ApplyOnEditor_k__BackingField;
        struct IUberState__Array* _AffectingUberStates_k__BackingField;
        struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    };

    struct SeinHealthController {
        struct SeinHealthController__Class* klass;
        MonitorData* monitor;
        struct SeinHealthController__Fields fields;
    };

    struct CapsuleCrushDetector__Fields {
        struct CharacterState__Fields _;
    };

    struct CapsuleCrushDetector {
        struct CapsuleCrushDetector__Class* klass;
        MonitorData* monitor;
        struct CapsuleCrushDetector__Fields fields;
    };

    struct ZonesProperties__Fields {
        struct ScriptableObject__Fields _;
        struct ZoneDamageSettings* PetrifiedFogSettings;
        struct ZoneDamageSettings* DeadlyDarknessSettings;
    };

    struct ZonesProperties {
        struct ZonesProperties__Class* klass;
        MonitorData* monitor;
        struct ZonesProperties__Fields fields;
    };

    struct __declspec(align(8)) ZoneDamageSettings__Fields {
        float Duration;
        float DamageAmount;
        DamageType__Enum DamageType;
    };

    struct ZoneDamageSettings {
        struct ZoneDamageSettings__Class* klass;
        MonitorData* monitor;
        struct ZoneDamageSettings__Fields fields;
    };

    struct SeinPetrifiedFogController__Fields {
        struct MonoBehaviour__Fields _;
        struct BaseAnimator__Array* m_breathingUIAnimators;
        bool m_UIVisible;
    };

    struct SeinPetrifiedFogController {
        struct SeinPetrifiedFogController__Class* klass;
        MonitorData* monitor;
        struct SeinPetrifiedFogController__Fields fields;
    };

    struct SeinDeadlyDarknessController__Fields {
        struct MonoBehaviour__Fields _;
        float ControllerShakeStrength;
        struct AnimationCurve* ControllerShakeCurve;
        struct FloatValueProvider* DurationProvider;
        struct RTPC* DarknessRTPC;
        struct Event_1* DarknessFearLoopEvent;
        float IncreaseProtectionSpeed;
        float m_originalIntensity;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct WwiseEventSystem_SoundHandle m_soundHandle;
    };

    struct SeinDeadlyDarknessController {
        struct SeinDeadlyDarknessController__Class* klass;
        MonitorData* monitor;
        struct SeinDeadlyDarknessController__Fields fields;
    };

    enum class SeinPickupProcessor_PickupProcessorState__Enum : int32_t {
        Idle = 0x00000000,
        Wait = 0x00000001,
        Run = 0x00000002,
    };

    struct SeinPickupProcessor_PickupProcessorState__Enum__Boxed {
        struct SeinPickupProcessor_PickupProcessorState__Enum__Class* klass;
        MonitorData* monitor;
        SeinPickupProcessor_PickupProcessorState__Enum value;
    };

    struct SeinPickupProcessor__Fields {
        struct SaveSerialize__Fields _;
        struct MoonTimeline* PickupTimeline;
        struct ShowInteractiveTextEntity* InteractiveTextEntity;
        struct WWiseSoundAnimatorEntity* SoundAnimatorEntity;
        struct EventTriggerAnimator* ShowItemTrigger;
        struct SeinOnGroundCondition* OnGroundCondition;
        struct SeinPickupProcessor_CollectableInfo* OreInfo;
        struct SeinPickupProcessor_CollectableInfo* ExpOrbInfo;
        struct SeinPickupProcessor_CollectableInfo* KeystoneInfo;
        struct SeinPickupProcessor_CollectableInfo* EyestoneInfo;
        struct SeinPickupProcessor_CollectableInfo* EnergyOrbInfo;
        struct SeinPickupProcessor_CollectableInfo* HealthOrbInfo;
        struct SeinPickupProcessor_CollectableInfo* SmallExpOrbInfo;
        struct SeinPickupProcessor_CollectableInfo* MediumExpOrbInfo;
        struct SeinPickupProcessor_CollectableInfo* LargeExpOrbInfo;
        struct SeinPickupProcessor_CollectableInfo* HeartContainerInfo;
        struct SeinPickupProcessor_CollectableInfo* HeartHalfContainerInfo;
        struct SeinPickupProcessor_CollectableInfo* HeartSecondHalfContainerInfo;
        struct SeinPickupProcessor_CollectableInfo* SkillPointInfo;
        struct SeinPickupProcessor_CollectableInfo* EnergyContainerInfo;
        struct SeinPickupProcessor_CollectableInfo* EnergyHalfContainerInfo;
        struct SeinPickupProcessor_CollectableInfo* EnergySecondHalfContainerInfo;
        struct SeinPickupProcessor_CollectableInfo* MapStoneInfo;
        struct SeinPickupProcessor_CollectableInfo* SpiritShardInfo;
        struct SeinPickupProcessor_CollectableInfo* QuestItemInfo;
        struct SeinPickupProcessor_CollectableInfo* ShardSlotUpgradeInfo;
        struct ExpText* m_expText;
        struct SeinCharacter* m_sein;
        SeinPickupProcessor_PickupProcessorState__Enum m_state;

        struct SeinPickupProcessor_CollectableInfo* m_currentCollectableInfo;
        struct IContext* m_pickupContext;
        float m_timer;
        struct Action* FinishReadingAction;
        struct SpiritShardPickupContext* pickupContext;
    };

    struct SeinPickupProcessor {
        struct SeinPickupProcessor__Class* klass;
        MonitorData* monitor;
        struct SeinPickupProcessor__Fields fields;
    };

    enum class ShowFixedTimeTextEntity_MessageType__Enum : int32_t {
        Ability = 0x00000000,
        Pickup = 0x00000001,
        Shard = 0x00000002,
        Spell = 0x00000003,
        Area = 0x00000004,
        NPCDialog = 0x00000005,
        CinematicDialog = 0x00000006,
        NPCDialogSide1 = 0x00000007,
        NPCDialogSide2 = 0x00000008,
        Wisp = 0x00000009,
    };

    struct ShowFixedTimeTextEntity_MessageType__Enum__Boxed {
        struct ShowFixedTimeTextEntity_MessageType__Enum__Class* klass;
        MonitorData* monitor;
        ShowFixedTimeTextEntity_MessageType__Enum value;
    };

    enum class ShowFixedTimeTextEntity_InteractionType__Enum : int32_t {
        None = 0x00000000,
        NPCTalk = 0x00000001,
        NPCInteractOnEnd = 0x00000002,
    };

    struct ShowFixedTimeTextEntity_InteractionType__Enum__Boxed {
        struct ShowFixedTimeTextEntity_InteractionType__Enum__Class* klass;
        MonitorData* monitor;
        ShowFixedTimeTextEntity_InteractionType__Enum value;
    };

    struct ShowFixedTimeTextEntity__Fields {
        struct TimelineEntity__Fields _;
        ShowFixedTimeTextEntity_MessageType__Enum Type;

        struct GameObject* MessageIcon;
        struct MessageProvider* m_messageProvider;
        struct MoonReference_1_MessageProvider_* m_dynamicMessage;
        float MinWaitTime;
        bool IsInteractive;
        int32_t StartMessageId;
        int32_t EndMessageId;
        bool FreezeTime;
        bool HideHud;
        float MaxWaitTime;
        float LineGapSeconds;
        struct ShowFixedTimeTextEntity_TextVisuals* VisualsOffset;
        bool LockInput;
        bool ForceStopTimelineOnEndHack;
        bool ForceNewAPIToCalculateDuration;
        struct Action_1_MessageBox_HideAction_* FinishedReading;
        struct MoonReference_1_Moon_Wwise_SoundHost_* SoundHost;
        ShowFixedTimeTextEntity_InteractionType__Enum Interaction;

        struct MoonReference_1_NPCEntity_* NPCTalk;
        float m_time;
        float m_messageTimer;
        struct InteractiveMessageBox* m_box;
        struct MessageBox* m_message;
        struct WriteOutTextBox* m_writeOut;
        bool m_resettedWriteOut;
        struct MoonTimeline* m_parentTimeline;
        struct Action* OnNextMessage;
    };

} // namespace app
