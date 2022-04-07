namespace app {
struct SpiritShardShopUIShardDetails__StaticFields {
};
struct SpiritShardShopUIShardDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardShopUIShardDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardShopUIShardDetails__VTable vtable;
};

struct SpiritShardShopUISubItem__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct GameObject * IconGO;
  struct GameObject * CostGO;
  struct PlayerUberStateShards_Shard * m_spiritShard;
};
struct SpiritShardShopUISubItem {
  struct SpiritShardShopUISubItem__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardShopUISubItem__Fields fields;
};
struct SpiritShardShopUISubItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct SpiritShardShopUISubItem__StaticFields {
};
struct SpiritShardShopUISubItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardShopUISubItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardShopUISubItem__VTable vtable;
};

struct __declspec(align(8)) SpiritShardShopUISubItem_Context__Fields {
  bool Passive;
  enum EquipmentType__Enum CompatibleEquipment;
};
struct SpiritShardShopUISubItem_Context {
  struct SpiritShardShopUISubItem_Context__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardShopUISubItem_Context__Fields fields;
};
struct SpiritShardShopUISubItem_Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardShopUISubItem_Context__StaticFields {
};
struct SpiritShardShopUISubItem_Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardShopUISubItem_Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardShopUISubItem_Context__VTable vtable;
};

struct SpiritShardsScreen_HintsSettings {
  struct GameObject * MessagePrefab;
  struct Transform * MessageAnchor;
  float MessageDuration;
  struct MessageProvider * GlobalShardEquipFailure;
  struct MessageProvider * NoUpgradeAvailable;
  struct MessageProvider * NotEnoughSpiritLight;
  struct MessageProvider * AllSocketsAreFull;
  struct MessageProvider * CantSocketSelectedEquipment;
};
struct SpiritShardsScreen_HintsSettings__Boxed {
  struct SpiritShardsScreen_HintsSettings__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardsScreen_HintsSettings fields;
};
struct SpiritShardsScreen__Fields {
  struct MenuScreenStack__Fields _;
  struct MoonTimelineUiFader * UiFader;
  struct EventTriggerAnimator * GCTrigger;
  struct GameObject * ShardSocketCanvas;
  struct Transform * AnchorCategoryContext;
  struct GameObject * m_bindingsCanvas;
  struct SpellUIPassiveShards * m_socketCanvas;
  struct SpiritShardUIShardFloatingTooltip * Tooltip;
  struct GameObject * ShardDetailsCanvasPrefab;
  struct Transform * AnchorItemDetails;
  struct SpiritShardUIShardDetails * m_shardDetailsCanvas;
  struct GameObject * ShardItemPrefab;
  struct GameObject * ItemHighlightGO;
  struct GameObject * ItemHighlightNormalGO;
  struct GameObject * ItemHighlightUpgradableGO;
  struct Transform * AnchorExperience;
  struct SpellUIExperience * m_experience;
  struct GameObject * ConfirmationOverlayPrefab;
  struct SpellUIConfirmationOverlay * m_confirmationOverlay;
  struct EquipmentUIInventoryGrid * Grid;
  enum MenuTabBackground__Enum Background;
  bool m_isHiding;
  struct SpiritShardsScreen_HintsSettings Hints;
  struct SpiritShardUIItem * m_confirmContextShardUIItem;
  struct PlayerUberStateShards_Shard * m_confirmContextShard;
  struct SpiritShardUIItem * m_selectedShard;
  struct SpiritShardUIItem_Context * m_spiritShardUIContext;
  struct MessageBox * m_currentHint;
  struct PlayerUberStateShards_Shard * m_autoFocusShard;
  bool m_isInited;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
  float UpgradeTime;
  struct GameObject * UpgradeEffect;
  float UpgradeProgress;
  float m_lastPurchaseTime;
  float UpgradeCooldown;
  struct AnimationCurve * PurchaseAnimationCurve;
};
struct SpiritShardsScreen {
  struct SpiritShardsScreen__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardsScreen__Fields fields;
};
struct SpiritShardsScreen_HintsSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardsScreen_HintsSettings__StaticFields {
};
struct SpiritShardsScreen_HintsSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsScreen_HintsSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsScreen_HintsSettings__VTable vtable;
};
struct SpiritShardsScreen__VTable {
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
  VirtualInvokeData get_CanInterruptTab;
  VirtualInvokeData get_BackgroundMode;
  VirtualInvokeData get_NeedsExperienceUI;
  VirtualInvokeData get_NeedOreUI;
  VirtualInvokeData OnPostTimeSlicedEnable;
  VirtualInvokeData OnInstantiate;
};
struct SpiritShardsScreen__StaticFields {
  struct SpiritShardsScreen * Instance;
};
struct SpiritShardsScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsScreen__VTable vtable;
};

