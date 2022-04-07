namespace app {

struct GoThroughPlatformGrenade__Fields {
  struct Suspendable__Fields _;
  struct Collider * Collider;
  struct Rigidbody * Rigidbody;
  bool _IsSuspended_k__BackingField;
  bool m_wasFalling;
};
struct GoThroughPlatformGrenade {
  struct GoThroughPlatformGrenade__Class *klass;
  struct MonitorData *monitor;
  struct GoThroughPlatformGrenade__Fields fields;
};
struct GoThroughPlatformGrenade__VTable {
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
};
struct GoThroughPlatformGrenade__StaticFields {
};
struct GoThroughPlatformGrenade__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GoThroughPlatformGrenade__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GoThroughPlatformGrenade__VTable vtable;
};

struct GoThroughPlatformHandler__Fields {
  struct MonoBehaviour__Fields _;
  struct IGoThroughPlatformTester * m_tester;
  int32_t m_playerLayer;
  int32_t m_platformLayer;
  struct ICharacter * m_character;
  float m_disabledTimeRemaing;
};
struct GoThroughPlatformHandler {
  struct GoThroughPlatformHandler__Class *klass;
  struct MonitorData *monitor;
  struct GoThroughPlatformHandler__Fields fields;
};
struct IGoThroughPlatformTester {
  struct IGoThroughPlatformTester__Class *klass;
  struct MonitorData *monitor;
};
struct IGoThroughPlatformTester__VTable {
  VirtualInvokeData get_GoThroughPlatformTestingRayLeft;
  VirtualInvokeData get_GoThroughPlatformTestingRayRight;
  VirtualInvokeData GoThroughPlatformTestingRayLeftRight;
  VirtualInvokeData get_GoThroughPlatformTesterCollider;
  VirtualInvokeData get_GoThroughPlatformTestingRayRadius;
};
struct IGoThroughPlatformTester__StaticFields {
};
struct IGoThroughPlatformTester__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IGoThroughPlatformTester__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IGoThroughPlatformTester__VTable vtable;
};
struct GoThroughPlatformHandler__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GoThroughPlatformHandler__StaticFields {
  bool OptimizedGoThrough;
  bool m_ignore;
};
struct GoThroughPlatformHandler__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GoThroughPlatformHandler__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GoThroughPlatformHandler__VTable vtable;
};

struct GravityDirectionChangerZone__Fields {
  struct MonoBehaviour__Fields _;
};
struct GravityDirectionChangerZone {
  struct GravityDirectionChangerZone__Class *klass;
  struct MonitorData *monitor;
  struct GravityDirectionChangerZone__Fields fields;
};
struct GravityDirectionChangerZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GravityDirectionChangerZone__StaticFields {
};
struct GravityDirectionChangerZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GravityDirectionChangerZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GravityDirectionChangerZone__VTable vtable;
};

struct ShorterHintZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Rect m_bounds;
};
struct ShorterHintZone {
  struct ShorterHintZone__Class *klass;
  struct MonitorData *monitor;
  struct ShorterHintZone__Fields fields;
};
struct ShorterHintZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShorterHintZone__StaticFields {
};
struct ShorterHintZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShorterHintZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShorterHintZone__VTable vtable;
};

struct IceWall__Fields {
  struct MonoBehaviour__Fields _;
};
struct IceWall {
  struct IceWall__Class *klass;
  struct MonitorData *monitor;
  struct IceWall__Fields fields;
};
struct IceWall__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct IceWall__StaticFields {
};
struct IceWall__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IceWall__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IceWall__VTable vtable;
};

struct KillPlayer__Fields {
  struct MonoBehaviour__Fields _;
  bool KillEnemiesToo;
};
struct KillPlayer {
  struct KillPlayer__Class *klass;
  struct MonitorData *monitor;
  struct KillPlayer__Fields fields;
};
struct KillPlayer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct KillPlayer__StaticFields {
};
struct KillPlayer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KillPlayer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KillPlayer__VTable vtable;
};

struct Larva__Fields {
  struct MonoBehaviour__Fields _;
};
struct Larva {
  struct Larva__Class *klass;
  struct MonitorData *monitor;
  struct Larva__Fields fields;
};
struct Larva__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Larva__StaticFields {
};
struct Larva__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Larva__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Larva__VTable vtable;
};

