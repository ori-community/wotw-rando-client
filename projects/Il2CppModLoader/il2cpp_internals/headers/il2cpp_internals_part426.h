namespace app {
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect___Fields {
  struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect___Fields {
  struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect___Fields fields;
};
struct LeashMarkEffect__Array {
  struct LeashMarkEffect__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LeashMarkEffect * vector[32];
};
struct IEnumerator_1_LeashMarkEffect_ {
  struct IEnumerator_1_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_LeashMarkEffect_ {
  struct ICollection_1_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ {
  struct GameObject * key;
  struct LeashMarkEffect * value;
};
struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Boxed {
  struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ fields;
};
struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Array {
  struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_LeashMarkEffect_ {
  struct IEnumerable_1_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
};
struct SeinSpiritLeashAbility_RayDependency {
  int32_t i;
  int32_t j;
};
struct SeinSpiritLeashAbility_RayDependency__Boxed {
  struct SeinSpiritLeashAbility_RayDependency__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritLeashAbility_RayDependency fields;
};
struct SeinSpiritLeashAbility_RayDependency__Array {
  struct SeinSpiritLeashAbility_RayDependency__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinSpiritLeashAbility_RayDependency vector[32];
};
struct SpherecastCommand__Array {
  struct SpherecastCommand__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpherecastCommand vector[32];
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinSpiritSlash___Fields {
  bool HasState;
  struct SeinSpiritSlash * State;
};
struct CharacterStateWrapper_1_SeinSpiritSlash_ {
  struct CharacterStateWrapper_1_SeinSpiritSlash___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinSpiritSlash___Fields fields;
};
enum SeinSpiritSlash_State__Enum : int32_t {
  SeinSpiritSlash_State__Enum_Idle = 0,
  SeinSpiritSlash_State__Enum_Attacking = 1,
};
struct SeinSpiritSlash_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinSpiritSlash_State__Enum value;
};
struct SeinSpiritSlash__Fields {
  struct CharacterState__Fields _;
  float AirJumpSpeed;
  float AttackGravity;
  float HorizontalSpeed;
  struct AnimationCurve * HorizontalSpeedCurve;
  struct List_1_LightAttackData_ * AirLightAttackData;
  struct List_1_LightAttackData_ * GroundLightAttackData;
  float StingerAdjustSpeed;
  float StingerDamageForce;
  float StingerDistanceFromTarget;
  float StingerMinimumDistance;
  float StingerRange;
  float StingerSpeed;
  float AttackRange;
  float SlashAngleAdjustSpeed;
  struct ISpiritSlashAttackable * m_closestAttackable;
  int32_t m_comboIndex;
  float m_cooldownDuration;
  bool m_currentIsStinger;
  enum SeinSpiritSlash_State__Enum m_currentState;
  float m_currentStateTime;
  struct Transform * m_currentTargetTransform;
  bool m_hasTarget;
  bool m_hasDealtDamage;
  bool m_hasSpawnedSlashEffect;
  bool m_spriteMirrorLock;
  struct Vector3 m_stingerTargetPosition;
  bool m_triggeredCombo;
  float AttackAirDeceleration;
  float AttackGroundDeceleration;
  float SlashAngle;
  struct LightAttackData * m_currentAttackData;
  struct GameObject * m_slashEffect;
};
struct SeinSpiritSlash {
  struct SeinSpiritSlash__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritSlash__Fields fields;
};
struct __declspec(align(8)) List_1_LightAttackData___Fields {
  struct LightAttackData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LightAttackData_ {
  struct List_1_LightAttackData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LightAttackData___Fields fields;
};
struct __declspec(align(8)) LightAttackData__Fields {
  float Duration;
  float ComboDelay;
  float Cooldown;
  float SlashEffectDelay;
  float DealDamageDelay;
  enum DamageType__Enum DamageType;
  float Damage;
  struct MoonAnimation * NewAnimation;
  struct GameObject * Effect;
  struct GameObject * SlashEffect;
  struct SoundProvider * HitSound;
  struct SoundProvider * SlashSound;
};
struct LightAttackData {
  struct LightAttackData__Class *klass;
  struct MonitorData *monitor;
  struct LightAttackData__Fields fields;
};
struct LightAttackData__Array {
  struct LightAttackData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LightAttackData * vector[32];
};
struct IEnumerator_1_LightAttackData_ {
  struct IEnumerator_1_LightAttackData___Class *klass;
  struct MonitorData *monitor;
};
struct ISpiritSlashAttackable {
  struct ISpiritSlashAttackable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinHeavySpiritSlash___Fields {
  bool HasState;
  struct SeinHeavySpiritSlash * State;
};
struct CharacterStateWrapper_1_SeinHeavySpiritSlash_ {
  struct CharacterStateWrapper_1_SeinHeavySpiritSlash___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinHeavySpiritSlash___Fields fields;
};
enum SeinHeavySpiritSlash_State__Enum : int32_t {
  SeinHeavySpiritSlash_State__Enum_Idle = 0,
  SeinHeavySpiritSlash_State__Enum_Charge = 1,
  SeinHeavySpiritSlash_State__Enum_Slash = 2,
};
struct SeinHeavySpiritSlash_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinHeavySpiritSlash_State__Enum value;
};
struct SeinHeavySpiritSlash__Fields {
  struct CharacterState__Fields _;
  float Deceleration;
  float HorizontalSpeed;
  struct AnimationCurve * HorizontalSpeedCurve;
  float EnergyCost;
  struct MoonAnimation * Charge;
  struct SoundProvider * ChargeSoundProvider;
  struct SoundProvider * SlashSoundProvider;
  struct GameObject * SlashEffect;
  struct GameObject * HitEffect;
  float SlashAngle;
  float ChargeDuration;
  float SlashDuration;
  struct AnimationCurve * SlashRadius;
  enum DamageType__Enum DamageType;
  float Damage;
  struct AnimationCurve * SlashAngleCurve;
  enum SeinHeavySpiritSlash_State__Enum m_currentState;
  float m_currentStateTime;
  bool m_spriteMirrorLock;
  struct List_1_IAttackable_ * m_haveBeenHit;
  bool m_hasDealtDamage;
  struct GameObject * m_slashEffect;
  struct GameObject * m_hitEffect;
  bool m_slashedMidAir;
};
struct SeinHeavySpiritSlash {
  struct SeinHeavySpiritSlash__Class *klass;
  struct MonitorData *monitor;
  struct SeinHeavySpiritSlash__Fields fields;
};
struct __declspec(align(8)) List_1_IAttackable___Fields {
  struct IAttackable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IAttackable_ {
  struct List_1_IAttackable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IAttackable___Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinBowAttack___Fields {
  bool HasState;
  struct SeinBowAttack * State;
};
struct CharacterStateWrapper_1_SeinBowAttack_ {
  struct CharacterStateWrapper_1_SeinBowAttack___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinBowAttack___Fields fields;
};
enum SeinBowAttack_State__Enum : int32_t {
  SeinBowAttack_State__Enum_Idle = 0,
  SeinBowAttack_State__Enum_Draw = 1,
  SeinBowAttack_State__Enum_Aim = 2,
  SeinBowAttack_State__Enum_PullCharge = 3,
  SeinBowAttack_State__Enum_Recover = 4,
};
struct SeinBowAttack_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinBowAttack_State__Enum value;
};
struct AnimationLayerContext {
  struct MoonAnimatorLayerName LayerName;
};
struct AnimationLayerContext__Boxed {
  struct AnimationLayerContext__Class *klass;
  struct MonitorData *monitor;
  struct AnimationLayerContext fields;
};
struct SeinBowAttack__Fields {
  struct CharacterState__Fields _;
  struct SeinBowAttack_BalancingData * Balancing;
  struct UpgradableMultiplier * Upgradable;
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
  struct SeinBowAttack_Settings * GroundSettings;
  float SpeedMultiplierGround;
  float MinAimAngleGround;
  float ChargeKickbackStrengthGround;
  struct Kickback * ChargeKickbackGround;
  bool ControlAfterShotGround;
  struct SeinBowAttack_Settings * AirSettings;
  float SpeedMultiplierAir;
  float MinAimAngleAir;
  float ChargeKickbackStrengthAir;
  struct Kickback * ChargeKickbackAir;
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
  struct InstantiationRecycleHelper * SurfaceHitEffectRecycler;
  struct InstantiationRecycleHelper * WeaponEffectRecycler;
  int32_t WeaponFXPrewarmAmount;
  int32_t SurfaceFXPrewarmAmount;
  struct SoundProvider * DrawSound;
  struct SoundProvider * ShootSound;
  struct SoundProvider * AirChargeBeginSound;
  struct SoundProvider * AirChargeEndSound;
  struct SoundProvider * NotEnoughEnergySound;
  struct SoundSource * AimCriticalSound;
  struct RTPC * BowDamageRtpc;
  struct Event_1 * ReleaseBowEvent;
  bool m_effectiveSettingsIsGround;
  float m_targetAimAngle;
  float m_currentAimAngle;
  float m_savedStickAngle;
  enum SeinBowAttack_State__Enum m_currentState;
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
  struct MoonTimeline * m_curTimeline;
  struct Transform * m_leftHand;
  struct Transform * m_leftShoulder;
  struct Transform * m_rightHand;
  struct Transform * m_weapon1Jnt;
  struct IBowAttackable * m_currentAutoTarget;
  float m_currentArrowDamage;
  float m_currentArrowSpeed;
  float m_currentExplosionScale;
  float m_currentExplosionCameraShake;
  float m_currentExplosionVolume;
  float m_chargeAmount;
  float m_preChargeArrowSpeed;
  struct AnimationLayerContext m_tandemAnimationContext;
  struct HashSet_1_Moon_ISuspendable_ * m_suspendables;
  struct SeinBowMark * m_currentMarkerInstance;
  bool m_initialised;
  struct List_1_Moon_ComboSystem_IComboMove_ * _ComboMoves_k__BackingField;
  float _ProviderCooldown_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  float _MoveCooldown_k__BackingField;
  float _MoveCooldownTimer_k__BackingField;
  bool _WasGroundedSinceLastExecution_k__BackingField;
  float m_moveTime;
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ * m_particleSystems;
  struct List_1_UnityEngine_ParticleSystem_ * m_tempPSList;
  struct ActiveAnimationHandle m_aimStateAnimation;
  struct ActiveAnimationHandle m_aimStateBowAnimation;
  int32_t m_arrowCountPerPress;
  int32_t m_amountOfArrowsForStressTest;
  float m_shotIntervalStressTest;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct SeinBowAttack {
  struct SeinBowAttack__Class *klass;
  struct MonitorData *monitor;
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
  struct SeinBowAttack_BalancingData__Class *klass;
  struct MonitorData *monitor;
  struct SeinBowAttack_BalancingData__Fields fields;
};
struct __declspec(align(8)) SeinBowAttack_Settings__Fields {
  struct MoonTimeline * DrawTimeline;
  struct MoonTimeline * DrawRapidTimeline;
  struct MoonTimeline * RecoverTimeline;
  struct MoonTimeline * PullChargeTimeline;
  struct MoonTimeline * ChargeRecoverTimeline;
  struct GameObject * AimEffect;
  struct GameObject * ChargeEffect;
  struct MoonFloat * ArrowChargeAmount;
  struct MoonAnimation * AimLoopAnimationBow;
  float SpeedMultiplier;
  float MinAimAngle;
  float ChargeKickbackStrength;
  struct Kickback * ChargeKickback;
  bool ControlAfterShot;
};
struct SeinBowAttack_Settings {
  struct SeinBowAttack_Settings__Class *klass;
  struct MonitorData *monitor;
  struct SeinBowAttack_Settings__Fields fields;
};
struct __declspec(align(8)) Kickback__Fields {
  struct AnimationCurve * KickbackCurve;
  float m_kickbackTimeRemaining;
  float m_kickbackMultiplier;
  struct Vector2 _KickbackDirection_k__BackingField;
};
struct Kickback {
  struct Kickback__Class *klass;
  struct MonitorData *monitor;
  struct Kickback__Fields fields;
};
struct __declspec(align(8)) InstantiationRecycleHelper__Fields {
  int32_t m_prewarmAmount;
  struct List_1_UnityEngine_GameObject_ * m_instances;
  bool m_limitAmountOfActiveInstances;
};
struct InstantiationRecycleHelper {
  struct InstantiationRecycleHelper__Class *klass;
  struct MonitorData *monitor;
  struct InstantiationRecycleHelper__Fields fields;
};
struct IBowAttackable {
  struct IBowAttackable__Class *klass;
  struct MonitorData *monitor;
};
enum SeinBowMark_State__Enum : int32_t {
  SeinBowMark_State__Enum_Appearing = 0,
  SeinBowMark_State__Enum_Playing = 1,
  SeinBowMark_State__Enum_Disappearing = 2,
};
struct SeinBowMark_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinBowMark_State__Enum value;
};
struct SeinBowMark__Fields {
  struct Suspendable__Fields _;
  float AppearTime;
  float DisappearTime;
  float Scale;
  struct AnimationCurve * AppearScaleCurve;
  struct AnimationCurve * DisappearScaleCurve;
  struct IAttackable * Target;
  struct Transform * Mark;
  enum SeinBowMark_State__Enum m_currentState;
  float m_stateCurrentTime;
  bool _IsSuspended_k__BackingField;
};
struct SeinBowMark {
  struct SeinBowMark__Class *klass;
  struct MonitorData *monitor;
  struct SeinBowMark__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_GameObject_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
  int32_t hashCode;
  int32_t next;
  struct GameObject * key;
  struct List_1_UnityEngine_ParticleSystem_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array {
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ vector[32];
};
struct __declspec(align(8)) List_1_UnityEngine_ParticleSystem___Fields {
  struct ParticleSystem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_ParticleSystem_ {
  struct List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_ParticleSystem___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields {
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields {
  struct Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Fields fields;
};
struct List_1_UnityEngine_ParticleSystem___Array {
  struct List_1_UnityEngine_ParticleSystem___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_UnityEngine_ParticleSystem_ * vector[32];
};
struct IEnumerator_1_List_1_UnityEngine_ParticleSystem_ {
  struct IEnumerator_1_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_UnityEngine_ParticleSystem_ {
  struct ICollection_1_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
  struct GameObject * key;
  struct List_1_UnityEngine_ParticleSystem_ * value;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Boxed {
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ fields;
};
struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array {
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem_ {
  struct IEnumerator_1_KeyValuePair_2_UnityEngine_GameObject_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_UnityEngine_ParticleSystem_ {
  struct IEnumerable_1_List_1_UnityEngine_ParticleSystem___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinMeleeAttack___Fields {
  bool HasState;
  struct SeinMeleeAttack * State;
};
struct CharacterStateWrapper_1_SeinMeleeAttack_ {
  struct CharacterStateWrapper_1_SeinMeleeAttack___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinMeleeAttack___Fields fields;
};
struct SeinMeleeAttack__Fields {
  struct CharacterState__Fields _;
  struct GameObject__Array * WeaponPrefabs;
  struct MeleeWeapon__Array * Weapons;
  float CooldownAfterDamageTaken;
  bool DisableRootMotionWhenNearEnemy;
  float DisableRootMotionRadius;
  struct LayerMask DisableRootMotionCollisionMask;
  float HighlightRange;
  float DamageBlockedCooldown;
  float DamageBlockedInputLockDuration;
  struct Kickback * DamageBlockedKickback;
  struct Animator * m_seinAnimator;
  struct Transform * m_weaponJoint;
  struct Transform * m_rootJoint;
  struct CameraShake * m_cameraShake;
  bool m_spriteMirrorLock;
  bool m_unequipWeapon;
  float m_timeDamageTaken;
  float m_comboCooldownTimeLeft;
  float m_damageBlockedCooldownTimeLeft;
  struct MeleeWeapon * m_currentWeapon;
  struct MeleeComboMove * m_currentComboMove;
  struct DamageOwner * m_damageOwner;
  struct List_1_ActivateCooldownRule_ * m_currentCooldownRules;
  struct Vector2 m_retainedRootMotion;
  struct List_1_ISpiritFlameAttackable_ * m_lastClosestAttackables;
  struct List_1_ISpiritFlameAttackable_ * m_closestAttackables;
};
struct SeinMeleeAttack {
  struct SeinMeleeAttack__Class *klass;
  struct MonitorData *monitor;
  struct SeinMeleeAttack__Fields fields;
};
enum WeaponJoint__Enum : int32_t {
  WeaponJoint__Enum_Weapon1_JNT = 0,
  WeaponJoint__Enum_Weapon2_JNT = 1,
  WeaponJoint__Enum_ItemSlot_L = 2,
};
struct WeaponJoint__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WeaponJoint__Enum value;
};
struct MeleeWeapon__Fields {
  struct MonoBehaviour__Fields _;
  bool DebugWeaponOutput;
  struct DynamicDataResolver * m_dataResolver;
  struct MeleeComboTransition__Array * Transitions;
  struct MoonAnimator * Animator;
  struct MoonAnimator * HeroAnimatorPreview;
  struct Animator * LegacyWeaponAnimator;
  enum WeaponJoint__Enum m_weaponJoint;
  struct Transform * m_targetJoint;
  struct Transform * WeaponRoot;
  struct MoonTimeline__Array * m_allTimelines;
  struct Transform__Array * m_animatorTransforms;
  struct SeinCharacter * m_weaponOwner;
  enum AbilityType__Enum AbilityType;
  enum DamageLayerMask__Enum DamageLayerMask;
  struct DamageOwner * DamageOwner;
  struct UpgradableMultiplier * Upgradable;
  struct SerializedByteUberState * UpgradeLevel;
  struct Single__Array * UpgradeEffectiveness;
  bool InterruptComboOnDamageTaken;
  bool InterruptComboOnDamageBlocked;
  float InterruptComboMinRange;
  struct MoonAnimation * GroundBlockAnimation;
  struct AnimationCurve * GroundBlockKickbackCurve;
  struct MoonAnimation * AirBlockAnimation;
  struct AnimationCurve * AirBlockKickbackCurve;
  bool FlattenKickbackDirection;
  bool IgnoreTargetsBehind;
  struct MaterialBasedSeinEffectsMap * HitEffects;
  struct Vector2 GravityMultiplierRange;
  float GravityMultiplierIncreaseSpeed;
  float _CurrentGravityMultiplier_k__BackingField;
  struct Action_1_DamageResult_ * DamageResultReceived;
  struct Nullable_1_Boolean_ m_attackButtonPressedCached;
  bool _IsPerformingCombo_k__BackingField;
  struct SeinComboHandler * ComboHandler;
  bool m_canDeactivateRoot;
  bool m_isInitialized;
  bool m_isWeaponShown;
  bool m_spriteMirrorLock;
  struct SoundHost * m_soundHost;
  float _WeaponCooldown_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  struct List_1_Moon_ComboSystem_IComboMove_ * m_comboMoves;
  struct TrackingExclusions _TrackingExclusions_k__BackingField;
};
struct MeleeWeapon {
  struct MeleeWeapon__Class *klass;
  struct MonitorData *monitor;
  struct MeleeWeapon__Fields fields;
};
struct MeleeWeapon__Array {
  struct MeleeWeapon__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeleeWeapon * vector[32];
};
enum MeleeComboTransition_StickDirection__Enum : int32_t {
  MeleeComboTransition_StickDirection__Enum_Forward = 0,
  MeleeComboTransition_StickDirection__Enum_Back = 1,
  MeleeComboTransition_StickDirection__Enum_Up = 2,
  MeleeComboTransition_StickDirection__Enum_Down = 3,
  MeleeComboTransition_StickDirection__Enum_None = 4,
  MeleeComboTransition_StickDirection__Enum_Any = 5,
};
struct MeleeComboTransition_StickDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MeleeComboTransition_StickDirection__Enum value;
};
enum MeleeComboTransition_OnGroundMode__Enum : int32_t {
  MeleeComboTransition_OnGroundMode__Enum_Either = 0,
  MeleeComboTransition_OnGroundMode__Enum_OnGround = 1,
  MeleeComboTransition_OnGroundMode__Enum_InAir = 2,
};
struct MeleeComboTransition_OnGroundMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MeleeComboTransition_OnGroundMode__Enum value;
};
struct __declspec(align(8)) MeleeComboTransition__Fields {
  enum MeleeComboTransition_StickDirection__Enum StickDirectionCondition;
  enum MeleeComboTransition_OnGroundMode__Enum OnGround;
  struct MeleeComboMove * TargetMove;
};
struct MeleeComboTransition {
  struct MeleeComboTransition__Class *klass;
  struct MonitorData *monitor;
  struct MeleeComboTransition__Fields fields;
};
struct MeleeComboTransition__Array {
  struct MeleeComboTransition__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MeleeComboTransition * vector[32];
};
struct MeleeComboMove__Fields {
  struct MonoBehaviour__Fields _;
  bool DebugBreakOnEnter;
  struct MeleeComboTransition__Array * Transitions;
  struct Vector2 RootMotionMultiplier;
  float DownwardRootMotionMultiplier;
  bool DisableRootMotion;
  bool RetainXRootMotion;
  bool RetainYRootMotion;
  float Cooldown;
  struct ActivateCooldownRule__Array * CooldownRules;
  bool RotateToGroundAngle;
  bool OnlyGround;
  float GroundMaxDistance;
  bool AutoTarget;
  float AutoTargetAngleMax;
  struct Vector2 PrimaryAttackDirection;
  float AllowedTargetPositionDeviation;
  float AllowedGroundVFXNormalDeviation;
  struct SeinComboHandler * m_comboHandler;
  struct SeinCharacter * m_sein;
  struct MeleeWeapon * m_weapon;
  struct MaterialBasedSeinEffectsMap * m_hitVFX;
  int32_t m_damageID;
  struct List_1_UnityEngine_Collider_ * m_haveBeenHit;
  struct List_1_Moon_Entity_ * m_haveEntityBeenHit;
  float m_lastTimeAirReset;
  struct IAttackable * m_currentTarget;
  float m_rootRotation;
  float m_groundAngle;
  float StingerAdjustSpeed;
  float StingerTargetOffset;
  float StingerRange;
  float StingerStartTime;
  float StingerMinimumDistance;
  float StingerSpeed;
  struct Nullable_1_UnityEngine_Vector3_ m_stingerTargetPosition;
  enum MaterialTypeVFXSettings_EffectSize__Enum ImpactSize;
  struct MeleeComboMove * m_nextMove;
  struct List_1_UnityEngine_GameObject_ * m_suspendableHitEffects;
  struct Boolean__Array * m_canBeInterruptedBy;
  bool m_canInputBeQueued;
  bool m_attackButtonReleased;
  bool m_changeFacingDirForNextMove;
  float m_moveTime;
  int32_t m_animationSpeedMultiplierParameterId;
  int32_t m_weaponAnimationSpeedMultiplierParameterId;
  struct String * m_scheduledWeaponAnimation;
  float m_scheduledWeaponAnimationSpeedMultiplier;
  bool m_oneTimeOnCollisionEffectPlayed;
  bool m_oneTimeOnBigCollisionEffectPlayed;
  bool m_oneTimeHitEffectPlayed;
  struct GameObject * m_effectSpawnedThisFrame;
  struct GameObject * m_hitEffectSpawnedThisFrame;
  bool m_effectSpawnedThisFrameWasSmall;
  float _MoveCooldownTimer_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  bool _WasGroundedSinceLastExecution_k__BackingField;
  struct List_1_Moon_ComboSystem_IComboMove_ * m_comboMoves;
};
struct MeleeComboMove {
  struct MeleeComboMove__Class *klass;
  struct MonitorData *monitor;
  struct MeleeComboMove__Fields fields;
};
struct __declspec(align(8)) ActivateCooldownRule__Fields {
  float _CurrentCooldown_k__BackingField;
  struct MeleeComboMove * TargetMove;
  float TargetsCooldown;
  bool ResetByLanding;
  struct IComboMove * _CooldownSourceMove_k__BackingField;
};
struct ActivateCooldownRule {
  struct ActivateCooldownRule__Class *klass;
  struct MonitorData *monitor;
  struct ActivateCooldownRule__Fields fields;
};
struct ActivateCooldownRule__Array {
  struct ActivateCooldownRule__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ActivateCooldownRule * vector[32];
};
struct SeinComboHandler__Fields {
  struct CharacterState__Fields _;
  struct SeinComboHandler_StubbedComboMove * m_analogMovement;
  struct SeinComboHandler_StubbedComboMove * m_oppositeAnalogMovement;
  struct SeinComboHandler_StubbedComboMove * m_movementAbility;
  struct SeinComboHandler_StubbedComboMove * m_attackMove;
  struct SeinComboHandler_StubbedComboMove * m_anyMove;
  struct GlobalComboDefinition * ComboDefinitions;
  struct GameObject__Array * WeaponPrefabs;
  struct MeleeWeapon__Array * Weapons;
  float CooldownAfterDamageTaken;
  bool DisableRootMotionWhenNearEnemy;
  float DisableRootMotionRadius;
  struct LayerMask DisableRootMotionCollisionMask;
  float HighlightRange;
  float DamageBlockedCooldown;
  float DamageBlockedInputLockDuration;
  struct Kickback * DamageBlockedKickback;
  struct ComboInput * m_inputBuffer;
  struct ComboInput * m_currentInput;
  struct IComboMove * m_nextMove;
  struct HashSet_1_Moon_ComboSystem_IComboMove_ * m_movesToResetOnComboEndHashSet;
  struct List_1_Moon_ComboSystem_IComboMove_ * m_movesToResetOnComboEndList;
  struct List_1_Moon_ComboSystem_IComboMove_ * m_moves;
  struct List_1_ComboMoveStressTest_ * m_moveTests;
  struct List_1_Moon_ComboSystem_IComboMoveProvider_ * m_initialMoveProviders;
  bool m_weaponComboInitialized;
  struct List_1_ActivateCooldownRule_ * m_currentCooldownRules;
  bool _ShouldModifyGravity_k__BackingField;
  bool _DamageDealtDuringLastMove_k__BackingField;
  struct Animator * m_seinAnimator;
  struct Transform * m_weaponJoint;
  struct Transform * m_rootJoint;
  struct CameraShake * m_cameraShake;
  bool m_unequipWeapon;
  float m_timeDamageTaken;
  float m_comboCooldownTimeLeft;
  float m_damageBlockedCooldownTimeLeft;
  struct MeleeWeapon * m_currentWeapon;
  struct IComboMove * m_currentComboMove;
  struct IComboMove * m_upcomingComboMove;
  struct DamageOwner * m_damageOwner;
  bool DebugOutput;
  struct SeinJumpHandler * m_jumpHandler;
  struct Collider__Array * m_tempColliders;
  struct List_1_ISpiritFlameAttackable_ * m_lastClosestAttackables;
  struct List_1_ISpiritFlameAttackable_ * m_closestAttackables;
};
struct SeinComboHandler {
  struct SeinComboHandler__Class *klass;
  struct MonitorData *monitor;
  struct SeinComboHandler__Fields fields;
};
struct __declspec(align(8)) SeinComboHandler_StubbedComboMove__Fields {
  struct List_1_Moon_ComboSystem_IComboMove_ * _ComboMoves_k__BackingField;
  enum AbilityType__Enum _ComboAbilityType_k__BackingField;
  float _ProviderCooldown_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  bool _MoveHasFinished_k__BackingField;
  enum ComboMoveType__Enum _ComboMoveType_k__BackingField;
  bool _IsAttackButtonDown_k__BackingField;
  bool _OnAttackButtonPressed_k__BackingField;
  bool _OnAttackButtonReleased_k__BackingField;
  float _MoveCooldown_k__BackingField;
  float _MoveCooldownTimer_k__BackingField;
  bool _WasGroundedSinceLastExecution_k__BackingField;
};
struct SeinComboHandler_StubbedComboMove {
  struct SeinComboHandler_StubbedComboMove__Class *klass;
  struct MonitorData *monitor;
  struct SeinComboHandler_StubbedComboMove__Fields fields;
};
struct GlobalComboDefinition__Fields {
  struct ScriptableObject__Fields _;
  struct Dictionary_2_System_Type_List_1_System_Type_ * TransitionsMap;
  struct List_1_Moon_ComboSystem_ComboDataEntry_ * Combos;
  struct Dictionary_2_System_Type_Moon_ComboSystem_ComboDataEntry_ * m_entryByType;
};
struct GlobalComboDefinition {
  struct GlobalComboDefinition__Class *klass;
  struct MonitorData *monitor;
  struct GlobalComboDefinition__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Type_List_1_System_Type___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_List_1_System_Type_ {
  struct Dictionary_2_System_Type_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_List_1_System_Type___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct List_1_System_Type_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_List_1_System_Type_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type___Fields {
  struct Dictionary_2_System_Type_List_1_System_Type_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_List_1_System_Type___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type___Fields {
  struct Dictionary_2_System_Type_List_1_System_Type_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_List_1_System_Type___Fields fields;
};
struct List_1_System_Type___Array {
  struct List_1_System_Type___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_System_Type_ * vector[32];
};
struct IEnumerator_1_List_1_System_Type_ {
  struct IEnumerator_1_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_System_Type_ {
  struct ICollection_1_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_List_1_System_Type_ {
  struct Type * key;
  struct List_1_System_Type_ * value;
};
struct KeyValuePair_2_System_Type_List_1_System_Type___Boxed {
  struct KeyValuePair_2_System_Type_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_List_1_System_Type_ fields;
};
struct KeyValuePair_2_System_Type_List_1_System_Type___Array {
  struct KeyValuePair_2_System_Type_List_1_System_Type___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_List_1_System_Type_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_System_Type_ {
  struct IEnumerator_1_KeyValuePair_2_System_Type_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_System_Type_ {
  struct IEnumerable_1_List_1_System_Type___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_Moon_ComboSystem_ComboDataEntry___Fields {
  struct ComboDataEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ComboSystem_ComboDataEntry_ {
  struct List_1_Moon_ComboSystem_ComboDataEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ComboSystem_ComboDataEntry___Fields fields;
};}