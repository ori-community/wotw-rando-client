namespace app {
struct ReplaySetting_GoToSceneRoutine_d_37__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplaySetting_GoToSceneRoutine_d_37__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplaySetting_GoToSceneRoutine_d_37__VTable vtable;
};

struct MapmakerItem__Fields {
  struct ScriptableObject__Fields _;
  struct MessageProvider * Name;
  struct MessageProvider * Description;
  struct Texture2D * Icon;
  struct SerializedByteUberState * UberState;
  int32_t Cost;
  int32_t MaxLevel;
};
struct MapmakerItem {
  struct MapmakerItem__Class *klass;
  struct MonitorData *monitor;
  struct MapmakerItem__Fields fields;
};
struct MapmakerItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MapmakerItem__StaticFields {
};
struct MapmakerItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapmakerItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapmakerItem__VTable vtable;
};

struct MapmakerScreen_HintsSettings {
  struct GameObject * MessagePrefab;
  struct Transform * MessageAnchor;
  float MessageDuration;
  struct MessageProvider * NotEnoughSpiritLight;
  struct MessageProvider * MaxedOut;
};
struct MapmakerScreen_HintsSettings__Boxed {
  struct MapmakerScreen_HintsSettings__Class *klass;
  struct MonitorData *monitor;
  struct MapmakerScreen_HintsSettings fields;
};
struct MapmakerScreen__Fields {
  struct PurchaseThingScreen__Fields _;
  struct MapmakerItem__Array * Purchases;
  struct SerializedBooleanUberState * MapSecretsRevealedUberState;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * m_bindingsCanvas;
  struct GameObject * UpgradeDetailsCanvasPrefab;
  struct Transform * AnchorItemDetails;
  struct MapmakerUIDetails * m_upgradeDetailsCanvas;
  struct GameObject * UpgradeItemPrefab;
  struct GameObject * ItemHighlightGO;
  struct GameObject * ExperiencePrefab;
  struct Transform * AnchorExperience;
  struct EquipmentUIInventoryGrid * Grid;
  bool _PurchasedSkillUpgrade_k__BackingField;
  bool m_isHiding;
  struct MapmakerScreen_HintsSettings Hints;
  struct MessageBox * m_currentHint;
  bool m_isInitiated;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct MapmakerScreen {
  struct MapmakerScreen__Class *klass;
  struct MonitorData *monitor;
  struct MapmakerScreen__Fields fields;
};
struct MapmakerItem__Array {
  struct MapmakerItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MapmakerItem * vector[32];
};
struct MapmakerUIDetails__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * IconGO;
  struct GameObject * NameGO;
  struct GameObject * DescriptionGO;
  struct GameObject * StarsGO;
  struct GameObject * PurchasableGO;
  struct GameObject * TooExpensiveGO;
  struct GameObject * OwnedGO;
  struct Color PurchasableColor;
  struct Color NotPurchasableColor;
  struct Color PurchasableDescriptionColor;
  struct MapmakerItem * m_item;
};
struct MapmakerUIDetails {
  struct MapmakerUIDetails__Class *klass;
  struct MonitorData *monitor;
  struct MapmakerUIDetails__Fields fields;
};
struct MapmakerUIDetails__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MapmakerUIDetails__StaticFields {
};
struct MapmakerUIDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapmakerUIDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapmakerUIDetails__VTable vtable;
};
struct MapmakerScreen_HintsSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MapmakerScreen_HintsSettings__StaticFields {
};
struct MapmakerScreen_HintsSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapmakerScreen_HintsSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapmakerScreen_HintsSettings__VTable vtable;
};
struct MapmakerScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_NavigationManager;
  VirtualInvokeData get_EffectTarget;
  VirtualInvokeData get_PurchaseCompleteSound;
  VirtualInvokeData get_PurchaseBeginSound;
  VirtualInvokeData get_PurchaseRTPC;
  VirtualInvokeData PurchaseInput;
  VirtualInvokeData PurchaseBegin;
  VirtualInvokeData PurchaseUpdate;
  VirtualInvokeData CanPurchase;
  VirtualInvokeData CompletePurchase;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
};
struct MapmakerScreen__StaticFields {
  struct MapmakerScreen * Instance;
};
struct MapmakerScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapmakerScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapmakerScreen__VTable vtable;
};

