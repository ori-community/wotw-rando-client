namespace app {
struct AchievementsController_c_DisplayClass19_0__StaticFields {
};
struct AchievementsController_c_DisplayClass19_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsController_c_DisplayClass19_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsController_c_DisplayClass19_0__VTable vtable;
};

enum SortingOrder__Enum : int32_t {
  SortingOrder__Enum_None = 0,
  SortingOrder__Enum_Highest = 1,
  SortingOrder__Enum_Lowest = 2,
};
struct SortingOrder__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SortingOrder__Enum value;
};
struct __declspec(align(8)) CacheData__Fields {
  enum SortingOrder__Enum _SortingOrder_k__BackingField;
  struct String * _Name_k__BackingField;
  int32_t _Value_k__BackingField;
};
struct CacheData {
  struct CacheData__Class *klass;
  struct MonitorData *monitor;
  struct CacheData__Fields fields;
};
struct CacheData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CacheData__StaticFields {
};
struct CacheData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CacheData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CacheData__VTable vtable;
};

enum AchievementsUIItem_AchievementsUIItemState__Enum : int32_t {
  AchievementsUIItem_AchievementsUIItemState__Enum_NONE = 0,
  AchievementsUIItem_AchievementsUIItemState__Enum_LOCKED = 1,
  AchievementsUIItem_AchievementsUIItemState__Enum_UNLOCKED = 2,
};
struct AchievementsUIItem_AchievementsUIItemState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AchievementsUIItem_AchievementsUIItemState__Enum value;
};
struct AchievementsUIItem__Fields {
  struct MonoBehaviour__Fields _;
  struct AchievementAsset * AchievementAssetFile;
  struct Texture * lockedTexture;
  struct Texture * unlockedTexture;
  struct Texture * hiddenTexture;
  struct UberShaderComponent * IconUberShader;
  struct Renderer * IconRenderer;
  struct MessageBox * NameMessageBox;
  struct MessageBox * DescriptionMessageBox;
  struct MessageProvider * HiddenAchievementName;
  struct Transform * TextFrameNormal;
  struct Transform * TextFrameHidden;
  struct Color m_lockedColor;
  struct Color m_unlockedColor;
  struct GameObject * Lock;
  struct GameObject * GlowGroup;
  struct CleverMenuItem * m_cleverMenuItem;
  enum AchievementsUIItem_AchievementsUIItemState__Enum ItemState;
};
struct AchievementsUIItem {
  struct AchievementsUIItem__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsUIItem__Fields fields;
};
struct AchievementsUIItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementsUIItem__StaticFields {
};
struct AchievementsUIItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsUIItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsUIItem__VTable vtable;
};

struct __declspec(align(8)) AchievementsUIItem_c_DisplayClass22_0__Fields {
  struct String * playFabId;
};
struct AchievementsUIItem_c_DisplayClass22_0 {
  struct AchievementsUIItem_c_DisplayClass22_0__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsUIItem_c_DisplayClass22_0__Fields fields;
};
struct AchievementsUIItem_c_DisplayClass22_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementsUIItem_c_DisplayClass22_0__StaticFields {
};
struct AchievementsUIItem_c_DisplayClass22_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsUIItem_c_DisplayClass22_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsUIItem_c_DisplayClass22_0__VTable vtable;
};

struct AchievementsUISwitchGrid__Fields {
  struct MonoBehaviour__Fields _;
  struct AchievementsUIItem * AchievementsUIItemTemplate;
  struct CleverMenuItemSelectionManager * SelectionManager;
  struct String * StoryAchievementAssets;
  struct String * GameAchievementAssets;
  struct String * FunAchievementAssets;
  float SpaceX;
  float SpaceY;
  struct List_1_AchievementAsset_ * AchievementAssets;
};
struct AchievementsUISwitchGrid {
  struct AchievementsUISwitchGrid__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsUISwitchGrid__Fields fields;
};
struct AchievementsUISwitchGrid__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementsUISwitchGrid__StaticFields {
};
struct AchievementsUISwitchGrid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsUISwitchGrid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsUISwitchGrid__VTable vtable;
};

