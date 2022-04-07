namespace app {
enum SpellUIEquipScreen_Category__Enum : int32_t {
  SpellUIEquipScreen_Category__Enum_Weapon = 0,
  SpellUIEquipScreen_Category__Enum_Spell = 1,
  SpellUIEquipScreen_Category__Enum_Ability = 2,
  SpellUIEquipScreen_Category__Enum_Shard = 3,
  SpellUIEquipScreen_Category__Enum_Count = 4,
};
struct SpellUIEquipScreen_Category__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpellUIEquipScreen_Category__Enum value;
};
struct SpellUIEquipScreen__Fields {
  struct MenuScreenStack__Fields _;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * ButtonSelect;
  struct GameObject * ButtonEquip;
  struct GameObject * CategorySelectPrefab;
  struct Transform * AnchorCategorySelect;
  struct WidgetUIHorizontalSelect * m_categorySelect;
  struct GameObject * ButtonBindingCanvasPrefab;
  struct GameObject * PassiveShardsCanvasPrefab;
  struct Transform * AnchorCategoryContext;
  struct GameObject * m_bindingsCanvas;
  struct SpellUIPassiveShards * m_passiveCanvas;
  struct GameObject * SpellDetailsCanvasPrefab;
  struct GameObject * ShardDetailsCanvasPrefab;
  struct Transform * AnchorItemDetails;
  struct SpiritShardUIShardDetails * m_shardDetailsCanvas;
  struct SpellUISpellDetails * m_spellDetailsCanvas;
  struct EquipmentUIInventoryGrid * m_spellDetailsGrid;
  struct GameObject * SpellItemPrefab;
  struct GameObject * ShardItemPrefab;
  struct GameObject * ItemHighlightGO;
  struct GameObject * ExperiencePrefab;
  struct Transform * AnchorExperience;
  struct SpellUIExperience * m_experience;
  struct GameObject * ShardsOverlayPrefab;
  struct SpellUIShardListOverlay * m_shardsOverlay;
  struct GameObject * ConfirmationOverlayPrefab;
  struct SpellUIConfirmationOverlay * m_confirmationOverlay;
  struct EquipmentUIInventoryGrid * Grid;
  struct SpellUIEquipScreen_MessageProviders Messages;
  struct SpellUIEquipScreen_HintsSettings Hints;
  enum SpellUIEquipScreen_State__Enum m_state;
  enum SpellUIEquipScreen_Category__Enum m_currentCategory;
  struct SpiritShardUIItem * m_confirmContextShard;
  struct SpiritShardUIItem_Context * m_spiritShardUIContext;
  struct MessageBox * m_currentHint;
  struct PlayerUberStateShards_Shard * m_autoFocusShard;
  struct PlayerUberStateInventory_InventoryItem * m_autoFocusEquipment;
  bool m_isInited;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct SpellUIEquipScreen {
  struct SpellUIEquipScreen__Class *klass;
  struct MonitorData *monitor;
  struct SpellUIEquipScreen__Fields fields;
};
struct WidgetUIHorizontalSelect__Fields {
  struct MonoBehaviour__Fields _;
  struct Color TextColorActive;
  struct Color TextColorInactive;
  struct Transform * Root;
  struct GameObject * Item;
  float Spread;
  float Speed;
  float TransparencyRange;
  struct String__Array * Names;
  struct GameObject__Array * Items;
  int32_t m_selectedIndex;
  int32_t m_nextIndex;
};
struct WidgetUIHorizontalSelect {
  struct WidgetUIHorizontalSelect__Class *klass;
  struct MonitorData *monitor;
  struct WidgetUIHorizontalSelect__Fields fields;
};
struct SpellUIPassiveShards__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * SocketPrefab;
  float SocketStepX;
  bool m_passiveShardsCanvasDirty;
  struct SpiritShardUIShardSocket__Array * m_sockets;
};
struct SpellUIPassiveShards {
  struct SpellUIPassiveShards__Class *klass;
  struct MonitorData *monitor;
  struct SpellUIPassiveShards__Fields fields;
};
struct SpiritShardUIShardSocket__Fields {
  struct EquipmentUIInventoryItem__Fields _;
  struct Renderer * IconRenderer;
  struct Color TextColor;
  struct SpiritShardUIShardBackdrop * Background;
  struct GameObject * EmptyBackgroundGO;
  struct GameObject * UpgradableBackgroundGO;
  struct GameObject * NotUpgradableBackgroundGO;
  struct SpiritShardUIShardUpgradeFill * Fill;
  struct ActionMethod * OnShardAssigned;
  struct Color NormalColor;
  struct Color UpgradableColor;
  struct PlayerUberStateShards_Shard * m_spiritShard;
};
struct SpiritShardUIShardSocket {
  struct SpiritShardUIShardSocket__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIShardSocket__Fields fields;
};
struct SpiritShardUIShardSocket__Array {
  struct SpiritShardUIShardSocket__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiritShardUIShardSocket * vector[32];
};
struct SpellUISpellDetails__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * IconGO;
  struct GameObject * NameGO;
  struct GameObject * DescriptionGO;
  struct GameObject * ShardSocketsCanvasGO;
  struct EquipmentUIInventoryGrid * Grid;
  struct GameObject * SocketItemPrefab;
  struct GameObject * SocketItemHighlightGO;
  struct Texture2D * AddItemIcon;
  struct MessageProvider * AddItemMessage;
  struct Action * OnSocketActivated;
  struct Action * OnSocketAdded;
  struct PlayerUberStateInventory_InventoryItem * m_item;
  struct SpiritShardUIShardSocket * m_addItem;
};
struct SpellUISpellDetails {
  struct SpellUISpellDetails__Class *klass;
  struct MonitorData *monitor;
  struct SpellUISpellDetails__Fields fields;
};
struct SpellUIExperience__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * ValueGO;
  struct Color TextColor;
  struct ActionMethod * OnExperienceWasSpent;
  struct ActionMethod * OnNotEnoughExperience;
  int32_t m_experience;
  struct MessageDescriptor m_message;
  struct MessageBox * m_messageBox;
  struct TextBox * m_textBox;
};
struct SpellUIExperience {
  struct SpellUIExperience__Class *klass;
  struct MonitorData *monitor;
  struct SpellUIExperience__Fields fields;
};
struct SpellUIShardListOverlay__Fields {
  struct MenuScreen__Fields _;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * DetailsCanvasPrefab;
  struct Transform * DetailsCanvasTransform;
  struct SpiritShardUIShardDetails * m_detailsCanvas;
  struct EquipmentUIInventoryGrid * Grid;
  struct GameObject * ShardItemPrefab;
  struct GameObject * ShardItemHighlightGO;
  struct Action_1_SpiritShardUIItem_ * OnShardActivated;
  struct Action * OnClosing;
  struct SpiritShardUIItem_Context * m_spiritShardUIContext;
  struct PlayerUberStateShards_Shard * m_initiallySelected;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct SpellUIShardListOverlay {
  struct SpellUIShardListOverlay__Class *klass;
  struct MonitorData *monitor;
  struct SpellUIShardListOverlay__Fields fields;
};
struct Action_1_SpiritShardUIItem___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_SpiritShardUIItem_ {
  struct Action_1_SpiritShardUIItem___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_SpiritShardUIItem___Fields fields;
};
struct __declspec(align(8)) SpiritShardUIItem_Context__Fields {
  bool Passive;
  enum EquipmentType__Enum CompatibleEquipment;
};
struct SpiritShardUIItem_Context {
  struct SpiritShardUIItem_Context__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardUIItem_Context__Fields fields;
};
struct WidgetUIHorizontalSelect__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct WidgetUIHorizontalSelect__StaticFields {
};
struct WidgetUIHorizontalSelect__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WidgetUIHorizontalSelect__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WidgetUIHorizontalSelect__VTable vtable;
};
struct SpiritShardUIShardSocket__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData SetItemContext;
  VirtualInvokeData OnItemContextDirty;
  VirtualInvokeData SetSelected;
};
struct SpiritShardUIShardSocket__StaticFields {
};
struct SpiritShardUIShardSocket__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIShardSocket__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIShardSocket__VTable vtable;
};
struct SpellUIPassiveShards__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIPassiveShards__StaticFields {
};
struct SpellUIPassiveShards__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIPassiveShards__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIPassiveShards__VTable vtable;
};
struct SpellUISpellDetails__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUISpellDetails__StaticFields {
};
struct SpellUISpellDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUISpellDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUISpellDetails__VTable vtable;
};
struct SpellUIExperience__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIExperience__StaticFields {
};
struct SpellUIExperience__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIExperience__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIExperience__VTable vtable;
};
struct Action_1_SpiritShardUIItem___VTable {
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
struct Action_1_SpiritShardUIItem___StaticFields {
};
struct Action_1_SpiritShardUIItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_SpiritShardUIItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_SpiritShardUIItem___VTable vtable;
};
struct SpiritShardUIItem_Context__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardUIItem_Context__StaticFields {
};
struct SpiritShardUIItem_Context__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardUIItem_Context__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardUIItem_Context__VTable vtable;
};
struct SpellUIShardListOverlay__VTable {
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
};
struct SpellUIShardListOverlay__StaticFields {
};
struct SpellUIShardListOverlay__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIShardListOverlay__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIShardListOverlay__VTable vtable;
};
struct SpellUIEquipScreen_MessageProviders__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIEquipScreen_MessageProviders__StaticFields {
};
struct SpellUIEquipScreen_MessageProviders__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIEquipScreen_MessageProviders__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIEquipScreen_MessageProviders__VTable vtable;
};
struct SpellUIEquipScreen_HintsSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIEquipScreen_HintsSettings__StaticFields {
};
struct SpellUIEquipScreen_HintsSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIEquipScreen_HintsSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIEquipScreen_HintsSettings__VTable vtable;
};
struct SpellUIEquipScreen__VTable {
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
struct SpellUIEquipScreen__StaticFields {
  struct SpellUIEquipScreen * Instance;
};
struct SpellUIEquipScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIEquipScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIEquipScreen__VTable vtable;
};

