namespace app {
struct CatAndMouseKuroLandZone__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Category;
};
struct CatAndMouseKuroLandZone__StaticFields {
};
struct CatAndMouseKuroLandZone__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatAndMouseKuroLandZone__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatAndMouseKuroLandZone__VTable vtable;
};
struct CatAndMouseKuroKillController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CatAndMouseKuroKillController__StaticFields {
};
struct CatAndMouseKuroKillController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatAndMouseKuroKillController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatAndMouseKuroKillController__VTable vtable;
};

struct CatAndMouseRoomAController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * AttackSpriteAnimator;
  struct SpriteAnimator * EscapedSpriteAnimator;
  struct TextureAnimation * AttackTextureAnimation;
  struct TextureAnimation * EscapedTextureAnimation;
  struct TextureAnimation * FlyAwayTextureAnimation;
  struct SoundProvider * AttackSoundProvider;
  struct SoundProvider * EscapedSoundProvider;
  struct Transform * RoomCenter;
  float KuroSpriteYOffSet;
  bool AttackAtSeinPositionX;
  bool AttackAtSeinPositionY;
  bool FaceLeftRightBasedOnRoomCenter;
  struct Vector3 m_originalLocalScale;
};
struct CatAndMouseRoomAController {
  struct CatAndMouseRoomAController__Class *klass;
  struct MonitorData *monitor;
  struct CatAndMouseRoomAController__Fields fields;
};
struct CatAndMouseRoomAController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CatAndMouseRoomAController__StaticFields {
};
struct CatAndMouseRoomAController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatAndMouseRoomAController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatAndMouseRoomAController__VTable vtable;
};

struct CatAndMouseRoomCController__Fields {
  struct MonoBehaviour__Fields _;
  struct BaseAnimator * AttackSpriteSurfaceAnimator;
  struct BaseAnimator * AttackSpriteAnimator;
  struct Renderer * KuroSprite;
  struct Renderer * KuroSurfaceSprite;
  struct AnimationCurve * PositionToCameraWeightCurve;
  struct Vector3 PositionToCameraOffset;
  struct SoundProvider * AttackSoundProvider;
  struct Vector3 m_originalPosition;
  bool m_runningSequence;
  float m_time;
  float CenterLayerTime;
  float SequenceTime;
  float MaxVertical;
  float SurfaceTime;
  bool m_kuroWillFlyOverSurface;
  struct ActionMethod * FinishAction;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct CatAndMouseRoomCController {
  struct CatAndMouseRoomCController__Class *klass;
  struct MonitorData *monitor;
  struct CatAndMouseRoomCController__Fields fields;
};
struct CatAndMouseRoomCController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct CatAndMouseRoomCController__StaticFields {
};
struct CatAndMouseRoomCController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatAndMouseRoomCController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatAndMouseRoomCController__VTable vtable;
};

struct CatAndMouseRoomDController__Fields {
  struct MonoBehaviour__Fields _;
  struct BaseAnimator * AttackSpriteAnimator;
  struct Renderer * KuroSprite;
  struct AnimationCurve * PositionXToCameraWeightCurve;
  struct AnimationCurve * PositionXToPlayerWeightCurve;
  struct AnimationCurve * PositionYToCameraWeightCurve;
  struct Vector3 PositionToCameraOffset;
  struct SoundProvider * AttackSoundProvider;
  struct Vector3 m_originalPosition;
  bool m_runningSequence;
  float m_time;
  float CenterLayerTime;
  float SequenceTime;
  float MaxPositionX;
  float MaxPositionEscapedX;
  struct ActionMethod * FinishAction;
  struct Vector3 m_playerPosition;
  bool m_escaped;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct CatAndMouseRoomDController {
  struct CatAndMouseRoomDController__Class *klass;
  struct MonitorData *monitor;
  struct CatAndMouseRoomDController__Fields fields;
};
struct CatAndMouseRoomDController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
};
struct CatAndMouseRoomDController__StaticFields {
};
struct CatAndMouseRoomDController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatAndMouseRoomDController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatAndMouseRoomDController__VTable vtable;
};