struct LegacyActionLeverSystem__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * LeverEnterAction;
  struct ActionMethod * LeverExitAction;
  struct ActionMethod * LeverGrabbedAction;
  struct ActionMethod * LeverReleasedAction;
  struct ActionMethod * LeverLeftAction;
  struct MoonTimeline * LeverLeftTimeline;
  struct ActionMethod * LeverRightAction;
  struct MoonTimeline * LeverRightTimeline;
  struct ActionMethod * LeverLeftFailedAction;
  struct ActionMethod * LeverRightFailedAction;
  struct ActionMethod * LeverMiddleAction;
  struct Condition_1 * CanLeverLeft;
  struct Condition_1 * CanLeverRight;
  struct ILever * m_lever;
};
struct LegacyActionLeverSystem {
  struct LegacyActionLeverSystem__Class *klass;
  struct MonitorData *monitor;
  struct LegacyActionLeverSystem__Fields fields;
};
struct LegacyActionLeverSystem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData GetRequirementsForTimeline;
};
struct LegacyActionLeverSystem__StaticFields {
};
struct LegacyActionLeverSystem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyActionLeverSystem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyActionLeverSystem__VTable vtable;
};

struct LegacyLever_c {
  struct LegacyLever_c__Class *klass;
  struct MonitorData *monitor;
};
struct LegacyLever_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LegacyLever_c__StaticFields {
  struct LegacyLever_c * __9;
  struct Action * __9__131_0;
  struct Action * __9__131_1;
  struct Action * __9__131_2;
  struct Action * __9__131_3;
  struct Action * __9__131_4;
  struct Action * __9__131_5;
  struct Action * __9__131_6;
  struct Action * __9__131_7;
  struct Action * __9__131_8;
  struct Func_1_Boolean_ * __9__131_9;
  struct Func_1_Boolean_ * __9__131_10;
};
struct LegacyLever_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LegacyLever_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LegacyLever_c__VTable vtable;
};

struct LocationChanger__Fields {
  struct MonoBehaviour__Fields _;
  struct String * Target;
  struct String * Scene;
  bool UseFade;
  bool UsePostionZ;
  bool MaintainOffsetOfPlayer;
  struct Transform * m_target;
  struct Vector3 Offset;
};
struct LocationChanger {
  struct LocationChanger__Class *klass;
  struct MonitorData *monitor;
  struct LocationChanger__Fields fields;
};
struct LocationChanger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_SceneName;
  VirtualInvokeData get_TargetName;
  VirtualInvokeData get_TargetTransform;
  VirtualInvokeData TargetOffset;
  VirtualInvokeData get_UseFader;
};
struct LocationChanger__StaticFields {
};
struct LocationChanger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LocationChanger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LocationChanger__VTable vtable;
};

struct MapStoneActivatedCondition__Fields {
  struct Condition_1__Fields _;
  struct MapStone * MapStone;
  bool Activated;
};
struct MapStoneActivatedCondition {
  struct MapStoneActivatedCondition__Class *klass;
  struct MonitorData *monitor;
  struct MapStoneActivatedCondition__Fields fields;
};
struct MapStoneActivatedCondition__VTable {
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
struct MapStoneActivatedCondition__StaticFields {
};
struct MapStoneActivatedCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapStoneActivatedCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapStoneActivatedCondition__VTable vtable;
};

struct PlayerHasMapStoneFragmentCondition__Fields {
  struct Condition_1__Fields _;
  bool HasFragment;
};
struct PlayerHasMapStoneFragmentCondition {
  struct PlayerHasMapStoneFragmentCondition__Class *klass;
  struct MonitorData *monitor;
  struct PlayerHasMapStoneFragmentCondition__Fields fields;
};
struct PlayerHasMapStoneFragmentCondition__VTable {
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
struct PlayerHasMapStoneFragmentCondition__StaticFields {
};
struct PlayerHasMapStoneFragmentCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerHasMapStoneFragmentCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerHasMapStoneFragmentCondition__VTable vtable;
};

struct CarryableDamageReciever__Fields {
  struct MonoBehaviour__Fields _;
  struct CarryableRigidBody * m_carryable;
  struct HashSet_1_DamageType_ * m_damageTypes;
};
struct CarryableDamageReciever {
  struct CarryableDamageReciever__Class *klass;
  struct MonitorData *monitor;
  struct CarryableDamageReciever__Fields fields;
};
struct CarryableDamageReciever__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
};
struct CarryableDamageReciever__StaticFields {
};
struct CarryableDamageReciever__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CarryableDamageReciever__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CarryableDamageReciever__VTable vtable;
};