struct __declspec(align(8)) SpellUIEquipScreen_c_DisplayClass84_0__Fields {
  struct PlayerUberStateInventory_InventoryItem * item;
};
struct SpellUIEquipScreen_c_DisplayClass84_0 {
  struct SpellUIEquipScreen_c_DisplayClass84_0__Class *klass;
  struct MonitorData *monitor;
  struct SpellUIEquipScreen_c_DisplayClass84_0__Fields fields;
};
struct SpellUIEquipScreen_c_DisplayClass84_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIEquipScreen_c_DisplayClass84_0__StaticFields {
};
struct SpellUIEquipScreen_c_DisplayClass84_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIEquipScreen_c_DisplayClass84_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIEquipScreen_c_DisplayClass84_0__VTable vtable;
};

struct __declspec(align(8)) SpellUIEquipScreen_c_DisplayClass85_0__Fields {
  struct PlayerUberStateShards_Shard * item;
};
struct SpellUIEquipScreen_c_DisplayClass85_0 {
  struct SpellUIEquipScreen_c_DisplayClass85_0__Class *klass;
  struct MonitorData *monitor;
  struct SpellUIEquipScreen_c_DisplayClass85_0__Fields fields;
};
struct SpellUIEquipScreen_c_DisplayClass85_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIEquipScreen_c_DisplayClass85_0__StaticFields {
};
struct SpellUIEquipScreen_c_DisplayClass85_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIEquipScreen_c_DisplayClass85_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIEquipScreen_c_DisplayClass85_0__VTable vtable;
};