struct __declspec(align(8)) SpiritShardsScreen_c_DisplayClass77_0__Fields {
  struct PlayerUberStateShards_Shard * item;
};
struct SpiritShardsScreen_c_DisplayClass77_0 {
  struct SpiritShardsScreen_c_DisplayClass77_0__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardsScreen_c_DisplayClass77_0__Fields fields;
};
struct SpiritShardsScreen_c_DisplayClass77_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardsScreen_c_DisplayClass77_0__StaticFields {
};
struct SpiritShardsScreen_c_DisplayClass77_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsScreen_c_DisplayClass77_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsScreen_c_DisplayClass77_0__VTable vtable;
};

struct SpiritShardsScreen_c {
  struct SpiritShardsScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpiritShardsScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardsScreen_c__StaticFields {
  struct SpiritShardsScreen_c * __9;
  struct Predicate_1_CleverMenuItem_ * __9__78_0;
};
struct SpiritShardsScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsScreen_c__VTable vtable;
};

struct __declspec(align(8)) SpiritShardsShopScreen_c_DisplayClass63_0__Fields {
  struct PlayerUberStateShards_Shard * item;
};
struct SpiritShardsShopScreen_c_DisplayClass63_0 {
  struct SpiritShardsShopScreen_c_DisplayClass63_0__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardsShopScreen_c_DisplayClass63_0__Fields fields;
};
struct SpiritShardsShopScreen_c_DisplayClass63_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardsShopScreen_c_DisplayClass63_0__StaticFields {
};
struct SpiritShardsShopScreen_c_DisplayClass63_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsShopScreen_c_DisplayClass63_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsShopScreen_c_DisplayClass63_0__VTable vtable;
};

struct SpiritShardsShopScreen_c {
  struct SpiritShardsShopScreen_c__Class *klass;
  struct MonitorData *monitor;
};
struct Comparison_1_Object___Fields {
  struct MulticastDelegate__Fields _;
};
struct Comparison_1_Object_ {
  struct Comparison_1_Object___Class *klass;
  struct MonitorData *monitor;
  struct Comparison_1_Object___Fields fields;
};
struct Comparison_1_Object___VTable {
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
struct Comparison_1_Object___StaticFields {
};
struct Comparison_1_Object___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Comparison_1_Object___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Comparison_1_Object___VTable vtable;
};
struct SpiritShardsShopScreen_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardsShopScreen_c__StaticFields {
  struct SpiritShardsShopScreen_c * __9;
  struct Predicate_1_CleverMenuItem_ * __9__64_0;
  struct Comparison_1_Object_ * __9__68_0;
};
struct SpiritShardsShopScreen_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardsShopScreen_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardsShopScreen_c__VTable vtable;
};

struct SpiritShardUIConfirmationOverlay_c {
  struct SpiritShardUIConfirmationOverlay_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpiritShardUIConfirmationOverlay_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardUIConfirmationOverlay_c__StaticFields {
  struct SpiritShardUIConfirmationOverlay_c * __9;
  struct Action_1_SpiritShardUIConfirmationOverlay_Selection_ * __9__22_0;
};
struct SpiritShardUIConfirmationOverlay_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIConfirmationOverlay_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIConfirmationOverlay_c__VTable vtable;
};

struct SpiritShardUIStarRow__Fields {
  struct MonoBehaviour__Fields _;
  float StepX;
  struct GameObject * IconTemplate;
};
struct SpiritShardUIStarRow {
  struct SpiritShardUIStarRow__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIStarRow__Fields fields;
};
struct SpiritShardUIStarRow__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardUIStarRow__StaticFields {
};
struct SpiritShardUIStarRow__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIStarRow__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIStarRow__VTable vtable;
};