struct MistTorch__Fields {
  struct MonoBehaviour__Fields _;
  struct IPressurePlate * m_pressurePlate;
};
struct MistTorch {
  struct MistTorch__Class *klass;
  struct MonitorData *monitor;
  struct MistTorch__Fields fields;
};
struct MistTorch__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnPressed;
  VirtualInvokeData OnReleased;
};
struct MistTorch__StaticFields {
};
struct MistTorch__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistTorch__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistTorch__VTable vtable;
};

struct MistTorchPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * MistTorchPrefab;
  float m_remainingTime;
};
struct MistTorchPlaceholder {
  struct MistTorchPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct MistTorchPlaceholder__Fields fields;
};
struct MistTorchPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MistTorchPlaceholder__StaticFields {
};
struct MistTorchPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MistTorchPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MistTorchPlaceholder__VTable vtable;
};

struct JumpFlipPlatform__Fields {
  struct SaveSerialize__Fields _;
  bool ShowAtStart;
  bool ToggleOnJump;
  bool ToggleOnDoubleJump;
  bool ToggleOnWallJump;
  bool ToggleOnChargeJump;
  bool m_active;
  struct LegacyTransparancyAnimator * m_transparancyAnimator;
  struct List_1_LegacyAnimator_ * Animators;
  struct List_1_BaseAnimator_ * BaseAnimators;
  struct Collider * m_collider;
  struct ActionMethod * OnActivateAction;
  struct ActionMethod * OnDeactivateAction;
  struct SoundProvider * OnActivateSoundProvider;
  struct SoundProvider * OnDeactivateSoundProvider;
  struct FlipPlantLogic__Array * m_flipPlants;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct JumpFlipPlatform {
  struct JumpFlipPlatform__Class *klass;
  struct MonitorData *monitor;
  struct JumpFlipPlatform__Fields fields;
};
struct FlipPlantLogic__Array {
  struct FlipPlantLogic__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct FlipPlantLogic * vector[32];
};
struct JumpFlipPlatform__VTable {
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
};
struct JumpFlipPlatform__StaticFields {
  struct Action * OnSeinJumpEvent;
  struct Action * OnSeinDoubleJumpEvent;
  struct Action * OnSeinWallJumpEvent;
  struct Action * OnSeinChargeJumpEvent;
  float TimeOfLastAudio;
};
struct JumpFlipPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpFlipPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpFlipPlatform__VTable vtable;
};

struct JumpFlipPlatform_c {
  struct JumpFlipPlatform_c__Class *klass;
  struct MonitorData *monitor;
};
struct JumpFlipPlatform_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct JumpFlipPlatform_c__StaticFields {
  struct JumpFlipPlatform_c * __9;
};
struct JumpFlipPlatform_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct JumpFlipPlatform_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct JumpFlipPlatform_c__VTable vtable;
};

enum RiseSinkPlatform_State__Enum : int32_t {
  RiseSinkPlatform_State__Enum_Rise = 0,
  RiseSinkPlatform_State__Enum_Sink = 1,
  RiseSinkPlatform_State__Enum_Rest = 2,
};
struct RiseSinkPlatform_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RiseSinkPlatform_State__Enum value;
};
struct RiseSinkPlatform__Fields {
  struct SaveSerialize__Fields _;
  float SinkSpeed;
  float RiseSpeed;
  struct Vector3 m_startPosition;
  struct Transform * TransformToAffect;
  enum RiseSinkPlatform_State__Enum m_state;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct RiseSinkPlatform {
  struct RiseSinkPlatform__Class *klass;
  struct MonitorData *monitor;
  struct RiseSinkPlatform__Fields fields;
};
struct RiseSinkPlatform__VTable {
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
};
struct RiseSinkPlatform__StaticFields {
};
struct RiseSinkPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RiseSinkPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RiseSinkPlatform__VTable vtable;
};

