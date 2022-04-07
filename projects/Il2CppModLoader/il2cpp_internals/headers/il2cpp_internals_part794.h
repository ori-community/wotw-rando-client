namespace app {
struct __declspec(align(8)) ShopKeeperHints__Fields {
  struct GameObject * MessagePrefab;
  struct Transform * MessageAnchor;
  float MessageDuration;
  struct MessageProvider * ShardNotDiscovered;
  struct MessageProvider * NoUpgradeAvailable;
  struct MessageProvider * NotEnoughSpiritLight;
  struct MessageProvider * NotEnoughOre;
  struct MessageProvider * IsLocked;
  struct MessageProvider * MaxedOut;
  struct MessageProvider * AlreadyOwned;
  struct MessageProvider * Undiscovered;
  struct MessageProvider * ShardTraderUpgradeRequired;
};
struct ShopKeeperHints {
  struct ShopKeeperHints__Class *klass;
  struct MonitorData *monitor;
  struct ShopKeeperHints__Fields fields;
};
enum PurchaseResult__Enum : int32_t {
  PurchaseResult__Enum_None = 0,
  PurchaseResult__Enum_UsedUpDiscount = 1,
};
struct PurchaseResult__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum PurchaseResult__Enum value;
};
struct PurchaseContext {
  enum PurchaseResult__Enum Result;
  bool ForceHideScreenOnPurchase;
};
struct PurchaseContext__Boxed {
  struct PurchaseContext__Class *klass;
  struct MonitorData *monitor;
  struct PurchaseContext fields;
};
struct UpgradableProjectProperties__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UpgradableProjectProperties__StaticFields {
};
struct UpgradableProjectProperties__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UpgradableProjectProperties__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UpgradableProjectProperties__VTable vtable;
};
struct NpcProjectItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NpcProjectItem__StaticFields {
};
struct NpcProjectItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NpcProjectItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NpcProjectItem__VTable vtable;
};
struct Action_1_MessageProvider___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Clone;
  VirtualInvokeData GetObjectData;
  VirtualInvokeData Clone_1;
  VirtualInvokeData GetMethodImpl;
  VirtualInvokeData GetObjectData_1;
  VirtualInvokeData GetInvocationList;
  VirtualInvokeData CombineImpl;
  VirtualInvokeData RemoveImpl;
  VirtualInvokeData Invoke;
  VirtualInvokeData BeginInvoke;
  VirtualInvokeData EndInvoke;
};
struct Action_1_MessageProvider___StaticFields {
};
struct Action_1_MessageProvider___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_MessageProvider___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_MessageProvider___VTable vtable;
};
struct ShopKeeperHints__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShopKeeperHints__StaticFields {
};
struct ShopKeeperHints__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShopKeeperHints__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShopKeeperHints__VTable vtable;
};
struct PurchaseContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PurchaseContext__StaticFields {
};
struct PurchaseContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PurchaseContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PurchaseContext__VTable vtable;
};
struct BuilderItem__VTable {
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
struct BuilderItem__StaticFields {
};
struct BuilderItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderItem__VTable vtable;
};

struct BuilderItem_c {
  struct BuilderItem_c__Class *klass;
  struct MonitorData *monitor;
};
struct BuilderItem_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct BuilderItem_c__StaticFields {
  struct BuilderItem_c * __9;
  struct DelayedAction_Action * __9__36_0;
};
struct BuilderItem_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderItem_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderItem_c__VTable vtable;
};