enum AchievementsUISynchronizer_SynchronizationState__Enum : int32_t {
  AchievementsUISynchronizer_SynchronizationState__Enum_NO_CONECTION = 0,
  AchievementsUISynchronizer_SynchronizationState__Enum_IS_LOADING = 1,
  AchievementsUISynchronizer_SynchronizationState__Enum_SYNCHRONIZED = 2,
};
struct AchievementsUISynchronizer_SynchronizationState__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum AchievementsUISynchronizer_SynchronizationState__Enum value;
};
struct AchievementsUISynchronizer__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * AchievementsCouterText;
  struct GameObject * AchievementsLoadingText;
  struct GameObject * AchievementsGrid;
  struct List_1_AchievementsUIItem_ * m_achievementsUIItems;
  struct INetworkConnectivityChecker * m_netConnectivityChecker;
  enum AchievementsUISynchronizer_SynchronizationState__Enum m_state;
};
struct AchievementsUISynchronizer {
  struct AchievementsUISynchronizer__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsUISynchronizer__Fields fields;
};
struct __declspec(align(8)) List_1_AchievementsUIItem___Fields {
  struct AchievementsUIItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_AchievementsUIItem_ {
  struct List_1_AchievementsUIItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_AchievementsUIItem___Fields fields;
};
struct AchievementsUIItem__Array {
  struct AchievementsUIItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct AchievementsUIItem * vector[32];
};
struct IEnumerator_1_AchievementsUIItem_ {
  struct IEnumerator_1_AchievementsUIItem___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_AchievementsUIItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_AchievementsUIItem___StaticFields {
};
struct IEnumerator_1_AchievementsUIItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_AchievementsUIItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_AchievementsUIItem___VTable vtable;
};
struct List_1_AchievementsUIItem___VTable {
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
struct List_1_AchievementsUIItem___StaticFields {
  struct AchievementsUIItem__Array * _emptyArray;
};
struct List_1_AchievementsUIItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_AchievementsUIItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_AchievementsUIItem___VTable vtable;
};
struct AchievementsUISynchronizer__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementsUISynchronizer__StaticFields {
};
struct AchievementsUISynchronizer__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsUISynchronizer__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsUISynchronizer__VTable vtable;
};

struct AchievementsUITextCounter__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * MessageBox;
};
struct AchievementsUITextCounter {
  struct AchievementsUITextCounter__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsUITextCounter__Fields fields;
};
struct AchievementsUITextCounter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementsUITextCounter__StaticFields {
};
struct AchievementsUITextCounter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsUITextCounter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsUITextCounter__VTable vtable;
};

struct __declspec(align(8)) AchievementsUITextCounter_c_DisplayClass2_0__Fields {
  struct AchievementAsset * achievementAsset;
};
struct AchievementsUITextCounter_c_DisplayClass2_0 {
  struct AchievementsUITextCounter_c_DisplayClass2_0__Class *klass;
  struct MonitorData *monitor;
  struct AchievementsUITextCounter_c_DisplayClass2_0__Fields fields;
};
struct AchievementsUITextCounter_c_DisplayClass2_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AchievementsUITextCounter_c_DisplayClass2_0__StaticFields {
};
struct AchievementsUITextCounter_c_DisplayClass2_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AchievementsUITextCounter_c_DisplayClass2_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AchievementsUITextCounter_c_DisplayClass2_0__VTable vtable;
};

struct __declspec(align(8)) FuncAction__Fields {
  struct Action * Action;
};
struct FuncAction {
  struct FuncAction__Class *klass;
  struct MonitorData *monitor;
  struct FuncAction__Fields fields;
};
struct FuncAction__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Perform;
};
struct FuncAction__StaticFields {
};
struct FuncAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct FuncAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct FuncAction__VTable vtable;
};

struct IEnumerable_1_System_Char_ {
  struct IEnumerable_1_System_Char___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_System_Char___VTable {
  VirtualInvokeData GetEnumerator;
};
struct IEnumerable_1_System_Char___StaticFields {
};
struct IEnumerable_1_System_Char___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerable_1_System_Char___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerable_1_System_Char___VTable vtable;
};

struct BreakFireStickAction__Fields {
  struct ActionMethod__Fields _;
  bool DestroyItem;
};
struct BreakFireStickAction {
  struct BreakFireStickAction__Class *klass;
  struct MonitorData *monitor;
  struct BreakFireStickAction__Fields fields;
};
struct BreakFireStickAction__VTable {
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
struct BreakFireStickAction__StaticFields {
};
struct BreakFireStickAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BreakFireStickAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BreakFireStickAction__VTable vtable;
};