struct CatAndMouseRoomShadow__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * Zone;
  struct Rect m_bounds;
  struct LegacyTransparencyAnimator * TransparencyAnimator;
  struct ScaleAnimator * ScaleAnimator;
  struct CatAndMouseRoomTimerController * Timer;
};
struct CatAndMouseRoomShadow {
  struct CatAndMouseRoomShadow__Class *klass;
  struct MonitorData *monitor;
  struct CatAndMouseRoomShadow__Fields fields;
};
struct CatAndMouseRoomTimerController__Fields {
  struct Suspendable__Fields _;
  float RoomTime;
  struct GameObject * RoomController;
  struct SoundSource * KuroAlertSound;
  struct SoundSource * KuroWingFlapSound;
  struct SoundSource * KuroGettingNearSound;
  struct SoundSource * KuroFlyOffSound;
  float m_time;
  bool m_active;
  struct LegacyTimelineSequence * FeedbackSequence;
  bool _IsSuspended_k__BackingField;
};
struct CatAndMouseRoomTimerController {
  struct CatAndMouseRoomTimerController__Class *klass;
  struct MonitorData *monitor;
  struct CatAndMouseRoomTimerController__Fields fields;
};
struct CatAndMouseRoomTimerController__VTable {
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
struct CatAndMouseRoomTimerController__StaticFields {
};
struct CatAndMouseRoomTimerController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatAndMouseRoomTimerController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatAndMouseRoomTimerController__VTable vtable;
};
struct CatAndMouseRoomShadow__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CatAndMouseRoomShadow__StaticFields {
};
struct CatAndMouseRoomShadow__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CatAndMouseRoomShadow__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CatAndMouseRoomShadow__VTable vtable;
};

struct BerryCelebrationController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * BerryCelebrationSpriteAnimator;
  struct TextureAnimation * BerryCelebrationAnimation;
  struct MovieTextureController * MovieTextureController;
  struct GameObject * Rope;
  struct SoundProvider * IntroSoundProvider;
  struct SoundProvider * LoopSoundProvider;
  float IntroFadeInDuration;
  float LoopFadeInDuration;
  float m_introLength;
};
struct BerryCelebrationController {
  struct BerryCelebrationController__Class *klass;
  struct MonitorData *monitor;
  struct BerryCelebrationController__Fields fields;
};
struct BerryCelebrationController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BerryCelebrationController__StaticFields {
};
struct BerryCelebrationController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BerryCelebrationController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BerryCelebrationController__VTable vtable;
};

struct BerryTreeController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * NaruSpriteAnimator;
  struct SpriteAnimator * TreeSpriteAnimator;
  struct TextureAnimation * NaruAnimationA;
  struct TextureAnimation * NaruAnimationB;
  struct TextureAnimation * NaruAnimationC;
  struct TextureAnimation * NaruAnimationD;
  struct TextureAnimation * TreeAnimationA;
  struct TextureAnimation * TreeAnimationB;
  struct TextureAnimation * TreeAnimationC;
  struct TextureAnimation * TreeAnimationD;
  struct TextureAnimation * SeinClimbOnNaruAnimation;
  struct Naru * Naru;
};
struct BerryTreeController {
  struct BerryTreeController__Class *klass;
  struct MonitorData *monitor;
  struct BerryTreeController__Fields fields;
};
struct BerryTreeController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BerryTreeController__StaticFields {
};
struct BerryTreeController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BerryTreeController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BerryTreeController__VTable vtable;
};

