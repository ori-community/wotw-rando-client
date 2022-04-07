namespace app {
struct SeinInteraction {
  struct SeinInteraction__Class *klass;
  struct MonitorData *monitor;
  struct SeinInteraction__Fields fields;
};
enum SeinInteraction_KeystoneThrowMode__Enum : int32_t {
  SeinInteraction_KeystoneThrowMode__Enum_Ground = 0,
  SeinInteraction_KeystoneThrowMode__Enum_Air = 1,
};
struct SeinInteraction_KeystoneThrowMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinInteraction_KeystoneThrowMode__Enum value;
};
struct __declspec(align(8)) SeinInteraction_ThrowKeystoneSettings__Fields {
  struct MoonTimeline * Timeline;
  struct EventTriggerAnimator * ThrowEvent;
  struct EventTriggerAnimator * CancellableWindow;
  enum SeinInteraction_KeystoneThrowMode__Enum ThrowMode;
};
struct SeinInteraction_ThrowKeystoneSettings {
  struct SeinInteraction_ThrowKeystoneSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinInteraction_ThrowKeystoneSettings__Fields fields;
};
struct SeinInteraction_ThrowKeystoneSettings__Array {
  struct SeinInteraction_ThrowKeystoneSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinInteraction_ThrowKeystoneSettings * vector[32];
};
struct __declspec(align(8)) List_1_SeinInteraction_ThrownKeystone___Fields {
  struct SeinInteraction_ThrownKeystone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SeinInteraction_ThrownKeystone_ {
  struct List_1_SeinInteraction_ThrownKeystone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SeinInteraction_ThrownKeystone___Fields fields;
};
struct __declspec(align(8)) SeinInteraction_ThrownKeystone__Fields {
  struct Vector3 KeystoneTarget;
  struct GameObject * Keystone;
  float KeystoneSpeed;
  struct Vector3 StartPosition;
  float m_value;
  struct AnimationCurve * TrajectoryX;
  struct AnimationCurve * TrajectoryY;
  float Multiplier;
  bool UseLeftHand;
};
struct SeinInteraction_ThrownKeystone {
  struct SeinInteraction_ThrownKeystone__Class *klass;
  struct MonitorData *monitor;
  struct SeinInteraction_ThrownKeystone__Fields fields;
};
struct SeinInteraction_ThrownKeystone__Array {
  struct SeinInteraction_ThrownKeystone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinInteraction_ThrownKeystone * vector[32];
};
struct IEnumerator_1_SeinInteraction_ThrownKeystone_ {
  struct IEnumerator_1_SeinInteraction_ThrownKeystone___Class *klass;
  struct MonitorData *monitor;
};
struct ICharacterInteractable {
  struct ICharacterInteractable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinCinematic___Fields {
  bool HasState;
  struct SeinCinematic * State;
};
struct CharacterStateWrapper_1_SeinCinematic_ {
  struct CharacterStateWrapper_1_SeinCinematic___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinCinematic___Fields fields;
};
enum SeinCinematic_MoveOriToPositionMode__Enum : int32_t {
  SeinCinematic_MoveOriToPositionMode__Enum_Walk = 0,
  SeinCinematic_MoveOriToPositionMode__Enum_Run = 1,
};
struct SeinCinematic_MoveOriToPositionMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinCinematic_MoveOriToPositionMode__Enum value;
};
struct SeinCinematic__Fields {
  struct CharacterState__Fields _;
  struct BlendAnimation * OriMoveToPositionAnimation;
  struct FloatAnimationParameter * SpeedParameter;
  struct ActiveAnimationHandle m_activeAnimation;
  bool m_isMovingOri;
  struct Vector2 m_pointToMove;
  struct Vector3 m_initPos;
  bool m_faceLeftOnFinish;
  float m_remainingTime;
  struct Action_1_Boolean_ * OnFinishMovingOri;
  enum SeinCinematic_MoveOriToPositionMode__Enum m_moveMode;
  float m_perspectiveAdjustmentWeight;
  bool m_usePerspectiveAdjustment;
  struct Vector3 m_initialPositionForOffsetCalculation;
  bool m_shouldUpdateInitialPositionOffset;
  struct AnimationCurve * m_curveX;
  struct AnimationCurve * m_curveY;
  struct AnimationCurve * m_curveZ;
  float m_gameplayToCinematicInterpolationDuration;
  float m_gameplayToCinematicInterpolationTimer;
  struct Vector3 m_initialPositionOffset;
  bool m_wasCarrying;
  float GroundOffset;
};
struct SeinCinematic {
  struct SeinCinematic__Class *klass;
  struct MonitorData *monitor;
  struct SeinCinematic__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinCinematicToGameplay___Fields {
  bool HasState;
  struct SeinCinematicToGameplay * State;
};
struct CharacterStateWrapper_1_SeinCinematicToGameplay_ {
  struct CharacterStateWrapper_1_SeinCinematicToGameplay___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinCinematicToGameplay___Fields fields;
};
struct SeinCinematicToGameplay__Fields {
  struct CharacterState__Fields _;
  struct Func_1_Boolean_ * m_shouldKeepPlayingDelegate;
};
struct SeinCinematicToGameplay {
  struct SeinCinematicToGameplay__Class *klass;
  struct MonitorData *monitor;
  struct SeinCinematicToGameplay__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinSpiritFlameTargetting___Fields {
  bool HasState;
  struct SeinSpiritFlameTargetting * State;
};
struct CharacterStateWrapper_1_SeinSpiritFlameTargetting_ {
  struct CharacterStateWrapper_1_SeinSpiritFlameTargetting___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinSpiritFlameTargetting___Fields fields;
};
struct SeinSpiritFlameTargetting__Fields {
  struct CharacterState__Fields _;
  struct List_1_ISpiritFlameAttackable_ * m_lastClosestAttackables;
  struct List_1_ISpiritFlameAttackable_ * ClosestAttackables;
  float _Range_k__BackingField;
  float _MaxNumberOfTargets_k__BackingField;
  struct List_1_ISpiritFlameAttackable_ * m_remainingSpiritFlameAttackables;
};
struct SeinSpiritFlameTargetting {
  struct SeinSpiritFlameTargetting__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritFlameTargetting__Fields fields;
};
struct __declspec(align(8)) List_1_ISpiritFlameAttackable___Fields {
  struct ISpiritFlameAttackable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ISpiritFlameAttackable_ {
  struct List_1_ISpiritFlameAttackable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ISpiritFlameAttackable___Fields fields;
};
struct ISpiritFlameAttackable {
  struct ISpiritFlameAttackable__Class *klass;
  struct MonitorData *monitor;
};
struct ISpiritFlameAttackable__Array {
  struct ISpiritFlameAttackable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISpiritFlameAttackable * vector[32];
};
struct IEnumerator_1_ISpiritFlameAttackable_ {
  struct IEnumerator_1_ISpiritFlameAttackable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinChargeFlameAbility___Fields {
  bool HasState;
  struct SeinChargeFlameAbility * State;
};
struct CharacterStateWrapper_1_SeinChargeFlameAbility_ {
  struct CharacterStateWrapper_1_SeinChargeFlameAbility___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinChargeFlameAbility___Fields fields;
};
struct SeinChargeFlameAbility__Fields {
  struct CharacterState__Fields _;
  struct SoundSource * ChargingSoundLevelA;
  struct SoundSource * ChargingSoundLevelB;
  struct SoundSource * ChargingSoundLevelC;
  struct AchievementAsset * KillEnemiesSimultaneouslyAchievement;
  struct SoundProvider * NotEnoughEnergySound;
  struct SeinChargeFlameAbility_ChargeFlameDefinitions * ChargeFlameSettings;
  struct SeinChargeFlameAbility_States * State;
  struct StateMachine_2 * Logic;
  struct GameObject * m_chargeFlameChargeEffect;
  float EnergyCost;
};
struct SeinChargeFlameAbility {
  struct SeinChargeFlameAbility__Class *klass;
  struct MonitorData *monitor;
  struct SeinChargeFlameAbility__Fields fields;
};
struct __declspec(align(8)) List_1_LegacyAnimator___Fields {
  struct LegacyAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_LegacyAnimator_ {
  struct List_1_LegacyAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_LegacyAnimator___Fields fields;
};
struct IEnumerator_1_LegacyAnimator_ {
  struct IEnumerator_1_LegacyAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct AchievementAsset__Fields {
  struct ScriptableObject__Fields _;
  struct MessageProvider * NameMessageProvider;
  struct MessageProvider * DescriptionMessageProvider;
  struct MessageProvider * PostDescriptionMessageProvider;
  struct String * m_name;
  struct Texture * m_icon;
  struct Texture * m_lockedIcon;
  struct String * m_playfabIdentifier;
  bool m_hidden;
  int32_t Progress;
};
struct AchievementAsset {
  struct AchievementAsset__Class *klass;
  struct MonitorData *monitor;
  struct AchievementAsset__Fields fields;
};
struct __declspec(align(8)) SeinChargeFlameAbility_ChargeFlameDefinitions__Fields {
  float ChargeDuration;
  struct GameObject * ChargeFlameBurstA;
  struct GameObject * ChargeFlameBurstB;
  struct GameObject * ChargeFlameBurstC;
  struct GameObject * ChargeFlameChargeEffectPrefab;
};
struct SeinChargeFlameAbility_ChargeFlameDefinitions {
  struct SeinChargeFlameAbility_ChargeFlameDefinitions__Class *klass;
  struct MonitorData *monitor;
  struct SeinChargeFlameAbility_ChargeFlameDefinitions__Fields fields;
};
struct __declspec(align(8)) SeinChargeFlameAbility_States__Fields {
  struct State_2 * Start;
  struct State_2 * Precharging;
  struct State_2 * Charging;
  struct State_2 * Charged;
};
struct SeinChargeFlameAbility_States {
  struct SeinChargeFlameAbility_States__Class *klass;
  struct MonitorData *monitor;
  struct SeinChargeFlameAbility_States__Fields fields;
};
struct __declspec(align(8)) State_2__Fields {
  int32_t m_id;
  struct Action * UpdateStateEvent;
  struct Action * OnEnterEvent;
  struct Action * OnExitEvent;
};
struct State_2 {
  struct State_2__Class *klass;
  struct MonitorData *monitor;
  struct State_2__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinIceSpiritFlame___Fields {
  bool HasState;
  struct SeinIceSpiritFlame * State;
};
struct CharacterStateWrapper_1_SeinIceSpiritFlame_ {
  struct CharacterStateWrapper_1_SeinIceSpiritFlame___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinIceSpiritFlame___Fields fields;
};
struct SeinIceSpiritFlame__Fields {
  struct CharacterState__Fields _;
  struct SpiritFlame * IceSpiritFlame;
  float SpiritFlameRange;
};
struct SeinIceSpiritFlame {
  struct SeinIceSpiritFlame__Class *klass;
  struct MonitorData *monitor;
  struct SeinIceSpiritFlame__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinDashAttack___Fields {
  bool HasState;
  struct SeinDashAttack * State;
};
struct CharacterStateWrapper_1_SeinDashAttack_ {
  struct CharacterStateWrapper_1_SeinDashAttack___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinDashAttack___Fields fields;
};
enum SeinDashAttack_State__Enum : int32_t {
  SeinDashAttack_State__Enum_Normal = 0,
  SeinDashAttack_State__Enum_Dashing = 1,
  SeinDashAttack_State__Enum_ChargeDashing = 2,
};
struct SeinDashAttack_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinDashAttack_State__Enum value;
};
struct SeinDashAttack__Fields {
  struct CharacterState__Fields _;
  struct AnimationCurve * DashSpeedOverTime;
  struct AnimationCurve * ChargeDashSpeedOverTime;
  float DashTime;
  float ChargeDashTime;
  float ChargeTime;
  struct SoundProvider * ChargeSound;
  struct SoundProvider * DoneChargingSound;
  struct SoundSource * ChargedSound;
  struct SoundProvider * UnChargeSound;
  struct SoundProvider * DashSound;
  struct SoundProvider * ChargeDashSound;
  struct SoundProvider * RainbowDashSound;
  struct SoundProvider * DashIntoWallSound;
  struct GameObject * ExplosionEffect;
  enum SeinDashAttack_State__Enum CurrentState;
  float DashDownwardSpeed;
  float OffGroundSpeed;
  int32_t Damage;
  float EnergyCost;
  struct SoundProvider * NotEnoughEnergySound;
  struct MoonAnimation * Dash;
  struct MoonAnimation * ChargeDash;
  struct MoonAnimation * GlideDash;
  struct MoonAnimation * DashIntoWall;
  struct GameObject * DashStartEffect;
  struct GameObject * DashFollowEffect;
  struct GameObject * DashFollowRainbowEffect;
  bool m_faceLeft;
  float m_stateCurrentTime;
  struct HashSet_1_IAttackable_ * m_attackablesIgnore;
  bool m_stopAnimation;
  float m_lastPressTime;
  float m_lastDashTime;
  bool m_isOnGround;
  bool m_hasDashed;
  float ChargeDashTargetMaxDistance;
  float m_timeOfLastExplosionEffect;
  float m_timeWhenDashJumpHappened;
  bool m_allowNoDecelerationForThisDash;
  struct IAttackable * m_chargeDashAttackTarget;
  bool m_hasHitAttackable;
  bool m_chargeJumpWasReleased;
  struct IChargeDashAttackable * m_lastTarget;
  float SpriteRotation;
  struct Vector3 m_chargeDashDirection;
  bool m_chargeDashAtTarget;
  struct Vector3 m_chargeDashAtTargetPosition;
};
struct SeinDashAttack {
  struct SeinDashAttack__Class *klass;
  struct MonitorData *monitor;
  struct SeinDashAttack__Fields fields;
};
struct IChargeDashAttackable {
  struct IChargeDashAttackable__Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinGrenadeAttack___Fields {
  bool HasState;
  struct SeinGrenadeAttack * State;
};
struct CharacterStateWrapper_1_SeinGrenadeAttack_ {
  struct CharacterStateWrapper_1_SeinGrenadeAttack___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinGrenadeAttack___Fields fields;
};
enum SeinGrenadeAttack_Preset__Enum : int32_t {
  SeinGrenadeAttack_Preset__Enum_None = 0,
  SeinGrenadeAttack_Preset__Enum_M28 = 1,
  SeinGrenadeAttack_Preset__Enum_AnderSuggestion = 2,
};
struct SeinGrenadeAttack_Preset__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinGrenadeAttack_Preset__Enum value;
};
struct SeinGrenadeAttack__Fields {
  struct CharacterState__Fields _;
  enum SeinGrenadeAttack_Preset__Enum PresetMode;
  struct SeinGrenadeAttack_BalancingData * Balancing;
  struct UpgradableMultiplier * Upgradable;
  struct GameObject * Grenade;
  struct GameObject * GrenadeCharged;
  struct GameObject * GrenadeFractured;
  struct GameObject * GrenadeAiming;
  struct GameObject * GrenadeFailEffect;
  struct GameObject * GrenadeFractureEffect;
  struct GameObject * GrenadeBurnEffect;
  struct GameObject * ChargedHandGrenade;
  struct GameObject * m_grenadeAiming;
  struct StartLoopEndEffect * m_chargedHandGrenadeEffect;
  struct SeinGrenadeTrajectory * Trajectory;
  float TrajectorySmoothSpeed;
  float AirMovementMultiplier;
  float GroundDeceleration;
  float AirDeceleration;
  int32_t MaxSpamGrenades;
  float ThrowCooldown;
  float ProjectileSpawnDelay;
  float SafeThrowCheckDistance;
  float InitialAimStrength;
  float MaxAimStrength;
  float MaxAimStrengthTime;
  float GrenadeGravity;
  float QuickThrowAllowedPressTime;
  struct Vector2 QuickThrowAllowedAngleThresoldGround;
  struct Vector2 QuickThrowAllowedAngleThresoldAir;
  struct AnimationCurve * AutoAimAirTime;
  bool m_autoAimAllowed;
  bool m_explodeWithSecondButtonPress;
  bool ExplodeFracturedGrenadesWithSecondButtonPress;
  bool m_forceExplodeGrenadeOnCollision;
  float DelayBeforeCanManuallyExplode;
  bool AffectedByScatterShot;
  struct FloatAnimationParameter * AimAngle;
  struct MoonAnimation * Aiming;
  struct MoonAnimation * AimingTurn;
  struct SeinGrenadeAttack_ThrowInfo * Throw;
  struct MoonAnimation * WallAiming;
  struct SeinGrenadeAttack_ThrowInfo * WallThrow;
  struct MoonAnimation * AirAiming;
  struct SeinGrenadeAttack_ThrowInfo * AirThrow;
  struct MoonAnimation__Array * NotEnoughEnergyThrow;
  struct MoonAnimation__Array * NotEnoughEnergyWallThrow;
  float AimBlendAngularSpeed;
  struct SoundProvider * NotEnoughEnergySound;
  struct SoundProvider * TurnAroundAimingSound;
  struct SoundProvider * ThrowGrenadeSound;
  struct SoundProvider * StopAimingSound;
  struct SoundProvider * StartAimingSound;
  struct SoundSource * AimingSound;
  float m_lockPressingInputTime;
  bool m_isAiming;
  float m_aimDuration;
  bool m_quickThrowAssistAllowed;
  bool m_wasGroundedAfterAirAiming;
  float m_timeTillProjectileSpawn;
  struct Vector2 m_projectileSpawnVelocity;
  struct Vector2 m_aimDir;
  float m_aimStrength;
  struct Vector2 m_aimDirSmoothed;
  struct List_1_IGreanade_ * m_grenades;
  float m_animationAimAngle;
  bool m_lastAimWasOnWall;
  struct SeinGrenadeAttack_ThrowInfo * m_currentThrow;
  float m_lockAimAnimationRemainingTime;
  bool m_faceLeft;
  struct Input_InputButtonProcessor * m_button;
  float MaxAimWallAnimationAngle;
  float MinAimWallAnimationAngle;
  float MaxAimGroundAnimationAngle;
  float MinAimGroundAnimationAngle;
  float m_spentEnergy;
  bool m_inputPressed;
  struct IAttackable * m_autoTarget;
  struct SeinGrenadeAttack_AutoAimSettings * AutoAim;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct SeinGrenadeAttack {
  struct SeinGrenadeAttack__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrenadeAttack__Fields fields;
};
struct SeinGrenadeAttack_BalancingData__Fields {
  struct OriAttackBalancingData__Fields _;
  float GrenadeDamage;
  float ChargedGrenadeDamage;
  float EnergyCost;
  float FireDamage;
  float FireDamageInterval;
  float FireDamageDuration;
};
struct SeinGrenadeAttack_BalancingData {
  struct SeinGrenadeAttack_BalancingData__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrenadeAttack_BalancingData__Fields fields;
};
enum CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum : int32_t {
  CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_Sword = 0,
  CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_Hammer = 1,
  CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_Bow = 2,
  CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_Spear = 3,
  CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_Grenade = 4,
  CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_Chakram = 5,
  CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum_Missiles = 6,
};
struct CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum value;
};
struct __declspec(align(8)) UpgradableMultiplier__Fields {
  struct SerializedByteUberState * Level;
  enum CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum Type;
  struct CombinedUpgradeEffectiveness * Effectiveness;
};
struct UpgradableMultiplier {
  struct UpgradableMultiplier__Class *klass;
  struct MonitorData *monitor;
  struct UpgradableMultiplier__Fields fields;
};
struct CombinedUpgradeEffectiveness__Fields {
  struct ScriptableObject__Fields _;
  struct CombinedUpgradeEffectiveness_UpgradableAbility__Array * Abilities;
};
struct CombinedUpgradeEffectiveness {
  struct CombinedUpgradeEffectiveness__Class *klass;
  struct MonitorData *monitor;
  struct CombinedUpgradeEffectiveness__Fields fields;
};
struct __declspec(align(8)) CombinedUpgradeEffectiveness_UpgradableAbility__Fields {
  enum CombinedUpgradeEffectiveness_UpgradableAbilityType__Enum Type;
  struct Single__Array * Effectiveness;
};
struct CombinedUpgradeEffectiveness_UpgradableAbility {
  struct CombinedUpgradeEffectiveness_UpgradableAbility__Class *klass;
  struct MonitorData *monitor;
  struct CombinedUpgradeEffectiveness_UpgradableAbility__Fields fields;
};
struct CombinedUpgradeEffectiveness_UpgradableAbility__Array {
  struct CombinedUpgradeEffectiveness_UpgradableAbility__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CombinedUpgradeEffectiveness_UpgradableAbility * vector[32];
};
enum StartLoopEndEffect_State__Enum : int32_t {
  StartLoopEndEffect_State__Enum_Invalid = 0,
  StartLoopEndEffect_State__Enum_Start = 1,
  StartLoopEndEffect_State__Enum_Loop = 2,
  StartLoopEndEffect_State__Enum_End = 3,
  StartLoopEndEffect_State__Enum_Cancel = 4,
};
struct StartLoopEndEffect_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StartLoopEndEffect_State__Enum value;
};
struct StartLoopEndEffect__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimeline * StartTimeline;
  struct MoonTimeline * LoopTimeline;
  struct MoonTimeline * EndTimeline;
  struct MoonTimeline * CancelTimeline;
  enum StartLoopEndEffect_State__Enum m_currentState;
  bool m_shouldCancel;
  bool m_shouldEnd;
};
struct StartLoopEndEffect {
  struct StartLoopEndEffect__Class *klass;
  struct MonitorData *monitor;
  struct StartLoopEndEffect__Fields fields;
};
struct __declspec(align(8)) SeinGrenadeAttack_ThrowInfo__Fields {
  struct MoonTimeline * Timeline;
  struct EventTriggerAnimator * MovementRestrictedWindow;
};
struct SeinGrenadeAttack_ThrowInfo {
  struct SeinGrenadeAttack_ThrowInfo__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrenadeAttack_ThrowInfo__Fields fields;
};
struct __declspec(align(8)) List_1_IGreanade___Fields {
  struct IGreanade__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_IGreanade_ {
  struct List_1_IGreanade___Class *klass;
  struct MonitorData *monitor;
  struct List_1_IGreanade___Fields fields;
};
struct IGreanade {
  struct IGreanade__Class *klass;
  struct MonitorData *monitor;
};
struct IGreanade__Array {
  struct IGreanade__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IGreanade * vector[32];
};
struct IEnumerator_1_IGreanade_ {
  struct IEnumerator_1_IGreanade___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Input_InputButtonProcessor__Fields {
  bool WasPressed;
  bool IsPressed;
  bool Used;
  int32_t _ForcePressedFrames_k__BackingField;
};
struct Input_InputButtonProcessor {
  struct Input_InputButtonProcessor__Class *klass;
  struct MonitorData *monitor;
  struct Input_InputButtonProcessor__Fields fields;
};
struct __declspec(align(8)) SeinGrenadeAttack_AutoAimSettings__Fields {
  float MaxDistance;
  float MinDistance;
};
struct SeinGrenadeAttack_AutoAimSettings {
  struct SeinGrenadeAttack_AutoAimSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinGrenadeAttack_AutoAimSettings__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinTeleportSpell___Fields {
  bool HasState;
  struct SeinTeleportSpell * State;
};
struct CharacterStateWrapper_1_SeinTeleportSpell_ {
  struct CharacterStateWrapper_1_SeinTeleportSpell___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinTeleportSpell___Fields fields;
};
struct SeinTeleportSpell__Fields {
  struct SeinGrenadeAttack__Fields _;
  struct Action * OnBeforeOriTeleport;
  struct Action * OnAfterOriTeleport;
};
struct SeinTeleportSpell {
  struct SeinTeleportSpell__Class *klass;
  struct MonitorData *monitor;
  struct SeinTeleportSpell__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinBounceAbility___Fields {
  bool HasState;
  struct SeinBounceAbility * State;
};
struct CharacterStateWrapper_1_SeinBounceAbility_ {
  struct CharacterStateWrapper_1_SeinBounceAbility___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinBounceAbility___Fields fields;
};
struct SeinBounceAbility__Fields {
  struct CharacterState__Fields _;
  struct MoonAnimation * Jump;
  struct BaseAnimator * AppearAnimator;
  float m_fallTime;
};
struct SeinBounceAbility {
  struct SeinBounceAbility__Class *klass;
  struct MonitorData *monitor;
  struct SeinBounceAbility__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinSpiritLeashAbility___Fields {
  bool HasState;
  struct SeinSpiritLeashAbility * State;
};
struct CharacterStateWrapper_1_SeinSpiritLeashAbility_ {
  struct CharacterStateWrapper_1_SeinSpiritLeashAbility___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinSpiritLeashAbility___Fields fields;
};
enum SeinSpiritLeashAbility_State__Enum : int32_t {
  SeinSpiritLeashAbility_State__Enum_Idle = 0,
  SeinSpiritLeashAbility_State__Enum_Ready = 1,
  SeinSpiritLeashAbility_State__Enum_QuickAttack = 2,
  SeinSpiritLeashAbility_State__Enum_HoldReleaseAttack = 3,
  SeinSpiritLeashAbility_State__Enum_HoldAttack = 4,
  SeinSpiritLeashAbility_State__Enum_Hook = 5,
  SeinSpiritLeashAbility_State__Enum_HookPull = 6,
  SeinSpiritLeashAbility_State__Enum_Hooked = 7,
  SeinSpiritLeashAbility_State__Enum_Fling = 8,
};
struct SeinSpiritLeashAbility_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinSpiritLeashAbility_State__Enum value;
};
struct SeinSpiritLeashAbility_LeashableInfo {
  struct GameObject * GameObject;
  struct Vector3 AttackableRelativePosition;
  struct Vector3 SurfaceWorldPos;
  struct ISpiritLeashAttackable * SpiritLeashAttackable;
  struct IAttackable * Attackable;
  struct GrabbableSurface * Surface;
};
struct SeinSpiritLeashAbility_LeashableInfo__Boxed {
  struct SeinSpiritLeashAbility_LeashableInfo__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritLeashAbility_LeashableInfo fields;
};
struct SeinSpiritLeashAbility__Fields {
  struct CharacterState__Fields _;
  float SpiritLeashPullSpeed;
  float SpiritLeashMaxPullSpeed;
  float SpiritLeashHookedSpeed;
  float SpiritLeashRange;
  float SpiritLeashRangeCurrentTarget;
  float DurationToKeepTargetWhileFacingAway;
  float SustainedTargetAdditionalCost;
  float HoldReleaseAttackDuration;
  float HoldReleaseAttackEndDistance;
  float HoldAttackDuration;
  float DistanceFromTarget;
  float DistanceFromOri;
  float ReleaseDistanceForGrabbableSurface;
  float PullJumpSpeedY;
  float PullMoveMaxSpeedX;
  float PullMoveSpeedXDeceleration;
  float HookLeashEffectDelay;
  float InterruptSpeedTransfer;
  struct Vector2 HookJumpStrength;
  struct GameObject * LeashMarkPrefab;
  struct Transform * m_leashMarkPositionTransform;
  struct Vector3 m_lastMarkPosition;
  float TimeTillPullCheck;
  float MinDistanceToFlingTarget;
  float SurfaceTargetSmoothingDelay;
  struct Event_1 * EndGrabSoundEvent;
  struct CapsuleCollider * m_oriCollider;
  struct LeashMarkEffect * m_leashMark;
  float m_maxSlideAlongCeilingTimer;
  int32_t TestEffectCount;
  struct Vector3 m_initialDirection;
  struct Vector3 m_predictedTarget;
  float TargetPredictionDistance;
  struct List_1_SpiritLeashEffectPoseAnimator_ * m_spiritLeashEffect;
  bool m_wasGrabbing;
  bool m_wasHooking;
  enum SeinSpiritLeashAbility_State__Enum m_currentState;
  struct PlatformMovement * m_platformMovement;
  struct SeinSpiritLeashAbility_LeashableInfo m_targetLeash;
  struct SeinSpiritLeashAbility_LeashableInfo m_activeLeash;
  struct Vector3 m_slingshotTargetPosition;
  struct Vector3 m_quickAttackTargetPosition;
  int32_t m_enemyLeashesBeforeTouchingGround;
  struct ActiveAnimationHandle m_throwActiveAnimation;
  float m_currentStateTime;
  float m_floatingOnAirTimer;
  bool isHooked;
  bool m_startedOnGround;
  struct ActiveAnimationHandle m_pullActiveAnimation;
  struct ActiveAnimationHandle m_grabSurfaceActiveAnimation;
  bool m_isHookedIdling;
  float FlingAnimationDisallowTurnTime;
  struct ActiveAnimationHandle m_flingActiveAnimation;
  float m_genericJumpFlipTransitionRemainingTime;
  struct ActiveAnimationHandle m_hookJumpActiveAnimation;
  float InputSustainDuration;
  float m_sustainedInputRemainingTime;
  struct Vector2 m_sustainedInput;
  struct SoundProvider * leashThrowSound;
  struct SoundProvider * noLeashAvailableSound;
  struct SoundProvider * pullSound;
  struct SoundProvider * pulledSound;
  struct SeinBashVersionAsset * BashVersionAsset;
  struct LayerMask stopMask;
  struct LayerMask HookDetectionBlockerMask;
  float MinThrowNormalizedTimeForQuickAttack;
  float TimeBeforeInterruptIsAllowed;
  float TimeBeforeJumpCancelIsAllowed;
  struct AnimationCurve * InterruptSpeedCurve;
  struct Vector2 MinInterruptSpeedMultiplier;
  float MinInterruptSpeedMaximum;
  struct Vector2 MaxInterruptSpeedMultiplier;
  float MaxInterruptSpeedMaximum;
  struct Vector2 HookFlingSpeedMaxMultiplier;
  float HookFlingSpeedMaximum;
  struct DamageType__Enum__Array * DamageThatWillInterruptLeash;
  float TargetReadySpeed;
  float MoveToReadySpeed;
  float LeashReadyDrag;
  struct Vector2 m_flingVelocity;
  bool m_spriteMirrorLock;
  struct Dictionary_2_UnityEngine_GameObject_GrabbableSurface_ * m_recentHitObjects;
  struct List_1_UnityEngine_GameObject_ * m_removeObjects;
  float FlingDashClampSpeed;
  float _MoveCooldownTimer_k__BackingField;
  bool _WasGroundedSinceLastExecution_k__BackingField;
  struct Vector3 m_lastSpeed;
  float m_timeSinceActivationButtonPressed;
  float MaxDelayOnLateActivation;
  float m_pullAnimationTime;
  bool m_hasAppliedSpeed;
  float m_remainingTrajectoryCorrectionY;
  float m_trajectoryCorrectionSpeed;
  float WheelProbeDistance;
  float m_hookTimer;
  int32_t m_lockCounter;
  bool isThrowing;
  bool SpiritLeashSpawned;
  float animationAimAngle;
  struct AnimationCurve * FrictionCurve;
  float m_remainingFrictionTime;
  float FrictionDuration;
  bool isGrabbing;
  float HookDirectionErrorAngle;
  float HookDirectionErrorAngleNoInput;
  float HookDirectionErrorAngleRetainTargetBonus;
  float FacingDirectionErrorAngle;
  struct ISpiritLeashAttackable * lastTargetSpiritLeashAttackable;
  struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ * m_markPerObject;
  struct GameObject * m_markedObject;
  struct List_1_UnityEngine_GameObject_ * m_markedObjectsToRemove;
  float DistanceCostMultiplier;
  float AngleCostMultiplier;
  float AngleCostNoInputMultiplier;
  float InputDirectionOffsetY;
  float NoInputDirectionOffsetY;
  struct GameObject * m_lastTargetObject;
  bool m_lastTargetSustained;
  float m_lastTargetTime;
  struct SeinSpiritLeashAbility_RayDependency__Array * m_rayDependencies;
  struct GrabbableSurface__Array * m_raySurfaces;
  struct Vector3__Array * m_rayHitPoints;
  struct Int32__Array * m_rayModeDebug;
  bool UseJobs;
  struct NativeArray_1_UnityEngine_RaycastHit_ m_raycastResults;
  struct NativeArray_1_UnityEngine_RaycastCommand_ m_raycastCommands;
  struct SpherecastCommand__Array * m_cmds;
  struct Boolean__Array * m_hitResults;
  bool m_hasCreatedNativeArrays;
  int32_t m_requestId;
  struct RaycastHit__Array * m_raycastHits;
  bool m_hasCreatedIDsAndHits;
  struct Guid _AttackableConsumerID_k__BackingField;
  float HookJumpGravityOverride;
  float m_prevGravity;
  struct List_1_Moon_ComboSystem_IComboMove_ * _ComboMoves_k__BackingField;
  float _CoolDown_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  enum StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
struct SeinSpiritLeashAbility {
  struct SeinSpiritLeashAbility__Class *klass;
  struct MonitorData *monitor;
  struct SeinSpiritLeashAbility__Fields fields;
};
enum LeashMarkEffect_State__Enum : int32_t {
  LeashMarkEffect_State__Enum_Hidden = 0,
  LeashMarkEffect_State__Enum_Appearing = 1,
  LeashMarkEffect_State__Enum_Playing = 2,
  LeashMarkEffect_State__Enum_Disappearing = 3,
};
struct LeashMarkEffect_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LeashMarkEffect_State__Enum value;
};
struct LeashMarkEffect__Fields {
  struct Suspendable__Fields _;
  struct MoonTimeline * Appearing;
  struct MoonTimeline * Playing;
  struct MoonTimeline * Disappearing;
  struct Transform * Mark;
  struct Transform * DirectionPreview;
  enum LeashMarkEffect_State__Enum m_currentState;
  bool _IsSuspended_k__BackingField;
  struct IEnumerator * m_delayedDestroyInactive;
};
struct LeashMarkEffect {
  struct LeashMarkEffect__Class *klass;
  struct MonitorData *monitor;
  struct LeashMarkEffect__Fields fields;
};
struct __declspec(align(8)) List_1_SpiritLeashEffectPoseAnimator___Fields {
  struct SpiritLeashEffectPoseAnimator__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpiritLeashEffectPoseAnimator_ {
  struct List_1_SpiritLeashEffectPoseAnimator___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpiritLeashEffectPoseAnimator___Fields fields;
};
struct SpiritLeashEffectPoseAnimator__Fields {
  struct MonoBehaviour__Fields _;
  struct AnimationCurve * CircleScaleAnimation;
  struct LineRenderer * LineRenderer;
  struct Transform * LightObject;
  struct Transform * CircleTransform;
  struct SeinCharacter * m_sein;
  struct IAttackable * m_target;
  struct Vector3 m_targetRelativePosition;
  struct Transform * m_targetTransform;
  struct Vector3 m_circleStartScale;
  float EffectDuration;
  float m_currentTime;
  struct Transform * GlowSprite;
  struct Vector3 GlowOffsetStart;
  struct Vector3 GlowOffsetEnd;
  struct AnimationCurve * DistanceOverTime;
  struct AnimationCurve * TransparencyOverTime;
  int32_t VertexCount;
  struct Vector3__Array * m_positions;
  struct SpiritLeashEffectKeyframe__Array * Frames;
  struct AnimationCurve * widthCurve;
  struct AnimationCurve * widthOverTime;
  float randomTimeOffset;
  float EndDistanceOffset;
  float EndDistancePerpendicularOffset;
  struct Transform * m_handTransformCache;
  struct Vector2 endOffset;
};
struct SpiritLeashEffectPoseAnimator {
  struct SpiritLeashEffectPoseAnimator__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLeashEffectPoseAnimator__Fields fields;
};
struct SpiritLeashEffectPoseAnimator__Array {
  struct SpiritLeashEffectPoseAnimator__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiritLeashEffectPoseAnimator * vector[32];
};
struct __declspec(align(8)) SpiritLeashEffectKeyframe__Fields {
  float Time;
  struct SpiritLeashEffectPose * Pose;
};
struct SpiritLeashEffectKeyframe {
  struct SpiritLeashEffectKeyframe__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLeashEffectKeyframe__Fields fields;
};
struct SpiritLeashEffectKeyframe__Array {
  struct SpiritLeashEffectKeyframe__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiritLeashEffectKeyframe * vector[32];
};
struct SpiritLeashEffectPose__Fields {
  struct ScriptableObject__Fields _;
  struct AnimationCurve * pointDistributionCurve;
  struct AnimationCurve * verticalSineTimeProgression;
  struct AnimationCurve * verticalSineSpeedOverTime;
  struct AnimationCurve * verticalSineAmplitude;
  struct AnimationCurve * verticalSineFrequency;
  struct AnimationCurve * horizontalSineTimeProgression;
  struct AnimationCurve * horizontalSineSpeedOverTime;
  struct AnimationCurve * horizontalSineAmplitude;
  struct AnimationCurve * horizontalSineFrequency;
  float randomTimeOffset;
};
struct SpiritLeashEffectPose {
  struct SpiritLeashEffectPose__Class *klass;
  struct MonitorData *monitor;
  struct SpiritLeashEffectPose__Fields fields;
};
struct IEnumerator_1_SpiritLeashEffectPoseAnimator_ {
  struct IEnumerator_1_SpiritLeashEffectPoseAnimator___Class *klass;
  struct MonitorData *monitor;
};
struct ISpiritLeashAttackable {
  struct ISpiritLeashAttackable__Class *klass;
  struct MonitorData *monitor;
};
struct DamageType__Enum__Array {
  struct DamageType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum DamageType__Enum vector[32];
};
struct __declspec(align(8)) Dictionary_2_UnityEngine_GameObject_LeashMarkEffect___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_UnityEngine_GameObject_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_UnityEngine_GameObject_LeashMarkEffect_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_LeashMarkEffect_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect_ {
  struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_UnityEngine_GameObject_LeashMarkEffect___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_UnityEngine_GameObject_LeashMarkEffect_ {
  int32_t hashCode;
  int32_t next;
  struct GameObject * key;
  struct LeashMarkEffect * value;
};}