struct DealDamageAction__Fields {
  struct ActionMethod__Fields _;
  enum DamageType__Enum DamageType;
  float Amount;
  bool DamageAllEnemies;
  struct GameObject * Target;
  struct Component_1__Array * m_targetComponents;
  bool m_isPrewarmed;
};
struct DealDamageAction {
  struct DealDamageAction__Class *klass;
  struct MonitorData *monitor;
  struct DealDamageAction__Fields fields;
};
struct DealDamageAction__VTable {
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
  VirtualInvokeData Prewarm;
};
struct DealDamageAction__StaticFields {
};
struct DealDamageAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DealDamageAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DealDamageAction__VTable vtable;
};

struct TimedActionExecuter__Fields {
  struct MonoBehaviour__Fields _;
};
struct TimedActionExecuter {
  struct TimedActionExecuter__Class *klass;
  struct MonitorData *monitor;
  struct TimedActionExecuter__Fields fields;
};
struct DelayedActionExecuter__Fields {
  struct TimedActionExecuter__Fields _;
  float Delay;
  struct ActionMethod * m_action;
};
struct DelayedActionExecuter {
  struct DelayedActionExecuter__Class *klass;
  struct MonitorData *monitor;
  struct DelayedActionExecuter__Fields fields;
};
struct TimedActionExecuter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
};
struct TimedActionExecuter__StaticFields {
};
struct TimedActionExecuter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TimedActionExecuter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TimedActionExecuter__VTable vtable;
};
struct DelayedActionExecuter__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_StartTime;
  VirtualInvokeData set_StartTime;
  VirtualInvokeData ExecuteAction;
  VirtualInvokeData StopAction;
  VirtualInvokeData get_ActionWithDuration;
  VirtualInvokeData get_ActionMethod;
};
struct DelayedActionExecuter__StaticFields {
};
struct DelayedActionExecuter__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DelayedActionExecuter__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DelayedActionExecuter__VTable vtable;
};

struct DropCurrentlyHeldItem__Fields {
  struct ActionMethod__Fields _;
  bool DestroyItem;
};
struct DropCurrentlyHeldItem {
  struct DropCurrentlyHeldItem__Class *klass;
  struct MonitorData *monitor;
  struct DropCurrentlyHeldItem__Fields fields;
};
struct DropCurrentlyHeldItem__VTable {
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
struct DropCurrentlyHeldItem__StaticFields {
};
struct DropCurrentlyHeldItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct DropCurrentlyHeldItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct DropCurrentlyHeldItem__VTable vtable;
};

struct LoadGameAction__Fields {
  struct ActionMethod__Fields _;
  bool IsBackupLoad;
  struct MessageProvider * FailedToLoadMessageProvider;
};
struct LoadGameAction {
  struct LoadGameAction__Class *klass;
  struct MonitorData *monitor;
  struct LoadGameAction__Fields fields;
};
struct LoadGameAction__VTable {
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
struct LoadGameAction__StaticFields {
};
struct LoadGameAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadGameAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadGameAction__VTable vtable;
};

struct LoadGameWithoutCheckpointRestoreAction__Fields {
  struct ActionMethod__Fields _;
};
struct LoadGameWithoutCheckpointRestoreAction {
  struct LoadGameWithoutCheckpointRestoreAction__Class *klass;
  struct MonitorData *monitor;
  struct LoadGameWithoutCheckpointRestoreAction__Fields fields;
};
struct LoadGameWithoutCheckpointRestoreAction__VTable {
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
struct LoadGameWithoutCheckpointRestoreAction__StaticFields {
};
struct LoadGameWithoutCheckpointRestoreAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LoadGameWithoutCheckpointRestoreAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LoadGameWithoutCheckpointRestoreAction__VTable vtable;
};

struct MakeEnemyAttackPlayerAction__Fields {
  struct ActionMethod__Fields _;
  struct RespawningPlaceholder * Placeholder;
};
struct MakeEnemyAttackPlayerAction {
  struct MakeEnemyAttackPlayerAction__Class *klass;
  struct MonitorData *monitor;
  struct MakeEnemyAttackPlayerAction__Fields fields;
};
struct MakeEnemyAttackPlayerAction__VTable {
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
struct MakeEnemyAttackPlayerAction__StaticFields {
};
struct MakeEnemyAttackPlayerAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MakeEnemyAttackPlayerAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MakeEnemyAttackPlayerAction__VTable vtable;
};