enum BushSetupController_State__Enum : int32_t {
  BushSetupController_State__Enum_KneelingRock = 0,
  BushSetupController_State__Enum_KneelingRockToLiftSein = 1,
  BushSetupController_State__Enum_LiftSein = 2,
  BushSetupController_State__Enum_LiftSeinToRockReach = 3,
  BushSetupController_State__Enum_RockReach = 4,
  BushSetupController_State__Enum_RockFall = 5,
  BushSetupController_State__Enum_RockReachToLiftSein = 6,
  BushSetupController_State__Enum_NoticeSein = 7,
};
struct BushSetupController_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum BushSetupController_State__Enum value;
};
struct BushSetupController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * NaruSpriteAnimator;
  struct SpriteAnimator * SeinSpriteAnimator;
  struct TextureAnimation * KneelingRockAnimation;
  struct TextureAnimation * KneelingRockToLiftSeinAnimation;
  struct TextureAnimation * LiftSeinAnimation;
  struct TextureAnimation * LiftSeinToRockReachAnimation;
  struct TextureAnimation * RockReachAnimation;
  struct TextureAnimation * RockFallSeinAnimation;
  struct TextureAnimation * RockFallNaruAnimation;
  struct TextureAnimation * RockReachToLiftSeinAnimation;
  struct TextureAnimation * NoticeSeinAnimation;
  struct GameObject * LightCeremonyEffects;
  struct MovieTextureController * MovieTextureController;
  enum BushSetupController_State__Enum CurrentState;
  float m_stateCurrentTime;
};
struct BushSetupController {
  struct BushSetupController__Class *klass;
  struct MonitorData *monitor;
  struct BushSetupController__Fields fields;
};
struct BushSetupController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BushSetupController__StaticFields {
};
struct BushSetupController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BushSetupController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BushSetupController__VTable vtable;
};

struct CaveSleepController__Fields {
  struct MonoBehaviour__Fields _;
  struct BabySein * BabySein;
  struct SpriteAnimator * BabySeinSpriteAnimator;
  struct TextureAnimation * WakeUpAnimation;
  struct GameObject * Fader;
  float FadeOutDuration;
  struct SoundProvider * IntroSoundProvider;
  struct SoundProvider * LoopSoundProvider;
  float IntroFadeInDuration;
  float LoopFadeInDuration;
  float m_introLength;
};
struct CaveSleepController {
  struct CaveSleepController__Class *klass;
  struct MonitorData *monitor;
  struct CaveSleepController__Fields fields;
};
struct CaveSleepController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CaveSleepController__StaticFields {
};
struct CaveSleepController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CaveSleepController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CaveSleepController__VTable vtable;
};

struct DayFourBushSetupController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * SeinSpriteAnimator;
  struct SpriteAnimator * LeafSpriteAnimator;
  struct SpriteAnimator * BranchSpriteAnimator;
  struct SpriteAnimator * BerriesSpriteAnimator;
  struct TextureAnimation * BerriesFallAnimation;
  struct TextureAnimation * BranchBreakAnimation;
  struct TextureAnimation * BranchIdleAnimation;
  struct TextureAnimation * LeafIdleAnimation;
  struct TextureAnimation * SeinFloatAnimation;
  struct Transform * CameraTargetDuringSequence;
  struct BabySein * BabySeinWithBerries;
  struct MovieTextureController * MovieTextureController;
  struct Transform * SeinSpawnPisition;
  bool m_branchAnimationWasPlayed;
  bool m_berriesAnimationWasPlayed;
};
struct DayFourBushSetupController {
  struct DayFourBushSetupController__Class *klass;
  struct MonitorData *monitor;
  struct DayFourBushSetupController__Fields fields;
};
struct DayFourBushSetupController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DayFourBushSetupController__StaticFields {
};
struct DayFourBushSetupController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DayFourBushSetupController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DayFourBushSetupController__VTable vtable;
};