enum Utility_MoveDirection__Enum : int32_t {
  Utility_MoveDirection__Enum_Left = 0,
  Utility_MoveDirection__Enum_Right = 1,
  Utility_MoveDirection__Enum_Up = 2,
  Utility_MoveDirection__Enum_Down = 3,
};
struct Utility_MoveDirection__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Utility_MoveDirection__Enum value;
};
struct SinMovingPlatform__Fields {
  struct SaveSerialize__Fields _;
  enum Utility_MoveDirection__Enum Direction;
  bool DontMoveWhenDeactivatedInitially;
  float Offset;
  float Period;
  float Range;
  struct SoundSource * UpSound;
  struct SoundSource * DownSound;
  int32_t m_previousSign;
  struct Vector3 m_positionCenter;
  float m_time;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct SinMovingPlatform {
  struct SinMovingPlatform__Class *klass;
  struct MonitorData *monitor;
  struct SinMovingPlatform__Fields fields;
};
struct SinMovingPlatform__VTable {
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
};
struct SinMovingPlatform__StaticFields {
};
struct SinMovingPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SinMovingPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SinMovingPlatform__VTable vtable;
};

enum HeatUpPlatform_State__Enum : int32_t {
  HeatUpPlatform_State__Enum_Cold = 0,
  HeatUpPlatform_State__Enum_Heating = 1,
  HeatUpPlatform_State__Enum_Hot = 2,
  HeatUpPlatform_State__Enum_Cooling = 3,
};
struct HeatUpPlatform_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum HeatUpPlatform_State__Enum value;
};
struct HeatUpPlatform__Fields {
  struct SaveSerialize__Fields _;
  struct Transform * m_transform;
  struct SoundSource * ActivateSoundSource;
  struct SoundSource * DeacivateSoundSource;
  bool Activated;
  bool m_beingTriggered;
  enum HeatUpPlatform_State__Enum CurrentState;
  float m_stateCurrentTime;
  float m_heat;
  struct Renderer * Target;
  struct Color ColdColor;
  struct Color HotColor;
  struct AnimationCurve * HeatCurve;
  float Damage;
  float HeatingDuration;
  float CoolingDuration;
};
struct HeatUpPlatform {
  struct HeatUpPlatform__Class *klass;
  struct MonitorData *monitor;
  struct HeatUpPlatform__Fields fields;
};
struct HeatUpPlatform__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct HeatUpPlatform__StaticFields {
};
struct HeatUpPlatform__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HeatUpPlatform__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HeatUpPlatform__VTable vtable;
};

struct DamageDealerUnlessCarryingNightberry__Fields {
  struct DamageDealer__Fields _;
  int32_t m_frame;
};
struct DamageDealerUnlessCarryingNightberry {
  struct DamageDealerUnlessCarryingNightberry__Class *klass;
  struct MonitorData *monitor;
  struct DamageDealerUnlessCarryingNightberry__Fields fields;
};
struct DamageDealerUnlessCarryingNightberry__VTable {
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
struct DamageDealerUnlessCarryingNightberry__StaticFields {
};
struct DamageDealerUnlessCarryingNightberry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DamageDealerUnlessCarryingNightberry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DamageDealerUnlessCarryingNightberry__VTable vtable;
};

struct NightBerry__Fields {
  struct SaveSerialize__Fields _;
  float OuterRadius;
  float InnerRadius;
  struct SoundSource * ShrinkSound;
  struct SoundSource * GrowSound;
  struct AnimationCurve * ForceOverDistance;
  struct AnimationCurve * DragOverDistance;
  float ActivateChaseRange;
  float StopChaseRange;
  float StartChaseRange;
  float StopChaseVelocity;
  struct Varying2DSoundProvider * OnChaseSound;
  struct Transform * Ring;
  bool m_isChasing;
  bool m_canChase;
  struct Transform * m_transform;
  struct Rigidbody * m_rigidbody;
  struct Collider * m_collider;
  struct CarryableRigidBody * m_carryable;
  float m_spiritRingSpeed;
  float SpiritRingRadius;
  float m_spiritRingRadiusMultiplier;
  struct ParticleSystem__Array * Particles;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct NightBerry {
  struct NightBerry__Class *klass;
  struct MonitorData *monitor;
  struct NightBerry__Fields fields;
};
struct NightBerry__VTable {
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
};
struct NightBerry__StaticFields {
};
struct NightBerry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NightBerry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NightBerry__VTable vtable;
};