struct ShopkeeperScreen__Fields {
  struct PurchaseThingScreen__Fields _;
  struct ShopkeeperScreen * _ShopInstance_k__BackingField;
  bool HideScreenAfterPurchase;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * m_bindingsCanvas;
  struct GameObject * DetailsCanvasPrefab;
  struct Transform * AnchorItemDetails;
  struct ShopkeeperUIDetails * m_detailsCanvas;
  struct GameObject * ItemPrefab;
  struct GameObject * ItemHighlightGO;
  struct EquipmentUIInventoryGrid * Grid;
  bool SortedByCost;
  bool _PurchasedItem_k__BackingField;
  struct PurchaseContext PurchaseContext;
  bool m_isHiding;
  struct ShopKeeperHints * Hints2;
  struct MessageBox * m_currentHint;
  bool m_isInitiated;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ShopkeeperScreen {
  struct ShopkeeperScreen__Class *klass;
  struct MonitorData *monitor;
  struct ShopkeeperScreen__Fields fields;
};
struct BuilderScreen__Fields {
  struct ShopkeeperScreen__Fields _;
  struct NpcProjectItem__Array * Projects;
  struct BuilderItem__Array * BuilderItems;
  struct NpcProjectItem * m_lastProject;
};
struct BuilderScreen {
  struct BuilderScreen__Class *klass;
  struct MonitorData *monitor;
  struct BuilderScreen__Fields fields;
};
struct ShopkeeperUIDetails__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * IconGO;
  struct GameObject * NameGO;
  struct GameObject * DescriptionGO;
  struct GameObject * LockedGO;
  struct GameObject * UpgradableGO;
  struct GameObject * NotUpgradableGO;
  struct GameObject * TooExpensiveGO;
  struct GameObject * UpgradeGO;
  struct GameObject * UpgradeAmountGO;
  struct GameObject * UpgradeSpiritLightGO;
  struct GameObject * LevelGO;
  struct GameObject * LevelNextGO;
  struct GameObject * LevelNextDescriptionGO;
  struct GameObject * UsesEnergyGO;
  struct SpiritShardUIShardBackdrop * Background;
  struct SpiritShardUIShardFloatingTooltip * Tooltip;
  struct GameObject * EquipStatusPrefab;
  struct Transform * AnchorEquipStatus;
  struct SpellUIShardEquipStatus * m_equipStatus;
  struct MessageProvider * UpgradeHeaderMessage;
  struct MessageProvider * UpgradeAmountMessage;
  struct Color UpgradeTextColor;
  struct Color TooExpensiveColor;
  bool ShowEquipStatus;
  bool RequireOwned;
  bool ShowUpgradeCost;
  bool ColorByPurchasable;
  struct MessageProvider * Level;
  struct MessageProvider * NextLevel;
  struct MessageProvider * MaxLevel;
  struct MessageProvider * LockedName;
  struct MessageProvider * LockedDescription;
  struct ShopkeeperItem * m_item;
  bool m_dirty;
};
struct ShopkeeperUIDetails {
  struct ShopkeeperUIDetails__Class *klass;
  struct MonitorData *monitor;
  struct ShopkeeperUIDetails__Fields fields;
};
struct ShopkeeperItem {
  struct ShopkeeperItem__Class *klass;
  struct MonitorData *monitor;
};
struct ShopkeeperItem__Array {
  struct ShopkeeperItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ShopkeeperItem * vector[32];
};
struct NpcProjectItem__Array {
  struct NpcProjectItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct NpcProjectItem * vector[32];
};
struct BuilderItem__Array {
  struct BuilderItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct BuilderItem * vector[32];
};
struct ShopkeeperItem__VTable {
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
struct ShopkeeperItem__StaticFields {
};
struct ShopkeeperItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShopkeeperItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShopkeeperItem__VTable vtable;
};
struct ShopkeeperUIDetails__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShopkeeperUIDetails__StaticFields {
};
struct ShopkeeperUIDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShopkeeperUIDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShopkeeperUIDetails__VTable vtable;
};
struct ShopkeeperScreen__VTable {
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
struct ShopkeeperScreen__StaticFields {
};
struct ShopkeeperScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShopkeeperScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShopkeeperScreen__VTable vtable;
};
struct BuilderScreen__VTable {
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
struct BuilderScreen__StaticFields {
  struct BuilderScreen * _Instance_k__BackingField;
};
struct BuilderScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BuilderScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BuilderScreen__VTable vtable;
};