struct MapmakerUIItem__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * AvailableToBuyGO;
  struct GameObject * AlreadyOwnedGO;
  struct GameObject * TooExpensiveGO;
  struct GameObject * LockedGO;
  struct SpiritShardUIShardUpgradeFill * Fill;
  struct MapmakerItem * m_upgradeItem;
};
struct MapmakerUIItem {
  struct MapmakerUIItem__Class *klass;
  struct MonitorData *monitor;
  struct MapmakerUIItem__Fields fields;
};
struct MapmakerUIItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct MapmakerUIItem__StaticFields {
};
struct MapmakerUIItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapmakerUIItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapmakerUIItem__VTable vtable;
};

struct MapmakerScreen_c {
  struct MapmakerScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct MapmakerScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MapmakerScreen_c__StaticFields {
  struct MapmakerScreen_c * __9;
  struct Predicate_1_CleverMenuItem_ * __9__55_0;
  struct Comparison_1_Object_ * __9__59_0;
};
struct MapmakerScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapmakerScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapmakerScreen_c__VTable vtable;
};

struct MapmakerUISubItem__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * IconGO;
  struct GameObject * CostGO;
  struct GameObject * SpiritLightGO;
  struct Color UnpurchaseableColor;
  struct Color PurchasableColor;
  struct MapmakerItem * m_upgradeItem;
};
struct MapmakerUISubItem {
  struct MapmakerUISubItem__Class *klass;
  struct MonitorData *monitor;
  struct MapmakerUISubItem__Fields fields;
};
struct MapmakerUISubItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct MapmakerUISubItem__StaticFields {
};
struct MapmakerUISubItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MapmakerUISubItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MapmakerUISubItem__VTable vtable;
};

enum SeinStatusAnimatorDriver_SeinStatus__Enum : int32_t {
  SeinStatusAnimatorDriver_SeinStatus__Enum_HealthMinVisual = 0,
  SeinStatusAnimatorDriver_SeinStatus__Enum_HealthMaxVisual = 1,
  SeinStatusAnimatorDriver_SeinStatus__Enum_HealthMax = 2,
  SeinStatusAnimatorDriver_SeinStatus__Enum_EnergyMinVisual = 3,
  SeinStatusAnimatorDriver_SeinStatus__Enum_EnergyMaxVisual = 4,
  SeinStatusAnimatorDriver_SeinStatus__Enum_EnergyMax = 5,
  SeinStatusAnimatorDriver_SeinStatus__Enum_Debug = 6,
  SeinStatusAnimatorDriver_SeinStatus__Enum_ExtraHealthMinVisual = 7,
  SeinStatusAnimatorDriver_SeinStatus__Enum_ExtraHealthMaxVisual = 8,
};
struct SeinStatusAnimatorDriver_SeinStatus__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinStatusAnimatorDriver_SeinStatus__Enum value;
};
struct SeinStatusAnimatorDriver__Fields {
  struct MonoBehaviour__Fields _;
  struct BaseAnimator * Animator;
  enum SeinStatusAnimatorDriver_SeinStatus__Enum StatusType;
  float DivideBy;
  float PossibleMax;
  float DebugValue;
  float DebugMax;
  float m_lastValue;
};
struct SeinStatusAnimatorDriver {
  struct SeinStatusAnimatorDriver__Class *klass;
  struct MonitorData *monitor;
  struct SeinStatusAnimatorDriver__Fields fields;
};
struct SeinStatusAnimatorDriver__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinStatusAnimatorDriver__StaticFields {
};
struct SeinStatusAnimatorDriver__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinStatusAnimatorDriver__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinStatusAnimatorDriver__VTable vtable;
};