struct DayThreeBridgeSetupController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * NaruCollapseSpriteAnimator;
  struct SpriteAnimator * BridgeCollapseASpriteAnimator;
  struct SpriteAnimator * BridgeCollapseBSpriteAnimator;
  struct TextureAnimation * BridgeCollapseAAnimation;
  struct TextureAnimation * BridgeCollapseBAnimation;
  struct TextureAnimation * BridgeCollapseNaruAnimation;
  struct GameObject * Bridge;
  struct Collider * SurfaceColliderBeforeCrash;
  struct Collider * SurfaceColliderAfterCrash;
  struct Naru * Naru;
  struct Transform * NaruSpawnPisition;
};
struct DayThreeBridgeSetupController {
  struct DayThreeBridgeSetupController__Class *klass;
  struct MonitorData *monitor;
  struct DayThreeBridgeSetupController__Fields fields;
};
struct DayThreeBridgeSetupController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DayThreeBridgeSetupController__StaticFields {
};
struct DayThreeBridgeSetupController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DayThreeBridgeSetupController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DayThreeBridgeSetupController__VTable vtable;
};

enum DayThreeTreeSetupController_State__Enum : int32_t {
  DayThreeTreeSetupController_State__Enum_None = 0,
  DayThreeTreeSetupController_State__Enum_BranchIdle = 1,
  DayThreeTreeSetupController_State__Enum_BranchBackwards = 2,
  DayThreeTreeSetupController_State__Enum_BranchReach = 3,
  DayThreeTreeSetupController_State__Enum_Jump = 4,
  DayThreeTreeSetupController_State__Enum_Fall = 5,
  DayThreeTreeSetupController_State__Enum_JumpForward = 6,
};
struct DayThreeTreeSetupController_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum DayThreeTreeSetupController_State__Enum value;
};
struct DayThreeTreeSetupController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * NaruClimbSpriteAnimator;
  struct SpriteAnimatorWithTransitions * NaruBranchSpriteAnimatorWithTransitions;
  struct SpriteAnimator * TreeSpriteAnimator;
  struct TextureAnimation * NaruBranchGrabAnimation;
  struct TextureAnimationWithTransitions * NaruBranchIdleAnimation;
  struct TextureAnimationWithTransitions * NaruBranchReachAnimation;
  struct TextureAnimationWithTransitions * NaruBranchBackwardsAnimation;
  struct TextureAnimationWithTransitions * NaruBranchJumpAnimation;
  struct TextureAnimationWithTransitions * NaruBranchJumpIdleAnimation;
  struct TextureAnimationWithTransitions * NaruBranchJumpIdleCollapseAnimation;
  struct CharacterAnimationSystem * NaruBranchAnimationSystem;
  enum DayThreeTreeSetupController_State__Enum CurrentState;
  float m_stateCurrentTime;
  int32_t m_jumpsCount;
  struct MovieTextureController * MovieTextureController;
  struct TextureAnimationWithTransitions * TextureAnimationWithTransitions;
};
struct DayThreeTreeSetupController {
  struct DayThreeTreeSetupController__Class *klass;
  struct MonitorData *monitor;
  struct DayThreeTreeSetupController__Fields fields;
};
struct DayThreeTreeSetupController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct DayThreeTreeSetupController__StaticFields {
};
struct DayThreeTreeSetupController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DayThreeTreeSetupController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DayThreeTreeSetupController__VTable vtable;
};

struct PondController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * EscapePondSpriteAnimator;
  struct TextureAnimation * EscapePondAnimation;
  struct GameObject * BabySein;
  struct GameObject * BabySeinDeathEffect;
  float DeathEffectDuration;
  float m_deathEffectTimer;
  struct GameObject * m_deathEffect;
  bool m_wasDeathEffect;
};
struct PondController {
  struct PondController__Class *klass;
  struct MonitorData *monitor;
  struct PondController__Fields fields;
};
struct PondController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PondController__StaticFields {
};
struct PondController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PondController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PondController__VTable vtable;
};

