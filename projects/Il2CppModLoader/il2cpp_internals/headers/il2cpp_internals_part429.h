namespace app {
struct SeinChargeShotSpell {
  struct SeinChargeShotSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinChargeShotSpell__Fields fields;
};
enum Projectile_CollisionVFXOrientationType__Enum : int32_t {
  Projectile_CollisionVFXOrientationType__Enum_GroundNormal = 0,
  Projectile_CollisionVFXOrientationType__Enum_ProjectileVeolicty = 1,
};
struct Projectile_CollisionVFXOrientationType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Projectile_CollisionVFXOrientationType__Enum value;
};
struct Projectile_RicochetShardSettings {
  bool Allowed;
  struct SoundProvider * Sound;
};
struct Projectile_RicochetShardSettings__Boxed {
  struct Projectile_RicochetShardSettings__Class *klass;
  struct MonitorData *monitor;
  struct Projectile_RicochetShardSettings fields;
};
struct Projectile__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Owner;
  struct DamageOwner * DamageOwner;
  struct DamageDealer * DamageDealer;
  bool CanProjectileBeBashed;
  bool CanProjectileBeTeleportedByBeacon;
  float CollisionGracePeriod;
  bool EnableCollisionGracePeriod;
  float Gravity;
  float MaximumLiveTime;
  struct SoundProvider * ProjectileLoop;
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
  enum AbilityType__Enum AbilityType;
  struct MoonTimeline * DestroyTimeline;
  struct GameObject * OnCollisionVFX;
  enum Projectile_CollisionVFXOrientationType__Enum CollisionVFXOrientation;
  struct Action_1_Projectile_ * OnBashEvent;
  struct Action_1_Projectile_ * OnReflectEvent;
  struct Action_1_Projectile_ * OnExplodeEvent;
  struct Projectile_RicochetShardSettings RicochetShardInteraction;
  float CurrentTime;
  bool m_explode;
  float m_originalGravity;
  bool m_explodeLater;
  bool m_isBeingReflected;
  int32_t m_bouncesRemaining;
  struct Rigidbody * Rigidbody;
  struct Transform * Transform;
  struct DamageDealer * m_damageDealer;
  struct Collider * m_collider;
  struct Projectile_ExplodeCollisionInfo * m_explodeCollision;
  struct Projectile_ExplodeCollisionInfo * _RicochetCollision_k__BackingField;
  struct WaterInteraction * m_waterInteractionComponent;
  float m_preBashDamage;
  bool m_wasKinematic;
  bool m_isSuspended;
  struct Vector3 m_cachedUnsuspendedVelocity;
  struct Component_1__Array * m_onKillRecievers;
  bool ChangeDamageLayerAfterBash;
  enum DamageLayerMask__Enum ChangedDamageLayerMask;
  struct Vector3 _Displacement_k__BackingField;
  int32_t _HeavySpiritSlashPriority_k__BackingField;
  struct Vector3 _Direction_k__BackingField;
  float _Speed_k__BackingField;
  struct GameObject * _LastReflector_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  int32_t m_piercingCount;
  struct ArtificialSoundHostReference m_soundHost;
  struct TrackingExclusions _TrackingExclusions_k__BackingField;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct Projectile {
  struct Projectile__Class *klass;
  struct MonitorData *monitor;
  struct Projectile__Fields fields;
};
struct SpiritShotProjectile__Fields {
  struct Projectile__Fields _;
  float m_explosionScale;
  float m_explosionCameraShakeStrength;
};
struct SpiritShotProjectile {
  struct SpiritShotProjectile__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShotProjectile__Fields fields;
};
struct Action_1_Projectile___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Projectile_ {
  struct Action_1_Projectile___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Projectile___Fields fields;
};
struct __declspec(align(8)) Projectile_ExplodeCollisionInfo__Fields {
  struct Vector3 Position;
  struct Vector3 Normal;
  struct Collider * Collider;
};
struct Projectile_ExplodeCollisionInfo {
  struct Projectile_ExplodeCollisionInfo__Class *klass;
  struct MonitorData *monitor;
  struct Projectile_ExplodeCollisionInfo__Fields fields;
};
struct WaterInteraction__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * WaterSplashEffect;
  struct RTPC * UnderwaterRTPC;
  struct Action * OnWaterZoneEnterAction;
  struct Action * OnWaterZoneExitAction;
  struct List_1_WaterZone_ * m_crossedWaterZone;
};
struct WaterInteraction {
  struct WaterInteraction__Class *klass;
  struct MonitorData *monitor;
  struct WaterInteraction__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinJumpShotSpell___Fields {
  bool HasState;
  struct SeinJumpShotSpell * State;
};
struct CharacterStateWrapper_1_SeinJumpShotSpell_ {
  struct CharacterStateWrapper_1_SeinJumpShotSpell___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinJumpShotSpell___Fields fields;
};
enum SeinJumpShotSpell_State__Enum : int32_t {
  SeinJumpShotSpell_State__Enum_Inactive = 0,
  SeinJumpShotSpell_State__Enum_Active = 1,
  SeinJumpShotSpell_State__Enum_ShieldActive = 2,
};
struct SeinJumpShotSpell_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinJumpShotSpell_State__Enum value;
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
  struct SoundProvider * NotEnoughEnergySound;
  struct SoundProvider * ActivateSound;
  struct SoundProvider * DeactivateSound;
  struct SoundProvider * BounceSound;
  struct SoundProvider * RicochetSound;
  struct GameObject * Shield;
  struct MoonAnimation * Jump;
  enum SeinJumpShotSpell_State__Enum m_currentState;
  float m_activeTimeLeft;
  float m_shieldActiveTimeLeft;
  struct GameObject * m_shield;
  float m_shieldRotationDirection;
  struct IAttackable * m_closestAttackable;
  float m_flyTowardsEnemyRemainingTime;
  float FlyTowardsEnemyDuration;
  float FlyTowardsEnemySpeed;
  float FlyJumpSpeed;
  struct Vector2 m_flyTowardsPosition;
};
struct SeinJumpShotSpell {
  struct SeinJumpShotSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinJumpShotSpell__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinChakramSpell___Fields {
  bool HasState;
  struct SeinChakramSpell * State;
};
struct CharacterStateWrapper_1_SeinChakramSpell_ {
  struct CharacterStateWrapper_1_SeinChakramSpell___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinChakramSpell___Fields fields;
};
enum SeinChakramSpell_State__Enum : int32_t {
  SeinChakramSpell_State__Enum_Normal = 0,
  SeinChakramSpell_State__Enum_PreCharge = 1,
  SeinChakramSpell_State__Enum_FullyCharged = 2,
  SeinChakramSpell_State__Enum_PreAirShot = 3,
  SeinChakramSpell_State__Enum_AirShot = 4,
  SeinChakramSpell_State__Enum_PostShot = 5,
};
struct SeinChakramSpell_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinChakramSpell_State__Enum value;
};
struct SeinChakramSpell__Fields {
  struct CharacterState__Fields _;
  struct FloatAnimationParameter * AnimationAimParameter;
  struct MoonAnimation * ChakramThrow;
  struct MoonAnimation * ChakramThrowAir;
  struct MoonAnimation * ChakramCatch;
  struct MoonAnimation * ChakramCatchAir;
  struct MoonTimeline * ThrowTimeline;
  struct GameObject * Projectile;
  struct GameObject * ProjectileTrail;
  struct PrefabSpawner * ChakramCaughtPrefabSpawner;
  struct SoundProvider * ProjectileReleaseSound;
  struct SoundProvider * NotEnoughEnergySound;
  struct SoundSource * FullyChargedSoundLoop;
  struct SeinChakramSpell_BalancingData * Balancing;
  struct UpgradableMultiplier * Upgradable;
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
  struct HorizontalPlatformMovementSettings_SpeedSet * AirHorizontalMovement;
  struct HorizontalPlatformMovementSettings_SpeedSet * GroundHorizontalMovement;
  bool ModifyGravitySetttings;
  float Gravity;
  struct Event_1 * ThrowSoundEvent;
  struct Event_1 * CatchSoundEvent;
  enum SeinChakramSpell_State__Enum m_currentState;
  bool m_facingLeftWhenShooting;
  struct Vector2 m_directionWhenShooting;
  struct Transform * m_projectileTransform;
  struct ChakramProjectile * m_projectile;
  float m_currentStateTime;
  float m_coolDownTime;
  int32_t m_currentActiveChakrams;
  struct IBowAttackable * m_currentAutoTarget;
  float m_targetAimAngle;
  struct ChakramProjectile * m_prefabChakramProjectile;
  float m_autoAimMaxDist;
  bool m_forceStopThrowAnimation;
  bool m_spriteMirrorLock;
  float _MoveCooldown_k__BackingField;
  float _MoveCooldownTimer_k__BackingField;
  bool _WasGroundedSinceLastExecution_k__BackingField;
  struct List_1_Moon_ComboSystem_IComboMove_ * _ComboMoves_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
};
struct SeinChakramSpell {
  struct SeinChakramSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinChakramSpell__Fields fields;
};
struct PrefabSpawner__Fields {
  struct MonoBehaviour__Fields _;
  struct PrefabProvider * Prefab;
  int32_t PrewarmAmount;
  struct Transform * Parent;
  bool UseParentOfParent;
  bool UseRotation;
  bool SpawnAtStart;
  bool SpawnOffscreen;
  float OnScreenPadding;
  struct Transform * InitialPositionProvider;
  struct Vector3 InitialVelocity;
  struct GameObject * m_prefab;
};
struct PrefabSpawner {
  struct PrefabSpawner__Class *klass;
  struct MonitorData *monitor;
  struct PrefabSpawner__Fields fields;
};
struct PrefabProvider__Fields {
  struct MonoBehaviour__Fields _;
};
struct PrefabProvider {
  struct PrefabProvider__Class *klass;
  struct MonitorData *monitor;
  struct PrefabProvider__Fields fields;
};
struct DamageBasedPrefabProvider__Fields {
  struct PrefabProvider__Fields _;
  struct List_1_DamageTypePrefabPair_ * Prefabs;
  struct PrefabProvider * Default;
};
struct DamageBasedPrefabProvider {
  struct DamageBasedPrefabProvider__Class *klass;
  struct MonitorData *monitor;
  struct DamageBasedPrefabProvider__Fields fields;
};
struct __declspec(align(8)) List_1_DamageTypePrefabPair___Fields {
  struct DamageTypePrefabPair__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DamageTypePrefabPair_ {
  struct List_1_DamageTypePrefabPair___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DamageTypePrefabPair___Fields fields;
};
struct __declspec(align(8)) DamageTypePrefabPair__Fields {
  enum DamageType__Enum DamageType;
  struct PrefabProvider * PrefabProvider;
};
struct DamageTypePrefabPair {
  struct DamageTypePrefabPair__Class *klass;
  struct MonitorData *monitor;
  struct DamageTypePrefabPair__Fields fields;
};
struct DamageTypePrefabPair__Array {
  struct DamageTypePrefabPair__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct DamageTypePrefabPair * vector[32];
};
struct IEnumerator_1_DamageTypePrefabPair_ {
  struct IEnumerator_1_DamageTypePrefabPair___Class *klass;
  struct MonitorData *monitor;
};
struct SeinChakramSpell_BalancingData__Fields {
  struct OriAttackBalancingData__Fields _;
  struct SerializedByteUberState * UpgradeLevel;
  struct SeinChakramSpell_BalancingData_ChakramSettings * ChakramSettingsLevel1;
  struct SeinChakramSpell_BalancingData_ChakramSettings * ChakramSettingsLevel2;
};
struct SeinChakramSpell_BalancingData {
  struct SeinChakramSpell_BalancingData__Class *klass;
  struct MonitorData *monitor;
  struct SeinChakramSpell_BalancingData__Fields fields;
};
struct __declspec(align(8)) SeinChakramSpell_BalancingData_ChakramSettings__Fields {
  bool CanSpin;
  float EnergyCost;
  struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Array * DamageSettings;
};
struct SeinChakramSpell_BalancingData_ChakramSettings {
  struct SeinChakramSpell_BalancingData_ChakramSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinChakramSpell_BalancingData_ChakramSettings__Fields fields;
};
struct __declspec(align(8)) SeinChakramSpell_BalancingData_ChakramDamageSettings__Fields {
  float Damage;
  enum DamageWeight__Enum DamageWeight;
};
struct SeinChakramSpell_BalancingData_ChakramDamageSettings {
  struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Fields fields;
};
struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Array {
  struct SeinChakramSpell_BalancingData_ChakramDamageSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinChakramSpell_BalancingData_ChakramDamageSettings * vector[32];
};
enum ChakramProjectile_ChakramState__Enum : int32_t {
  ChakramProjectile_ChakramState__Enum_None = 0,
  ChakramProjectile_ChakramState__Enum_Forward = 1,
  ChakramProjectile_ChakramState__Enum_Hold = 2,
  ChakramProjectile_ChakramState__Enum_Spin = 3,
  ChakramProjectile_ChakramState__Enum_Return = 4,
};
struct ChakramProjectile_ChakramState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ChakramProjectile_ChakramState__Enum value;
};
struct ChakramProjectile__Fields {
  struct Projectile__Fields _;
  struct GameObject * ChakramSpinEffect;
  struct GameObject * ChakramSpinParticles;
  struct Transform * ChakramParent;
  struct Transform * Chakram;
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
  struct AnimationCurve * VelocityOverDistanceCurve;
  struct AnimationCurve * ForwardRotationCurve;
  float HoldTime;
  struct AnimationCurve * HoldRotationCurve;
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
  struct Event_1 * SpinSoundEvent;
  struct Event_1 * ReturnSoundEvent;
  struct Action * OnDestroyed;
  struct Action * OnSpinStop;
  enum ChakramProjectile_ChakramState__Enum m_currentState;
  struct Collider * m_col;
  struct Vector2 m_previousPosition;
  float m_distanceTraveled;
  float m_timer;
  float m_actualHoldTime;
  struct EntityTargetting * m_currentTarget;
  struct Vector3 m_originalScale;
  bool m_spinHoldReleased;
  bool m_wallCollideReturn;
  bool m_spinned;
  struct SeinChakramSpell * m_seinChakramSpell;
  struct SoundHost * m_soundHost;
  struct Vector3 m_directionFromOri;
  struct Vector3 m_directionToOri;
  bool m_isInitialized;
  int32_t m_hitNumber;
  struct SeinChakramSpell_BalancingData_ChakramDamageSettings * m_currentDamageSettings;
};
struct ChakramProjectile {
  struct ChakramProjectile__Class *klass;
  struct MonitorData *monitor;
  struct ChakramProjectile__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinBlazeSpell___Fields {
  bool HasState;
  struct SeinBlazeSpell * State;
};
struct CharacterStateWrapper_1_SeinBlazeSpell_ {
  struct CharacterStateWrapper_1_SeinBlazeSpell___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinBlazeSpell___Fields fields;
};
enum SeinBlazeSpell_BlazeTypes__Enum : int32_t {
  SeinBlazeSpell_BlazeTypes__Enum_Invalid = -1,
  SeinBlazeSpell_BlazeTypes__Enum_Ground = 0,
  SeinBlazeSpell_BlazeTypes__Enum_Air = 1,
  SeinBlazeSpell_BlazeTypes__Enum_Count = 2,
};
struct SeinBlazeSpell_BlazeTypes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinBlazeSpell_BlazeTypes__Enum value;
};
struct SeinBlazeSpell__Fields {
  struct CharacterState__Fields _;
  struct SeinBlazeSpell_BalancingData * Balancing;
  struct MoonTimeline * BlazeReleaseTimelineGround;
  struct EventTriggerAnimator * BlazeReleaseTriggerGround;
  struct MoonTimeline * BlazeReleaseTimelineAir;
  struct EventTriggerAnimator * BlazeReleaseTriggerAir;
  struct MoonTimeline * BlazeFullChargeTimeline;
  struct MoonTimeline * BlazeFullTimeline;
  struct EventTriggerAnimator * BlazeFullReleaseTrigger;
  struct HorizontalPlatformMovementSettings_SpeedSet * GroundMovementSettings;
  struct HorizontalPlatformMovementSettings_SpeedSet * AirMovementSettings;
  float QuickBlazeRange;
  enum DamageWeight__Enum QuickBlazeWeight;
  enum DamageWeight__Enum FullBlazeWeight;
  struct GameObject * ChargeEffectPrefab;
  struct GlowChargeEffect * m_currentChargeEffect;
  bool m_hasReleasedBlaze;
  struct SeinBlazeSpell_BlazeSetupInfo__Array * m_blazeSetups;
  enum SeinBlazeSpell_BlazeTypes__Enum m_currentBlaze;
  struct SeinBlazeSpell_States * BlazeStates;
  struct StateMachine_2 * m_stateMachine;
};
struct SeinBlazeSpell {
  struct SeinBlazeSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinBlazeSpell__Fields fields;
};
struct SeinBlazeSpell_BalancingData__Fields {
  struct OriAttackBalancingData__Fields _;
  struct SerializedByteUberState * ChargeUpgradeLevel;
  struct SeinBlazeSpell_BalancingData_BlazeSettings * BlazeSettingsLevel1;
  struct SeinBlazeSpell_BalancingData_BlazeSettings * BlazeSettingsLevel2;
  struct SeinBlazeSpell_BalancingData_BlazeSettings * BlazeSettingsLevel3;
};
struct SeinBlazeSpell_BalancingData {
  struct SeinBlazeSpell_BalancingData__Class *klass;
  struct MonitorData *monitor;
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
  struct SeinBlazeSpell_BalancingData_BlazeSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinBlazeSpell_BalancingData_BlazeSettings__Fields fields;
};
struct __declspec(align(8)) SeinBlazeSpell_BlazeSetupInfo__Fields {
  struct MoonTimeline * ReleaseTimeline;
  struct EventTriggerAnimator * ReleaseTrigger;
};
struct SeinBlazeSpell_BlazeSetupInfo {
  struct SeinBlazeSpell_BlazeSetupInfo__Class *klass;
  struct MonitorData *monitor;
  struct SeinBlazeSpell_BlazeSetupInfo__Fields fields;
};
struct SeinBlazeSpell_BlazeSetupInfo__Array {
  struct SeinBlazeSpell_BlazeSetupInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinBlazeSpell_BlazeSetupInfo * vector[32];
};
struct __declspec(align(8)) SeinBlazeSpell_States__Fields {
  struct State_2 * BlazeReady;
  struct State_2 * BlazeQuick;
  struct State_2 * BlazeFullCharge;
  struct State_2 * BlazeFull;
};
struct SeinBlazeSpell_States {
  struct SeinBlazeSpell_States__Class *klass;
  struct MonitorData *monitor;
  struct SeinBlazeSpell_States__Fields fields;
};
struct SeinFireburstSpell__Fields {
  struct CharacterState__Fields _;
  struct ParticleSystem * FireParticles;
  float MinAimGroundAnimationAngle;
  float MaxAimGroundAnimationAngle;
  float MaxFallSpeed;
  float GravityMultiplier;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * MoveSpeed;
  struct SoundSource * LoopingSound;
  struct SoundProvider * BeginCastingSoundProvider;
  struct SoundProvider * EndCastingSoundProvider;
  float EnergyCostPerSecond;
  struct FloatAnimationParameter * AimAngle;
  struct MoonAnimation * Air;
  struct MoonAnimation * Idle;
  struct MoonAnimation * WalkBwd;
  struct MoonAnimation * WalkFwd;
  struct MoonAnimation * AirStart;
  struct MoonAnimation * GroundStart;
  float AirStartAttackPointNormalized;
  float GroundStartAttackPointNormalized;
  float m_delayTillNextHit;
  struct ParticleSystem_Particle__Array * m_particles;
  int32_t m_particleCount;
  bool m_particlesCasting;
  bool m_playingStartAnim;
  bool m_wasOnGround;
  bool m_spellActive;
  float m_flameAngle;
  float m_animationAimAngle;
};
struct SeinFireburstSpell {
  struct SeinFireburstSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinFireburstSpell__Fields fields;
};
struct SeinFirewhirlSpell__Fields {
  struct CharacterState__Fields _;
  struct GameObject * BeamPrefab;
  float DistanceBetweenBeams;
  float BeamsPerSecond;
  int32_t BeamCount;
  float HitsPerSecond;
  float DamageAmount;
  float EnergyCost;
  float CooldownDuration;
  float AirBeamSinkDistance;
  struct SoundProvider * StartCastingSound;
  float m_delayTillNextHit;
  float m_spellCoolDown;
  struct List_1_FirewhirlBeam_ * m_beams;
  struct List_1_UnityEngine_Rect_ * m_beamRectangles;
  struct Vector3 m_burstPosition;
  struct Vector3 m_direction;
  int32_t m_remainingBursts;
  float m_nextBurstRemainingTime;
  struct DamageOwner * m_damageOwner;
  bool m_lastBeamInAir;
};
struct SeinFirewhirlSpell {
  struct SeinFirewhirlSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinFirewhirlSpell__Fields fields;
};
struct __declspec(align(8)) List_1_FirewhirlBeam___Fields {
  struct FirewhirlBeam__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_FirewhirlBeam_ {
  struct List_1_FirewhirlBeam___Class *klass;
  struct MonitorData *monitor;
  struct List_1_FirewhirlBeam___Fields fields;
};
struct FirewhirlBeam__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Shape;
  struct Rect Bounds;
  float m_speed;
  float Gravity;
  bool InAir;
};
struct FirewhirlBeam {
  struct FirewhirlBeam__Class *klass;
  struct MonitorData *monitor;
  struct FirewhirlBeam__Fields fields;
};
struct FirewhirlBeam__Array {
  struct FirewhirlBeam__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FirewhirlBeam * vector[32];
};
struct IEnumerator_1_FirewhirlBeam_ {
  struct IEnumerator_1_FirewhirlBeam___Class *klass;
  struct MonitorData *monitor;
};
enum SeinLockOnSpell_State__Enum : int32_t {
  SeinLockOnSpell_State__Enum_Normal = 0,
  SeinLockOnSpell_State__Enum_Tagging = 1,
  SeinLockOnSpell_State__Enum_Firing = 2,
};
struct SeinLockOnSpell_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinLockOnSpell_State__Enum value;
};
struct SeinLockOnSpell__Fields {
  struct CharacterState__Fields _;
  struct GameObject * LockedOnMarker;
  struct GameObject * Projectile;
  float EnergyCost;
  float MinTagRange;
  float MaxTagRange;
  float MaxTags;
  float Damage;
  struct MoonAnimation * LockOnFromGround;
  float GroundRootMotionScale;
  struct MoonAnimation * LockOnFromAir;
  float AirRootMotionScale;
  struct SoundProvider * BeginTaggingSoundProvider;
  struct SoundProvider * EndTaggingSoundProvider;
  struct SoundProvider * NotEnoughEnergySoundProvider;
  struct Vector2 m_lastRootSpeed;
  struct Dictionary_2_IAttackable_LockOnTarget_ * m_lockOnTargets;
  struct Stack_1_LockOnTarget_ * m_targetsToShoot;
  float m_shotDelayRemaining;
  float DelayBetweenShots;
  struct ActiveAnimationHandle m_activeAnimation;
  enum SeinLockOnSpell_State__Enum m_currentState;
};
struct SeinLockOnSpell {
  struct SeinLockOnSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinLockOnSpell__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_IAttackable_LockOnTarget___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_IAttackable_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_IAttackable_LockOnTarget_ {
  struct Dictionary_2_IAttackable_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_IAttackable_LockOnTarget___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget_ {
  int32_t hashCode;
  int32_t next;
  struct IAttackable * key;
  struct LockOnTarget * value;
};
struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Array {
  struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_IAttackable_LockOnTarget_ vector[32];
};
struct LockOnTarget__Fields {
  struct MonoBehaviour__Fields _;
  struct IAttackable * Target;
  int32_t NumberOfLocks;
};
struct LockOnTarget {
  struct LockOnTarget__Class *klass;
  struct MonitorData *monitor;
  struct LockOnTarget__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget___Fields {
  struct Dictionary_2_IAttackable_LockOnTarget_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_IAttackable_LockOnTarget___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget___Fields {
  struct Dictionary_2_IAttackable_LockOnTarget_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_IAttackable_LockOnTarget___Fields fields;
};
struct LockOnTarget__Array {
  struct LockOnTarget__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct LockOnTarget * vector[32];
};
struct IEnumerator_1_LockOnTarget_ {
  struct IEnumerator_1_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_IAttackable_ {
  struct ICollection_1_IAttackable___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_LockOnTarget_ {
  struct ICollection_1_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_IAttackable_LockOnTarget_ {
  struct IAttackable * key;
  struct LockOnTarget * value;
};
struct KeyValuePair_2_IAttackable_LockOnTarget___Boxed {
  struct KeyValuePair_2_IAttackable_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_IAttackable_LockOnTarget_ fields;
};
struct KeyValuePair_2_IAttackable_LockOnTarget___Array {
  struct KeyValuePair_2_IAttackable_LockOnTarget___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_IAttackable_LockOnTarget_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_IAttackable_LockOnTarget_ {
  struct IEnumerator_1_KeyValuePair_2_IAttackable_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_LockOnTarget_ {
  struct IEnumerable_1_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Stack_1_LockOnTarget___Fields {
  struct LockOnTarget__Array * _array;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct Stack_1_LockOnTarget_ {
  struct Stack_1_LockOnTarget___Class *klass;
  struct MonitorData *monitor;
  struct Stack_1_LockOnTarget___Fields fields;
};
struct SeinTimeWarpSpell__Fields {
  struct CharacterState__Fields _;
};
struct SeinTimeWarpSpell {
  struct SeinTimeWarpSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinTimeWarpSpell__Fields fields;
};
struct SeinShieldSpell__Fields {
  struct CharacterState__Fields _;
  struct FloatAnimationParameter * AimAngle;
  struct MoonAnimation * Cast;
  struct MoonAnimation * Loop;
  struct GameObject * Shield;
  bool m_isCasting;
  float m_shieldAngle;
};
struct SeinShieldSpell {
  struct SeinShieldSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinShieldSpell__Fields fields;
};
struct SeinEnergyWallSpell__Fields {
  struct CharacterState__Fields _;
};
struct SeinEnergyWallSpell {
  struct SeinEnergyWallSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinEnergyWallSpell__Fields fields;
};
struct SeinTrapSpell__Fields {
  struct CharacterState__Fields _;
  struct GameObject * Trap;
  float EnergyCost;
  struct SoundProvider * NotEnoughEnergySoundProvider;
  struct Trap * m_currentTrap;
};
struct SeinTrapSpell {
  struct SeinTrapSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinTrapSpell__Fields fields;
};
struct Trap__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * Explosion;
  float Timeout;
  float Range;
  float DamageDuration;
  enum DamageType__Enum DamageType;
  float DamagePerSecond;
  struct AnimationCurve * TrapTimeoutBlinkingCurve;
  bool m_triggered;
  float m_currentTime;
  float m_trapTime;
  struct Renderer * m_renderer;
  struct IAttackable * m_trappedTarget;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct Trap {
  struct Trap__Class *klass;
  struct MonitorData *monitor;
  struct Trap__Fields fields;
};
struct SeinWarpSpell__Fields {
  struct CharacterState__Fields _;
};
struct SeinWarpSpell {
  struct SeinWarpSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinWarpSpell__Fields fields;
};
struct SeinLightSpell__Fields {
  struct CharacterState__Fields _;
};
struct SeinLightSpell {
  struct SeinLightSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinLightSpell__Fields fields;
};
struct SeinMindControlSpell__Fields {
  struct CharacterState__Fields _;
};
struct SeinMindControlSpell {
  struct SeinMindControlSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinMindControlSpell__Fields fields;
};
struct SeinMirageSpell__Fields {
  struct CharacterState__Fields _;
};
struct SeinMirageSpell {
  struct SeinMirageSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinMirageSpell__Fields fields;
};
struct SeinLightSpearSpell__Fields {
  struct CharacterState__Fields _;
  struct GameObject * Spear;
  float SpawnDistance;
  float CoolDown;
  float EnergyCost;
  struct GameObject * ShootEffect;
  struct SoundProvider * ShootSound;
  float m_coolDownTimeRemaing;
};
struct SeinLightSpearSpell {
  struct SeinLightSpearSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinLightSpearSpell__Fields fields;
};
enum SeinSpiritShardsSpell_State__Enum : int32_t {
  SeinSpiritShardsSpell_State__Enum_Normal = 0,
  SeinSpiritShardsSpell_State__Enum_Charging = 1,
  SeinSpiritShardsSpell_State__Enum_Charged = 2,
};
struct SeinSpiritShardsSpell_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinSpiritShardsSpell_State__Enum value;
};
struct SeinSpiritShardsSpell__Fields {
  struct CharacterState__Fields _;
  struct GameObject * Shard;
  struct SoundProvider * ShotSound;
  struct SoundProvider * NotEnoughEnergySound;
  struct SoundProvider * ChargingSound;
  struct SoundPlayer * m_lastChargingSound;
  float EnergyCost;
  float ShardLifeTime;
  float ShardDamage;
  float ShardScale;
  float ChargedEnergyCost;
  float ChargedShardLifeTime;
  float ChargedShardDamage;
  float ChargedShardScale;
  float Speed;
  int32_t Count;
  float ChargeAfter;
  float ChargeDuration;
  struct AnimationMontage * GroundMontage;
  struct AnimationMontage * AirMontage;
  enum SeinSpiritShardsSpell_State__Enum m_state;
  float m_time;
  bool m_allowShot;
  bool m_chargedShot;
  struct AnimationMontage * m_currentMontage;
  struct GameObject * ChargingEffectToSpawn;
  struct GameObject * ChargedEffectToSpawn;
  struct GameObject * m_chargingEffect;
  struct GameObject * m_chargedEffect;
};
struct SeinSpiritShardsSpell {
  struct SeinSpiritShardsSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritShardsSpell__Fields fields;
};
struct AnimationMontage__Fields {
  struct BaseAnimator__Fields _;
  struct MoonAnimation * Animation;
  struct GameObject * PreviewRig;
  struct String * ParentedMontageSocketPath;
  struct GameObject * EventHandlerObject;
  int32_t AnimationPriority;
  struct List_1_Moon_AnimationMontage_Entry_ * m_entries;
  struct MoonAnimator * m_currentTarget;
  struct ActiveAnimationHandle m_currentAnimationState;
  struct Action * m_currentStopPlayingAction;
  bool m_animationPlaying;
  float m_currentTime;
  struct List_1_SoundPlayer_ * m_activeSoundPlayers;
  struct Dictionary_2_System_String_Moon_MoonAnimator_ * m_subMontagesByName;
  struct Dictionary_2_System_String_List_1_Moon_IAnimatedValueListener_ * m_animatedValueListeners;
  struct Dictionary_2_System_String_IMontageEventProvider_ * m_eventProviders;
  struct List_1_Moon_AnimationMontage_TimelineEventSubscription_ * m_eventSubscriptions;
  bool m_isParented;
  struct Transform * m_initialTargetParent;
  struct Vector3 m_initialTargetScale;
  struct Vector3 m_initialTargetPosition;
  struct Quaternion m_initialTargetRotation;
};
struct AnimationMontage {
  struct AnimationMontage__Class *klass;
  struct MonitorData *monitor;
  struct AnimationMontage__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_AnimationMontage_Entry___Fields {
  struct AnimationMontage_Entry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_AnimationMontage_Entry_ {
  struct List_1_Moon_AnimationMontage_Entry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_AnimationMontage_Entry___Fields fields;
};
struct __declspec(align(8)) AnimationMontage_Entry__Fields {
  bool IsPlaying;
  float m_startTime;
  struct BaseAnimator * m_animator;
};}