namespace app {
struct ToggleSettingsAction_SettingType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ToggleSettingsAction_SettingType__Enum value;
};
struct ToggleSettingsAction__Fields {
  struct ActionMethod__Fields _;
  enum ToggleSettingsAction_SettingType__Enum Setting;
  struct SoundProvider * OnSound;
  struct SoundProvider * OffSound;
};
struct ToggleSettingsAction {
  struct ToggleSettingsAction__Class *klass;
  struct MonitorData *monitor;
  struct ToggleSettingsAction__Fields fields;
};
struct ToggleSettingsAction__VTable {
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
struct ToggleSettingsAction__StaticFields {
};
struct ToggleSettingsAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ToggleSettingsAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ToggleSettingsAction__VTable vtable;
};

struct UnlockCutsceneAction__Fields {
  struct ActionMethod__Fields _;
  enum UnlockedCutscenes__Enum Cutscene;
};
struct UnlockCutsceneAction {
  struct UnlockCutsceneAction__Class *klass;
  struct MonitorData *monitor;
  struct UnlockCutsceneAction__Fields fields;
};
struct UnlockCutsceneAction__VTable {
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
struct UnlockCutsceneAction__StaticFields {
};
struct UnlockCutsceneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UnlockCutsceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UnlockCutsceneAction__VTable vtable;
};

struct VibrationSlider__Fields {
  struct CleverValueSlider__Fields _;
};
struct VibrationSlider {
  struct VibrationSlider__Class *klass;
  struct MonitorData *monitor;
  struct VibrationSlider__Fields fields;
};
struct VibrationSlider__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData get_IsVisible;
  VirtualInvokeData set_IsVisible;
  VirtualInvokeData get_CanBeEntered;
  VirtualInvokeData get_IsActive;
  VirtualInvokeData set_IsActive;
  VirtualInvokeData get_IsHighlightVisible;
  VirtualInvokeData set_IsHighlightVisible;
  VirtualInvokeData Awake;
  VirtualInvokeData EnterInGroup;
  VirtualInvokeData OnMenuItemChangedInGroup;
  VirtualInvokeData get_Value;
  VirtualInvokeData set_Value;
  VirtualInvokeData get_NormalizedValue;
  VirtualInvokeData set_NormalizedValue;
  VirtualInvokeData get_NormalizedDefaultValue;
  VirtualInvokeData get_MouseDragStepParameter;
  VirtualInvokeData GetValueToDisplay;
  VirtualInvokeData ApplyValueOnSliderReleased;
  VirtualInvokeData UpdateStep;
};
struct VibrationSlider__StaticFields {
};
struct VibrationSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct VibrationSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct VibrationSlider__VTable vtable;
};

struct RisingStompPost__Fields {
  struct SaveSerialize__Fields _;
  int32_t MaxNumberOfStomps;
  float StompIntoGroundAmount;
  float RiseSpeed;
  float SpeedIntoGround;
  struct RisingStompPost * TwinPost;
  struct SoundProvider * StompSound;
  struct ActionMethod * ConstantAction;
  struct ActionMethod * StompedAction;
  struct Vector3 _startLocalPosition;
  struct Transform * _transform;
  float _distanceStompedIntoGround;
  bool _beingStomped;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  struct IDamageReciever__Array * m_damageReceivers;
};
struct RisingStompPost {
  struct RisingStompPost__Class *klass;
  struct MonitorData *monitor;
  struct RisingStompPost__Fields fields;
};
struct RisingStompPost__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Serialize;
  VirtualInvokeData RegisterToSaveSceneManager;
  VirtualInvokeData Serialize_1;
  VirtualInvokeData IDamageReciever_get_gameObject;
  VirtualInvokeData IDamageReciever_get_transform;
  VirtualInvokeData OnRecieveDamage;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData CountsTowardsSuperJumpAchievement;
  VirtualInvokeData get_Position;
  VirtualInvokeData IsDead;
  VirtualInvokeData CanBeChargeFlamed;
  VirtualInvokeData CanBeChargeDashed;
  VirtualInvokeData CanBeGrenaded;
  VirtualInvokeData CanBeStomped;
  VirtualInvokeData CanBeBashed;
  VirtualInvokeData CanBeSpiritFlamed;
  VirtualInvokeData IsStompBouncable;
  VirtualInvokeData CanBeLevelUpBlasted;
  VirtualInvokeData CanBeSpiritSlashed;
  VirtualInvokeData CanBeHitByBow;
  VirtualInvokeData CanBeHitByMelee;
  VirtualInvokeData CanBeHitByHammerHandle;
  VirtualInvokeData CanBeHeavySpiritSlashed;
  VirtualInvokeData CanBeSpiritLeashed;
  VirtualInvokeData CanBeHomingMissiled;
  VirtualInvokeData CanBeTrapped;
  VirtualInvokeData CanBeSpiritSpeared;
  VirtualInvokeData CanBeTeleportedByBeacon;
  VirtualInvokeData CanBeGlowed;
  VirtualInvokeData get_AffectedReceivers;
};
struct RisingStompPost__StaticFields {
};
struct RisingStompPost__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RisingStompPost__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RisingStompPost__VTable vtable;
};

