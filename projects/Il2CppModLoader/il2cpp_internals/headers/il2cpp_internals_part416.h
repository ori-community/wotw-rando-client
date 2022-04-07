namespace app {
struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_MaterialVFXSet_ {
  struct IEnumerator_1_KeyValuePair_2_SurfaceMaterialType_MaterialVFXSet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SurfaceMaterialType_ {
  struct IEnumerable_1_SurfaceMaterialType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MaterialVFXSet_ {
  struct IEnumerable_1_MaterialVFXSet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) WeaponTypeVFXSettings__Fields {
  struct List_1_WeaponVFXSet_ * Settings;
  struct Dictionary_2_EquipmentType_WeaponVFXSet_ * SettingsDictionary;
};
struct WeaponTypeVFXSettings {
  struct WeaponTypeVFXSettings__Class *klass;
  struct MonitorData *monitor;
  struct WeaponTypeVFXSettings__Fields fields;
};
struct __declspec(align(8)) List_1_WeaponVFXSet___Fields {
  struct WeaponVFXSet__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_WeaponVFXSet_ {
  struct List_1_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
  struct List_1_WeaponVFXSet___Fields fields;
};
struct __declspec(align(8)) WeaponVFXSet__Fields {
  enum EquipmentType__Enum Weapon;
  struct List_1_MaterialVFXSizePair_ * Settings;
  float OffsetHitEffectToCenterDistance;
};
struct WeaponVFXSet {
  struct WeaponVFXSet__Class *klass;
  struct MonitorData *monitor;
  struct WeaponVFXSet__Fields fields;
};
struct WeaponVFXSet__Array {
  struct WeaponVFXSet__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WeaponVFXSet * vector[32];
};
struct IEnumerator_1_WeaponVFXSet_ {
  struct IEnumerator_1_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_EquipmentType_WeaponVFXSet___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_EquipmentType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_WeaponVFXSet_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_WeaponVFXSet_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_EquipmentType_WeaponVFXSet_ {
  struct Dictionary_2_EquipmentType_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_EquipmentType_WeaponVFXSet___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet_ {
  int32_t hashCode;
  int32_t next;
  enum EquipmentType__Enum key;
  struct WeaponVFXSet * value;
};
struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet___Array {
  struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_EquipmentType_WeaponVFXSet_ vector[32];
};
struct IEqualityComparer_1_EquipmentType_ {
  struct IEqualityComparer_1_EquipmentType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_WeaponVFXSet___Fields {
  struct Dictionary_2_EquipmentType_WeaponVFXSet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_WeaponVFXSet_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_EquipmentType_WeaponVFXSet___Fields fields;
};
struct EquipmentType__Enum__Array {
  struct EquipmentType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum EquipmentType__Enum vector[32];
};
struct IEnumerator_1_EquipmentType_ {
  struct IEnumerator_1_EquipmentType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_WeaponVFXSet___Fields {
  struct Dictionary_2_EquipmentType_WeaponVFXSet_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_WeaponVFXSet_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_EquipmentType_WeaponVFXSet___Fields fields;
};
struct ICollection_1_EquipmentType_ {
  struct ICollection_1_EquipmentType___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_WeaponVFXSet_ {
  struct ICollection_1_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_EquipmentType_WeaponVFXSet_ {
  enum EquipmentType__Enum key;
  struct WeaponVFXSet * value;
};
struct KeyValuePair_2_EquipmentType_WeaponVFXSet___Boxed {
  struct KeyValuePair_2_EquipmentType_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_EquipmentType_WeaponVFXSet_ fields;
};
struct KeyValuePair_2_EquipmentType_WeaponVFXSet___Array {
  struct KeyValuePair_2_EquipmentType_WeaponVFXSet___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_EquipmentType_WeaponVFXSet_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_EquipmentType_WeaponVFXSet_ {
  struct IEnumerator_1_KeyValuePair_2_EquipmentType_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_EquipmentType_ {
  struct IEnumerable_1_EquipmentType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_WeaponVFXSet_ {
  struct IEnumerable_1_WeaponVFXSet___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinWallJump___Fields {
  bool HasState;
  struct SeinWallJump * State;
};
struct CharacterStateWrapper_1_SeinWallJump_ {
  struct CharacterStateWrapper_1_SeinWallJump___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinWallJump___Fields fields;
};
struct SeinWallJump__Fields {
  struct CharacterState__Fields _;
  struct Vector2 JumpStrength;
  struct Vector2 JumpStrengthUnderCeiling;
  float LockDoubleJumpTowardsDuration;
  float WallJumpImpulse;
  float CeilingTestMaxDistance;
  float AirNoDecelerationDurationForNoInputWallJump;
  bool m_spriteMirrorLock;
  float InwardsJumpAssistTime;
  float InwardsReJumpRayMaxDistance;
  bool m_canPerformAssistedWallJump;
  float m_inwardsJumpAssistTimer;
  float m_lastInwardsJumpDirection;
  struct Coroutine * m_coro;
  struct ActiveAnimationHandle m_currentFlipAnimation;
  int32_t m_changeDirectionWhileJumpingCouroutinesCount;
  struct Action_1_UnityEngine_Vector2_ * OnWallJumpEvent;
};
struct SeinWallJump {
  struct SeinWallJump__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallJump__Fields fields;
};
struct Action_1_UnityEngine_Vector2___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_UnityEngine_Vector2_ {
  struct Action_1_UnityEngine_Vector2___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_UnityEngine_Vector2___Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinChargeJumpCharging___Fields {
  bool HasState;
  struct SeinChargeJumpCharging * State;
};
struct CharacterStateWrapper_1_SeinChargeJumpCharging_ {
  struct CharacterStateWrapper_1_SeinChargeJumpCharging___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinChargeJumpCharging___Fields fields;
};
enum SeinChargeJumpCharging_State__Enum : int32_t {
  SeinChargeJumpCharging_State__Enum_Normal = 0,
  SeinChargeJumpCharging_State__Enum_Charging = 1,
  SeinChargeJumpCharging_State__Enum_Charged = 2,
};
struct SeinChargeJumpCharging_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinChargeJumpCharging_State__Enum value;
};
struct SeinChargeJumpCharging__Fields {
  struct CharacterState__Fields _;
  struct SoundProvider * ChargeSound;
  struct SoundPlayer * m_lastChargingSound;
  struct SoundSource * ChargedSound;
  struct SoundProvider * UnChargeSound;
  enum SeinChargeJumpCharging_State__Enum CurrentState;
  float m_stateCurrentTime;
  float m_wallChargeHeldTime;
  float ChargingTime;
  float UnchargingTime;
  struct GameObject * ChargingEffectToSpawn;
  struct GameObject * UnchargingEffectToSpawn;
  struct GameObject * ChargedEffectToSpawn;
  struct GameObject * ChargeJumpCompleteEffectToSpawn;
  struct GameObject * m_chargingEffect;
  struct GameObject * m_unchargingEffect;
  struct GameObject * m_chargedEffect;
};
struct SeinChargeJumpCharging {
  struct SeinChargeJumpCharging__Class *klass;
  struct MonitorData *monitor;
  struct SeinChargeJumpCharging__Fields fields;
};
struct ArtificialSoundHostReference {
  struct ArtificialSoundHost * Host;
  int32_t Version;
};
struct ArtificialSoundHostReference__Boxed {
  struct ArtificialSoundHostReference__Class *klass;
  struct MonitorData *monitor;
  struct ArtificialSoundHostReference fields;
};
struct SoundSource__Fields {
  struct MonoBehaviour__Fields _;
  struct SoundProvider * Sound;
  bool DestroyOnSoundEnd;
  bool PlayAtStart;
  struct Action * m_onEnd;
  bool m_triggeredOnStart;
  bool m_canDestroy;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct ArtificialSoundHostReference m_soundHost;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
};
struct SoundSource {
  struct SoundSource__Class *klass;
  struct MonitorData *monitor;
  struct SoundSource__Fields fields;
};
struct __declspec(align(8)) ArtificialSoundHost__Fields {
  struct Vector3 m_position;
  struct Transform * m_anchor;
  uint64_t m_id;
  int32_t m_version;
  bool m_isActive;
  struct AkAuxSendArray * AuxSendArray;
};
struct ArtificialSoundHost {
  struct ArtificialSoundHost__Class *klass;
  struct MonitorData *monitor;
  struct ArtificialSoundHost__Fields fields;
};
enum SelectableCategory__Enum : int32_t {
  SelectableCategory__Enum_Default = 0,
  SelectableCategory__Enum_Camera = 1,
  SelectableCategory__Enum_Audio = 2,
  SelectableCategory__Enum_Streaming = 4,
  SelectableCategory__Enum_Other = 8,
};
struct SelectableCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SelectableCategory__Enum value;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinChargeJump___Fields {
  bool HasState;
  struct SeinChargeJump * State;
};
struct CharacterStateWrapper_1_SeinChargeJump_ {
  struct CharacterStateWrapper_1_SeinChargeJump___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinChargeJump___Fields fields;
};
enum SeinChargeJump_State__Enum : int32_t {
  SeinChargeJump_State__Enum_Idle = 0,
  SeinChargeJump_State__Enum_Charging = 1,
  SeinChargeJump_State__Enum_Charged = 2,
  SeinChargeJump_State__Enum_Aiming = 3,
  SeinChargeJump_State__Enum_Jumping = 4,
  SeinChargeJump_State__Enum_DashAttack = 5,
  SeinChargeJump_State__Enum_BounceAttack = 6,
};
struct SeinChargeJump_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinChargeJump_State__Enum value;
};
enum SeinChargeJump_AttackResponse__Enum : int32_t {
  SeinChargeJump_AttackResponse__Enum_DashThrough = 0,
  SeinChargeJump_AttackResponse__Enum_Bounce = 1,
};
struct SeinChargeJump_AttackResponse__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinChargeJump_AttackResponse__Enum value;
};
enum DamageWeight__Enum : int32_t {
  DamageWeight__Enum_Default = 0,
  DamageWeight__Enum_VeryLight = 1,
  DamageWeight__Enum_Light = 2,
  DamageWeight__Enum_Medium = 3,
  DamageWeight__Enum_Heavy = 4,
  DamageWeight__Enum_Heavier = 5,
};
struct DamageWeight__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DamageWeight__Enum value;
};
enum BashAttackGame_Modes__Enum : int32_t {
  BashAttackGame_Modes__Enum_Mouse = 0,
  BashAttackGame_Modes__Enum_Keyboard = 1,
  BashAttackGame_Modes__Enum_Controller = 2,
};
struct BashAttackGame_Modes__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BashAttackGame_Modes__Enum value;
};
struct SeinChargeJump__Fields {
  struct CharacterState__Fields _;
  struct List_1_Moon_ComboSystem_IComboMove_ * _ComboMoves_k__BackingField;
  float _MoveCooldown_k__BackingField;
  float _MoveCooldownTimer_k__BackingField;
  bool _WasGroundedSinceLastExecution_k__BackingField;
  float _ProviderCooldown_k__BackingField;
  float _ProviderCooldownTimer_k__BackingField;
  enum SeinChargeJump_State__Enum m_state;
  float m_chargeTimer;
  struct Vector2 m_direction;
  float m_slowDownTimer;
  float m_aimingTimer;
  bool m_canAttack;
  float m_attackDelay;
  struct IAttackable * m_target;
  float m_stateTime;
  struct SeinChargeJump_BalancingData * Balancing;
  float ChargingTime;
  float SlowDownSpeed;
  float AimingTime;
  float DirectionalBoostMultiplier;
  float JumpSpeed;
  struct AnimationCurve * JumpSpeedCurveNormalized;
  struct AnimationCurve * JumpDownSpeedCurveNormalized;
  float DownCurveJumpAngleThreshold;
  float SurfaceDashCurveDuration;
  float MinSpeedAfterPortal;
  float SpeedBlendOutTimeNormalized;
  float SpeedBlendOutDuration;
  float MinOnGroundUpDirection;
  enum SeinChargeJump_AttackResponse__Enum Attack;
  struct LayerMask AttackableLayer;
  enum DamageWeight__Enum DamageWeight;
  float ForceMultiplier;
  float ForceDashThroughTime;
  float MinTimeInState;
  float MinTimeBeforeReset;
  struct Vector2 BounceSpeed;
  bool SkipAiming;
  bool StartingFromGroundAllowsSecondJump;
  float SkipAimingChargeTime;
  bool DebugVis;
  float AttackOffTime;
  struct Vector2 OnAimEnterSpeedGround;
  struct Vector2 OnAimEnterSpeedWall;
  float AimingSlowDownDuration;
  struct Vector2 m_slowDownCurrentSpeed;
  struct Transform * ArrowTransform;
  struct MoonTimeline * ShowArrowTimeline;
  struct MoonTimeline * HideArrowTimeline;
  bool m_canChargeJump;
  bool m_startedAimingFromGround;
  bool m_hitWall;
  struct Transform * m_chargeJumpTrail;
  struct List_1_UnityEngine_Collider_ * m_ignoredColliders;
  bool m_displayedArrow;
  bool m_wasOnGroundAtStart;
  bool m_hadWallLeftAtStart;
  bool m_hadWallRightAtStart;
  struct Vector2 m_groundBinormalAtStart;
  float CorrectAngleMaxDuration;
  float JumpAnimationDisallowTurnTime;
  float m_genericJumpFlipTransitionRemainingTime;
  bool m_faceLeftAtJumpTime;
  struct Collider__Array * m_targets;
  enum BashAttackGame_Modes__Enum m_mode;
  float m_angle;
  float m_keyboardSpeed;
  float m_keyboardAngle;
  bool m_keyboardClockwise;
  float MinSpeedToStartApplyingParameter;
  float MinSpeedToFullyApplyParameter;
};
struct SeinChargeJump {
  struct SeinChargeJump__Class *klass;
  struct MonitorData *monitor;
  struct SeinChargeJump__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_ComboSystem_IComboMove___Fields {
  struct IComboMove__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_ComboSystem_IComboMove_ {
  struct List_1_Moon_ComboSystem_IComboMove___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_ComboSystem_IComboMove___Fields fields;
};
struct IComboMove__Array {
  struct IComboMove__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IComboMove * vector[32];
};
struct IEnumerator_1_Moon_ComboSystem_IComboMove_ {
  struct IEnumerator_1_Moon_ComboSystem_IComboMove___Class *klass;
  struct MonitorData *monitor;
};
struct IAttackable {
  struct IAttackable__Class *klass;
  struct MonitorData *monitor;
};
struct OriAttackBalancingData__Fields {
  struct ScriptableObject__Fields _;
};
struct OriAttackBalancingData {
  struct OriAttackBalancingData__Class *klass;
  struct MonitorData *monitor;
  struct OriAttackBalancingData__Fields fields;
};
struct SeinChargeJump_BalancingData__Fields {
  struct OriAttackBalancingData__Fields _;
  float Damage;
  float AttackRadius;
};
struct SeinChargeJump_BalancingData {
  struct SeinChargeJump_BalancingData__Class *klass;
  struct MonitorData *monitor;
  struct SeinChargeJump_BalancingData__Fields fields;
};
struct __declspec(align(8)) List_1_UnityEngine_Collider___Fields {
  struct Collider__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_UnityEngine_Collider_ {
  struct List_1_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
  struct List_1_UnityEngine_Collider___Fields fields;
};
struct IEnumerator_1_UnityEngine_Collider_ {
  struct IEnumerator_1_UnityEngine_Collider___Class *klass;
  struct MonitorData *monitor;
};
enum ComboMoveType__Enum : int32_t {
  ComboMoveType__Enum_Attack = 0,
  ComboMoveType__Enum_MovementAbility = 1,
  ComboMoveType__Enum_AnalogMovement = 2,
  ComboMoveType__Enum_OppositeAnalogMovement = 3,
  ComboMoveType__Enum_Any = 4,
};
struct ComboMoveType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ComboMoveType__Enum value;
};
enum ButtonInputType__Enum : int32_t {
  ButtonInputType__Enum_Pressed = 0,
  ButtonInputType__Enum_Released = 1,
};
struct ButtonInputType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ButtonInputType__Enum value;
};
struct __declspec(align(8)) GravityPlatformMovementSettings__Fields {
  float GravityStrength;
  float GravityAngle;
  float MaxFallSpeed;
};
struct GravityPlatformMovementSettings {
  struct GravityPlatformMovementSettings__Class *klass;
  struct MonitorData *monitor;
  struct GravityPlatformMovementSettings__Fields fields;
};
struct __declspec(align(8)) HorizontalPlatformMovementSettings__Fields {
  struct HorizontalPlatformMovementSettings_SpeedSet * Ground;
  struct HorizontalPlatformMovementSettings_SpeedSet * Air;
  bool LockInput;
};
struct HorizontalPlatformMovementSettings {
  struct HorizontalPlatformMovementSettings__Class *klass;
  struct MonitorData *monitor;
  struct HorizontalPlatformMovementSettings__Fields fields;
};
struct __declspec(align(8)) HorizontalPlatformMovementSettings_SpeedSet__Fields {
  float Acceleration;
  float Decceleration;
  float MaxSpeed;
};
struct HorizontalPlatformMovementSettings_SpeedSet {
  struct HorizontalPlatformMovementSettings_SpeedSet__Class *klass;
  struct MonitorData *monitor;
  struct HorizontalPlatformMovementSettings_SpeedSet__Fields fields;
};
enum SeinController3D_EventId__Enum : int32_t {
  SeinController3D_EventId__Enum_AttackBegin = 0,
  SeinController3D_EventId__Enum_AttackEnd = 1,
  SeinController3D_EventId__Enum_ComboMoveEnd = 2,
  SeinController3D_EventId__Enum_AttackCycleStart = 3,
  SeinController3D_EventId__Enum_SpawnAttackEffect = 4,
  SeinController3D_EventId__Enum_AllowComboContinuation = 5,
};
struct SeinController3D_EventId__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinController3D_EventId__Enum value;
};
enum InputDirection__Enum : int32_t {
  InputDirection__Enum_None = 0,
  InputDirection__Enum_Forward = 1,
  InputDirection__Enum_Back = 2,
  InputDirection__Enum_Up = 3,
  InputDirection__Enum_Down = 4,
  InputDirection__Enum_Any = 5,
};
struct InputDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InputDirection__Enum value;
};
struct __declspec(align(8)) ComboInput__Fields {
  enum AbilityType__Enum m_actionInput;
  enum InputDirection__Enum m_directionInput;
  enum ButtonInputType__Enum m_buttonInputType;
  bool m_startFacingLeft;
};
struct ComboInput {
  struct ComboInput__Class *klass;
  struct MonitorData *monitor;
  struct ComboInput__Fields fields;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinWallChargeJump___Fields {
  bool HasState;
  struct SeinWallChargeJump * State;
};
struct CharacterStateWrapper_1_SeinWallChargeJump_ {
  struct CharacterStateWrapper_1_SeinWallChargeJump___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinWallChargeJump___Fields fields;
};
enum SeinWallChargeJump_State__Enum : int32_t {
  SeinWallChargeJump_State__Enum_Normal = 0,
  SeinWallChargeJump_State__Enum_Aiming = 1,
  SeinWallChargeJump_State__Enum_Jumping = 2,
};
struct SeinWallChargeJump_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinWallChargeJump_State__Enum value;
};
struct SeinWallChargeJump__Fields {
  struct CharacterState__Fields _;
  struct MoonAnimation * Charge;
  struct MoonAnimation * Jump;
  struct SoundProvider * JumpSound;
  float AntiGravityDuration;
  float HorizontalDrag;
  struct BaseAnimator * Arrow;
  int32_t Damage;
  float ChargedJumpStrength;
  enum SeinWallChargeJump_State__Enum m_currentState;
  float m_angularElevation;
  float m_angularElevationSpeed;
  float m_stateCurrentTime;
  float m_angleDirection;
  bool m_spriteMirrorLock;
  struct HashSet_1_IAttackable_ * m_attackablesIgnore;
  struct GameObject * ExplosionEffect;
};
struct SeinWallChargeJump {
  struct SeinWallChargeJump__Class *klass;
  struct MonitorData *monitor;
  struct SeinWallChargeJump__Fields fields;
};
struct __declspec(align(8)) HashSet_1_IAttackable___Fields {
  struct Int32__Array * _buckets;
  struct HashSet_1_T_Slot_IAttackable___Array * _slots;
  int32_t _count;
  int32_t _lastIndex;
  int32_t _freeList;
  struct IEqualityComparer_1_IAttackable_ * _comparer;
  int32_t _version;
  struct SerializationInfo * _siInfo;
};
struct HashSet_1_IAttackable_ {
  struct HashSet_1_IAttackable___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_IAttackable___Fields fields;
};
struct HashSet_1_T_Slot_IAttackable_ {
  int32_t hashCode;
  int32_t next;
  struct IAttackable * value;
};
struct HashSet_1_T_Slot_IAttackable___Boxed {
  struct HashSet_1_T_Slot_IAttackable___Class *klass;
  struct MonitorData *monitor;
  struct HashSet_1_T_Slot_IAttackable_ fields;
};
struct HashSet_1_T_Slot_IAttackable___Array {
  struct HashSet_1_T_Slot_IAttackable___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HashSet_1_T_Slot_IAttackable_ vector[32];
};
struct IEqualityComparer_1_IAttackable_ {
  struct IEqualityComparer_1_IAttackable___Class *klass;
  struct MonitorData *monitor;
};
struct IAttackable__Array {
  struct IAttackable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IAttackable * vector[32];
};
struct IEnumerator_1_IAttackable_ {
  struct IEnumerator_1_IAttackable___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_IAttackable_ {
  struct IEnumerable_1_IAttackable___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterStateWrapper_1_SeinStomp___Fields {
  bool HasState;
  struct SeinStomp * State;
};
struct CharacterStateWrapper_1_SeinStomp_ {
  struct CharacterStateWrapper_1_SeinStomp___Class *klass;
  struct MonitorData *monitor;
  struct CharacterStateWrapper_1_SeinStomp___Fields fields;
};
struct SeinStomp__Fields {
  struct CharacterState__Fields _;
  float IdleDuration;
  struct StateMachine_2 * Logic;
  struct SeinStomp_States * State;
  float StompBlashRadius;
  float Damage;
  float UpgradedDamage;
  struct AnimationCurve * StompBlastFalloutCurve;
  struct MoonAnimation * StompBounce;
  struct MoonAnimation * StompDown;
  float StompDownDuration;
  struct SoundSource * StompFallSound;
  struct SoundSource * StompFallSoundUpgraded;
  struct MoonAnimation * StompIdle;
  struct MoonAnimation * StompLand;
  float StompLandDuration;
  struct GameObject * StompLandEffect;
  struct GameObject * StompLandEffectUpgraded;
  struct SoundSource * StompLandSound;
  struct SoundSource * StompLandSoundUpgraded;
  float StompSpeed;
  struct SoundSource * StompStartSound;
  struct SoundSource * StompStartSoundUpgraded;
  float UpwardDeceleration;
  struct DamageOwner * m_damageOwner;
};
struct SeinStomp {
  struct SeinStomp__Class *klass;
  struct MonitorData *monitor;
  struct SeinStomp__Fields fields;
};
struct __declspec(align(8)) StateMachine_2__Fields {
  struct MoonGuid * Guid;
  float _CurrentStateTime_k__BackingField;
  struct IState_2 * _CurrentState_k__BackingField;
  struct IState_2 * _PreviousState_k__BackingField;
  struct ITrigger_1 * CurrentTrigger;
  struct Action_1_fsm_StateMachine_ * OnStateChanged;
  struct Action_2_fsm_StateMachine_Int32_ * OnEventTriggered;
  bool Debug;
  struct List_1_fsm_IState_ * m_states;
  struct Dictionary_2_System_Type_fsm_TransitionManager_ * m_triggerToTransitionManagers;
  struct Dictionary_2_fsm_IState_Dictionary_2_System_Int32_System_Action_ * m_events;
};
struct StateMachine_2 {
  struct StateMachine_2__Class *klass;
  struct MonitorData *monitor;
  struct StateMachine_2__Fields fields;
};
struct IState_2 {
  struct IState_2__Class *klass;
  struct MonitorData *monitor;
};
struct ITrigger_1 {
  struct ITrigger_1__Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_fsm_StateMachine___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_fsm_StateMachine_ {
  struct Action_1_fsm_StateMachine___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_fsm_StateMachine___Fields fields;
};
struct Action_2_fsm_StateMachine_Int32___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_2_fsm_StateMachine_Int32_ {
  struct Action_2_fsm_StateMachine_Int32___Class *klass;
  struct MonitorData *monitor;
  struct Action_2_fsm_StateMachine_Int32___Fields fields;
};
struct __declspec(align(8)) List_1_fsm_IState___Fields {
  struct IState_2__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_fsm_IState_ {
  struct List_1_fsm_IState___Class *klass;
  struct MonitorData *monitor;
  struct List_1_fsm_IState___Fields fields;
};
struct IState_2__Array {
  struct IState_2__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct IState_2 * vector[32];
};
struct IEnumerator_1_fsm_IState_ {
  struct IEnumerator_1_fsm_IState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_System_Type_fsm_TransitionManager___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Type_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_fsm_TransitionManager_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_fsm_TransitionManager_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Type_fsm_TransitionManager_ {
  struct Dictionary_2_System_Type_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Type_fsm_TransitionManager___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager_ {
  int32_t hashCode;
  int32_t next;
  struct Type * key;
  struct TransitionManager_1 * value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Type_fsm_TransitionManager_ vector[32];
};
struct __declspec(align(8)) TransitionManager_1__Fields {
  struct Dictionary_2_fsm_IState_List_1_fsm_Transition_ * m_transitions;
};
struct TransitionManager_1 {
  struct TransitionManager_1__Class *klass;
  struct MonitorData *monitor;
  struct TransitionManager_1__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_fsm_IState_List_1_fsm_Transition___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_fsm_IState_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_List_1_fsm_Transition_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_List_1_fsm_Transition_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_fsm_IState_List_1_fsm_Transition_ {
  struct Dictionary_2_fsm_IState_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_fsm_IState_List_1_fsm_Transition___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition_ {
  int32_t hashCode;
  int32_t next;
  struct IState_2 * key;
  struct List_1_fsm_Transition_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition___Array {
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_fsm_IState_List_1_fsm_Transition_ vector[32];
};
struct __declspec(align(8)) List_1_fsm_Transition___Fields {
  struct Transition_1__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_fsm_Transition_ {
  struct List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
  struct List_1_fsm_Transition___Fields fields;
};
struct __declspec(align(8)) Transition_1__Fields {
  struct IState_2 * SourceState;
  struct IState_2 * TargetState;
  struct ICondition * Condition;
  struct IAction * Action;
  struct IContext * Context;
};
struct Transition_1 {
  struct Transition_1__Class *klass;
  struct MonitorData *monitor;
  struct Transition_1__Fields fields;
};
struct Transition_1__Array {
  struct Transition_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Transition_1 * vector[32];
};
struct IAction {
  struct IAction__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_fsm_Transition_ {
  struct IEnumerator_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
};
struct IEqualityComparer_1_fsm_IState_ {
  struct IEqualityComparer_1_fsm_IState___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_List_1_fsm_Transition___Fields {
  struct Dictionary_2_fsm_IState_List_1_fsm_Transition_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_List_1_fsm_Transition_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_fsm_IState_List_1_fsm_Transition___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_List_1_fsm_Transition___Fields {
  struct Dictionary_2_fsm_IState_List_1_fsm_Transition_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_List_1_fsm_Transition_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_fsm_IState_List_1_fsm_Transition___Fields fields;
};
struct List_1_fsm_Transition___Array {
  struct List_1_fsm_Transition___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct List_1_fsm_Transition_ * vector[32];
};
struct IEnumerator_1_List_1_fsm_Transition_ {
  struct IEnumerator_1_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_fsm_IState_ {
  struct ICollection_1_fsm_IState___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_List_1_fsm_Transition_ {
  struct ICollection_1_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_fsm_IState_List_1_fsm_Transition_ {
  struct IState_2 * key;
  struct List_1_fsm_Transition_ * value;
};
struct KeyValuePair_2_fsm_IState_List_1_fsm_Transition___Boxed {
  struct KeyValuePair_2_fsm_IState_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_fsm_IState_List_1_fsm_Transition_ fields;
};
struct KeyValuePair_2_fsm_IState_List_1_fsm_Transition___Array {
  struct KeyValuePair_2_fsm_IState_List_1_fsm_Transition___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_fsm_IState_List_1_fsm_Transition_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_fsm_IState_List_1_fsm_Transition_ {
  struct IEnumerator_1_KeyValuePair_2_fsm_IState_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_fsm_IState_ {
  struct IEnumerable_1_fsm_IState___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_List_1_fsm_Transition_ {
  struct IEnumerable_1_List_1_fsm_Transition___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Type_fsm_TransitionManager___Fields {
  struct Dictionary_2_System_Type_fsm_TransitionManager_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_fsm_TransitionManager_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Type_fsm_TransitionManager___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Type_fsm_TransitionManager___Fields {
  struct Dictionary_2_System_Type_fsm_TransitionManager_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_fsm_TransitionManager_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Type_fsm_TransitionManager___Fields fields;
};
struct TransitionManager_1__Array {
  struct TransitionManager_1__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct TransitionManager_1 * vector[32];
};
struct IEnumerator_1_fsm_TransitionManager_ {
  struct IEnumerator_1_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_fsm_TransitionManager_ {
  struct ICollection_1_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Type_fsm_TransitionManager_ {
  struct Type * key;
  struct TransitionManager_1 * value;
};
struct KeyValuePair_2_System_Type_fsm_TransitionManager___Boxed {
  struct KeyValuePair_2_System_Type_fsm_TransitionManager___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Type_fsm_TransitionManager_ fields;
};
struct KeyValuePair_2_System_Type_fsm_TransitionManager___Array {
  struct KeyValuePair_2_System_Type_fsm_TransitionManager___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Type_fsm_TransitionManager_ vector[32];
};}