struct NpcProject__Fields {
  struct MonoBehaviour__Fields _;
  struct NpcProjectItem * Project;
  struct MoonReference_1_Moon_Timeline_MoonTimeline_ * Timeline;
};
struct NpcProject {
  struct NpcProject__Class *klass;
  struct MonitorData *monitor;
  struct NpcProject__Fields fields;
};
struct NpcProject__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NpcProject__StaticFields {
};
struct NpcProject__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NpcProject__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NpcProject__VTable vtable;
};

struct __declspec(align(8)) GardenerItem__Fields {
  struct NpcProjectItem * Project;
};
struct GardenerItem {
  struct GardenerItem__Class *klass;
  struct MonitorData *monitor;
  struct GardenerItem__Fields fields;
};
struct GardenerItem__VTable {
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
struct GardenerItem__StaticFields {
};
struct GardenerItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GardenerItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GardenerItem__VTable vtable;
};

struct GardenerItem_c {
  struct GardenerItem_c__Class *klass;
  struct MonitorData *monitor;
};
struct GardenerItem_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GardenerItem_c__StaticFields {
  struct GardenerItem_c * __9;
  struct DelayedAction_Action * __9__36_0;
};
struct GardenerItem_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GardenerItem_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GardenerItem_c__VTable vtable;
};

struct GardenerScreen__Fields {
  struct ShopkeeperScreen__Fields _;
  struct NpcProjectItem__Array * Projects;
  struct GardenerItem__Array * GardenerItems;
  struct NpcProjectItem * m_lastProject;
};
struct GardenerScreen {
  struct GardenerScreen__Class *klass;
  struct MonitorData *monitor;
  struct GardenerScreen__Fields fields;
};
struct GardenerItem__Array {
  struct GardenerItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct GardenerItem * vector[32];
};
struct GardenerScreen__VTable {
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
struct GardenerScreen__StaticFields {
  struct GardenerScreen * _Instance_k__BackingField;
};
struct GardenerScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GardenerScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GardenerScreen__VTable vtable;
};

struct GUIHelper {
  struct GUIHelper__Class *klass;
  struct MonitorData *monitor;
};
struct GUIHelper__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GUIHelper__StaticFields {
  struct GUIStyle * m_bigText;
  struct GUIStyle * m_mediumText;
};
struct GUIHelper__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GUIHelper__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GUIHelper__VTable vtable;
};