struct HideWhenMainMenuOpen__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyTransparencyAnimator * Fader;
};
struct HideWhenMainMenuOpen {
  struct HideWhenMainMenuOpen__Class *klass;
  struct MonitorData *monitor;
  struct HideWhenMainMenuOpen__Fields fields;
};
struct __declspec(align(8)) AllContainer_1_HideWhenMainMenuOpen___Fields {
  struct List_1_HideWhenMainMenuOpen_ * m_objects;
};
struct AllContainer_1_HideWhenMainMenuOpen_ {
  struct AllContainer_1_HideWhenMainMenuOpen___Class *klass;
  struct MonitorData *monitor;
  struct AllContainer_1_HideWhenMainMenuOpen___Fields fields;
};
struct __declspec(align(8)) List_1_HideWhenMainMenuOpen___Fields {
  struct HideWhenMainMenuOpen__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_HideWhenMainMenuOpen_ {
  struct List_1_HideWhenMainMenuOpen___Class *klass;
  struct MonitorData *monitor;
  struct List_1_HideWhenMainMenuOpen___Fields fields;
};
struct HideWhenMainMenuOpen__Array {
  struct HideWhenMainMenuOpen__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct HideWhenMainMenuOpen * vector[32];
};
struct IEnumerator_1_HideWhenMainMenuOpen_ {
  struct IEnumerator_1_HideWhenMainMenuOpen___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_HideWhenMainMenuOpen___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_HideWhenMainMenuOpen___StaticFields {
};
struct IEnumerator_1_HideWhenMainMenuOpen___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_HideWhenMainMenuOpen___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_HideWhenMainMenuOpen___VTable vtable;
};
struct List_1_HideWhenMainMenuOpen___VTable {
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
struct List_1_HideWhenMainMenuOpen___StaticFields {
  struct HideWhenMainMenuOpen__Array * _emptyArray;
};
struct List_1_HideWhenMainMenuOpen___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_HideWhenMainMenuOpen___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_HideWhenMainMenuOpen___VTable vtable;
};
struct AllContainer_1_HideWhenMainMenuOpen___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AllContainer_1_HideWhenMainMenuOpen___StaticFields {
};
struct AllContainer_1_HideWhenMainMenuOpen___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AllContainer_1_HideWhenMainMenuOpen___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AllContainer_1_HideWhenMainMenuOpen___VTable vtable;
};
struct HideWhenMainMenuOpen__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct HideWhenMainMenuOpen__StaticFields {
  struct AllContainer_1_HideWhenMainMenuOpen_ * m_all;
};
struct HideWhenMainMenuOpen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HideWhenMainMenuOpen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HideWhenMainMenuOpen__VTable vtable;
};