struct SeinUI__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTransparencyAnimator * TransparencyAnimator;
  struct GameObject * UI;
  struct GameObject * HUD;
  struct LegacyTransparencyAnimator * RightTransparencyAnimator;
  struct GameObject * RightUI;
  struct LegacyTransparencyAnimator * LeftTransparencyAnimator;
  struct GameObject * LeftUI;
  struct LegacyTransparencyAnimator * BottomLeftTransparencyAnimator;
  struct GameObject * BottomLeftUI;
  struct LegacyAnimator * ExperienceOrbShake;
  struct LegacyAnimator * EnergyOrbShake;
  struct LegacyAnimator * KeystonesShake;
  struct LegacyTransparencyAnimator * KeystoneTransparencyAnimator;
  struct LegacyAnimator * EyestonesShake;
  struct LegacyTransparencyAnimator * EyestoneTransparencyAnimator;
  struct LegacyAnimator * MapStonesShake;
  struct LegacyAnimator * HealthShake;
  struct LegacyAnimator * SoulFlameNotReadyShake;
  struct LegacyAnimator * SpiritLightShake;
  struct LegacyAnimator * SeedsShake;
  struct MoonTimeline * LowHealthWarningTimeline;
  struct GameObject * EnergyBar;
  struct GameObject * KeystoneUI;
  struct GameObject * EyestoneUI;
  struct GameObject * MapStoneUI;
  struct GameObject * SoulFlameFull;
  struct GameObject * SoulFlameUI;
  struct GameObject * SoulFlameUIFlame;
  struct GameObject * SpiritLightUI;
  struct GameObject * SeedsUI;
  struct GameObject * AbilityBindingUI;
  struct GameObject * HealthContainerUI;
  struct GameObject * EnergyContainerUI;
  float SecondsToShowSavingNotification;
  struct GameObject * SavingNotificationUI;
  struct MessageProvider * SoulFlameReadyMessage;
  float SoulFlameReadyMessageDuration;
  struct BaseAnimator * EnergyBarPulse;
  struct BaseAnimator * HealthPulse;
  struct ParticleSystem * EnergizeParticle;
  struct GameObject * ButtonIconTemplate;
  struct Transform * BindButtonXAnchor;
  struct Transform * BindButtonYAnchor;
  struct Transform * BindButtonBAnchor;
  struct Vector3 AbilityIconScale;
  struct MoonTimeline * HealthContainerShakeTimeline;
  struct MoonTimeline * GetHalfHealthContainerTimeline;
  struct MoonTimeline * GetFullHealthContainerTimeline;
  struct GameObject * FullHealthContainerGroup;
  struct GameObject * HalfHealthContainerGroup;
  struct MoonTimeline * EnergyContainerShakeTimeline;
  struct MoonTimeline * GetHalfEnergyContainerTimeline;
  struct MoonTimeline * GetFullEnergyContainerTimeline;
  struct GameObject * FullEnergyContainerGroup;
  struct GameObject * HalfEnergyContainerGroup;
  float m_timeToShowSavingNotification;
  float m_showSpiritLightTimer;
  float m_showSeedsTimer;
  float m_showHealthContainerTimer;
  float m_showEnergyContainerTimer;
  float ShowSpiritLightTime;
  float ShowSeedsTime;
  float ShowHealthContainerTime;
  float ShowEnergyContainerTime;
  bool KeepActive;
  float m_showKeystonesTimer;
  float m_showEyestonesTimer;
  float ShowKeyStoneTime;
  struct List_1_UnityEngine_Renderer_ * m_iconRenderers;
  bool ShowOnSettingsScreen;
  float FaderTransparency;
  float m_lastHealthPercent;
  float LowHealthWarningPercent;
  float m_rightOpacity;
  float m_lastRightOpacity;
  float m_leftOpacity;
  float m_lastLeftOpacity;
  float m_bottomLeftOpacity;
  float m_lastBottomLeftOpacity;
  float m_keystoneOpacity;
  float m_lastKeystoneOpacity;
  float m_eyestoneOpacity;
  float m_lastEyestoneOpacity;
  float m_opacity;
  float FadeTime;
  bool m_showUI;
  bool ShowOnlyRightUI;
  bool ShowSaveGameNotification;
  bool WasLastKeystoneAnEyestone;
  float m_lastOpacity;
  float m_goalOpacity;
  bool m_wasCompletelyFadedIn;
  bool hasRebinder;
  bool m_buttonsNotEmptyOrTorch;
  struct Renderer__Array * m_cachedAbilityIconRenderer;
  struct AbilityType__Enum__Array * m_cachedAbilityType;
};
struct SeinUI {
  struct SeinUI__Class *klass;
  struct MonitorData *monitor;
  struct SeinUI__Fields fields;
};
struct SeinUI__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinUI__StaticFields {
  float m_lastUpdate;
  bool _ShowSpiritLight_k__BackingField;
  bool OptimizeSeinUI;
};
struct SeinUI__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinUI__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinUI__VTable vtable;
};