struct TheGiftSetupController__Fields {
  struct MonoBehaviour__Fields _;
  struct SpriteAnimator * FindSeinSpriteAnimator;
  struct SpriteAnimator * GlowSpriteAnimator;
  struct TextureAnimation * FindSeinTextureAnimation;
  struct TextureAnimation * GlowTextureAnimation;
  struct ActionMethod * OnNaruCollidedAction;
  struct ActionMethod * OnFinishedAction;
  struct GameObject * Leaf;
  struct Transform * CameraTarget;
};
struct TheGiftSetupController {
  struct TheGiftSetupController__Class *klass;
  struct MonitorData *monitor;
  struct TheGiftSetupController__Fields fields;
};
struct TheGiftSetupController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TheGiftSetupController__StaticFields {
};
struct TheGiftSetupController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TheGiftSetupController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TheGiftSetupController__VTable vtable;
};

struct RisingWater__Fields {
  struct SaveSerialize__Fields _;
  float Speed;
  float MinDistanceToAccelerate;
  float AcceleratedSpeed;
  float m_currentSpeed;
  float Acceleration;
  float Deceleration;
  struct AnimationCurve * EasySpeedOverDistance;
  struct AnimationCurve * SpeedOverDistance;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct RisingWater {
  struct RisingWater__Class *klass;
  struct MonitorData *monitor;
  struct RisingWater__Fields fields;
};
struct RisingWater__VTable {
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
struct RisingWater__StaticFields {
  struct RisingWater * m_instance;
};
struct RisingWater__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RisingWater__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RisingWater__VTable vtable;
};

struct RisingWaterTrigger__Fields {
  struct SaveSerialize__Fields _;
  bool m_active;
  struct ActionMethod * Action;
};
struct RisingWaterTrigger {
  struct RisingWaterTrigger__Class *klass;
  struct MonitorData *monitor;
  struct RisingWaterTrigger__Fields fields;
};
struct RisingWaterTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
};
struct RisingWaterTrigger__StaticFields {
};
struct RisingWaterTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RisingWaterTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RisingWaterTrigger__VTable vtable;
};

struct SetWaterRisingPropertiesAction__Fields {
  struct ActionMethod__Fields _;
  float Speed;
};
struct SetWaterRisingPropertiesAction {
  struct SetWaterRisingPropertiesAction__Class *klass;
  struct MonitorData *monitor;
  struct SetWaterRisingPropertiesAction__Fields fields;
};
struct SetWaterRisingPropertiesAction__VTable {
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
struct SetWaterRisingPropertiesAction__StaticFields {
};
struct SetWaterRisingPropertiesAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetWaterRisingPropertiesAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetWaterRisingPropertiesAction__VTable vtable;
};

struct FallCutsceneCameraOffsetController__Fields {
  struct MonoBehaviour__Fields _;
  float PressUpSpeed;
  float PressDownSpeed;
  float MaxOffset;
  float MinOffset;
  struct CameraOffsetZone * CameraOffsetZone;
};
struct FallCutsceneCameraOffsetController {
  struct FallCutsceneCameraOffsetController__Class *klass;
  struct MonitorData *monitor;
  struct FallCutsceneCameraOffsetController__Fields fields;
};
struct FallCutsceneCameraOffsetController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct FallCutsceneCameraOffsetController__StaticFields {
};
struct FallCutsceneCameraOffsetController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FallCutsceneCameraOffsetController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FallCutsceneCameraOffsetController__VTable vtable;
};