struct InventoryScreen2__Fields {
  struct MenuScreen__Fields _;
  struct CleverMenuItemSelectionManager * NavigationManager;
  struct CleverMenuItem * DefaultItem;
  enum MenuTabBackground__Enum Background;
  struct MoonTimelineUiFader * UiFader;
  struct EventTriggerAnimator * GCTrigger;
  struct InventoryScreenItem * m_SelectedItem;
  struct MessageBox * OreCount;
  struct MessageBox * SocketCount;
  struct MessageBox * EnergyCellCount;
  struct MessageBox * HealthCellCount;
  struct MessageBox * SpiritLightCount;
  struct CleverMenuItem * lastItem;
  struct InventoryScreenHealthEnergyElements * ProgressElements;
  struct InventoryScreenPickupElements__Array * InventoryElements;
  struct GameObject * Hint;
  struct MessageBox * HintHeader;
  struct MessageBox * HintDescription;
  struct GameObject * SelectionCircle;
};
struct InventoryScreen2 {
  struct InventoryScreen2__Class *klass;
  struct MonitorData *monitor;
  struct InventoryScreen2__Fields fields;
};
struct InventoryScreenItem__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * Header;
  struct MessageProvider * Text;
  bool AnchorAbove;
};
struct InventoryScreenItem {
  struct InventoryScreenItem__Class *klass;
  struct MonitorData *monitor;
  struct InventoryScreenItem__Fields fields;
};
struct InventoryScreenHealthEnergyElements__Fields {
  struct MonoBehaviour__Fields _;
  struct InventoryScreenHealthEnergyElements_CellElement__Array * HealthCellElements;
  struct InventoryScreenHealthEnergyElements_CellElement__Array * EnergyCellElements;
};
struct InventoryScreenHealthEnergyElements {
  struct InventoryScreenHealthEnergyElements__Class *klass;
  struct MonitorData *monitor;
  struct InventoryScreenHealthEnergyElements__Fields fields;
};
struct InventoryScreenHealthEnergyElements_CellElement {
  struct GameObject * Cell;
  struct MoonTimeline * ShowTimeline;
};
struct InventoryScreenHealthEnergyElements_CellElement__Boxed {
  struct InventoryScreenHealthEnergyElements_CellElement__Class *klass;
  struct MonitorData *monitor;
  struct InventoryScreenHealthEnergyElements_CellElement fields;
};
struct InventoryScreenHealthEnergyElements_CellElement__Array {
  struct InventoryScreenHealthEnergyElements_CellElement__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InventoryScreenHealthEnergyElements_CellElement vector[32];
};
struct InventoryScreenPickupElements__Fields {
  struct MonoBehaviour__Fields _;
  struct InventoryScreenPickupElements_UberStateToElement__Array * ElementMap;
};
struct InventoryScreenPickupElements {
  struct InventoryScreenPickupElements__Class *klass;
  struct MonitorData *monitor;
  struct InventoryScreenPickupElements__Fields fields;
};
struct InventoryScreenPickupElements__Array {
  struct InventoryScreenPickupElements__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InventoryScreenPickupElements * vector[32];
};
struct InventoryScreenPickupElements_UberStateToElement {
  struct ConditionUberState * Condition;
  struct GameObject * Element;
  struct MoonTimeline * ShowTimeline;
};
struct InventoryScreenPickupElements_UberStateToElement__Boxed {
  struct InventoryScreenPickupElements_UberStateToElement__Class *klass;
  struct MonitorData *monitor;
  struct InventoryScreenPickupElements_UberStateToElement fields;
};
struct InventoryScreenPickupElements_UberStateToElement__Array {
  struct InventoryScreenPickupElements_UberStateToElement__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InventoryScreenPickupElements_UberStateToElement vector[32];
};
struct InventoryScreenItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InventoryScreenItem__StaticFields {
};
struct InventoryScreenItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InventoryScreenItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InventoryScreenItem__VTable vtable;
};
struct InventoryScreenHealthEnergyElements_CellElement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InventoryScreenHealthEnergyElements_CellElement__StaticFields {
};
struct InventoryScreenHealthEnergyElements_CellElement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InventoryScreenHealthEnergyElements_CellElement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InventoryScreenHealthEnergyElements_CellElement__VTable vtable;
};
struct InventoryScreenHealthEnergyElements__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InventoryScreenHealthEnergyElements__StaticFields {
};
struct InventoryScreenHealthEnergyElements__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InventoryScreenHealthEnergyElements__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InventoryScreenHealthEnergyElements__VTable vtable;
};
struct InventoryScreenPickupElements_UberStateToElement__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InventoryScreenPickupElements_UberStateToElement__StaticFields {
};
struct InventoryScreenPickupElements_UberStateToElement__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InventoryScreenPickupElements_UberStateToElement__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InventoryScreenPickupElements_UberStateToElement__VTable vtable;
};
struct InventoryScreenPickupElements__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InventoryScreenPickupElements__StaticFields {
};
struct InventoryScreenPickupElements__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InventoryScreenPickupElements__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InventoryScreenPickupElements__VTable vtable;
};
struct InventoryScreen2__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
  VirtualInvokeData ShowImmediate;
  VirtualInvokeData HideImmediate;
  VirtualInvokeData PlaySoundEvent;
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
};
struct InventoryScreen2__StaticFields {
  struct InventoryScreen2 * Instance;
};
struct InventoryScreen2__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InventoryScreen2__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InventoryScreen2__VTable vtable;
};