struct MarkSavePedestalAsUsedAction__Fields {
  struct ActionMethod__Fields _;
  struct SavePedestal * SavePedestal;
};
struct MarkSavePedestalAsUsedAction {
  struct MarkSavePedestalAsUsedAction__Class *klass;
  struct MonitorData *monitor;
  struct MarkSavePedestalAsUsedAction__Fields fields;
};
enum SavePedestal_State__Enum : int32_t {
  SavePedestal_State__Enum_Normal = 0,
  SavePedestal_State__Enum_Highlighted = 1,
};
struct SavePedestal_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SavePedestal_State__Enum value;
};
struct SavePedestal__Fields {
  struct MonoBehaviour__Fields _;
  struct Transform * OriTarget;
  float Radius;
  float OriDuration;
  struct String * Identifier;
  bool ShowTopHint;
  struct Transform * EnableOnTeleportActive;
  struct Transform * m_transform;
  bool m_isAnyOtherTeleporterActiveCached;
  struct MessageBox * m_hint;
  struct SoundProvider * OnOriEnter;
  struct SoundProvider * OnOriExit;
  struct SoundProvider * OnSaveSecondTime;
  struct SavePedestalUberState * SerializedState;
  struct MoonTimeline * TeleportEffect;
  struct IUberState__Array * m_affectingUberStates;
  struct MoonTimeline * OriEnterTimeline;
  struct MoonTimeline * OriExitTimeline;
  struct MoonTimeline * OnOpenedTimelineOri;
  struct MoonTimeline * OnOpenedTimelineTandem;
  struct SeinAbilityRestrictZone * AbilityRestrictZone;
  bool m_hintShowPending;
  enum SavePedestal_State__Enum CurrentState;
  bool _InvalidateParentTimelineCache_k__BackingField;
};
struct SavePedestal {
  struct SavePedestal__Class *klass;
  struct MonitorData *monitor;
  struct SavePedestal__Fields fields;
};
struct __declspec(align(8)) List_1_SavePedestal___Fields {
  struct SavePedestal__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SavePedestal_ {
  struct List_1_SavePedestal___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SavePedestal___Fields fields;
};
struct SavePedestal__Array {
  struct SavePedestal__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SavePedestal * vector[32];
};
struct IEnumerator_1_SavePedestal_ {
  struct IEnumerator_1_SavePedestal___Class *klass;
  struct MonitorData *monitor;
};
enum SeinAbilityRestrictZoneMode__Enum : int32_t {
  SeinAbilityRestrictZoneMode__Enum_AllAbilities = 0,
  SeinAbilityRestrictZoneMode__Enum_Dash = 1,
  SeinAbilityRestrictZoneMode__Enum_Attack = 2,
  SeinAbilityRestrictZoneMode__Enum_None = 3,
};
struct SeinAbilityRestrictZoneMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SeinAbilityRestrictZoneMode__Enum value;
};
struct SeinAbilityRestrictZone__Fields {
  struct MonoBehaviour__Fields _;
  bool m_inside;
  float m_characterPositionNormalized;
  struct Rect m_bounds;
  enum SeinAbilityRestrictZoneMask__Enum RestrictMask;
  enum SeinAbilityRestrictZoneMask__Enum RestrictMaskLeft;
  enum SeinAbilityRestrictZoneMask__Enum RestrictMaskRight;
  enum SeinAbilityRestrictZoneMode__Enum RestrictMode;
  struct Condition_1 * Condition;
  float InfluenceWhenMovingLeft;
  float InfluenceWhenMovingRight;
  bool BlockMovementLeft;
  bool BlockMovementRight;
  bool PreventMovingThroughZone;
  bool UseNormalizedValues;
  bool m_subscribedToSeinEvents;
  bool m_subscribedToKuEvents;
  struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array * HorizontalMovementSettings;
  struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array * GravityMovementSettings;
  struct AnimationSwapSet * AnimationSetRight;
  struct AnimationSwapSet * AnimationSetLeft;
  struct Color EditorColor;
};
struct SeinAbilityRestrictZone {
  struct SeinAbilityRestrictZone__Class *klass;
  struct MonitorData *monitor;
  struct SeinAbilityRestrictZone__Fields fields;
};
struct __declspec(align(8)) List_1_SeinAbilityRestrictZone___Fields {
  struct SeinAbilityRestrictZone__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_SeinAbilityRestrictZone_ {
  struct List_1_SeinAbilityRestrictZone___Class *klass;
  struct MonitorData *monitor;
  struct List_1_SeinAbilityRestrictZone___Fields fields;
};
struct SeinAbilityRestrictZone__Array {
  struct SeinAbilityRestrictZone__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinAbilityRestrictZone * vector[32];
};
struct IEnumerator_1_SeinAbilityRestrictZone_ {
  struct IEnumerator_1_SeinAbilityRestrictZone___Class *klass;
  struct MonitorData *monitor;
};
struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting {
  struct HorizontalPlatformMovementSettings * HorizontalMovementSetting;
  float Time;
};
struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Boxed {
  struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class *klass;
  struct MonitorData *monitor;
  struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting fields;
};
struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array {
  struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting vector[32];
};
struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings {
  struct GravityPlatformMovementSettings * GravityMovementSettings;
  float Time;
};
struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Boxed {
  struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Class *klass;
  struct MonitorData *monitor;
  struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings fields;
};
struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array {
  struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings vector[32];
};
struct AnimationSwapSet__Fields {
  struct ScriptableObject__Fields _;
  struct IdleOverride * Idle;
  struct RunOverride * Move;
  bool m_blockTurning;
};
struct AnimationSwapSet {
  struct AnimationSwapSet__Class *klass;
  struct MonitorData *monitor;
  struct AnimationSwapSet__Fields fields;
};
struct __declspec(align(8)) IdleOverride__Fields {
  bool ShouldOverride;
  struct AnimationSwap * IdleBlend;
  struct AnimationSwap * IdleYawn;
  struct MoonAnimation * LookBackAnimationIn;
  struct MoonAnimation * LookBackAnimationLoop;
  struct MoonAnimation * LookBackAnimationOut;
};
struct IdleOverride {
  struct IdleOverride__Class *klass;
  struct MonitorData *monitor;
  struct IdleOverride__Fields fields;
};
struct __declspec(align(8)) AnimationSwap__Fields {
  bool ShouldOverride;
  struct MoonAnimation * AnimationOverride;
  struct MoonAnimation * OverriddenAnimation;
};
struct AnimationSwap {
  struct AnimationSwap__Class *klass;
  struct MonitorData *monitor;
  struct AnimationSwap__Fields fields;
};
struct __declspec(align(8)) RunOverride__Fields {
  bool ShouldOverride;
  struct AnimationSwap * MoveBlend;
  struct AnimationSwap * RunTurn;
  struct AnimationParameterSwap * Speed;
};
struct RunOverride {
  struct RunOverride__Class *klass;
  struct MonitorData *monitor;
  struct RunOverride__Fields fields;
};
struct __declspec(align(8)) AnimationParameterSwap__Fields {
  bool ShouldOverride;
  struct FloatAnimationParameter * ParameterOverride;
  struct FloatAnimationParameter * OverriddenParameter;
};
struct AnimationParameterSwap {
  struct AnimationParameterSwap__Class *klass;
  struct MonitorData *monitor;
  struct AnimationParameterSwap__Fields fields;
};
struct IEnumerator_1_SavePedestal___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SavePedestal___StaticFields {
};
struct IEnumerator_1_SavePedestal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SavePedestal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SavePedestal___VTable vtable;
};
struct List_1_SavePedestal___VTable {
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
struct List_1_SavePedestal___StaticFields {
  struct SavePedestal__Array * _emptyArray;
};
struct List_1_SavePedestal___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SavePedestal___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SavePedestal___VTable vtable;
};
struct IEnumerator_1_SeinAbilityRestrictZone___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_SeinAbilityRestrictZone___StaticFields {
};
struct IEnumerator_1_SeinAbilityRestrictZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_SeinAbilityRestrictZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_SeinAbilityRestrictZone___VTable vtable;
};
struct List_1_SeinAbilityRestrictZone___VTable {
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
struct List_1_SeinAbilityRestrictZone___StaticFields {
  struct SeinAbilityRestrictZone__Array * _emptyArray;
};
struct List_1_SeinAbilityRestrictZone___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_SeinAbilityRestrictZone___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_SeinAbilityRestrictZone___VTable vtable;
};
struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__StaticFields {
};
struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SeinAbilityRestrictZone_LerpedHorizontalMovementSetting__VTable vtable;
};
struct SeinAbilityRestrictZone_LerpedGravityPlatformMovementSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};}