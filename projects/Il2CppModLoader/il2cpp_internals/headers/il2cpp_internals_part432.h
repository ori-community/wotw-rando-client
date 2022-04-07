namespace app {
struct __declspec(align(8)) MortarEntity_AimVeloCache_Packer__Fields {
  float VeloXMin;
  float VeloXMax;
  float VeloYMin;
  float VeloYMax;
  int32_t VeloXBitMask;
  int32_t VeloYBitMask;
  int32_t VeloXBitShift;
  int32_t VeloYBitShift;
};
struct MortarEntity_AimVeloCache_Packer {
  struct MortarEntity_AimVeloCache_Packer__Class *klass;
  struct MonitorData *monitor;
  struct MortarEntity_AimVeloCache_Packer__Fields fields;
};
struct __declspec(align(8)) MortarEntity_AimVeloCache_EntityParams__Fields {
  struct MortarEntity * m_entity;
  struct Vector3 m_entityPosFromGeneration;
  struct Vector3 m_entityUpFromGeneration;
};
struct MortarEntity_AimVeloCache_EntityParams {
  struct MortarEntity_AimVeloCache_EntityParams__Class *klass;
  struct MonitorData *monitor;
  struct MortarEntity_AimVeloCache_EntityParams__Fields fields;
};
enum CharacterInteractableType__Enum : int32_t {
  CharacterInteractableType__Enum_PickupHoldable = 0,
  CharacterInteractableType__Enum_NPCInteraction = 1,
};
struct CharacterInteractableType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CharacterInteractableType__Enum value;
};
struct ICharacter {
  struct ICharacter__Class *klass;
  struct MonitorData *monitor;
};
enum CharacterInteractableActivationMode__Enum : int32_t {
  CharacterInteractableActivationMode__Enum_WaitForInput = 0,
  CharacterInteractableActivationMode__Enum_Proximity = 1,
};
struct CharacterInteractableActivationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum CharacterInteractableActivationMode__Enum value;
};
struct BaurEntity__Fields {
  struct NPCEntity__Fields _;
  struct BlendAnimation * LookAnimationLoop;
  struct FloatAnimationParameter * LookAngleParameter;
  struct MoonTimeline * SleepIdleTimeline;
  struct MoonTimeline * UnblockedSleepIdleTimeline;
  struct MoonTimeline * SitIdleTimeline;
  struct MoonTimeline * UnblockGateTimeline;
  struct MoonTimeline * WakeUpTimeline;
  struct MoonTimeline * SleepTalkTimeline;
  struct MoonTimeline * WiggleTimeline;
  struct MoonTimeline * HitTimeline;
  struct SerializedIntUberState * BaurState;
  float LookOffsetX;
  struct SerializedBooleanUberState * IsWinterForestThawed;
  struct MoonTimeline * m_currentIdleTimeline;
  struct ActiveAnimationHandle m_lookAnim;
  struct String * m_interactionActorName;
  struct Transform * InteractionAnchorLeft;
  struct Transform * InteractionOffsetTransform;
  struct CameraOffsetZone * SleepingCameraOffset;
  struct CameraOffsetZone * AwakeCameraOffset;
  struct Event_1 * SnoreLoopSoundEvent;
  struct SoundHost * HeadSoundHost;
  struct EventTriggerAnimator * SnoreSoundEventTrigger;
  struct WwiseEventSystem_SoundHandle m_snoringSoundHandler;
  struct IUberState__Array * m_affectingUberStates;
};
struct BaurEntity {
  struct BaurEntity__Class *klass;
  struct MonitorData *monitor;
  struct BaurEntity__Fields fields;
};
enum InteractiveMessageBox_State__Enum : int32_t {
  InteractiveMessageBox_State__Enum_Writing = 0,
  InteractiveMessageBox_State__Enum_Completed = 1,
  InteractiveMessageBox_State__Enum_Inactive = 2,
};
struct InteractiveMessageBox_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InteractiveMessageBox_State__Enum value;
};
enum InteractiveMessageBox_ProgressInput__Enum : int32_t {
  InteractiveMessageBox_ProgressInput__Enum_Any = 0,
  InteractiveMessageBox_ProgressInput__Enum_DialogueAdvance = 1,
};
struct InteractiveMessageBox_ProgressInput__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum InteractiveMessageBox_ProgressInput__Enum value;
};
struct InteractiveMessageBox__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * MessageBox;
  enum InteractiveMessageBox_State__Enum m_state;
  struct GameObject * Button;
  struct BaseAnimator * ButtonAnimator;
  float WaitTimeFirstMessage;
  float m_remainingWaitTime;
  bool m_prevLockState;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
  struct SoundHost * SoundHost;
  struct SoundSource * MessageProviderSoundSource;
  struct SoundSource * MessageFinishedSound;
  struct SoundSource * NextMessageSound;
  struct SoundSource * CloseMessageBoxSound;
  bool CanCancel;
  bool CanOpenInventory;
  bool CanPlayInteractionSounds;
  float m_messageTime;
  enum InteractiveMessageBox_ProgressInput__Enum ProgressOnInput;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct InteractiveMessageBox {
  struct InteractiveMessageBox__Class *klass;
  struct MonitorData *monitor;
  struct InteractiveMessageBox__Fields fields;
};
struct WWiseSoundAnimatorEntity__Fields {
  struct TimelineEntity__Fields _;
  struct Event_1 * Event;
  struct Switch_1 * Switch;
  struct State * State;
  struct Trigger * Trigger;
  struct SoundHost * SoundHost;
  struct MoonReference_1_Moon_Wwise_SoundHost_ * MoonSoundHost;
  bool FireAndForget;
  int32_t MillisecondsStopFadeDuration;
  enum AkCurveInterpolation__Enum FadeCurve;
  bool LoopWithParent;
  float m_time;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
  bool m_waapiObjectRegistered;
  uint32_t m_idToStopWithOuterScope;
  bool _LoopContext_k__BackingField;
};
struct WWiseSoundAnimatorEntity {
  struct WWiseSoundAnimatorEntity__Class *klass;
  struct MonitorData *monitor;
  struct WWiseSoundAnimatorEntity__Fields fields;
};
enum SeinOnGroundCondition_Characters__Enum : int32_t {
  SeinOnGroundCondition_Characters__Enum_Ori = 0,
  SeinOnGroundCondition_Characters__Enum_Current = 1,
};
struct SeinOnGroundCondition_Characters__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinOnGroundCondition_Characters__Enum value;
};
struct SeinOnGroundCondition__Fields {
  struct Condition_1__Fields _;
  enum SeinOnGroundCondition_Characters__Enum CharacterToCheck;
  bool RequireGrounded;
  bool RequireSafe;
};
struct SeinOnGroundCondition {
  struct SeinOnGroundCondition__Class *klass;
  struct MonitorData *monitor;
  struct SeinOnGroundCondition__Fields fields;
};
enum PickupMessageIcon_PickupType__Enum : int32_t {
  PickupMessageIcon_PickupType__Enum_Health = 0,
  PickupMessageIcon_PickupType__Enum_Energy = 1,
  PickupMessageIcon_PickupType__Enum_Shard = 2,
  PickupMessageIcon_PickupType__Enum_SlotUpgrade = 3,
  PickupMessageIcon_PickupType__Enum_Other = 4,
  PickupMessageIcon_PickupType__Enum_QuestItem = 5,
};
struct PickupMessageIcon_PickupType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PickupMessageIcon_PickupType__Enum value;
};
struct __declspec(align(8)) SeinPickupProcessor_CollectableInfo__Fields {
  bool ShowOnlyFirstTime;
  enum ShowFixedTimeTextEntity_MessageType__Enum MessageType;
  struct MessageProvider * Message;
  struct MessageProvider * Name;
  enum PickupMessageIcon_PickupType__Enum PickupType;
  struct GameObject * Icon;
  struct Texture2D * IconTexture;
  struct GameObject * InHandsPrefab;
  float WaitTime;
  struct Event_1 * SoundEvent;
  struct Event_1 * CollectedAfterFirstTimeSoundEvent;
};
struct SeinPickupProcessor_CollectableInfo {
  struct SeinPickupProcessor_CollectableInfo__Class *klass;
  struct MonitorData *monitor;
  struct SeinPickupProcessor_CollectableInfo__Fields fields;
};
struct ExpText__Fields {
  struct Suspendable__Fields _;
  struct LegacyScaleAnimator * ScaleShake;
  struct LegacyTransparencyAnimator * TransparencyAnimator;
  bool _IsSuspended_k__BackingField;
  float m_time;
  int32_t m_amount;
};
struct ExpText {
  struct ExpText__Class *klass;
  struct MonitorData *monitor;
  struct ExpText__Fields fields;
};
struct LegacyScaleAnimator__Fields {
  struct LegacyAnimator__Fields _;
  struct GameObject * Target;
  struct Vector3 ScaleAxisFilter;
  struct Transform * m_transform;
  struct Vector3 m_originalScale;
  struct Renderer * m_renderer;
};
struct LegacyScaleAnimator {
  struct LegacyScaleAnimator__Class *klass;
  struct MonitorData *monitor;
  struct LegacyScaleAnimator__Fields fields;
};
struct __declspec(align(8)) SpiritShardPickupContext__Fields {
  enum SpiritShardType__Enum SpiritShardType;
};
struct SpiritShardPickupContext {
  struct SpiritShardPickupContext__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardPickupContext__Fields fields;
};
struct PickupBase__Fields {
  struct SaveSerialize__Fields _;
  struct SerializedBooleanUberState * CollectedUberState;
  bool m_hasSerializedUberState;
  bool m_cachedSerializedState;
  bool m_collected;
  struct SoundProvider * CollectedSoundProvider;
  struct Action * OnCollectedEvent;
  struct ActionMethod * OnCollectedAction;
  bool PerformPickupSequence;
  float DelayBeforeCollectable;
  bool DestroyOnCollect;
  struct GameObject * DestroyTarget;
  struct GameObject * CollectedEffect;
  struct CollectablePlaceholder * _Placeholder_k__BackingField;
  float Radius;
  bool FrustrumOptimized;
  struct Component_1__Array * m_onKillRecievers;
  struct Transform * m_transform;
  float m_currentTime;
  struct Bounds m_bounds;
  bool m_insideFrustum;
};
struct PickupBase {
  struct PickupBase__Class *klass;
  struct MonitorData *monitor;
  struct PickupBase__Fields fields;
};
struct CollectablePlaceholder__Fields {
  struct SaveSerialize__Fields _;
  struct SerializedBooleanUberState * CollectedUberState;
  float RespawnTime;
  struct GameObject * Prefab;
  bool IsStatic;
  bool UseDebug;
  struct GameObject * DisableGO;
  struct Action * OnCollectedEvent;
  struct CollectableCheckpointSettings * CollectableCheckpoint;
  float m_remainingRespawnTime;
  struct GameObject * m_instance;
  bool m_collected;
  bool m_listeningToLandEvent;
  bool m_hasVisibleOnWorldMap;
  struct VisibleOnWorldMap * m_visibleOnWorldMap;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct IUberState__Array * m_affectingUberStates;
};
struct CollectablePlaceholder {
  struct CollectablePlaceholder__Class *klass;
  struct MonitorData *monitor;
  struct CollectablePlaceholder__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_CollectablePlaceholder___Fields {
  struct List_1_CollectablePlaceholder_ * m_objects;
};
struct AllContainer_1_CollectablePlaceholder_ {
  struct AllContainer_1_CollectablePlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_CollectablePlaceholder___Fields fields;
};
struct __declspec(align(8)) List_1_CollectablePlaceholder___Fields {
  struct CollectablePlaceholder__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CollectablePlaceholder_ {
  struct List_1_CollectablePlaceholder___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CollectablePlaceholder___Fields fields;
};
struct CollectablePlaceholder__Array {
  struct CollectablePlaceholder__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CollectablePlaceholder * vector[32];
};
struct IEnumerator_1_CollectablePlaceholder_ {
  struct IEnumerator_1_CollectablePlaceholder___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CollectableCheckpointSettings__Fields {
  bool CreateCheckPointOnCollect;
  struct Vector3 CheckpointPositionOffset;
};
struct CollectableCheckpointSettings {
  struct CollectableCheckpointSettings__Class *klass;
  struct MonitorData *monitor;
  struct CollectableCheckpointSettings__Fields fields;
};
struct VisibleOnWorldMap__Fields {
  struct GuidOwner__Fields _;
  enum WorldMapIconType__Enum Icon;
  struct Vector2 Offset;
  bool RevealWhenOnScreen;
  struct Condition_1 * RevealCondition;
  bool IsSecret;
  struct SerializedBooleanUberState * VisibilityOverrideUberState;
  struct ConditionUberState * VisibilityOverrideCondition;
  bool m_alwaysAddToAll;
};
struct VisibleOnWorldMap {
  struct VisibleOnWorldMap__Class *klass;
  struct MonitorData *monitor;
  struct VisibleOnWorldMap__Fields fields;
};
struct PickupCameraTarget__Fields {
  struct PickupBase__Fields _;
  struct SceneRoot * m_sceneRoot;
  bool UseAsCameraTarget;
};
struct PickupCameraTarget {
  struct PickupCameraTarget__Class *klass;
  struct MonitorData *monitor;
  struct PickupCameraTarget__Fields fields;
};
struct QuestItemPickup__Fields {
  struct PickupCameraTarget__Fields _;
  enum QuestItemType__Enum ItemType;
  struct MessageProvider * PickupName;
  struct MessageProvider * PickupMessage;
  struct GameObject * PickupMessageIcon;
  struct Texture2D * PickupIcon;
  struct GameObject * InHandsPrefab;
};
struct QuestItemPickup {
  struct QuestItemPickup__Class *klass;
  struct MonitorData *monitor;
  struct QuestItemPickup__Fields fields;
};
enum ExpOrbPickup_ExpOrbMessageType__Enum : int32_t {
  ExpOrbPickup_ExpOrbMessageType__Enum_None = 0,
  ExpOrbPickup_ExpOrbMessageType__Enum_PickupSmall = 1,
  ExpOrbPickup_ExpOrbMessageType__Enum_PickupMedium = 2,
  ExpOrbPickup_ExpOrbMessageType__Enum_PickupLarge = 3,
};
struct ExpOrbPickup_ExpOrbMessageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ExpOrbPickup_ExpOrbMessageType__Enum value;
};
struct ExpOrbPickup__Fields {
  struct PickupBase__Fields _;
  enum ExpOrbPickup_ExpOrbMessageType__Enum MessageType;
  int32_t Amount;
};
struct ExpOrbPickup {
  struct ExpOrbPickup__Class *klass;
  struct MonitorData *monitor;
  struct ExpOrbPickup__Fields fields;
};
struct OrePickup__Fields {
  struct PickupCameraTarget__Fields _;
  int32_t Amount;
};
struct OrePickup {
  struct OrePickup__Class *klass;
  struct MonitorData *monitor;
  struct OrePickup__Fields fields;
};
struct SkillPointPickup__Fields {
  struct PickupCameraTarget__Fields _;
  int32_t Amount;
};
struct SkillPointPickup {
  struct SkillPointPickup__Class *klass;
  struct MonitorData *monitor;
  struct SkillPointPickup__Fields fields;
};
struct EnergyOrbPickup__Fields {
  struct PickupBase__Fields _;
  int32_t Amount;
  int32_t m_originalAmount;
};
struct EnergyOrbPickup {
  struct EnergyOrbPickup__Class *klass;
  struct MonitorData *monitor;
  struct EnergyOrbPickup__Fields fields;
};
struct MaxEnergyContainerPickup__Fields {
  struct PickupCameraTarget__Fields _;
  int32_t Amount;
};
struct MaxEnergyContainerPickup {
  struct MaxEnergyContainerPickup__Class *klass;
  struct MonitorData *monitor;
  struct MaxEnergyContainerPickup__Fields fields;
};
struct MaxEnergyHalfContainerPickup__Fields {
  struct PickupCameraTarget__Fields _;
  struct GameObject * CollectedEffectSecondHalf;
};
struct MaxEnergyHalfContainerPickup {
  struct MaxEnergyHalfContainerPickup__Class *klass;
  struct MonitorData *monitor;
  struct MaxEnergyHalfContainerPickup__Fields fields;
};
enum KeystonePickup_KeystoneType__Enum : int32_t {
  KeystonePickup_KeystoneType__Enum_Keystone = 0,
  KeystonePickup_KeystoneType__Enum_Eyestone = 1,
};
struct KeystonePickup_KeystoneType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KeystonePickup_KeystoneType__Enum value;
};
struct KeystonePickup__Fields {
  struct PickupCameraTarget__Fields _;
  enum KeystonePickup_KeystoneType__Enum Type;
  int32_t Amount;
  struct GameObject * KeystoneFlyToUIPrefab;
  struct VisibleOnWorldMap * m_visibleOnWorldMap;
  bool m_currentState;
};
struct KeystonePickup {
  struct KeystonePickup__Class *klass;
  struct MonitorData *monitor;
  struct KeystonePickup__Fields fields;
};
struct RestoreHealthPickup__Fields {
  struct PickupBase__Fields _;
  int32_t Amount;
};
struct RestoreHealthPickup {
  struct RestoreHealthPickup__Class *klass;
  struct MonitorData *monitor;
  struct RestoreHealthPickup__Fields fields;
};
struct MaxHealthContainerPickup__Fields {
  struct PickupCameraTarget__Fields _;
};
struct MaxHealthContainerPickup {
  struct MaxHealthContainerPickup__Class *klass;
  struct MonitorData *monitor;
  struct MaxHealthContainerPickup__Fields fields;
};
struct MaxHealthHalfContainerPickup__Fields {
  struct PickupCameraTarget__Fields _;
  struct GameObject * CollectedEffectSecondHalf;
};
struct MaxHealthHalfContainerPickup {
  struct MaxHealthHalfContainerPickup__Class *klass;
  struct MonitorData *monitor;
  struct MaxHealthHalfContainerPickup__Fields fields;
};
struct MapStonePickup__Fields {
  struct PickupCameraTarget__Fields _;
  int32_t Amount;
};
struct MapStonePickup {
  struct MapStonePickup__Class *klass;
  struct MonitorData *monitor;
  struct MapStonePickup__Fields fields;
};
struct SpiritShardPickup__Fields {
  struct PickupCameraTarget__Fields _;
  enum SpiritShardType__Enum SpiritShardType;
};
struct SpiritShardPickup {
  struct SpiritShardPickup__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardPickup__Fields fields;
};
struct ShardSlotUpgradePickup__Fields {
  struct PickupCameraTarget__Fields _;
  struct VisibleOnWorldMap * m_visibleOnWorldMap;
};
struct ShardSlotUpgradePickup {
  struct ShardSlotUpgradePickup__Class *klass;
  struct MonitorData *monitor;
  struct ShardSlotUpgradePickup__Fields fields;
};
struct PlayerAbilities__Fields {
  struct MonoBehaviour__Fields _;
  struct PlayerUberStateDescriptor * StateDescriptor;
  struct Dictionary_2_AbilityType_System_Boolean_ * m_abilitiesCache;
  struct CharacterAbility * Bash;
  struct CharacterAbility * ChargeFlame;
  struct CharacterAbility * WallJump;
  struct CharacterAbility * Stomp;
  struct CharacterAbility * DoubleJump;
  struct CharacterAbility * ChargeJump;
  struct CharacterAbility * Magnet;
  struct CharacterAbility * UltraMagnet;
  struct CharacterAbility * Climb;
  struct CharacterAbility * Glide;
  struct CharacterAbility * FeatherFlap;
  struct CharacterAbility * SpiritFlame;
  struct CharacterAbility * RapidFire;
  struct CharacterAbility * Digging;
  struct CharacterAbility * DashNew;
  struct CharacterAbility * WaterDash;
  struct CharacterAbility * Drill;
  struct CharacterAbility * SoulEfficiency;
  struct CharacterAbility * WaterBreath;
  struct CharacterAbility * ChargeFlameBlast;
  struct CharacterAbility * ChargeFlameBurn;
  struct CharacterAbility * DoubleJumpUpgrade;
  struct CharacterAbility * BashBuff;
  struct CharacterAbility * UltraDefense;
  struct CharacterAbility * HealthEfficiency;
  struct CharacterAbility * Sense;
  struct CharacterAbility * StompUpgrade;
  struct CharacterAbility * QuickFlame;
  struct CharacterAbility * MapMarkers;
  struct CharacterAbility * EnergyEfficiency;
  struct CharacterAbility * HealthMarkers;
  struct CharacterAbility * EnergyMarkers;
  struct CharacterAbility * AbilityMarkers;
  struct CharacterAbility * Rekindle;
  struct CharacterAbility * Regroup;
  struct CharacterAbility * ChargeFlameEfficiency;
  struct CharacterAbility * UltraSoulFlame;
  struct CharacterAbility * SoulFlameEfficiency;
  struct CharacterAbility * SplitFlameUpgrade;
  struct CharacterAbility * SparkFlame;
  struct CharacterAbility * CinderFlame;
  struct CharacterAbility * UltraSplitFlame;
  struct CharacterAbility * Grenade;
  struct CharacterAbility * Dash;
  struct CharacterAbility * GrenadeUpgrade;
  struct CharacterAbility * ChargeDash;
  struct CharacterAbility * AirDash;
  struct CharacterAbility * GrenadeEfficiency;
  struct CharacterAbility * Bounce;
  struct CharacterAbility * SpiritLeash;
  struct CharacterAbility * SpiritSlash;
  struct CharacterAbility * HeavySpiritSlash;
  struct CharacterAbility * Bow;
  struct CharacterAbility * Hammer;
  struct CharacterAbility * Torch;
  struct CharacterAbility * Sword;
  struct CharacterAbility * Chainsword;
  struct CharacterAbility * Swordstaff;
  struct CharacterAbility * FireburstSpell;
  struct CharacterAbility * FirewhirlSpell;
  struct CharacterAbility * GlowSpell;
  struct CharacterAbility * LockOnSpell;
  struct CharacterAbility * TimeWarpSpell;
  struct CharacterAbility * ShieldSpell;
  struct CharacterAbility * EnergyWallSpell;
  struct CharacterAbility * InvisibilitySpell;
  struct CharacterAbility * TrapSpell;
  struct CharacterAbility * WarpSpell;
  struct CharacterAbility * LightSpell;
  struct CharacterAbility * MindControlSpell;
  struct CharacterAbility * MirageSpell;
  struct CharacterAbility * StickyMineSpell;
  struct CharacterAbility * SpiritSpearSpell;
  struct CharacterAbility * LightSpearSpell;
  struct CharacterAbility * LifeAbsorbSpell;
  struct CharacterAbility * MeditateSpell;
  struct CharacterAbility * ChargeShotSpell;
  struct CharacterAbility * SpiritShardsSpell;
  struct CharacterAbility * SpiritSentrySpell;
  struct CharacterAbility * PowerslideSpell;
  struct CharacterAbility * EarthShatterSpell;
  struct CharacterAbility * JumpShotSpell;
  struct CharacterAbility * RoundupLeashSpell;
  struct CharacterAbility * PowerOfFriendshipSpell;
  struct CharacterAbility * LightningSpell;
  struct CharacterAbility * SpiritFlareSpell;
  struct CharacterAbility * EntanglingRootsSpell;
  struct CharacterAbility * MarkOfTheWildsSpell;
  struct CharacterAbility * HomingMissileSpell;
  struct CharacterAbility * SpiritCrescentSpell;
  struct CharacterAbility * MineSpell;
  struct CharacterAbility * TeleportSpell;
  struct CharacterAbility * ChakramSpell;
  struct CharacterAbility * GoldenSein;
  struct CharacterAbility * BlazeSpell;
  struct CharacterAbility * TurretSpell;
  struct CharacterAbility * Pinned;
  struct CharacterAbility * Leached;
  struct CharacterAbility * Launch;
  struct CharacterAbility * SpiritMagnet;
  struct CharacterAbility * BowCharge;
  struct CharacterAbility * SwordCharge;
  struct CharacterAbility * HammerCharge;
  struct CharacterAbility * WeaponCharge;
  struct ActionMethod * GainAbilityAction;
  struct Action * OnSetAbility;
  struct Action * OnUpgradeAbility;
  struct SeinCharacter * m_sein;
  struct IUberState__Array * m_affectingUberStates;
};
struct PlayerAbilities {
  struct PlayerAbilities__Class *klass;
  struct MonitorData *monitor;
  struct PlayerAbilities__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_AbilityType_System_Boolean___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_AbilityType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_AbilityType_System_Boolean_ {
  struct Dictionary_2_AbilityType_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_AbilityType_System_Boolean___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean_ {
  int32_t hashCode;
  int32_t next;
  enum AbilityType__Enum key;
  bool value;
};
struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Array {
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_AbilityType_System_Boolean_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean___Fields {
  struct Dictionary_2_AbilityType_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_AbilityType_System_Boolean___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean___Fields {
  struct Dictionary_2_AbilityType_System_Boolean_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_AbilityType_System_Boolean___Fields fields;
};
struct KeyValuePair_2_AbilityType_System_Boolean_ {
  enum AbilityType__Enum key;
  bool value;
};
struct KeyValuePair_2_AbilityType_System_Boolean___Boxed {
  struct KeyValuePair_2_AbilityType_System_Boolean___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_AbilityType_System_Boolean_ fields;
};
struct KeyValuePair_2_AbilityType_System_Boolean___Array {
  struct KeyValuePair_2_AbilityType_System_Boolean___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_AbilityType_System_Boolean_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_AbilityType_System_Boolean_ {
  struct IEnumerator_1_KeyValuePair_2_AbilityType_System_Boolean___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) CharacterAbility__Fields {
  enum AbilityType__Enum m_abilityType;
  struct PlayerAbilities * m_playerAbilities;
};
struct CharacterAbility {
  struct CharacterAbility__Class *klass;
  struct MonitorData *monitor;
  struct CharacterAbility__Fields fields;
};
struct PlayerSpiritShards__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinCharacter * m_sein;
  struct List_1_SpiritShardType_ * InventoryItemsAvailableToBuy;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * OnInventoryUpdated;
  struct Action * OnGlobalShardsUpdated;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * OnGlobalShardsEquip;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * OnGlobalShardsUnequip;
  struct Boolean__Array * m_hasShard;
  struct Boolean__Array * m_isShardEquipped;
  struct Int32__Array * m_shardLevel;
  struct Int32__Array * m_shardMaxLevel;
  struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * m_currentEquippedShards;
  struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * m_shardsToEquip;
  struct List_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * m_shardsToUnequip;
  struct IUberState__Array * m_affectingUberStates;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct PlayerSpiritShards {
  struct PlayerSpiritShards__Class *klass;
  struct MonitorData *monitor;
  struct PlayerSpiritShards__Fields fields;
};
struct __declspec(align(8)) List_1_SpiritShardType___Fields {
  struct SpiritShardType__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpiritShardType_ {
  struct List_1_SpiritShardType___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpiritShardType___Fields fields;
};
struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ {
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard___Fields fields;
};
struct SpellInventory__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinCharacter * m_sein;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ * OnInventoryUpdated;
  struct Action_1_SpellInventory_Binding_ * OnBindingsUpdated;
  struct Action * OnSpellSharded;
  bool _ApplyOnEditor_k__BackingField;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct SpellInventory {
  struct SpellInventory__Class *klass;
  struct MonitorData *monitor;
  struct SpellInventory__Fields fields;
};
struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem_ {
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateInventory_InventoryItem___Fields fields;
};
struct Action_1_SpellInventory_Binding___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_SpellInventory_Binding_ {
  struct Action_1_SpellInventory_Binding___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_SpellInventory_Binding___Fields fields;
};
enum SpellInventory_Binding__Enum : int32_t {
  SpellInventory_Binding__Enum_ButtonX = 0,
  SpellInventory_Binding__Enum_ButtonY = 1,
  SpellInventory_Binding__Enum_ButtonB = 2,
  SpellInventory_Binding__Enum_Count = 3,
  SpellInventory_Binding__Enum_None = 255,
};
struct SpellInventory_Binding__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpellInventory_Binding__Enum value;
};
struct PlayerQuestItems__Fields {
  struct GuidOwner__Fields _;
};
struct PlayerQuestItems {
  struct PlayerQuestItems__Class *klass;
  struct MonitorData *monitor;
  struct PlayerQuestItems__Fields fields;
};
struct CharacterFovController__Fields {
  struct MonoBehaviour__Fields _;
  float ClampSpeed;
  float TransitionTime;
  bool DebugGUI;
  float MaxSpeedBasedOffset;
  float SpeedForMaxOffset;
  struct StateFovModifier__Array * StateModifiers;
  float m_velocity;
  struct Vector3 m_focalCenter;
  float m_lastTargetOffset;
  float m_currentOffset;
  float m_lastDeltaPassed;
};
struct CharacterFovController {
  struct CharacterFovController__Class *klass;
  struct MonitorData *monitor;
  struct CharacterFovController__Fields fields;
};
enum SeinEvent__Enum : int32_t {
  SeinEvent__Enum_DigOutOfZone = 0,
  SeinEvent__Enum_DigOutOfZoneDashing = 1,
  SeinEvent__Enum_DigDigging = 2,
  SeinEvent__Enum_DigDashing = 3,
  SeinEvent__Enum_DigExitingSand = 4,
  SeinEvent__Enum_BowIdle = 5,
  SeinEvent__Enum_BowDraw = 6,
  SeinEvent__Enum_BowAim = 7,
  SeinEvent__Enum_BowPullCharge = 8,
  SeinEvent__Enum_BowRecover = 9,
  SeinEvent__Enum_Bash = 10,
  SeinEvent__Enum_Bounce = 11,
  SeinEvent__Enum_DashNew = 12,
};
struct SeinEvent__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinEvent__Enum value;
};
struct StateFovModifier {
  enum SeinEvent__Enum State;
  float Offset;
  float TransitionTime;
};
struct StateFovModifier__Boxed {
  struct StateFovModifier__Class *klass;
  struct MonitorData *monitor;
  struct StateFovModifier fields;
};
struct StateFovModifier__Array {
  struct StateFovModifier__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StateFovModifier vector[32];
};
struct SeinPrefabFactory__Fields {
  struct MonoBehaviour__Fields _;
  struct SeinCharacter * Sein;
  struct SeinPrefabSet * SeinPrefabSet;
  struct SeinNestedPrefab__Array * m_prefabs;
  struct SeinNestedPrefab * Bash;
  struct SeinNestedPrefab * Hold;
  struct SeinNestedPrefab * ChargeJump;
  struct SeinNestedPrefab * Crouch;
  struct SeinNestedPrefab * DoubleJump;
  struct SeinNestedPrefab * Fall;
  struct SeinNestedPrefab * Glide;
  struct SeinNestedPrefab * FeatherFlap;
  struct SeinNestedPrefab * GrabPushPull;
  struct SeinNestedPrefab * GrabWall;
  struct SeinNestedPrefab * Jump;
  struct SeinNestedPrefab * PushAgainstWall;
  struct SeinNestedPrefab * Run;
  struct SeinNestedPrefab * Idle;
  struct SeinNestedPrefab * SpiritFlame;
  struct SeinNestedPrefab * StandingOnEdge;
  struct SeinNestedPrefab * WallJump;
  struct SeinNestedPrefab * WallSlide;
  struct SeinNestedPrefab * Swimming;
  struct SeinNestedPrefab * SoulFlame;
  struct SeinNestedPrefab * Grenade;
  struct SeinNestedPrefab * SpiritLeash;
  struct SeinNestedPrefab * GrabRope;
  struct SeinNestedPrefab * GrabSurface;
  struct SeinNestedPrefab * PickupProcessor;
  struct SeinNestedPrefab * SpiritMagnet;
  struct SeinNestedPrefab * Bow;
  struct SeinNestedPrefab * Melee;
  struct SeinNestedPrefab * Combo;
  struct SeinNestedPrefab * Digging;
  struct SeinNestedPrefab * DashNew;
  struct SeinNestedPrefab * GlowSpell;
  struct SeinNestedPrefab * InvisibilitySpell;
  struct SeinNestedPrefab * StickyMineSpell;
  struct SeinNestedPrefab * ChakramSpell;
  struct SeinNestedPrefab * GoldenSein;
  struct SeinNestedPrefab * Blaze;
  struct SeinNestedPrefab * TurretSpell;
  struct SeinNestedPrefab * SpiritSpearSpell;
  struct SeinNestedPrefab * MeditateSpell;
  struct SeinNestedPrefab * SpiritSentrySpell;
  struct SeinNestedPrefab * HomingMissileSpell;
  struct SeinNestedPrefab * Launch;
  struct SeinNestedPrefab * CinematicToGameplay;
};
struct SeinPrefabFactory {
  struct SeinPrefabFactory__Class *klass;
  struct MonitorData *monitor;
  struct SeinPrefabFactory__Fields fields;
};
struct SeinPrefabSet__Fields {
  struct ScriptableObject__Fields _;
  struct GameObject * Bash;
  struct GameObject * Carry;
  struct GameObject * Hold;
  struct GameObject * ChargeJump;
  struct GameObject * Crouch;
  struct GameObject * DoubleJump;
  struct GameObject * Fall;
  struct GameObject * Glide;
  struct GameObject * FeatherFlap;
  struct GameObject * GrabPushPull;
  struct GameObject * GrabWall;
  struct GameObject * Jump;
  struct GameObject * PushAgainstWall;
  struct GameObject * Run;
  struct GameObject * Idle;
  struct GameObject * SpiritFlame;
  struct GameObject * StandingOnEdge;
  struct GameObject * Stomp;
  struct GameObject * WallJump;
  struct GameObject * WallSlide;
  struct GameObject * Swimming;
  struct GameObject * SoulFlame;
  struct GameObject * PickupProcessor;
  struct GameObject * Dash;
  struct GameObject * Grenade;
  struct GameObject * Bounce;
  struct GameObject * SpiritLeash;
  struct GameObject * SpiritSlash;
  struct GameObject * HeavySpiritSlash;
  struct GameObject * CutsceneBlock;
  struct GameObject * CutsceneMovement;
  struct GameObject * GrabRope;
  struct GameObject * GrabSurface;
  struct GameObject * Bow;
  struct GameObject * Melee;
  struct GameObject * Combo;
  struct GameObject * Digging;
  struct GameObject * DashNew;
  struct GameObject * Drill;
  struct GameObject * FireburstSpell;
  struct GameObject * FirewhirlSpell;
  struct GameObject * GlowSpell;
  struct GameObject * LockOnSpell;
  struct GameObject * TimeWarpSpell;
  struct GameObject * ShieldSpell;
  struct GameObject * EnergyWallSpell;
  struct GameObject * InvisibilitySpell;
  struct GameObject * TrapSpell;
  struct GameObject * WarpSpell;
  struct GameObject * LightSpell;
  struct GameObject * MindControlSpell;
  struct GameObject * MirageSpell;
  struct GameObject * StickyMineSpell;
  struct GameObject * SpiritSpearSpell;
  struct GameObject * LightSpearSpell;
  struct GameObject * LifeAbsorbSpell;
  struct GameObject * MeditateSpell;
  struct GameObject * ChargeShotSpell;
  struct GameObject * SpiritShardsSpell;
  struct GameObject * SpiritSentrySpell;
  struct GameObject * PowerslideSpell;
  struct GameObject * EarthShatterSpell;
  struct GameObject * JumpShotSpell;
  struct GameObject * RoundupLeashSpell;
  struct GameObject * BurrowSpell;
  struct GameObject * PowerOfFriendshipSpell;
  struct GameObject * LightningSpell;
  struct GameObject * SpiritFlareSpell;
  struct GameObject * EntanglingRootsSpell;
  struct GameObject * MarkOfTheWildsSpell;
  struct GameObject * HomingMissleSpell;
  struct GameObject * SpiritCrescentSpell;
  struct GameObject * MineSpell;
  struct GameObject * TeleportSpell;
  struct GameObject * ChakramSpell;
  struct GameObject * GoldenSeinAbility;
  struct GameObject * BlazeSpell;
  struct GameObject * TurretSpell;
  struct GameObject * Pinned;
  struct GameObject * Leached;
  struct GameObject * Launch;
  struct GameObject * StompPuppet;
  struct GameObject * CinematicToGameplay;
  struct GameObject * SpiritMagnet;
};
struct SeinPrefabSet {
  struct SeinPrefabSet__Class *klass;
  struct MonitorData *monitor;
  struct SeinPrefabSet__Fields fields;
};}