struct ActivateWindVentAction__Fields {
  struct ActionMethod__Fields _;
  struct WindVent * WindVent;
};
struct ActivateWindVentAction {
  struct ActivateWindVentAction__Class *klass;
  struct MonitorData *monitor;
  struct ActivateWindVentAction__Fields fields;
};
enum WindVent_State__Enum : int32_t {
  WindVent_State__Enum_InitialState = 0,
  WindVent_State__Enum_Anticipation = 1,
  WindVent_State__Enum_Burst = 2,
  WindVent_State__Enum_CoolDown = 3,
};
struct WindVent_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WindVent_State__Enum value;
};
struct WindVent__Fields {
  struct SaveSerialize__Fields _;
  bool StartAutomatically;
  bool Looping;
  float TimeOffset;
  float AnticipationDuration;
  float BurstDuration;
  float CooldownDuration;
  struct GameObject * AnticipationEffect;
  struct GameObject * BurstEffect;
  struct GameObject * ImpactEffect;
  struct Transform * ImpactEffectLocator;
  struct GameObject * VentGraphic;
  struct BaseAnimator * WindAnimator;
  struct GameObject * WindBeam;
  struct GameObject * KillZone;
  float m_currentStateTime;
  struct ParticleSystem__Array * m_windBeamParticleSystems;
  bool m_hasErrupted;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  enum WindVent_State__Enum m_state;
};
struct WindVent {
  struct WindVent__Class *klass;
  struct MonitorData *monitor;
  struct WindVent__Fields fields;
};
struct WindVent__VTable {
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
  VirtualInvokeData GetDynamicGraphicTarget;
};
struct WindVent__StaticFields {
};
struct WindVent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindVent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindVent__VTable vtable;
};
struct ActivateWindVentAction__VTable {
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
struct ActivateWindVentAction__StaticFields {
};
struct ActivateWindVentAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ActivateWindVentAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ActivateWindVentAction__VTable vtable;
};

enum WindSegment_State__Enum : int32_t {
  WindSegment_State__Enum_Start = 0,
  WindSegment_State__Enum_Timed = 1,
  WindSegment_State__Enum_End = 2,
};
struct WindSegment_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum WindSegment_State__Enum value;
};
struct WindSegment__Fields {
  struct SaveSerialize__Fields _;
  float MaxTime;
  float MinTime;
  struct WindVent * FinishVent;
  float m_remainingTime;
  struct Transform * Trigger;
  struct Rect m_bounds;
  enum WindSegment_State__Enum m_state;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct WindSegment {
  struct WindSegment__Class *klass;
  struct MonitorData *monitor;
  struct WindSegment__Fields fields;
};
struct WindSegment__VTable {
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
struct WindSegment__StaticFields {
};
struct WindSegment__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindSegment__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindSegment__VTable vtable;
};

struct WindShaftController__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_WindSegment_ * Segments;
};
struct WindShaftController {
  struct WindShaftController__Class *klass;
  struct MonitorData *monitor;
  struct WindShaftController__Fields fields;
};
struct __declspec(align(8)) List_1_WindSegment___Fields {
  struct WindSegment__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_WindSegment_ {
  struct List_1_WindSegment___Class *klass;
  struct MonitorData *monitor;
  struct List_1_WindSegment___Fields fields;
};
struct WindSegment__Array {
  struct WindSegment__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct WindSegment * vector[32];
};
struct IEnumerator_1_WindSegment_ {
  struct IEnumerator_1_WindSegment___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_WindSegment___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_WindSegment___StaticFields {
};
struct IEnumerator_1_WindSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_WindSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_WindSegment___VTable vtable;
};
struct List_1_WindSegment___VTable {
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
struct List_1_WindSegment___StaticFields {
  struct WindSegment__Array * _emptyArray;
};
struct List_1_WindSegment___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_WindSegment___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_WindSegment___VTable vtable;
};
struct WindShaftController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WindShaftController__StaticFields {
  struct WindShaftController * Instance;
};
struct WindShaftController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WindShaftController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WindShaftController__VTable vtable;
};

struct DestroyMistTorchAction__Fields {
  struct ActionMethod__Fields _;
};
struct DestroyMistTorchAction {
  struct DestroyMistTorchAction__Class *klass;
  struct MonitorData *monitor;
  struct DestroyMistTorchAction__Fields fields;
};
struct DestroyMistTorchAction__VTable {
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
};}