enum SeinUI_UIZone__Enum : int32_t {
  SeinUI_UIZone__Enum_BottomCenter = 0,
  SeinUI_UIZone__Enum_BottomLeft = 1,
  SeinUI_UIZone__Enum_TopLeft = 2,
  SeinUI_UIZone__Enum_TopRight = 3,
};
struct SeinUI_UIZone__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinUI_UIZone__Enum value;
};

struct SetToGameTime__Fields {
  struct MonoBehaviour__Fields _;
  struct TextBox * Text;
};
struct SetToGameTime {
  struct SetToGameTime__Class *klass;
  struct MonitorData *monitor;
  struct SetToGameTime__Fields fields;
};
struct SetToGameTime__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SetToGameTime__StaticFields {
};
struct SetToGameTime__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetToGameTime__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetToGameTime__VTable vtable;
};

struct MoonTimelineUiFaderOnEnable__Fields {
  struct MonoBehaviour__Fields _;
  struct MoonTimelineUiFader * Fader;
  bool FadeInOnEnable;
  bool FadeOutOnDisable;
  bool m_targetEnabled;
};
struct MoonTimelineUiFaderOnEnable {
  struct MoonTimelineUiFaderOnEnable__Class *klass;
  struct MonitorData *monitor;
  struct MoonTimelineUiFaderOnEnable__Fields fields;
};
struct MoonTimelineUiFaderOnEnable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct MoonTimelineUiFaderOnEnable__StaticFields {
};
struct MoonTimelineUiFaderOnEnable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MoonTimelineUiFaderOnEnable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MoonTimelineUiFaderOnEnable__VTable vtable;
};

struct ShardUpgradeScreen__Fields {
  struct ShopkeeperScreen__Fields _;
  struct UpgradableShardItem__Array * ShardUpgrades;
};
struct ShardUpgradeScreen {
  struct ShardUpgradeScreen__Class *klass;
  struct MonitorData *monitor;
  struct ShardUpgradeScreen__Fields fields;
};
struct __declspec(align(8)) UpgradableShardItem__Fields {
  enum SpiritShardType__Enum Shard;
};
struct UpgradableShardItem {
  struct UpgradableShardItem__Class *klass;
  struct MonitorData *monitor;
  struct UpgradableShardItem__Fields fields;
};
struct UpgradableShardItem__Array {
  struct UpgradableShardItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UpgradableShardItem * vector[32];
};
struct UpgradableShardItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_ItemName;
  VirtualInvokeData get_ItemDescription;
  VirtualInvokeData get_ItemNextLevelDescription;
  VirtualInvokeData get_ItemIcon;
  VirtualInvokeData get_ShowNextLevel;
  VirtualInvokeData get_GameModeBasedCostMultiplier;
  VirtualInvokeData GetCostForLevel;
  VirtualInvokeData get_DisplayLevel;
  VirtualInvokeData get_ItemCurrentLevel;
  VirtualInvokeData get_ItemMaxLevel;
  VirtualInvokeData get_IsVisible;
  VirtualInvokeData get_IsLocked;
  VirtualInvokeData get_IsOwned;
  VirtualInvokeData get_IsAffordable;
  VirtualInvokeData get_IsMaxLevel;
  VirtualInvokeData get_UsesEnergy;
  VirtualInvokeData get_IsUpgradable;
  VirtualInvokeData TryPurchase;
  VirtualInvokeData DoPurchase;
};
struct UpgradableShardItem__StaticFields {
};
struct UpgradableShardItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpgradableShardItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpgradableShardItem__VTable vtable;
};
struct ShardUpgradeScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_NavigationManager;
  VirtualInvokeData get_EffectTarget;
  VirtualInvokeData get_PurchaseCompleteSound;
  VirtualInvokeData get_PurchaseBeginSound;
  VirtualInvokeData get_PurchaseRTPC;
  VirtualInvokeData PurchaseInput;
  VirtualInvokeData PurchaseBegin;
  VirtualInvokeData PurchaseUpdate;
  VirtualInvokeData CanPurchase;
  VirtualInvokeData CompletePurchase;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
  VirtualInvokeData get_ShopInstance;
  VirtualInvokeData set_ShopInstance;
  VirtualInvokeData get_Items;
  VirtualInvokeData get_NeedsExperienceUI_1;
  VirtualInvokeData get_NeedOreUI_1;
  VirtualInvokeData AdditionalUpdate;
  VirtualInvokeData Init;
};
struct ShardUpgradeScreen__StaticFields {
  struct ShardUpgradeScreen * _Instance_k__BackingField;
};
struct ShardUpgradeScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShardUpgradeScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShardUpgradeScreen__VTable vtable;
};