struct SpellUISeeds__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * ValueGO;
  struct Color TextColor;
  struct ActionMethod * OnOreWasSpent;
  struct ActionMethod * OnNotEnoughOre;
  int32_t m_ore;
  struct MessageDescriptor m_message;
};
struct SpellUISeeds {
  struct SpellUISeeds__Class *klass;
  struct MonitorData *monitor;
  struct SpellUISeeds__Fields fields;
};
struct SpellUISeeds__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUISeeds__StaticFields {
};
struct SpellUISeeds__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUISeeds__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUISeeds__VTable vtable;
};

struct SpellUIShardListOverlay_c {
  struct SpellUIShardListOverlay_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpellUIShardListOverlay_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUIShardListOverlay_c__StaticFields {
  struct SpellUIShardListOverlay_c * __9;
  struct Action_1_SpiritShardUIItem_ * __9__32_0;
  struct Action * __9__32_1;
};
struct SpellUIShardListOverlay_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUIShardListOverlay_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUIShardListOverlay_c__VTable vtable;
};

struct SpellUISpellDetails_c {
  struct SpellUISpellDetails_c__Class *klass;
  struct MonitorData *monitor;
};
struct SpellUISpellDetails_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellUISpellDetails_c__StaticFields {
  struct SpellUISpellDetails_c * __9;
  struct Action * __9__21_0;
  struct Action * __9__21_1;
};
struct SpellUISpellDetails_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellUISpellDetails_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellUISpellDetails_c__VTable vtable;
};

struct __declspec(align(8)) SpellPickupContext__Fields {
  enum EquipmentType__Enum EquipmentType;
};
struct SpellPickupContext {
  struct SpellPickupContext__Class *klass;
  struct MonitorData *monitor;
  struct SpellPickupContext__Fields fields;
};
struct SpellPickupContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpellPickupContext__StaticFields {
};
struct SpellPickupContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpellPickupContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpellPickupContext__VTable vtable;
};