struct NightberryPlaceholder__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * NightberryPrefab;
};
struct NightberryPlaceholder {
  struct NightberryPlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct NightberryPlaceholder__Fields fields;
};
struct NightberryPlaceholder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NightberryPlaceholder__StaticFields {
};
struct NightberryPlaceholder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NightberryPlaceholder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NightberryPlaceholder__VTable vtable;
};

struct __declspec(align(8)) NightberryPlaceholder_HackForFixingNightberry_d_2__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct NightberryPlaceholder * __4__this;
};
struct NightberryPlaceholder_HackForFixingNightberry_d_2 {
  struct NightberryPlaceholder_HackForFixingNightberry_d_2__Class *klass;
  struct MonitorData *monitor;
  struct NightberryPlaceholder_HackForFixingNightberry_d_2__Fields fields;
};
struct NightberryPlaceholder_HackForFixingNightberry_d_2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData System_Collections_Generic_IEnumerator_System_Object__get_Current;
  VirtualInvokeData System_IDisposable_Dispose;
  VirtualInvokeData MoveNext;
  VirtualInvokeData System_Collections_IEnumerator_get_Current;
  VirtualInvokeData System_Collections_IEnumerator_Reset;
};
struct NightberryPlaceholder_HackForFixingNightberry_d_2__StaticFields {
};
struct NightberryPlaceholder_HackForFixingNightberry_d_2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NightberryPlaceholder_HackForFixingNightberry_d_2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NightberryPlaceholder_HackForFixingNightberry_d_2__VTable vtable;
};

struct NightBerryResponder__Fields {
  struct MonoBehaviour__Fields _;
  struct ActionMethod * OnEnterNightBerryAura;
  struct ActionMethod * OnExitNightBerryAura;
  bool m_isInRadius;
  int32_t m_frame;
};
struct NightBerryResponder {
  struct NightBerryResponder__Class *klass;
  struct MonitorData *monitor;
  struct NightBerryResponder__Fields fields;
};
struct NightBerryResponder__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NightBerryResponder__StaticFields {
};
struct NightBerryResponder__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NightBerryResponder__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NightBerryResponder__VTable vtable;
};

struct NightBerrySpiritRing__Fields {
  struct MonoBehaviour__Fields _;
};
struct NightBerrySpiritRing {
  struct NightBerrySpiritRing__Class *klass;
  struct MonitorData *monitor;
  struct NightBerrySpiritRing__Fields fields;
};
struct NightBerrySpiritRing__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NightBerrySpiritRing__StaticFields {
};
struct NightBerrySpiritRing__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NightBerrySpiritRing__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NightBerrySpiritRing__VTable vtable;
};

struct PlayAnimatorBasedOnNightberry__Fields {
  struct MonoBehaviour__Fields _;
  bool m_wasActivated;
  struct LegacyAnimator__Array * m_animators;
};
struct PlayAnimatorBasedOnNightberry {
  struct PlayAnimatorBasedOnNightberry__Class *klass;
  struct MonitorData *monitor;
  struct PlayAnimatorBasedOnNightberry__Fields fields;
};
struct PlayAnimatorBasedOnNightberry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayAnimatorBasedOnNightberry__StaticFields {
};
struct PlayAnimatorBasedOnNightberry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayAnimatorBasedOnNightberry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayAnimatorBasedOnNightberry__VTable vtable;
};

struct SetNightBerryRespawnPosition__Fields {
  struct ActionMethod__Fields _;
  struct Transform * Target;
};
struct SetNightBerryRespawnPosition {
  struct SetNightBerryRespawnPosition__Class *klass;
  struct MonitorData *monitor;
  struct SetNightBerryRespawnPosition__Fields fields;
};
struct SetNightBerryRespawnPosition__VTable {
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
struct SetNightBerryRespawnPosition__StaticFields {
};
struct SetNightBerryRespawnPosition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetNightBerryRespawnPosition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetNightBerryRespawnPosition__VTable vtable;
};

struct HighlightNearSein__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_LegacyAnimator_ * Animators;
};
struct HighlightNearSein {
  struct HighlightNearSein__Class *klass;
  struct MonitorData *monitor;
  struct HighlightNearSein__Fields fields;
};
struct HighlightNearSein__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnNearSeinEnter;
  VirtualInvokeData OnNearSeinExit;
  VirtualInvokeData OnSeinNearStay;
};
struct HighlightNearSein__StaticFields {
};}