struct ShardUpgradeScreen_c {
  struct ShardUpgradeScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct ShardUpgradeScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShardUpgradeScreen_c__StaticFields {
  struct ShardUpgradeScreen_c * __9;
  struct Func_2_SpiritShardType_Boolean_ * __9__17_0;
};
struct ShardUpgradeScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShardUpgradeScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShardUpgradeScreen_c__VTable vtable;
};

struct ShopkeeperUIItem__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * AvailableToBuyGO;
  struct GameObject * AlreadyOwnedGO;
  struct GameObject * TooExpensiveGO;
  struct GameObject * LockedGO;
  struct SpiritShardUIShardUpgradeFill * Fill;
  struct ShopkeeperItem * m_upgradeItem;
};
struct ShopkeeperUIItem {
  struct ShopkeeperUIItem__Class *klass;
  struct MonitorData *monitor;
  struct ShopkeeperUIItem__Fields fields;
};
struct ShopkeeperUIItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct ShopkeeperUIItem__StaticFields {
};
struct ShopkeeperUIItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShopkeeperUIItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShopkeeperUIItem__VTable vtable;
};

struct ShopkeeperScreen_c {
  struct ShopkeeperScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct ShopkeeperScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShopkeeperScreen_c__StaticFields {
  struct ShopkeeperScreen_c * __9;
  struct Predicate_1_CleverMenuItem_ * __9__58_0;
  struct Comparison_1_Object_ * __9__63_0;
};
struct ShopkeeperScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShopkeeperScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShopkeeperScreen_c__VTable vtable;
};

struct ShopkeeperUISubItem__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * IconGO;
  struct GameObject * CostGO;
  struct GameObject * SpiritLightGO;
  struct GameObject * OreGO;
  bool ShowOre;
  struct SpiritShardUIShardBackdrop * Backdrop;
  struct ShopkeeperItem * m_item;
};
struct ShopkeeperUISubItem {
  struct ShopkeeperUISubItem__Class *klass;
  struct MonitorData *monitor;
  struct ShopkeeperUISubItem__Fields fields;
};
struct ShopkeeperUISubItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct ShopkeeperUISubItem__StaticFields {
};
struct ShopkeeperUISubItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShopkeeperUISubItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShopkeeperUISubItem__VTable vtable;
};

struct MemoryUISlot__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * SelectionHighlight;
  struct GameObject * WatchIcon;
  struct GameObject * PlayIcon;
  struct GameObject * LockImage;
  struct Renderer * Image;
  struct ReplaySetting * m_replaySetting;
};
struct MemoryUISlot {
  struct MemoryUISlot__Class *klass;
  struct MonitorData *monitor;
  struct MemoryUISlot__Fields fields;
};
struct MemoryUISlot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct MemoryUISlot__StaticFields {
};
struct MemoryUISlot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MemoryUISlot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MemoryUISlot__VTable vtable;
};