struct ChainLightningController__Fields {
  struct MonoBehaviour__Fields _;
  struct List_1_Moon_DamageReceiver_ * m_damageReceivers;
  struct List_1_Moon_EnemyEntity_ * m_enemies;
  float m_baseDamage;
  float m_range;
  float m_secondHitMultiplier;
  float m_otherHitMultiplier;
  float m_delay;
  int32_t m_hits;
  bool m_chained;
};
struct ChainLightningController {
  struct ChainLightningController__Class *klass;
  struct MonitorData *monitor;
  struct ChainLightningController__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_EnemyEntity___Fields {
  struct EnemyEntity__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_EnemyEntity_ {
  struct List_1_Moon_EnemyEntity___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_EnemyEntity___Fields fields;
};
struct EnemyEntity__Array {
  struct EnemyEntity__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EnemyEntity * vector[32];
};
struct IEnumerator_1_Moon_EnemyEntity_ {
  struct IEnumerator_1_Moon_EnemyEntity___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_EnemyEntity___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_EnemyEntity___StaticFields {
};
struct IEnumerator_1_Moon_EnemyEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_EnemyEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_EnemyEntity___VTable vtable;
};
struct List_1_Moon_EnemyEntity___VTable {
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
struct List_1_Moon_EnemyEntity___StaticFields {
  struct EnemyEntity__Array * _emptyArray;
};
struct List_1_Moon_EnemyEntity___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_EnemyEntity___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_EnemyEntity___VTable vtable;
};
struct ChainLightningController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChainLightningController__StaticFields {
};
struct ChainLightningController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChainLightningController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChainLightningController__VTable vtable;
};

struct __declspec(align(8)) ChainLightningController_c_DisplayClass10_0__Fields {
  struct ChainLightningController * this_1;
  struct EnemyEntity * enemy;
  struct DamageReceiver * dmgReciever;
  struct Damage * damage;
};
struct ChainLightningController_c_DisplayClass10_0 {
  struct ChainLightningController_c_DisplayClass10_0__Class *klass;
  struct MonitorData *monitor;
  struct ChainLightningController_c_DisplayClass10_0__Fields fields;
};
struct ChainLightningController_c_DisplayClass10_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ChainLightningController_c_DisplayClass10_0__StaticFields {
};
struct ChainLightningController_c_DisplayClass10_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ChainLightningController_c_DisplayClass10_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ChainLightningController_c_DisplayClass10_0__VTable vtable;
};

struct CounterstrikeEffectPositionOverride__Fields {
  struct MonoBehaviour__Fields _;
};
struct CounterstrikeEffectPositionOverride {
  struct CounterstrikeEffectPositionOverride__Class *klass;
  struct MonitorData *monitor;
  struct CounterstrikeEffectPositionOverride__Fields fields;
};
struct CounterstrikeEffectPositionOverride__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CounterstrikeEffectPositionOverride__StaticFields {
};
struct CounterstrikeEffectPositionOverride__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CounterstrikeEffectPositionOverride__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CounterstrikeEffectPositionOverride__VTable vtable;
};

struct PlayerSpiritShards_c {
  struct PlayerSpiritShards_c__Class *klass;
  struct MonitorData *monitor;
};
struct PlayerSpiritShards_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct PlayerSpiritShards_c__StaticFields {
  struct PlayerSpiritShards_c * __9;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * __9__76_0;
  struct Action * __9__76_1;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * __9__76_2;
  struct Action_1_Moon_uberSerializationWisp_PlayerUberStateShards_Shard_ * __9__76_3;
};
struct PlayerSpiritShards_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct PlayerSpiritShards_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct PlayerSpiritShards_c__VTable vtable;
};

struct ShardLogic {
  struct ShardLogic__Class *klass;
  struct MonitorData *monitor;
};
struct ShardLogic__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ShardLogic__StaticFields {
};
struct ShardLogic__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ShardLogic__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ShardLogic__VTable vtable;
};