enum LoremasterReplayController_State__Enum : int32_t {
  LoremasterReplayController_State__Enum_OutsideReplayMode = 0,
  LoremasterReplayController_State__Enum_InsideReplayMode = 1,
  LoremasterReplayController_State__Enum_WaitingToApply = 2,
  LoremasterReplayController_State__Enum_Applying = 3,
  LoremasterReplayController_State__Enum_WaitingToExit = 4,
  LoremasterReplayController_State__Enum_Exitting = 5,
  LoremasterReplayController_State__Enum_WaitingToRestart = 6,
  LoremasterReplayController_State__Enum_FadeOutAfterReplayExit = 7,
  LoremasterReplayController_State__Enum_FadeOutAfterApplied = 8,
};
struct LoremasterReplayController_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum LoremasterReplayController_State__Enum value;
};
struct LoremasterReplayController__Fields {
  struct MonoBehaviour__Fields _;
  struct ReplaySetting * m_currentSetting;
  enum LoremasterReplayController_State__Enum m_state;
  struct Nullable_1_UnityEngine_Vector3_ CachedSeinPosition;
  bool m_isMasterScene;
  struct MoonTimeline * m_masterTimeline;
  struct EventTriggerAnimator * m_overrideEndTimelineTrigger;
  bool m_masterTimelineFinished;
  bool ReplayStartedFromMainMenu;
  struct Byte__Array * UberStateValueStoreData;
  enum DifficultyMode__Enum m_currentDificulty;
};
struct LoremasterReplayController {
  struct LoremasterReplayController__Class *klass;
  struct MonitorData *monitor;
  struct LoremasterReplayController__Fields fields;
};
struct ReplaySetting__Fields {
  struct ScriptableObject__Fields _;
  struct MessageProvider * Description;
  enum SkipCutscene_GameplayMode__Enum GameplayMode;
  struct Texture2D * LoremasterIcon;
  bool IsPlayable;
  struct SceneMetaData * LoremasterScene;
  struct ConditionUberState * ReplayUnlocked;
  struct ConditionUberState * ReplayCompleted;
  struct DesiredUberStateComposite * StateOverride;
  struct SceneMetaData * Scene;
  struct List_1_SceneMetaData_ * Preloads;
  bool UseTriggerToEndReplay;
  struct Byte__Array * UberStateValueStoreData;
  bool OverrideEquipmentAndAbilities;
  struct SceneMetaData_SeinAbilitiesWotW * Abilities;
  struct SceneMetaData_SeinAbilitiesWotW * m_cachedAbilities;
  struct SceneMetaData_SeinEquipmentWotW__Array * Equipment;
  struct SceneMetaData_SeinEquipmentWotW__Array * m_cachedEquipment;
  struct SceneMetaData_SeinEquipmentWotW * DefaultXButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW * DefaultYButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW * DefaultBButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW * m_cachedDefaultXButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW * m_cachedDefaultYButtonEquipment;
  struct SceneMetaData_SeinEquipmentWotW * m_cachedDefaultBButtonEquipment;
  bool ShouldOverridePosition;
  struct Vector2 OverridePosition;
};
struct ReplaySetting {
  struct ReplaySetting__Class *klass;
  struct MonitorData *monitor;
  struct ReplaySetting__Fields fields;
};
struct ReplaySetting__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplaySetting__StaticFields {
};
struct ReplaySetting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplaySetting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplaySetting__VTable vtable;
};
struct LoremasterReplayController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData OnFixedUpdate;
};
struct LoremasterReplayController__StaticFields {
  struct LoremasterReplayController * Instance;
};
struct LoremasterReplayController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoremasterReplayController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoremasterReplayController__VTable vtable;
};

struct __declspec(align(8)) LoremasterReplayController_c_DisplayClass48_0__Fields {
  bool shouldCacheUberstates;
  struct LoremasterReplayController * __4__this;
};
struct LoremasterReplayController_c_DisplayClass48_0 {
  struct LoremasterReplayController_c_DisplayClass48_0__Class *klass;
  struct MonitorData *monitor;
  struct LoremasterReplayController_c_DisplayClass48_0__Fields fields;
};
struct LoremasterReplayController_c_DisplayClass48_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoremasterReplayController_c_DisplayClass48_0__StaticFields {
};
struct LoremasterReplayController_c_DisplayClass48_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoremasterReplayController_c_DisplayClass48_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoremasterReplayController_c_DisplayClass48_0__VTable vtable;
};

struct LoremasterScreen__Fields {
  struct MenuScreen__Fields _;
  struct ReplaySetting__Array * ReplaySettings;
  struct GameObject * LoremasterReplayItemPrefab;
  struct GameObject * ItemRoot;
  struct EquipmentUIInventoryGrid * Grid;
  struct GameObject * LoremasterWatchIcon;
  struct GameObject * LoremasterPlayIcon;
  struct MessageBox * LoremasterSelectedLabel;
  struct MessageProvider * DefaultLockedMessage;
  struct LoremasterUISlot * m_SelectedItem;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct LoremasterScreen {
  struct LoremasterScreen__Class *klass;
  struct MonitorData *monitor;
  struct LoremasterScreen__Fields fields;
};
struct ReplaySetting__Array {
  struct ReplaySetting__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ReplaySetting * vector[32];
};
struct LoremasterUISlot__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * SelectionHighlight;
  struct GameObject * WatchIcon;
  struct GameObject * PlayIcon;
  struct GameObject * LockImage;
  struct Renderer * Image;
  struct ReplaySetting * m_replaySetting;
};
struct LoremasterUISlot {
  struct LoremasterUISlot__Class *klass;
  struct MonitorData *monitor;
  struct LoremasterUISlot__Fields fields;
};
struct LoremasterUISlot__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct LoremasterUISlot__StaticFields {
};
struct LoremasterUISlot__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoremasterUISlot__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoremasterUISlot__VTable vtable;
};
struct LoremasterScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
};
struct LoremasterScreen__StaticFields {
  struct LoremasterScreen * Instance;
};
struct LoremasterScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoremasterScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoremasterScreen__VTable vtable;
};