struct StatisticsManager__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_StatisticsManager_StatStateEntry_ * m_statEntries;
  struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ * m_quickAccesDictionary;
  struct List_1_StatSetting_ * m_statSettings;
  struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ * m_dirtyStates;
  struct Vector3 m_seinPosition;
  float m_distanceTraveled;
  struct PlayerUberStateDescriptor * PlayerUberStateDescriptor;
  struct UberStateGroup * StatisticsStateGroup;
};
struct StatisticsManager {
  struct StatisticsManager__Class *klass;
  struct MonitorData *monitor;
  struct StatisticsManager__Fields fields;
};
struct __declspec(align(8)) List_1_StatisticsManager_StatStateEntry___Fields {
  struct StatisticsManager_StatStateEntry__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_StatisticsManager_StatStateEntry_ {
  struct List_1_StatisticsManager_StatStateEntry___Class *klass;
  struct MonitorData *monitor;
  struct List_1_StatisticsManager_StatStateEntry___Fields fields;
};
enum StatisticsManager_StatType__Enum : int32_t {
  StatisticsManager_StatType__Enum_TotalPlaytime = 100,
  StatisticsManager_StatType__Enum_Completion = 101,
  StatisticsManager_StatType__Enum_DeathTotalCount = 102,
  StatisticsManager_StatType__Enum_DeathFromDrowningCount = 103,
  StatisticsManager_StatType__Enum_DeathFromEnemiesCount = 104,
  StatisticsManager_StatType__Enum_DeathFromEnviromentCount = 105,
  StatisticsManager_StatType__Enum_TotalDamageTaken = 106,
  StatisticsManager_StatType__Enum_EnemiesDefeated = 200,
  StatisticsManager_StatType__Enum_FavoriteCombatSkill = 201,
  StatisticsManager_StatType__Enum_TotalEnergySpent = 202,
  StatisticsManager_StatType__Enum_TotalHealthRegenerated = 203,
  StatisticsManager_StatType__Enum_TopTarget = 204,
  StatisticsManager_StatType__Enum_TopRival = 205,
  StatisticsManager_StatType__Enum_EnemyVsEnemyKills = 206,
  StatisticsManager_StatType__Enum_SkillsUpgrades = 207,
  StatisticsManager_StatType__Enum_HighestAmountOfDamage = 208,
  StatisticsManager_StatType__Enum_JumpCount = 300,
  StatisticsManager_StatType__Enum_WallJumpCount = 301,
  StatisticsManager_StatType__Enum_DashCount = 302,
  StatisticsManager_StatType__Enum_BashCount = 303,
  StatisticsManager_StatType__Enum_BashAirComboCount = 304,
  StatisticsManager_StatType__Enum_LeashesCount = 305,
  StatisticsManager_StatType__Enum_DistanceTraveled = 306,
  StatisticsManager_StatType__Enum_DistanceSwam = 307,
  StatisticsManager_StatType__Enum_DistanceBurrowed = 308,
  StatisticsManager_StatType__Enum_DistanceGliding = 309,
  StatisticsManager_StatType__Enum_DistanceFalling = 310,
  StatisticsManager_StatType__Enum_GlowActiveTime = 311,
  StatisticsManager_StatType__Enum_AirTime = 312,
  StatisticsManager_StatType__Enum_TopAirTime = 313,
  StatisticsManager_StatType__Enum_TopAirDistance = 314,
  StatisticsManager_StatType__Enum_FastTravelCount = 315,
  StatisticsManager_StatType__Enum_TotalSpiritLightCollected = 400,
  StatisticsManager_StatType__Enum_TotalSpiritLightSpent = 401,
  StatisticsManager_StatType__Enum_SkillsGathered = 402,
  StatisticsManager_StatType__Enum_LifeCellsCollected = 403,
  StatisticsManager_StatType__Enum_EnergyCellsCollected = 404,
  StatisticsManager_StatType__Enum_ShardSlotExpansionsCollected = 405,
  StatisticsManager_StatType__Enum_ShardsCollected = 406,
  StatisticsManager_StatType__Enum_SpiritWellsDiscovered = 407,
  StatisticsManager_StatType__Enum_RacePedestalsActivated = 408,
  StatisticsManager_StatType__Enum_ShrinesDiscovered = 409,
  StatisticsManager_StatType__Enum_ShrinesCompleated = 410,
  StatisticsManager_StatType__Enum_RacesCompleated = 411,
  StatisticsManager_StatType__Enum_ShardsUpgradeProgression = 412,
  StatisticsManager_StatType__Enum_NPCsInHub = 500,
  StatisticsManager_StatType__Enum_SideQUestsCompleated = 501,
  StatisticsManager_StatType__Enum_HubProgression = 502,
  StatisticsManager_StatType__Enum_GardenerSeedsCollected = 503,
};
struct StatisticsManager_StatType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StatisticsManager_StatType__Enum value;
};
struct __declspec(align(8)) StatisticsManager_StatStateEntry__Fields {
  enum StatisticsManager_StatType__Enum StatType;
  struct StatSetting * StatAsset;
};
struct StatisticsManager_StatStateEntry {
  struct StatisticsManager_StatStateEntry__Class *klass;
  struct MonitorData *monitor;
  struct StatisticsManager_StatStateEntry__Fields fields;
};
struct StatisticsManager_StatStateEntry__Array {
  struct StatisticsManager_StatStateEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatisticsManager_StatStateEntry * vector[32];
};
enum StatSetting_StatDisplayCategory__Enum : int32_t {
  StatSetting_StatDisplayCategory__Enum_General = 0,
  StatSetting_StatDisplayCategory__Enum_Combat = 1,
  StatSetting_StatDisplayCategory__Enum_Platforming = 2,
  StatSetting_StatDisplayCategory__Enum_Collectibles = 3,
  StatSetting_StatDisplayCategory__Enum_Story = 4,
  StatSetting_StatDisplayCategory__Enum_COUNT = 5,
};
struct StatSetting_StatDisplayCategory__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StatSetting_StatDisplayCategory__Enum value;
};
enum StatSetting_StatSource__Enum : int32_t {
  StatSetting_StatSource__Enum_UberState = 0,
  StatSetting_StatSource__Enum_Condition = 1,
  StatSetting_StatSource__Enum_Special_Compleation = 2,
  StatSetting_StatSource__Enum_Special_FavoriteCombatSkill = 3,
  StatSetting_StatSource__Enum_Special_TopTarget = 4,
  StatSetting_StatSource__Enum_Special_TopRival = 5,
  StatSetting_StatSource__Enum_Special_SkillsUpgrades = 6,
  StatSetting_StatSource__Enum_Special_SkillsGathered = 7,
  StatSetting_StatSource__Enum_Special_ShardSlotsCollected = 8,
  StatSetting_StatSource__Enum_Special_ShardsCollected = 9,
  StatSetting_StatSource__Enum_Special_ShrinesDiscovered = 10,
  StatSetting_StatSource__Enum_Special_ShrinesCompleated = 11,
  StatSetting_StatSource__Enum_Special_RacesCompleated = 12,
  StatSetting_StatSource__Enum_Special_ShardsUpgraded = 13,
  StatSetting_StatSource__Enum_Special_TotalPlaytime = 14,
  StatSetting_StatSource__Enum_Special_Progression = 15,
  StatSetting_StatSource__Enum_Special_HealthContainersProgress = 16,
  StatSetting_StatSource__Enum_Special_EnergyContainerProgress = 17,
};
struct StatSetting_StatSource__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StatSetting_StatSource__Enum value;
};
enum StatSetting_StatFormat__Enum : int32_t {
  StatSetting_StatFormat__Enum_Int = 0,
  StatSetting_StatFormat__Enum_Decimal = 1,
  StatSetting_StatFormat__Enum_Time = 2,
  StatSetting_StatFormat__Enum_Distance = 3,
  StatSetting_StatFormat__Enum_EnemyEnum = 4,
  StatSetting_StatFormat__Enum_SkillEnum = 5,
  StatSetting_StatFormat__Enum_Percentage = 6,
  StatSetting_StatFormat__Enum_Fraction = 7,
};
struct StatSetting_StatFormat__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StatSetting_StatFormat__Enum value;
};
struct StatSetting__Fields {
  struct ScriptableObject__Fields _;
  struct MessageProvider * Description;
  struct Texture2D * Icon;
  enum StatSetting_StatDisplayCategory__Enum Category;
  enum StatSetting_StatSource__Enum DataSource;
  enum StatSetting_StatFormat__Enum NumberFormat;
  struct MoonReference_1_IGenericUberState_ * UberState;
  struct ConditionUberState * StatUnlocked;
  struct StatSettingStrings * Settings;
};
struct StatSetting {
  struct StatSetting__Class *klass;
  struct MonitorData *monitor;
  struct StatSetting__Fields fields;
};
struct StatSettingStrings__Fields {
  struct ScriptableObject__Fields _;
  struct StatSettingStrings_EnemyLabels__Array * EnemyEnumLabels;
  struct StatSettingStrings_EquipmentLabels__Array * AbilityEnumLabels;
};
struct StatSettingStrings {
  struct StatSettingStrings__Class *klass;
  struct MonitorData *monitor;
  struct StatSettingStrings__Fields fields;
};
enum StatSettingStrings_EnemyEnum__Enum : int32_t {
  StatSettingStrings_EnemyEnum__Enum_Slug = 0,
  StatSettingStrings_EnemyEnum__Enum_Miner = 1,
  StatSettingStrings_EnemyEnum__Enum_Mantis = 2,
};
struct StatSettingStrings_EnemyEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum StatSettingStrings_EnemyEnum__Enum value;
};
struct StatSettingStrings_EnemyLabels {
  enum StatSettingStrings_EnemyEnum__Enum Enemy;
  struct MessageProvider * EnemyName;
};
struct StatSettingStrings_EnemyLabels__Boxed {
  struct StatSettingStrings_EnemyLabels__Class *klass;
  struct MonitorData *monitor;
  struct StatSettingStrings_EnemyLabels fields;
};
struct StatSettingStrings_EnemyLabels__Array {
  struct StatSettingStrings_EnemyLabels__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatSettingStrings_EnemyLabels vector[32];
};
struct StatSettingStrings_EquipmentLabels {
  enum EquipmentType__Enum Ability;
  struct MessageProvider * Label;
};
struct StatSettingStrings_EquipmentLabels__Boxed {
  struct StatSettingStrings_EquipmentLabels__Class *klass;
  struct MonitorData *monitor;
  struct StatSettingStrings_EquipmentLabels fields;
};
struct StatSettingStrings_EquipmentLabels__Array {
  struct StatSettingStrings_EquipmentLabels__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatSettingStrings_EquipmentLabels vector[32];
};
struct IEnumerator_1_StatisticsManager_StatStateEntry_ {
  struct IEnumerator_1_StatisticsManager_StatStateEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_StatisticsManager_StatType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ {
  struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ {
  int32_t hashCode;
  int32_t next;
  enum StatisticsManager_StatType__Enum key;
  struct StatisticsManager_RuntimeStatEntry * value;
};
struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Array {
  struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ vector[32];
};
struct __declspec(align(8)) StatisticsManager_RuntimeStatEntry__Fields {
  struct StatSetting * StatAsset;
  float _DirtyValue_k__BackingField;
};
struct StatisticsManager_RuntimeStatEntry {
  struct StatisticsManager_RuntimeStatEntry__Class *klass;
  struct MonitorData *monitor;
  struct StatisticsManager_RuntimeStatEntry__Fields fields;
};
struct IEqualityComparer_1_StatisticsManager_StatType_ {
  struct IEqualityComparer_1_StatisticsManager_StatType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Fields {
  struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Fields fields;
};
struct StatisticsManager_StatType__Enum__Array {
  struct StatisticsManager_StatType__Enum__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  enum StatisticsManager_StatType__Enum vector[32];
};
struct IEnumerator_1_StatisticsManager_StatType_ {
  struct IEnumerator_1_StatisticsManager_StatType___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Fields {
  struct Dictionary_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Fields fields;
};
struct StatisticsManager_RuntimeStatEntry__Array {
  struct StatisticsManager_RuntimeStatEntry__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatisticsManager_RuntimeStatEntry * vector[32];
};
struct IEnumerator_1_StatisticsManager_RuntimeStatEntry_ {
  struct IEnumerator_1_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_StatisticsManager_StatType_ {
  struct ICollection_1_StatisticsManager_StatType___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_StatisticsManager_RuntimeStatEntry_ {
  struct ICollection_1_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ {
  enum StatisticsManager_StatType__Enum key;
  struct StatisticsManager_RuntimeStatEntry * value;
};
struct KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Boxed {
  struct KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ fields;
};
struct KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Array {
  struct KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry_ {
  struct IEnumerator_1_KeyValuePair_2_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_StatisticsManager_StatType_ {
  struct IEnumerable_1_StatisticsManager_StatType___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_StatisticsManager_RuntimeStatEntry_ {
  struct IEnumerable_1_StatisticsManager_RuntimeStatEntry___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) List_1_StatSetting___Fields {
  struct StatSetting__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_StatSetting_ {
  struct List_1_StatSetting___Class *klass;
  struct MonitorData *monitor;
  struct List_1_StatSetting___Fields fields;
};
struct StatSetting__Array {
  struct StatSetting__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct StatSetting * vector[32];
};
struct IEnumerator_1_StatSetting_ {
  struct IEnumerator_1_StatSetting___Class *klass;
  struct MonitorData *monitor;
};
struct StatSettingStrings_EnemyLabels__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatSettingStrings_EnemyLabels__StaticFields {
};
struct StatSettingStrings_EnemyLabels__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatSettingStrings_EnemyLabels__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatSettingStrings_EnemyLabels__VTable vtable;
};
struct StatSettingStrings_EquipmentLabels__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatSettingStrings_EquipmentLabels__StaticFields {
};
struct StatSettingStrings_EquipmentLabels__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatSettingStrings_EquipmentLabels__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatSettingStrings_EquipmentLabels__VTable vtable;
};
struct StatSettingStrings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatSettingStrings__StaticFields {
};
struct StatSettingStrings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatSettingStrings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatSettingStrings__VTable vtable;
};
struct StatSetting__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatSetting__StaticFields {
};
struct StatSetting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatSetting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatSetting__VTable vtable;
};
struct StatisticsManager_StatStateEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatisticsManager_StatStateEntry__StaticFields {
};
struct StatisticsManager_StatStateEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatisticsManager_StatStateEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatisticsManager_StatStateEntry__VTable vtable;
};
struct IEnumerator_1_StatisticsManager_StatStateEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_StatisticsManager_StatStateEntry___StaticFields {
};
struct IEnumerator_1_StatisticsManager_StatStateEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_StatisticsManager_StatStateEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_StatisticsManager_StatStateEntry___VTable vtable;
};
struct List_1_StatisticsManager_StatStateEntry___VTable {
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
struct List_1_StatisticsManager_StatStateEntry___StaticFields {
  struct StatisticsManager_StatStateEntry__Array * _emptyArray;
};
struct List_1_StatisticsManager_StatStateEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_StatisticsManager_StatStateEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_StatisticsManager_StatStateEntry___VTable vtable;
};
struct StatisticsManager_RuntimeStatEntry__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct StatisticsManager_RuntimeStatEntry__StaticFields {
};
struct StatisticsManager_RuntimeStatEntry__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct StatisticsManager_RuntimeStatEntry__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct StatisticsManager_RuntimeStatEntry__VTable vtable;
};
struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___VTable vtable;
};
struct IEqualityComparer_1_StatisticsManager_StatType___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData GetHashCode;
};
struct IEqualityComparer_1_StatisticsManager_StatType___StaticFields {
};
struct IEqualityComparer_1_StatisticsManager_StatType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEqualityComparer_1_StatisticsManager_StatType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEqualityComparer_1_StatisticsManager_StatType___VTable vtable;
};
struct IEnumerator_1_StatisticsManager_StatType___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_StatisticsManager_StatType___StaticFields {
};
struct IEnumerator_1_StatisticsManager_StatType___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_StatisticsManager_StatType___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_StatisticsManager_StatType___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___VTable vtable;
};
struct IEnumerator_1_StatisticsManager_RuntimeStatEntry___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_StatisticsManager_RuntimeStatEntry___StaticFields {
};
struct IEnumerator_1_StatisticsManager_RuntimeStatEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_StatisticsManager_RuntimeStatEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_StatisticsManager_RuntimeStatEntry___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_StatisticsManager_StatType_StatisticsManager_RuntimeStatEntry___VTable vtable;
};}