enum SpiritShardEquipType__Enum : int32_t {
  SpiritShardEquipType__Enum_Inventory = 0,
  SpiritShardEquipType__Enum_Passive = 1,
  SpiritShardEquipType__Enum_Disabled = 2,
};
struct SpiritShardEquipType__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SpiritShardEquipType__Enum value;
};
struct __declspec(align(8)) SpiritShardDescription__Fields {
  struct MessageProvider * Name;
  struct MessageProvider * PickupMessage;
  enum SpiritShardEquipType__Enum EquipType;
  struct ConditionUberState * VisibleInShop;
  struct ConditionUberState * PurchasableInShop;
  int32_t InitialBuyCost;
  struct List_1_UpgradablePropertyLevel_ * UpgradablePropertyLevels;
  struct State * OnState;
  struct State * OffState;
};
struct SpiritShardDescription {
  struct SpiritShardDescription__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardDescription__Fields fields;
};
struct SpiritShardDescription__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SpiritShardDescription__StaticFields {
};
struct SpiritShardDescription__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SpiritShardDescription__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SpiritShardDescription__VTable vtable;
};

struct EnumDictionary_2_SpiritShardType_SpiritShardDescription___Fields {
  struct MonoBehaviour__Fields _;
  struct SpiritShardDescription * Missing;
  bool ThrowMissingError;
  struct List_1_SpiritShardType_ * m_keys;
  struct List_1_SpiritShardDescription_ * m_values;
  struct Dictionary_2_SpiritShardType_SpiritShardDescription_ * m_dictionary;
};
struct EnumDictionary_2_SpiritShardType_SpiritShardDescription_ {
  struct EnumDictionary_2_SpiritShardType_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
  struct EnumDictionary_2_SpiritShardType_SpiritShardDescription___Fields fields;
};
struct SpiritShardDescriptionCollection__Fields {
  struct EnumDictionary_2_SpiritShardType_SpiritShardDescription___Fields _;
};
struct SpiritShardDescriptionCollection {
  struct SpiritShardDescriptionCollection__Class *klass;
  struct MonitorData *monitor;
  struct SpiritShardDescriptionCollection__Fields fields;
};
struct __declspec(align(8)) List_1_SpiritShardDescription___Fields {
  struct SpiritShardDescription__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SpiritShardDescription_ {
  struct List_1_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SpiritShardDescription___Fields fields;
};
struct SpiritShardDescription__Array {
  struct SpiritShardDescription__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SpiritShardDescription * vector[32];
};
struct IEnumerator_1_SpiritShardDescription_ {
  struct IEnumerator_1_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
};
struct __declspec(align(8)) Dictionary_2_SpiritShardType_SpiritShardDescription___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_SpiritShardType_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_SpiritShardDescription_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_SpiritShardDescription_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_SpiritShardType_SpiritShardDescription_ {
  struct Dictionary_2_SpiritShardType_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_SpiritShardType_SpiritShardDescription___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription_ {
  int32_t hashCode;
  int32_t next;
  enum SpiritShardType__Enum key;
  struct SpiritShardDescription * value;
};
struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription___Array {
  struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_SpiritShardType_SpiritShardDescription_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_SpiritShardDescription___Fields {
  struct Dictionary_2_SpiritShardType_SpiritShardDescription_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_SpiritShardDescription_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_SpiritShardType_SpiritShardDescription___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_SpiritShardDescription___Fields {
  struct Dictionary_2_SpiritShardType_SpiritShardDescription_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_SpiritShardDescription_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_SpiritShardType_SpiritShardDescription___Fields fields;
};
struct ICollection_1_SpiritShardDescription_ {
  struct ICollection_1_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_SpiritShardType_SpiritShardDescription_ {
  enum SpiritShardType__Enum key;
  struct SpiritShardDescription * value;
};
struct KeyValuePair_2_SpiritShardType_SpiritShardDescription___Boxed {
  struct KeyValuePair_2_SpiritShardType_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_SpiritShardType_SpiritShardDescription_ fields;
};
struct KeyValuePair_2_SpiritShardType_SpiritShardDescription___Array {
  struct KeyValuePair_2_SpiritShardType_SpiritShardDescription___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_SpiritShardType_SpiritShardDescription_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_SpiritShardType_SpiritShardDescription_ {
  struct IEnumerator_1_KeyValuePair_2_SpiritShardType_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_SpiritShardDescription_ {
  struct IEnumerable_1_SpiritShardDescription___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_SpiritShardDescription___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SpiritShardDescription___StaticFields {
};
struct IEnumerator_1_SpiritShardDescription___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SpiritShardDescription___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SpiritShardDescription___VTable vtable;
};
struct List_1_SpiritShardDescription___VTable {
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
struct List_1_SpiritShardDescription___StaticFields {
  struct SpiritShardDescription__Array * _emptyArray;
};
struct List_1_SpiritShardDescription___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SpiritShardDescription___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SpiritShardDescription___VTable vtable;
};}