struct RaceMenuScreen__Fields {
  struct MenuScreen__Fields _;
  struct RaceSettings__Array * SpiritTrialsRaceSettings;
  struct RaceSettings__Array * TimeTrialsRaceSettings;
  struct GameObject * RaceItemPrefab;
  struct GameObject * ItemRoot;
  struct EquipmentUIInventoryGrid * Grid;
  struct MessageBox * LeftTab;
  struct MessageBox * RightTab;
  struct GameObject * LoremasterScreen;
  struct GameObject * RaceLegend;
  struct GameObject * MemoriesLegend;
  struct MessageProvider * SpiritTrialsTabMessageProvider;
  struct MessageProvider * TimeTrialsTabMessageProvider;
  struct MessageProvider * MemoriesTabMessageProvider;
  struct MessageProvider * BossTabMessageProvider;
  struct MessageProvider * RaceTabMessageProvider;
  struct MessageProvider * ShrineMessageProvider;
  struct MessageProvider * EscapeMessageProvider;
  struct LeaderboardsB * Board;
  struct GameObject * RacePlayIcon;
  struct MessageBox * RaceSelectedFilter;
  struct GameObject * BeatenIcon;
  struct MessageProvider * DefaultLockedMessage;
  struct RaceLeaderboardsTitlescreenController * LeaderboardController;
  bool _IsFadingOut_k__BackingField;
  struct CleverMenuItemSelectionManager * RaceItemsSelectionManager;
  struct CleverMenuItemSelectionManager * MemoriesItemsSelectionManager;
  struct RaceMenuScreenDifficultyLabel * DifficultyLabel;
  struct MoonReference_1_ISerializedUberState_ * DifficultyState;
  struct LegacyTransparencyAnimator * ScreenLegacyTransparencyAnimator;
  struct RaceMenuScreenNotificationSystem__Array * m_notificationSystems;
  struct MoonTimeline * FadeOutTimeline;
  struct MoonTimeline * GridFaderTimeline;
  struct TransparencyAnimator * FadeTransparencyAnimator;
  struct TransparencyAnimator * GridFadeTransparencyAnimator;
  bool m_wasEnabledInTitlescreen;
  struct RaceMenuScreenUISlot * m_SelectedItem;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct CleverMenuItem * m_lastItem;
};
struct RaceMenuScreen {
  struct RaceMenuScreen__Class *klass;
  struct MonitorData *monitor;
  struct RaceMenuScreen__Fields fields;
};
enum RaceManuPage__Enum : int32_t {
  RaceManuPage__Enum_SpiritTrials = 0,
  RaceManuPage__Enum_TimeTrials = 1,
  RaceManuPage__Enum_Memories = 2,
};
struct RaceManuPage__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum RaceManuPage__Enum value;
};
struct RaceMenuScreenDifficultyLabel__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * DifficultyMessageBox;
  struct MessageProvider * DifficultyMessageProvider;
  struct MessageProvider * EasyMessageProvider;
  struct MessageProvider * NormalMessageProvider;
  struct MessageProvider * HardMessageProvider;
};
struct RaceMenuScreenDifficultyLabel {
  struct RaceMenuScreenDifficultyLabel__Class *klass;
  struct MonitorData *monitor;
  struct RaceMenuScreenDifficultyLabel__Fields fields;
};
struct __declspec(align(8)) RaceMenuScreenNotificationSystem__Fields {
  struct List_1_NotificationChecker_ * m_notificationCheckers;
  struct LeaderBoardService * m_leaderBoardService;
};
struct RaceMenuScreenNotificationSystem {
  struct RaceMenuScreenNotificationSystem__Class *klass;
  struct MonitorData *monitor;
  struct RaceMenuScreenNotificationSystem__Fields fields;
};
struct RaceMenuScreenNotificationSystem__Array {
  struct RaceMenuScreenNotificationSystem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct RaceMenuScreenNotificationSystem * vector[32];
};
struct __declspec(align(8)) List_1_NotificationChecker___Fields {
  struct NotificationChecker__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_NotificationChecker_ {
  struct List_1_NotificationChecker___Class *klass;
  struct MonitorData *monitor;
  struct List_1_NotificationChecker___Fields fields;
};
struct __declspec(align(8)) NotificationChecker__Fields {
  struct String * LeaderBoardsID;
  bool NotificationSeen;
  struct Action_1_Boolean_ * ShowNotificationAction;
  struct RaceSettings * m_raceSettings;
  int32_t m_currentLeaderboardsPlace;
  struct LeaderBoardService * m_leaderBoardService;
  bool m_notificationSeen;
  int32_t m_originalRank;
  int32_t m_saveSlotIndex;
  bool m_isSyncing;
  bool m_raceBeaten;
};
struct NotificationChecker {
  struct NotificationChecker__Class *klass;
  struct MonitorData *monitor;
  struct NotificationChecker__Fields fields;
};
struct NotificationChecker__Array {
  struct NotificationChecker__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NotificationChecker * vector[32];
};
struct IEnumerator_1_NotificationChecker_ {
  struct IEnumerator_1_NotificationChecker___Class *klass;
  struct MonitorData *monitor;
};
enum TransparencyAnimator_AnimateMode__Enum : int32_t {
  TransparencyAnimator_AnimateMode__Enum_Color = 0,
  TransparencyAnimator_AnimateMode__Enum_Dissolve = 12,
  TransparencyAnimator_AnimateMode__Enum_Additive = 2,
};
struct TransparencyAnimator_AnimateMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TransparencyAnimator_AnimateMode__Enum value;
};
enum TransparencyMode__Enum : int32_t {
  TransparencyMode__Enum_Relative = 0,
  TransparencyMode__Enum_Absolute = 1,
};
struct TransparencyMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TransparencyMode__Enum value;
};
struct TransparencyAnimator__Fields {
  struct TimelineEntity__Fields _;
  struct MoonReference_1_UnityEngine_GameObject_ * Target;
  struct GameObject__Array * AdditionalTargets;
  bool AnimateChildren;
  enum TransparencyAnimator_AnimateMode__Enum Mode;
  struct AnimationCurve * Curve;
  bool AutoEnableDisable;
  bool Allow0AlphaHierarchyOptimization;
  enum TransparencyMode__Enum TransparencyMode;
  bool ClampTopValue;
  float m_time;
  struct GameObject * m_target;
  struct List_1_UnityEngine_Transform_ * m_earlyZTransforms;
  struct List_1_UnityEngine_Renderer_ * m_renderers;
  bool m_initialized;
  bool m_isPooled;
};
struct TransparencyAnimator {
  struct TransparencyAnimator__Class *klass;
  struct MonitorData *monitor;
  struct TransparencyAnimator__Fields fields;
};
struct RaceMenuScreenUISlot__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * SelectionHighlight;
  struct GameObject * LockImage;
  struct GameObject * BeatenIcon;
  struct Renderer * Image;
  struct RaceSettings * m_RaceSetting;
  bool m_isHighlighted;
  float m_highlightTimer;
};
struct RaceMenuScreenUISlot {
  struct RaceMenuScreenUISlot__Class *klass;
  struct MonitorData *monitor;
  struct RaceMenuScreenUISlot__Fields fields;
};
struct RaceMenuScreenDifficultyLabel__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RaceMenuScreenDifficultyLabel__StaticFields {
};
struct RaceMenuScreenDifficultyLabel__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RaceMenuScreenDifficultyLabel__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RaceMenuScreenDifficultyLabel__VTable vtable;
};
struct NotificationChecker__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NotificationChecker__StaticFields {
};
struct NotificationChecker__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NotificationChecker__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NotificationChecker__VTable vtable;
};
struct IEnumerator_1_NotificationChecker___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_NotificationChecker___StaticFields {
};
struct IEnumerator_1_NotificationChecker___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_NotificationChecker___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_NotificationChecker___VTable vtable;
};
struct List_1_NotificationChecker___VTable {
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
};}