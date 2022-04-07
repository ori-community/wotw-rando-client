namespace app {
struct SeinInput {
  struct SeinInput__Class *klass;
  struct MonitorData *monitor;
  struct SeinInput__Fields fields;
};
struct SeinLevel__Fields {
  struct GuidOwner__Fields _;
  int32_t SkillPoints;
  int32_t Current;
  float ExperienceVisualMin;
  float ExperienceVisualMax;
  struct AnimationCurve * ExperienceRequiredPerLevel;
  struct GameObject * OnLevelUpGameObject;
  float ExperienceGainPerSecond;
  struct SeinCharacter * m_sein;
};
struct SeinLevel {
  struct SeinLevel__Class *klass;
  struct MonitorData *monitor;
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
  struct SoundProvider * OutOfEnergySound;
  struct SeinCharacter * m_sein;
  bool m_bloodPactHPCostDirty;
  float m_bloodPactHPCostCached;
  bool m_bloodPactEquippedCached;
  bool _ApplyOnEditor_k__BackingField;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct SeinEnergy {
  struct SeinEnergy__Class *klass;
  struct MonitorData *monitor;
  struct SeinEnergy__Fields fields;
};
struct __declspec(align(8)) SeinMortality__Fields {
  struct SeinDamageReciever * DamageReciever;
  struct SeinHealthController * Health;
  struct CapsuleCrushDetector * CrushDetector;
  struct ZonesProperties * ZonesProperties;
  struct SeinPetrifiedFogController * SeinPetrifiedFogController;
  struct SeinDeadlyDarknessController * SeinDeadlyDarknessController;
};
struct SeinMortality {
  struct SeinMortality__Class *klass;
  struct MonitorData *monitor;
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
  enum DamageWeight__Enum m_damageWeight;
  struct ActiveAnimationHandle m_activeAnim;
  struct CapsuleCollider * m_receiverCollider;
  struct Rigidbody * m_rigidbody;
  struct Action_1_Damage_ * OnTakeDamage;
  struct Action_1_Damage_ * OnKickback;
  struct Dictionary_2_DamageType_System_Single_ * m_invicibilityTimeByDamageType;
  struct List_1_DamageType_ * m_currentInvincibilityDamageTypes;
  float LightKickGravityMultiplier;
  float MediumKickGravityMultiplier;
  float HeavyKickGravityMultiplier;
  float HurtDropPickupSpeed;
  float m_invincibleTimeRemaining;
  float m_invincibleToEnemiesTimeRemaining;
  float m_invincibleOnRespawnTimeRemaining;
  float m_invincibleToEnemyEntityTimeRemaining;
  struct Entity * m_ignoredEnemyEntity;
  bool m_died;
  struct GameObject * GameOverScreen;
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
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * MoveSpeed;
  struct HorizontalPlatformMovementSettings_SpeedMultiplierSet * LongKickMoveSpeed;
  float GravityMultiplier;
  struct GameObject * HurtEffect;
  struct GameObject * HurtDropPickup;
  float m_hurtTimeRemaining;
  struct GameObject * KillFader;
  float DeathDuration;
  float OneLifeDeathDuration;
  float SpawnDuration;
  float DeathFadeInDuration;
  float DeathFadeOutDuration;
  struct DamageBasedPrefabProvider * DeathEffectProvider;
  int32_t m_serializationFiller;
  bool m_isLeached;
  struct Vector3 m_lastLeachPosition;
  bool m_isPinned;
  struct Vector3 m_lastPinPosition;
  bool m_isRavage;
};
struct SeinDamageReciever {
  struct SeinDamageReciever__Class *klass;
  struct MonitorData *monitor;
  struct SeinDamageReciever__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_DamageType_System_Single___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_DamageType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_DamageType_System_Single_ {
  struct Dictionary_2_DamageType_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_DamageType_System_Single___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single_ {
  int32_t hashCode;
  int32_t next;
  enum DamageType__Enum key;
  float value;
};
struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Array {
  struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_DamageType_System_Single_ vector[32];
};
struct IEqualityComparer_1_DamageType_ {
  struct IEqualityComparer_1_DamageType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single___Fields {
  struct Dictionary_2_DamageType_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_DamageType_System_Single___Fields fields;
};
struct IEnumerator_1_DamageType_ {
  struct IEnumerator_1_DamageType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single___Fields {
  struct Dictionary_2_DamageType_System_Single_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_DamageType_System_Single___Fields fields;
};
struct ICollection_1_DamageType_ {
  struct ICollection_1_DamageType___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_DamageType_System_Single_ {
  enum DamageType__Enum key;
  float value;
};
struct KeyValuePair_2_DamageType_System_Single___Boxed {
  struct KeyValuePair_2_DamageType_System_Single___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_DamageType_System_Single_ fields;
};
struct KeyValuePair_2_DamageType_System_Single___Array {
  struct KeyValuePair_2_DamageType_System_Single___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_DamageType_System_Single_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_DamageType_System_Single_ {
  struct IEnumerator_1_KeyValuePair_2_DamageType_System_Single___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_DamageType_ {
  struct IEnumerable_1_DamageType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_DamageType___Fields {
  struct DamageType__Enum__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_DamageType_ {
  struct List_1_DamageType___Class *klass;
  struct MonitorData *monitor;
  struct List_1_DamageType___Fields fields;
};
struct SeinHealthController__Fields {
  struct GuidOwner__Fields _;
  struct PlayerUberStateDescriptor * PlayerUberState;
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
  struct GameObject * RespawnEffect;
  bool m_lastResortThresholdDirty;
  float m_lastResortThresholdCached;
  bool m_hasLastResortCached;
  struct SeinCharacter * m_sein;
  bool _ApplyOnEditor_k__BackingField;
  struct IUberState__Array * _AffectingUberStates_k__BackingField;
  struct List_1_UnityEngine_GameObject_ * _AllTargets_k__BackingField;
};
struct SeinHealthController {
  struct SeinHealthController__Class *klass;
  struct MonitorData *monitor;
  struct SeinHealthController__Fields fields;
};
struct CapsuleCrushDetector__Fields {
  struct CharacterState__Fields _;
};
struct CapsuleCrushDetector {
  struct CapsuleCrushDetector__Class *klass;
  struct MonitorData *monitor;
  struct CapsuleCrushDetector__Fields fields;
};
struct ZonesProperties__Fields {
  struct ScriptableObject__Fields _;
  struct ZoneDamageSettings * PetrifiedFogSettings;
  struct ZoneDamageSettings * DeadlyDarknessSettings;
};
struct ZonesProperties {
  struct ZonesProperties__Class *klass;
  struct MonitorData *monitor;
  struct ZonesProperties__Fields fields;
};
struct __declspec(align(8)) ZoneDamageSettings__Fields {
  float Duration;
  float DamageAmount;
  enum DamageType__Enum DamageType;
};
struct ZoneDamageSettings {
  struct ZoneDamageSettings__Class *klass;
  struct MonitorData *monitor;
  struct ZoneDamageSettings__Fields fields;
};
struct SeinPetrifiedFogController__Fields {
  struct MonoBehaviour__Fields _;
  struct BaseAnimator__Array * m_breathingUIAnimators;
  bool m_UIVisible;
};
struct SeinPetrifiedFogController {
  struct SeinPetrifiedFogController__Class *klass;
  struct MonitorData *monitor;
  struct SeinPetrifiedFogController__Fields fields;
};
struct SeinDeadlyDarknessController__Fields {
  struct MonoBehaviour__Fields _;
  float ControllerShakeStrength;
  struct AnimationCurve * ControllerShakeCurve;
  struct FloatValueProvider * DurationProvider;
  struct RTPC * DarknessRTPC;
  struct Event_1 * DarknessFearLoopEvent;
  float IncreaseProtectionSpeed;
  float m_originalIntensity;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct WwiseEventSystem_SoundHandle m_soundHandle;
};
struct SeinDeadlyDarknessController {
  struct SeinDeadlyDarknessController__Class *klass;
  struct MonitorData *monitor;
  struct SeinDeadlyDarknessController__Fields fields;
};
enum SeinPickupProcessor_PickupProcessorState__Enum : int32_t {
  SeinPickupProcessor_PickupProcessorState__Enum_Idle = 0,
  SeinPickupProcessor_PickupProcessorState__Enum_Wait = 1,
  SeinPickupProcessor_PickupProcessorState__Enum_Run = 2,
};
struct SeinPickupProcessor_PickupProcessorState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinPickupProcessor_PickupProcessorState__Enum value;
};
struct SeinPickupProcessor__Fields {
  struct SaveSerialize__Fields _;
  struct MoonTimeline * PickupTimeline;
  struct ShowInteractiveTextEntity * InteractiveTextEntity;
  struct WWiseSoundAnimatorEntity * SoundAnimatorEntity;
  struct EventTriggerAnimator * ShowItemTrigger;
  struct SeinOnGroundCondition * OnGroundCondition;
  struct SeinPickupProcessor_CollectableInfo * OreInfo;
  struct SeinPickupProcessor_CollectableInfo * ExpOrbInfo;
  struct SeinPickupProcessor_CollectableInfo * KeystoneInfo;
  struct SeinPickupProcessor_CollectableInfo * EyestoneInfo;
  struct SeinPickupProcessor_CollectableInfo * EnergyOrbInfo;
  struct SeinPickupProcessor_CollectableInfo * HealthOrbInfo;
  struct SeinPickupProcessor_CollectableInfo * SmallExpOrbInfo;
  struct SeinPickupProcessor_CollectableInfo * MediumExpOrbInfo;
  struct SeinPickupProcessor_CollectableInfo * LargeExpOrbInfo;
  struct SeinPickupProcessor_CollectableInfo * HeartContainerInfo;
  struct SeinPickupProcessor_CollectableInfo * HeartHalfContainerInfo;
  struct SeinPickupProcessor_CollectableInfo * HeartSecondHalfContainerInfo;
  struct SeinPickupProcessor_CollectableInfo * SkillPointInfo;
  struct SeinPickupProcessor_CollectableInfo * EnergyContainerInfo;
  struct SeinPickupProcessor_CollectableInfo * EnergyHalfContainerInfo;
  struct SeinPickupProcessor_CollectableInfo * EnergySecondHalfContainerInfo;
  struct SeinPickupProcessor_CollectableInfo * MapStoneInfo;
  struct SeinPickupProcessor_CollectableInfo * SpiritShardInfo;
  struct SeinPickupProcessor_CollectableInfo * QuestItemInfo;
  struct SeinPickupProcessor_CollectableInfo * ShardSlotUpgradeInfo;
  struct ExpText * m_expText;
  struct SeinCharacter * m_sein;
  enum SeinPickupProcessor_PickupProcessorState__Enum m_state;
  struct SeinPickupProcessor_CollectableInfo * m_currentCollectableInfo;
  struct IContext * m_pickupContext;
  float m_timer;
  struct Action * FinishReadingAction;
  struct SpiritShardPickupContext * pickupContext;
};
struct SeinPickupProcessor {
  struct SeinPickupProcessor__Class *klass;
  struct MonitorData *monitor;
  struct SeinPickupProcessor__Fields fields;
};
enum ShowFixedTimeTextEntity_MessageType__Enum : int32_t {
  ShowFixedTimeTextEntity_MessageType__Enum_Ability = 0,
  ShowFixedTimeTextEntity_MessageType__Enum_Pickup = 1,
  ShowFixedTimeTextEntity_MessageType__Enum_Shard = 2,
  ShowFixedTimeTextEntity_MessageType__Enum_Spell = 3,
  ShowFixedTimeTextEntity_MessageType__Enum_Area = 4,
  ShowFixedTimeTextEntity_MessageType__Enum_NPCDialog = 5,
  ShowFixedTimeTextEntity_MessageType__Enum_CinematicDialog = 6,
  ShowFixedTimeTextEntity_MessageType__Enum_NPCDialogSide1 = 7,
  ShowFixedTimeTextEntity_MessageType__Enum_NPCDialogSide2 = 8,
  ShowFixedTimeTextEntity_MessageType__Enum_Wisp = 9,
};
struct ShowFixedTimeTextEntity_MessageType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShowFixedTimeTextEntity_MessageType__Enum value;
};
enum ShowFixedTimeTextEntity_InteractionType__Enum : int32_t {
  ShowFixedTimeTextEntity_InteractionType__Enum_None = 0,
  ShowFixedTimeTextEntity_InteractionType__Enum_NPCTalk = 1,
  ShowFixedTimeTextEntity_InteractionType__Enum_NPCInteractOnEnd = 2,
};
struct ShowFixedTimeTextEntity_InteractionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ShowFixedTimeTextEntity_InteractionType__Enum value;
};
struct ShowFixedTimeTextEntity__Fields {
  struct TimelineEntity__Fields _;
  enum ShowFixedTimeTextEntity_MessageType__Enum Type;
  struct GameObject * MessageIcon;
  struct MessageProvider * m_messageProvider;
  struct MoonReference_1_MessageProvider_ * m_dynamicMessage;
  float MinWaitTime;
  bool IsInteractive;
  int32_t StartMessageId;
  int32_t EndMessageId;
  bool FreezeTime;
  bool HideHud;
  float MaxWaitTime;
  float LineGapSeconds;
  struct ShowFixedTimeTextEntity_TextVisuals * VisualsOffset;
  bool LockInput;
  bool ForceStopTimelineOnEndHack;
  bool ForceNewAPIToCalculateDuration;
  struct Action_1_MessageBox_HideAction_ * FinishedReading;
  struct MoonReference_1_Moon_Wwise_SoundHost_ * SoundHost;
  enum ShowFixedTimeTextEntity_InteractionType__Enum Interaction;
  struct MoonReference_1_NPCEntity_ * NPCTalk;
  float m_time;
  float m_messageTimer;
  struct InteractiveMessageBox * m_box;
  struct MessageBox * m_message;
  struct WriteOutTextBox * m_writeOut;
  bool m_resettedWriteOut;
  struct MoonTimeline * m_parentTimeline;
  struct Action * OnNextMessage;
};
struct ShowFixedTimeTextEntity {
  struct ShowFixedTimeTextEntity__Class *klass;
  struct MonitorData *monitor;
  struct ShowFixedTimeTextEntity__Fields fields;
};
struct ShowTextEntity__Fields {
  struct ShowFixedTimeTextEntity__Fields _;
  bool AllowSkippingLines;
};
struct ShowTextEntity {
  struct ShowTextEntity__Class *klass;
  struct MonitorData *monitor;
  struct ShowTextEntity__Fields fields;
};
struct ShowInteractiveTextEntity__Fields {
  struct ShowTextEntity__Fields _;
};
struct ShowInteractiveTextEntity {
  struct ShowInteractiveTextEntity__Class *klass;
  struct MonitorData *monitor;
  struct ShowInteractiveTextEntity__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_MessageProvider___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_MessageProvider_ * m_cachedProxyType;
  struct MessageProvider * m_volatileValue;
};
struct MoonReference_1_MessageProvider_ {
  struct MoonReference_1_MessageProvider___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_MessageProvider___Fields fields;
};
struct IMoonType_1_MessageProvider_ {
  struct IMoonType_1_MessageProvider___Class *klass;
  struct MonitorData *monitor;
};
enum MessageControllerB_NpcMessageStyle__Enum : int32_t {
  MessageControllerB_NpcMessageStyle__Enum_Default = 0,
  MessageControllerB_NpcMessageStyle__Enum_Cinematic = 1,
  MessageControllerB_NpcMessageStyle__Enum_Side1 = 2,
  MessageControllerB_NpcMessageStyle__Enum_Side2 = 3,
  MessageControllerB_NpcMessageStyle__Enum_Count = 4,
};
struct MessageControllerB_NpcMessageStyle__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MessageControllerB_NpcMessageStyle__Enum value;
};
struct __declspec(align(8)) ShowFixedTimeTextEntity_TextVisuals__Fields {
  struct ShowFixedTimeTextEntity_TextVisuals * InitVisuals;
  struct MessageBoxLanguageStyles * OverrideStyle;
  struct Vector3 Offset;
  float Scale;
  float FontSize;
  float LineWidth;
  float LineSpacing;
  float FadeInTime;
  float FadeOutTime;
  float BackgroundFadeOffset;
  float LettersPerSecond;
  bool ShouldAppearLetterByLetter;
  struct Vector2 MessageBoxVelocity;
  struct Transform * TextBackground;
  enum MessageControllerB_NpcMessageStyle__Enum Style;
  struct Transform * TextBackgroundInstance;
};
struct ShowFixedTimeTextEntity_TextVisuals {
  struct ShowFixedTimeTextEntity_TextVisuals__Class *klass;
  struct MonitorData *monitor;
  struct ShowFixedTimeTextEntity_TextVisuals__Fields fields;
};
struct __declspec(align(8)) MoonReference_1_Moon_Wwise_SoundHost___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_Moon_Wwise_SoundHost_ * m_cachedProxyType;
  struct SoundHost * m_volatileValue;
};
struct MoonReference_1_Moon_Wwise_SoundHost_ {
  struct MoonReference_1_Moon_Wwise_SoundHost___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_Moon_Wwise_SoundHost___Fields fields;
};
struct IMoonType_1_Moon_Wwise_SoundHost_ {
  struct IMoonType_1_Moon_Wwise_SoundHost___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) MoonReference_1_NPCEntity___Fields {
  struct MoonTypeData m_data;
  bool m_isInitialized;
  bool m_isStatic;
  bool m_canResolve;
  struct IMoonTypeResolver * m_resolver;
  struct IMoonType_1_NPCEntity_ * m_cachedProxyType;
  struct NPCEntity * m_volatileValue;
};
struct MoonReference_1_NPCEntity_ {
  struct MoonReference_1_NPCEntity___Class *klass;
  struct MonitorData *monitor;
  struct MoonReference_1_NPCEntity___Fields fields;
};
struct IMoonType_1_NPCEntity_ {
  struct IMoonType_1_NPCEntity___Class *klass;
  struct MonitorData *monitor;
};
enum NPCAnchorConfiguration__Enum : int32_t {
  NPCAnchorConfiguration__Enum_Both = 0,
  NPCAnchorConfiguration__Enum_LeftOnly = 1,
  NPCAnchorConfiguration__Enum_RightOnly = 2,
};
struct NPCAnchorConfiguration__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPCAnchorConfiguration__Enum value;
};
enum NPCCameraSetupConfiguration__Enum : int32_t {
  NPCCameraSetupConfiguration__Enum_None = -1,
  NPCCameraSetupConfiguration__Enum_Legacy = 0,
  NPCCameraSetupConfiguration__Enum_Dynamic = 1,
};
struct NPCCameraSetupConfiguration__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPCCameraSetupConfiguration__Enum value;
};
enum NPCEntity_RewardState__Enum : int32_t {
  NPCEntity_RewardState__Enum_None = 0,
  NPCEntity_RewardState__Enum_Shown = 1,
  NPCEntity_RewardState__Enum_Thrown = 2,
  NPCEntity_RewardState__Enum_Collected = 3,
};
struct NPCEntity_RewardState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPCEntity_RewardState__Enum value;
};
struct NPCEntity__Fields {
  struct Entity__Fields _;
  float InteractionRadius;
  struct Vector2 InteractionOffset;
  bool RequireLineOfSight;
  struct MessageProvider * InteractionHintMessage;
  enum NPCAnchorConfiguration__Enum AnchorSetup;
  struct Vector2 PlayerAnchorLeft;
  struct Vector2 PlayerAnchorRight;
  float AnchorSafeZone;
  bool CanInteract;
  struct List_1_Moon_InteractionGraph_InteractionGraph_ * InteractionGraphs;
  struct InteractionGraph * _CurrentInteractionGraph_k__BackingField;
  enum NPCCameraSetupConfiguration__Enum CameraConfiguration;
  struct CameraOffsetZone * InteractionCameraOffsetZone;
  struct NPCCameraTransition * CameraTransition;
  bool PlayTalkAnimationOnEachNpcMessage;
  struct MoonTimeline * AutoTalkTimeline;
  bool m_canResetTalk;
  struct EventTriggerAnimator * CanResetTalk;
  bool _IsInteracting_k__BackingField;
  struct MessageBox * m_interactionHintMessageBox;
  bool m_shouldFinishInteraction;
  int32_t m_finishInteractionTime;
  bool m_waitForInteractionToEffectivelyStart;
  struct Vector2 NPCZoomRangeModification;
  bool AttachToTransform;
  struct Transform * AttachTransform;
  struct Vector3 AttachAnchor;
  bool PauseIdleOnInteraction;
  struct MoonAnimation * OriListenAnimationOverride;
  struct MoonTimeline * IntroTimeline;
  struct MoonTimeline * TalkTimeline;
  struct MoonTimeline * RewardTimeline;
  struct Transform * ItemBoneRight;
  struct Transform * ItemBoneLeft;
  struct TalkVariant * IdleVariantA;
  struct TalkVariant * IdleVariantB;
  struct TalkVariant * TalkVariantA;
  struct TalkVariant * TalkVariantB;
  struct TalkVariant * Throw;
  float ThrowItemGravity;
  float ThrowItemArc;
  struct TalkVariant * m_lastTalkVariant;
  struct TalkVariant * m_lastIdleVariant;
  struct Projectile * m_rewardInstance;
  enum NPCEntity_RewardState__Enum m_rewardState;
  bool m_isBypassingCamera;
  struct StaticEntityLocomotion * m_staticLocomotion;
};
struct NPCEntity {
  struct NPCEntity__Class *klass;
  struct MonitorData *monitor;
  struct NPCEntity__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_InteractionGraph_InteractionGraph___Fields {
  struct InteractionGraph__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_InteractionGraph_InteractionGraph_ {
  struct List_1_Moon_InteractionGraph_InteractionGraph___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_InteractionGraph_InteractionGraph___Fields fields;
};
struct InteractionGraph__Array {
  struct InteractionGraph__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InteractionGraph * vector[32];
};
struct IEnumerator_1_Moon_InteractionGraph_InteractionGraph_ {
  struct IEnumerator_1_Moon_InteractionGraph_InteractionGraph___Class *klass;
  struct MonitorData *monitor;
};
struct CameraOffsetZone__Fields {
  struct MonoBehaviour__Fields _;
  struct Vector3 Offset;
  int32_t priority;
  struct AnimationCurve * ZoomCurve;
  bool UseOnEnableDamping;
  struct AnimationCurve * ZoomOnEnableRateCurve;
  float LeftMargin;
  float RightMargin;
  float TopMargin;
  float BottomMargin;
  float m_dampingTimer;
  bool m_autoZoomOutAndDisable;
};
struct CameraOffsetZone {
  struct CameraOffsetZone__Class *klass;
  struct MonitorData *monitor;
  struct CameraOffsetZone__Fields fields;
};
enum NPCCameraBlendState__Enum : int32_t {
  NPCCameraBlendState__Enum_None = 0,
  NPCCameraBlendState__Enum_BlendIn = 1,
  NPCCameraBlendState__Enum_BlendOut = 2,
  NPCCameraBlendState__Enum_Stay = 3,
};
struct NPCCameraBlendState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPCCameraBlendState__Enum value;
};
enum NPCCameraPositionBlendState__Enum : int32_t {
  NPCCameraPositionBlendState__Enum_OnTarget = 0,
  NPCCameraPositionBlendState__Enum_Blending = 1,
};
struct NPCCameraPositionBlendState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPCCameraPositionBlendState__Enum value;
};
enum NPCCameraTargetPositionType__Enum : int32_t {
  NPCCameraTargetPositionType__Enum_Npc = 0,
  NPCCameraTargetPositionType__Enum_Shop = 1,
};
struct NPCCameraTargetPositionType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum NPCCameraTargetPositionType__Enum value;
};
struct __declspec(align(8)) NPCCameraTransition__Fields {
  struct Transform * NpcTargetRight;
  struct Transform * OpenStoreTargetRight;
  struct Transform * NpcTargetLeft;
  struct Transform * OpenStoreTargetLeft;
  struct Transform * CameraTarget;
  struct Transform * m_cachedNpcTarget;
  struct Transform * m_cachedOpenStoreTarget;
  struct Vector3 m_npcTransformPosition;
  enum NPCCameraBlendState__Enum m_cameraState;
  enum NPCCameraPositionBlendState__Enum m_positionBlendState;
  struct Vector3 m_start;
  enum NPCCameraTargetPositionType__Enum m_target;
  float m_curveTime;
  float m_positionBlendTimer;
  float m_positionBlendTime;
  struct AnimationCurve * BlendCurve;
  struct AnimationCurve * PositionCurveNormalized;
  bool m_isRegistered;
};
struct NPCCameraTransition {
  struct NPCCameraTransition__Class *klass;
  struct MonitorData *monitor;
  struct NPCCameraTransition__Fields fields;
};
struct __declspec(align(8)) TalkVariant__Fields {
  struct MoonAnimation * Left;
  struct MoonAnimation * Right;
};
struct TalkVariant {
  struct TalkVariant__Class *klass;
  struct MonitorData *monitor;
  struct TalkVariant__Fields fields;
};
struct StaticEntityLocomotion__Fields {
  struct Locomotion__Fields _;
  struct Transform * Feet;
  struct BaseLocomotionTurningBehaviour * TurningBehaviour;
  struct EntityLocomotionTask * IdleBehaviour;
  bool m_snapToTheGround;
  bool SnapToTheGroundOnlyOnce;
  bool ConsiderRotationForLookDirection;
  bool CanTurn;
  struct Nullable_1_Single_ m_registeredLookDirection;
  bool m_lookDirectionLocked;
  bool m_snappedToGround;
  struct MortarEntity * m_mortarEntity;
  float _Gravity_k__BackingField;
  enum EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;
};
struct StaticEntityLocomotion {
  struct StaticEntityLocomotion__Class *klass;
  struct MonitorData *monitor;
  struct StaticEntityLocomotion__Fields fields;
};
struct MortarEntity__Fields {
  struct EnemyEntity__Fields _;
  struct Transform * SpitUpProjectilePosition;
  struct Transform * SpitForwardProjectilePosition;
  struct MortarSpitAttackSettings * SpitAttackSettings;
  bool m_detectedGroundSurface;
  struct Vector3 SpitAttackLaunchVelocity;
  bool CanTurn;
  bool m_spitVelocityUpdateWouldHitTarget;
  bool m_shouldCharge;
  bool m_shouldHide;
  struct ILocomotionTurningHandler * m_turningHandler;
  bool MortarHidden;
  struct LocomotionIdleBehaviour * LocomotionIdleBehaviour;
  struct MoonTimeline * IdleTimeline;
  struct MoonTimeline * HiddenTimeline;
  bool _SpawnCreep_k__BackingField;
  bool DebugCacheGrid;
  struct MortarEntity_AimVeloCache * m_aimVeloCache;
};
struct MortarEntity {
  struct MortarEntity__Class *klass;
  struct MonitorData *monitor;
  struct MortarEntity__Fields fields;
};
struct MortarSpitAttackSettings__Fields {
  struct MonoBehaviour__Fields _;
  struct Sensor * EntitySensor;
  struct List_1_DamageType_ * m_damageToIgnore;
  float m_hideDistance;
  float m_minHideTime;
  float m_preWindupWaitTime;
  float Gravity;
  float Damage;
  enum DamageWeight__Enum DamageWeight;
  enum DamageLayerMask__Enum DamageLayerMask;
  float MinSpitRange;
  float MaxSpitRange;
  float FlightTimeForMinRange;
  float FlightTimeIncreasePerUnitDistance;
  float FlightTimeHandicap;
  struct LayerMask HitTestLayerMask;
  float MinAirTime;
  struct DynamicDataResolver * m_dataResolver;
};
struct MortarSpitAttackSettings {
  struct MortarSpitAttackSettings__Class *klass;
  struct MonitorData *monitor;
  struct MortarSpitAttackSettings__Fields fields;
};
enum PhysicsUtils_Mask__Enum : int32_t {
  PhysicsUtils_Mask__Enum_NonDamagingColliders = 0,
  PhysicsUtils_Mask__Enum_KillCharacter = 1,
  PhysicsUtils_Mask__Enum_AllObstacles = 2,
};
struct PhysicsUtils_Mask__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PhysicsUtils_Mask__Enum value;
};
enum Sensor_CanSeeCharacterHelper_State__Enum : int32_t {
  Sensor_CanSeeCharacterHelper_State__Enum_Idle = 0,
  Sensor_CanSeeCharacterHelper_State__Enum_Refresh = 1,
  Sensor_CanSeeCharacterHelper_State__Enum_DoubleLOS = 2,
  Sensor_CanSeeCharacterHelper_State__Enum_SingleLOS = 3,
  Sensor_CanSeeCharacterHelper_State__Enum_LastSeenPos = 4,
};
struct Sensor_CanSeeCharacterHelper_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Sensor_CanSeeCharacterHelper_State__Enum value;
};
enum Sensor_SensorLineOfSightRequest_State__Enum : int32_t {
  Sensor_SensorLineOfSightRequest_State__Enum_NewIteration = 0,
  Sensor_SensorLineOfSightRequest_State__Enum_PendingCast1 = 1,
  Sensor_SensorLineOfSightRequest_State__Enum_PendingCast2 = 2,
  Sensor_SensorLineOfSightRequest_State__Enum_After1 = 3,
  Sensor_SensorLineOfSightRequest_State__Enum_PendingCast3 = 4,
  Sensor_SensorLineOfSightRequest_State__Enum_Finished = 5,
};
struct Sensor_SensorLineOfSightRequest_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Sensor_SensorLineOfSightRequest_State__Enum value;
};
struct Sensor_SensorLineOfSightRequest {
  enum Sensor_SensorLineOfSightRequest_State__Enum state;
  struct Vector3 origin;
  struct Vector3 target;
  int32_t iteration;
  bool final_result;
  struct AsyncRaycast * arc;
  struct Sensor * sensor;
};
struct Sensor_SensorLineOfSightRequest__Boxed {
  struct Sensor_SensorLineOfSightRequest__Class *klass;
  struct MonitorData *monitor;
  struct Sensor_SensorLineOfSightRequest fields;
};
struct Sensor_CanSeeCharacterHelper {
  enum Sensor_CanSeeCharacterHelper_State__Enum state;
  bool prevSeeCharacter;
  struct Vector3 start;
  struct Vector2 target;
  bool targetInRange;
  struct Sensor_SensorLineOfSightRequest los1;
  struct Sensor_SensorLineOfSightRequest los2;
};
struct Sensor_CanSeeCharacterHelper__Boxed {
  struct Sensor_CanSeeCharacterHelper__Class *klass;
  struct MonitorData *monitor;
  struct Sensor_CanSeeCharacterHelper fields;
};
struct UpdateSyncGuard {
  int32_t m_fixedUpdateCount;
};
struct UpdateSyncGuard__Boxed {
  struct UpdateSyncGuard__Class *klass;
  struct MonitorData *monitor;
  struct UpdateSyncGuard fields;
};
struct Sensor__Fields {
  struct MonoBehaviour__Fields _;
  struct DynamicDataResolver * m_dataResolver;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  enum PhysicsUtils_Mask__Enum OcclusionMask;
  float MaxSensorRadius;
  float LoseSightRadius;
  float ForceSenseRadius;
  float LoseSightDelay;
  float EnterSightDelay;
  bool UseTwoWayLineOfSightCheck;
  float ForceSenseDelay;
  float RayOriginYOffsetWhenOccludedBySlope;
  bool HasVerticalLimit;
  float VerticalSensorLimit;
  struct Transform * RayOrigin;
  struct LayerMask LayerMask;
  float UpdateInterval;
  float OriPredictionTime;
  float ConeOfVisionRadius;
  float ConeOfVisionAngle;
  bool ShowGizmos;
  bool ShowCoveOfVisionGizmo;
  bool m_canSeeCharacter;
  bool m_prevCanSeeCharacter;
  float m_timeUntilNextUpdate;
  struct Nullable_1_UnityEngine_Vector3_ m_lastSeenPosition;
  struct Nullable_1_UnityEngine_Vector3_ m_lostSightLocation;
  struct OriPositionPrediction * m_oriPredictor;
  struct Vector3 m_predictedOriPosition;
  float m_timeSinceTargetAcquired;
  float m_timeSinceTargetLost;
  float m_timeSinceForceSenseStarted;
  struct Transform * m_transform;
  struct PlatformMovement * m_platformMovement;
  bool m_componentsCached;
  struct Sensor_CanSeeCharacterHelper m_csc;
  struct LayerMask LayerMaskWithPlayer;
  struct UpdateSyncGuard sync;
};
struct Sensor {
  struct Sensor__Class *klass;
  struct MonitorData *monitor;
  struct Sensor__Fields fields;
};
struct __declspec(align(8)) OriPositionPrediction__Fields {
  struct LayerMask m_groundLayer;
  struct Transform * m_ownerTransform;
  float PredictionTime;
};
struct OriPositionPrediction {
  struct OriPositionPrediction__Class *klass;
  struct MonitorData *monitor;
  struct OriPositionPrediction__Fields fields;
};
enum AsyncRaycast_State__Enum : int32_t {
  AsyncRaycast_State__Enum_Undefined = 0,
  AsyncRaycast_State__Enum_Ready = 1,
  AsyncRaycast_State__Enum_Requested = 2,
  AsyncRaycast_State__Enum_Scheduled = 3,
};
struct AsyncRaycast_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AsyncRaycast_State__Enum value;
};
enum AsyncRaycast_Result__Enum : int32_t {
  AsyncRaycast_Result__Enum_Undefined = 0,
  AsyncRaycast_Result__Enum_Miss = 1,
  AsyncRaycast_Result__Enum_Hit = 2,
};
struct AsyncRaycast_Result__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AsyncRaycast_Result__Enum value;
};
struct __declspec(align(8)) AsyncRaycast__Fields {
  struct RaycastCommand cmd;
  struct RaycastHit hit;
  enum AsyncRaycast_State__Enum state;
  enum AsyncRaycast_Result__Enum result;
};
struct AsyncRaycast {
  struct AsyncRaycast__Class *klass;
  struct MonitorData *monitor;
  struct AsyncRaycast__Fields fields;
};
struct LocomotionIdleBehaviour__Fields {
  struct EntityLocomotionTask__Fields _;
  struct MoonTimeline * idleMoonTimeline;
};
struct LocomotionIdleBehaviour {
  struct LocomotionIdleBehaviour__Class *klass;
  struct MonitorData *monitor;
  struct LocomotionIdleBehaviour__Fields fields;
};
struct __declspec(align(8)) MortarEntity_AimVeloCache__Fields {
  struct Vector3 m_entityPos;
  struct MortarEntity_AimVeloCache_Grid * m_grid;
  struct MortarEntity_AimVeloCache_Packer * m_packer;
  struct MortarEntity_AimVeloCache_EntityParams * m_entity;
};
struct MortarEntity_AimVeloCache {
  struct MortarEntity_AimVeloCache__Class *klass;
  struct MonitorData *monitor;
  struct MortarEntity_AimVeloCache__Fields fields;
};
struct __declspec(align(8)) MortarEntity_AimVeloCache_Grid__Fields {
  int32_t GridXSteps;
  int32_t GridYSteps;
  float GridXMin;
  float GridXMax;
  float GridYMin;
  float GridYMax;
  struct UInt16__Array * m_packed;
  struct Vector2__Array * m_velo;
};
struct MortarEntity_AimVeloCache_Grid {
  struct MortarEntity_AimVeloCache_Grid__Class *klass;
  struct MonitorData *monitor;
  struct MortarEntity_AimVeloCache_Grid__Fields fields;
};}