struct LoremasterScreen_c {
  struct LoremasterScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct LoremasterScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LoremasterScreen_c__StaticFields {
  struct LoremasterScreen_c * __9;
  struct Action_1_UnityEngine_GameObject_ * __9__42_0;
};
struct LoremasterScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoremasterScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoremasterScreen_c__VTable vtable;
};

struct ReplayScreen__Fields {
  struct MenuScreen__Fields _;
  struct SoundProvider * OpenSound;
  struct SoundProvider * CloseSound;
  struct ReplaySetting__Array * BossReplaySettings;
  struct ReplaySetting__Array * EscapeReplaySettings;
  struct ReplaySetting__Array * CutsceneReplaySettings;
  struct ReplaySetting__Array * RaceReplaySettings;
  struct CleverMenuItemGroup * BossGroup;
  struct CleverMenuItemGroup * EscapeGroup;
  struct CleverMenuItemGroup * CutsceneGroup;
  struct CleverMenuItemGroup * RaceGroup;
  struct GameObject * LoremasterReplayItemPrefab;
  struct CleverMenuItemSelectionManager * Navigation;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct ReplayScreen {
  struct ReplayScreen__Class *klass;
  struct MonitorData *monitor;
  struct ReplayScreen__Fields fields;
};
struct ReplayScreen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
};
struct ReplayScreen__StaticFields {
  struct ReplayScreen * Instance;
};
struct ReplayScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayScreen__VTable vtable;
};

struct __declspec(align(8)) ReplayScreen_c_DisplayClass22_0__Fields {
  struct ReplaySetting * setting;
};
struct ReplayScreen_c_DisplayClass22_0 {
  struct ReplayScreen_c_DisplayClass22_0__Class *klass;
  struct MonitorData *monitor;
  struct ReplayScreen_c_DisplayClass22_0__Fields fields;
};
struct ReplayScreen_c_DisplayClass22_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ReplayScreen_c_DisplayClass22_0__StaticFields {
};
struct ReplayScreen_c_DisplayClass22_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplayScreen_c_DisplayClass22_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplayScreen_c_DisplayClass22_0__VTable vtable;
};

struct __declspec(align(8)) ReplaySetting_ApplyRoutine_d_34__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct ReplaySetting * __4__this;
};
struct ReplaySetting_ApplyRoutine_d_34 {
  struct ReplaySetting_ApplyRoutine_d_34__Class *klass;
  struct MonitorData *monitor;
  struct ReplaySetting_ApplyRoutine_d_34__Fields fields;
};
struct ReplaySetting_ApplyRoutine_d_34__VTable {
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
struct ReplaySetting_ApplyRoutine_d_34__StaticFields {
};
struct ReplaySetting_ApplyRoutine_d_34__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ReplaySetting_ApplyRoutine_d_34__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ReplaySetting_ApplyRoutine_d_34__VTable vtable;
};

struct __declspec(align(8)) ReplaySetting_GoToSceneRoutine_d_37__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct String * sceneName;
  bool exit;
  struct Action * onComplete;
  struct Vector3 position;
  struct SceneMetaData * metaData;
};
struct ReplaySetting_GoToSceneRoutine_d_37 {
  struct ReplaySetting_GoToSceneRoutine_d_37__Class *klass;
  struct MonitorData *monitor;
  struct ReplaySetting_GoToSceneRoutine_d_37__Fields fields;
};
struct ReplaySetting_GoToSceneRoutine_d_37__VTable {
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
struct ReplaySetting_GoToSceneRoutine_d_37__StaticFields {
};}