struct IsSafeToExitCondition__Fields {
  struct Condition_1__Fields _;
};
struct IsSafeToExitCondition {
  struct IsSafeToExitCondition__Class *klass;
  struct MonitorData *monitor;
  struct IsSafeToExitCondition__Fields fields;
};
struct IsSafeToExitCondition__VTable {
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
struct IsSafeToExitCondition__StaticFields {
};
struct IsSafeToExitCondition__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IsSafeToExitCondition__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IsSafeToExitCondition__VTable vtable;
};

enum MenuScreenManager_Screens__Enum : int32_t {
  MenuScreenManager_Screens__Enum_None = -1,
  MenuScreenManager_Screens__Enum_Pause = 0,
  MenuScreenManager_Screens__Enum_SkillTree = 1,
  MenuScreenManager_Screens__Enum_WorldMap = 2,
  MenuScreenManager_Screens__Enum_Options = 3,
  MenuScreenManager_Screens__Enum_Inventory = 4,
  MenuScreenManager_Screens__Enum_Spells = 5,
  MenuScreenManager_Screens__Enum_Shards = 6,
  MenuScreenManager_Screens__Enum_LegacyEquipmentScreen = 7,
  MenuScreenManager_Screens__Enum_ShardsShop = 200,
  MenuScreenManager_Screens__Enum_EquipmentWheel = 201,
  MenuScreenManager_Screens__Enum_Stats = 202,
  MenuScreenManager_Screens__Enum_SkillUpgrade = 203,
  MenuScreenManager_Screens__Enum_BuilderProjects = 204,
  MenuScreenManager_Screens__Enum_GardenerProjects = 205,
  MenuScreenManager_Screens__Enum_RacePause = 206,
  MenuScreenManager_Screens__Enum_Loremaster = 207,
  MenuScreenManager_Screens__Enum_RaceScreen = 208,
  MenuScreenManager_Screens__Enum_MapmakerShop = 209,
  MenuScreenManager_Screens__Enum_ShardUpgradeShop = 210,
};
struct MenuScreenManager_Screens__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MenuScreenManager_Screens__Enum value;
};
struct MenuScreenManager__Fields {
  struct Suspendable__Fields _;
  struct GameObject * TabManager;
  struct GameObject * ResumeScreen;
  struct GameObject * StatsScreenPrefab;
  struct GameObject * LoremasterScreenPrefab;
  struct GameObject * RaceMenuScreenPrefab;
  struct ConditionUberState * CanOpenMap;
  struct MessageProvider * NoMapTextMessageProvider;
  enum MenuScreenManager_Screens__Enum CurrentScreen;
  struct UISoundSettingsAsset * Sounds;
  bool ShardShopLoading;
  bool LockClosingMenu;
  struct Dictionary_2_MenuScreenManager_Screens_System_Func_1_ * m_allScreens;
  struct HashSet_1_Moon_ISuspendable_ * m_suspendables;
  struct HashSet_1_Moon_ISuspendable_ * m_uiSuspendables;
  struct List_1_UnityEngine_GameObject_ * m_registeredUIElements;
  float m_menuOpenTime;
  float m_screenOpenTime;
  struct ResumeGameController * m_resumeScreen;
  bool m_isPaused;
  bool m_showingOpeningScreen;
  bool m_equipmentWhellVisible;
  bool m_wasPlayingMasterTimelineWhenScreenOpened;
  struct IEnumerator * m_pauseMenuFadeInRoutine;
  bool m_ignoreNextOpenSound;
  bool _AllowEquipmentWheelWhileMovementIsDisabled_k__BackingField;
  bool _IsSuspended_k__BackingField;
  bool m_EquipmentWheelToggle;
  bool m_EquipmentWheelTogglePendingRelease;
};
struct MenuScreenManager {
  struct MenuScreenManager__Class *klass;
  struct MonitorData *monitor;
  struct MenuScreenManager__Fields fields;
};
struct __declspec(align(8)) List_1_ISKipUiBackgroundBlur___Fields {
  struct ISKipUiBackgroundBlur__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_ISKipUiBackgroundBlur_ {
  struct List_1_ISKipUiBackgroundBlur___Class *klass;
  struct MonitorData *monitor;
  struct List_1_ISKipUiBackgroundBlur___Fields fields;
};
struct ISKipUiBackgroundBlur {
  struct ISKipUiBackgroundBlur__Class *klass;
  struct MonitorData *monitor;
};
struct ISKipUiBackgroundBlur__Array {
  struct ISKipUiBackgroundBlur__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ISKipUiBackgroundBlur * vector[32];
};
struct IEnumerator_1_ISKipUiBackgroundBlur_ {
  struct IEnumerator_1_ISKipUiBackgroundBlur___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_MenuScreenManager_Screens_System_Func_1___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_MenuScreenManager_Screens_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_MenuScreenManager_Screens_System_Func_1_ {
  struct Dictionary_2_MenuScreenManager_Screens_System_Func_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_MenuScreenManager_Screens_System_Func_1___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1_ {
  int32_t hashCode;
  int32_t next;
  enum MenuScreenManager_Screens__Enum key;
  struct Func_1_MenuScreen_ * value;
};
struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array {
  struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1_ vector[32];
};
struct Func_1_MenuScreen___Fields {
  struct MulticastDelegate__Fields _;
};
struct Func_1_MenuScreen_ {
  struct Func_1_MenuScreen___Class *klass;
  struct MonitorData *monitor;
  struct Func_1_MenuScreen___Fields fields;
};
struct IEqualityComparer_1_MenuScreenManager_Screens_ {
  struct IEqualityComparer_1_MenuScreenManager_Screens___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___Fields {
  struct Dictionary_2_MenuScreenManager_Screens_System_Func_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___Fields fields;
};
struct MenuScreenManager_Screens__Enum__Array {
  struct MenuScreenManager_Screens__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum MenuScreenManager_Screens__Enum vector[32];
};
struct IEnumerator_1_MenuScreenManager_Screens_ {
  struct IEnumerator_1_MenuScreenManager_Screens___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___Fields {
  struct Dictionary_2_MenuScreenManager_Screens_System_Func_1_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___Fields fields;
};
struct Func_1_MenuScreen___Array {
  struct Func_1_MenuScreen___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Func_1_MenuScreen_ * vector[32];
};
struct IEnumerator_1_System_Func_1_ {
  struct IEnumerator_1_System_Func_1___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_MenuScreenManager_Screens_ {
  struct ICollection_1_MenuScreenManager_Screens___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_System_Func_1_ {
  struct ICollection_1_System_Func_1___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_MenuScreenManager_Screens_System_Func_1_ {
  enum MenuScreenManager_Screens__Enum key;
  struct Func_1_MenuScreen_ * value;
};
struct KeyValuePair_2_MenuScreenManager_Screens_System_Func_1___Boxed {
  struct KeyValuePair_2_MenuScreenManager_Screens_System_Func_1___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_MenuScreenManager_Screens_System_Func_1_ fields;
};
struct KeyValuePair_2_MenuScreenManager_Screens_System_Func_1___Array {
  struct KeyValuePair_2_MenuScreenManager_Screens_System_Func_1___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_MenuScreenManager_Screens_System_Func_1_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_MenuScreenManager_Screens_System_Func_1_ {
  struct IEnumerator_1_KeyValuePair_2_MenuScreenManager_Screens_System_Func_1___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_MenuScreenManager_Screens_ {
  struct IEnumerable_1_MenuScreenManager_Screens___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Func_1_ {
  struct IEnumerable_1_System_Func_1___Class *klass;
  struct MonitorData *monitor;
};
struct ResumeGameController__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * VisibleGroup;
  bool m_playerInputWasDeactivated;
};
struct ResumeGameController {
  struct ResumeGameController__Class *klass;
  struct MonitorData *monitor;
  struct ResumeGameController__Fields fields;
};
struct ISKipUiBackgroundBlur__VTable {
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
};
struct ISKipUiBackgroundBlur__StaticFields {
};
struct ISKipUiBackgroundBlur__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ISKipUiBackgroundBlur__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ISKipUiBackgroundBlur__VTable vtable;
};
struct IEnumerator_1_ISKipUiBackgroundBlur___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_ISKipUiBackgroundBlur___StaticFields {
};
struct IEnumerator_1_ISKipUiBackgroundBlur___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_ISKipUiBackgroundBlur___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_ISKipUiBackgroundBlur___VTable vtable;
};
struct List_1_ISKipUiBackgroundBlur___VTable {
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
struct List_1_ISKipUiBackgroundBlur___StaticFields {
  struct ISKipUiBackgroundBlur__Array * _emptyArray;
};
struct List_1_ISKipUiBackgroundBlur___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_ISKipUiBackgroundBlur___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_ISKipUiBackgroundBlur___VTable vtable;
};
struct Func_1_MenuScreen___VTable {
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
struct Func_1_MenuScreen___StaticFields {
};
struct Func_1_MenuScreen___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Func_1_MenuScreen___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Func_1_MenuScreen___VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_MenuScreenManager_Screens_System_Func_1___VTable vtable;
};
struct IEqualityComparer_1_MenuScreenManager_Screens___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_MenuScreenManager_Screens___StaticFields {
};
struct IEqualityComparer_1_MenuScreenManager_Screens___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_MenuScreenManager_Screens___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_MenuScreenManager_Screens___VTable vtable;
};
struct IEnumerator_1_MenuScreenManager_Screens___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MenuScreenManager_Screens___StaticFields {
};
struct IEnumerator_1_MenuScreenManager_Screens___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MenuScreenManager_Screens___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MenuScreenManager_Screens___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TKey__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TKey__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_MenuScreenManager_Screens_System_Func_1___VTable vtable;
};
struct IEnumerator_1_System_Func_1___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_System_Func_1___StaticFields {
};
struct IEnumerator_1_System_Func_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_System_Func_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_System_Func_1___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Count;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__get_IsReadOnly;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Add;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Clear;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData System_Collections_Generic_ICollection_TValue__Remove;
  VirtualInvokeData System_Collections_Generic_IEnumerable_TValue__GetEnumerator;
  VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
  VirtualInvokeData System_Collections_ICollection_CopyTo;
  VirtualInvokeData get_Count_1;
  VirtualInvokeData System_Collections_ICollection_get_SyncRoot;
  VirtualInvokeData System_Collections_ICollection_get_IsSynchronized;
  VirtualInvokeData get_Count_2;
};
struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_MenuScreenManager_Screens_System_Func_1___VTable vtable;
};
struct ICollection_1_MenuScreenManager_Screens___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};}