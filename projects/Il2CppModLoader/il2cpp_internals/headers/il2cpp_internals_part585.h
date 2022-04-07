namespace app {
struct GameSettings {
  struct GameSettings__Class *klass;
  struct MonitorData *monitor;
  struct GameSettings__Fields fields;
};
struct GameSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct GameSettings__StaticFields {
  struct GameSettings * Instance;
  float PaperwhiteCoefficient;
  float HDRUIBrightnessCoefficient;
  float HDRRichnessCoefficient;
  float HDRShadowDetailCoefficient;
};
struct GameSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameSettings__VTable vtable;
};

struct __declspec(align(8)) GameSettings_SwapOutputs_d_263__Fields {
  int32_t __1__state;
  struct Object * __2__current;
  struct GameSettings * __4__this;
};
struct GameSettings_SwapOutputs_d_263 {
  struct GameSettings_SwapOutputs_d_263__Class *klass;
  struct MonitorData *monitor;
  struct GameSettings_SwapOutputs_d_263__Fields fields;
};
struct GameSettings_SwapOutputs_d_263__VTable {
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
struct GameSettings_SwapOutputs_d_263__StaticFields {
};
struct GameSettings_SwapOutputs_d_263__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct GameSettings_SwapOutputs_d_263__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct GameSettings_SwapOutputs_d_263__VTable vtable;
};

struct HDRBrightnessSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct HDRBrightnessSlider {
  struct HDRBrightnessSlider__Class *klass;
  struct MonitorData *monitor;
  struct HDRBrightnessSlider__Fields fields;
};
struct HDRBrightnessSlider__VTable {
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
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
  VirtualInvokeData UpdateValue;
  VirtualInvokeData OnBackgroundEnabled;
  VirtualInvokeData OnBackgroundDisabled;
};
struct HDRBrightnessSlider__StaticFields {
};
struct HDRBrightnessSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HDRBrightnessSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HDRBrightnessSlider__VTable vtable;
};

struct HDRPaperwhiteSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct HDRPaperwhiteSlider {
  struct HDRPaperwhiteSlider__Class *klass;
  struct MonitorData *monitor;
  struct HDRPaperwhiteSlider__Fields fields;
};
struct HDRPaperwhiteSlider__VTable {
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
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
  VirtualInvokeData UpdateValue;
  VirtualInvokeData OnBackgroundEnabled;
  VirtualInvokeData OnBackgroundDisabled;
};
struct HDRPaperwhiteSlider__StaticFields {
};
struct HDRPaperwhiteSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HDRPaperwhiteSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HDRPaperwhiteSlider__VTable vtable;
};

struct HDRRichnessSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct HDRRichnessSlider {
  struct HDRRichnessSlider__Class *klass;
  struct MonitorData *monitor;
  struct HDRRichnessSlider__Fields fields;
};
struct HDRRichnessSlider__VTable {
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
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
  VirtualInvokeData UpdateValue;
  VirtualInvokeData OnBackgroundEnabled;
  VirtualInvokeData OnBackgroundDisabled;
};
struct HDRRichnessSlider__StaticFields {
};
struct HDRRichnessSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HDRRichnessSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HDRRichnessSlider__VTable vtable;
};

struct HDRShadowDetailSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct HDRShadowDetailSlider {
  struct HDRShadowDetailSlider__Class *klass;
  struct MonitorData *monitor;
  struct HDRShadowDetailSlider__Fields fields;
};
struct HDRShadowDetailSlider__VTable {
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
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
  VirtualInvokeData UpdateValue;
  VirtualInvokeData OnBackgroundEnabled;
  VirtualInvokeData OnBackgroundDisabled;
};
struct HDRShadowDetailSlider__StaticFields {
};
struct HDRShadowDetailSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HDRShadowDetailSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HDRShadowDetailSlider__VTable vtable;
};

struct HDRUIBrightnessSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct HDRUIBrightnessSlider {
  struct HDRUIBrightnessSlider__Class *klass;
  struct MonitorData *monitor;
  struct HDRUIBrightnessSlider__Fields fields;
};
struct HDRUIBrightnessSlider__VTable {
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
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
  VirtualInvokeData UpdateValue;
  VirtualInvokeData OnBackgroundEnabled;
  VirtualInvokeData OnBackgroundDisabled;
};
struct HDRUIBrightnessSlider__StaticFields {
};
struct HDRUIBrightnessSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HDRUIBrightnessSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HDRUIBrightnessSlider__VTable vtable;
};

struct HideMenuAction__Fields {
  struct ActionMethod__Fields _;
  bool Hide;
  bool RunOnDisable;
  struct List_1_LegacyTransparencyAnimator_ * ItemsToHide;
  struct LegacyTransparencyAnimator * ExternalTransparencyAnimator;
  float m_backgroundFadeTimer;
  enum MenuTabBackground__Enum m_originalBackgroundMode;
};
struct HideMenuAction {
  struct HideMenuAction__Class *klass;
  struct MonitorData *monitor;
  struct HideMenuAction__Fields fields;
};
struct HideMenuAction__VTable {
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
  VirtualInvokeData get_ShouldSKipUiBackgroundBlur;
};
struct HideMenuAction__StaticFields {
  bool m_backgroundDisabled;
};
struct HideMenuAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct HideMenuAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct HideMenuAction__VTable vtable;
};

struct KeyboardLayoutOptions__Fields {
  struct CleverMenuOptionsList__Fields _;
  struct MessageProvider * Qwerty;
  struct MessageProvider * Azerty;
};
struct KeyboardLayoutOptions {
  struct KeyboardLayoutOptions__Class *klass;
  struct MonitorData *monitor;
  struct KeyboardLayoutOptions__Fields fields;
};
struct KeyboardLayoutOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct KeyboardLayoutOptions__StaticFields {
  struct KeyboardLayoutOptions * Instance;
};
struct KeyboardLayoutOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct KeyboardLayoutOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct KeyboardLayoutOptions__VTable vtable;
};

struct LanguageChanger__Fields {
  struct MonoBehaviour__Fields _;
  struct CleverMenuItem * m_cleverMenuItem;
  struct CleverMenuItemSelectionManager * SelectionManager;
  struct SoundProvider * ChangeSound;
};
struct LanguageChanger {
  struct LanguageChanger__Class *klass;
  struct MonitorData *monitor;
  struct LanguageChanger__Fields fields;
};
struct LanguageChanger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LanguageChanger__StaticFields {
};
struct LanguageChanger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LanguageChanger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LanguageChanger__VTable vtable;
};

struct LanguageOptions__Fields {
  struct CleverMenuOptionsList__Fields _;
  struct MessageProvider * English;
  struct MessageProvider * French;
  struct MessageProvider * Italian;
  struct MessageProvider * German;
  struct MessageProvider * Spanish;
  struct MessageProvider * Japanese;
  struct MessageProvider * Portuguese;
  struct MessageProvider * Chinese;
  struct MessageProvider * Russian;
  struct MessageProvider * TraditionalChinese;
  struct MessageProvider * Czech;
  struct MessageProvider * Danish;
  struct MessageProvider * Dutch;
  struct MessageProvider * Finnish;
  struct MessageProvider * Hungarian;
  struct MessageProvider * Korean;
  struct MessageProvider * Norwegian;
  struct MessageProvider * Polish;
  struct MessageProvider * SpanishSpain;
  struct MessageProvider * Swedish;
  struct MessageProvider * Turkish;
};
struct LanguageOptions {
  struct LanguageOptions__Class *klass;
  struct MonitorData *monitor;
  struct LanguageOptions__Fields fields;
};
struct LanguageOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct LanguageOptions__StaticFields {
};
struct LanguageOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LanguageOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LanguageOptions__VTable vtable;
};

struct MenuScreenStack__Fields {
  struct MenuScreen__Fields _;
  struct List_1_MenuScreen_ * m_stack;
};
struct MenuScreenStack {
  struct MenuScreenStack__Class *klass;
  struct MonitorData *monitor;
  struct MenuScreenStack__Fields fields;
};
struct __declspec(align(8)) List_1_MenuScreen___Fields {
  struct MenuScreen__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_MenuScreen_ {
  struct List_1_MenuScreen___Class *klass;
  struct MonitorData *monitor;
  struct List_1_MenuScreen___Fields fields;
};
struct MenuScreen__Array {
  struct MenuScreen__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct MenuScreen * vector[32];
};
struct IEnumerator_1_MenuScreen_ {
  struct IEnumerator_1_MenuScreen___Class *klass;
  struct MonitorData *monitor;
};
struct EquipmentScreen_HintsSettings {
  struct GameObject * MessagePrefab;
  struct Transform * MessageAnchor;
  float MessageDuration;
  struct MessageProvider * GlobalShardEquipFailure;
  struct MessageProvider * NoUpgradeAvailable;
  struct MessageProvider * NotEnoughSpiritLight;
  struct MessageProvider * AllSocketsAreFull;
  struct MessageProvider * CantSocketSelectedEquipment;
};
struct EquipmentScreen_HintsSettings__Boxed {
  struct EquipmentScreen_HintsSettings__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentScreen_HintsSettings fields;
};
enum EquipmentScreen_State__Enum : int32_t {
  EquipmentScreen_State__Enum_Equipment = 0,
  EquipmentScreen_State__Enum_Assignment = 1,
};
struct EquipmentScreen_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum EquipmentScreen_State__Enum value;
};
struct EquipmentScreen__Fields {
  struct MenuScreenStack__Fields _;
  struct LegacyTransparencyAnimator * FadeAnimator;
  struct GameObject * ButtonBindingCanvasPrefab;
  struct Transform * AnchorCategoryContext;
  struct GameObject * m_bindingsCanvas;
  struct GameObject * SpellDetailsCanvasPrefab;
  struct Transform * AnchorItemDetails;
  struct EquipmentUIDetails * m_equipmentDetailsCanvas;
  struct GameObject * SpellItemPrefab;
  struct GameObject * ItemHighlightGO;
  struct LegacyTransparencyAnimator * TitleFaderAnimator;
  struct EquipmentSelectionGrid * Grid;
  struct CleverMenuItemSelectionManager * m_buttonAssignmentGrid;
  bool m_isHiding;
  struct EquipmentScreen_HintsSettings Hints;
  enum EquipmentScreen_State__Enum m_state;
  struct PlayerUberStateInventory_InventoryItem * m_autoFocusEquipment;
  struct MessageBox * m_currentHint;
  bool m_isInited;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct EquipmentScreen {
  struct EquipmentScreen__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentScreen__Fields fields;
};
struct EquipmentUIDetails__Fields {
  struct MonoBehaviour__Fields _;
  struct GameObject * IconGO;
  struct GameObject * NameGO;
  struct GameObject * DescriptionGO;
  struct GameObject * SocketItemPrefab;
  struct GameObject * SocketItemHighlightGO;
  struct Texture2D * AddItemIcon;
  struct MessageProvider * AddItemMessage;
  struct MessageProvider * LockedName;
  struct MessageProvider * LockedDescription;
  struct Action * OnSocketActivated;
  struct Action * OnSocketAdded;
  struct PlayerUberStateInventory_InventoryItem * m_item;
};
struct EquipmentUIDetails {
  struct EquipmentUIDetails__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentUIDetails__Fields fields;
};
struct EquipmentSelectionGrid__Fields {
  struct EquipmentUIInventoryGrid__Fields _;
  struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup_ * GroupAnchors;
};
struct EquipmentSelectionGrid {
  struct EquipmentSelectionGrid__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentSelectionGrid__Fields fields;
};
struct __declspec(align(8)) List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___Fields {
  struct EquipmentSelectionGrid_EquipmentAnchorGroup__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup_ {
  struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___Class *klass;
  struct MonitorData *monitor;
  struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___Fields fields;
};
enum Equipment_Category__Enum : int32_t {
  Equipment_Category__Enum_Weapon = 0,
  Equipment_Category__Enum_Spell = 1,
  Equipment_Category__Enum_Ability = 2,
  Equipment_Category__Enum_AutoAbility = 3,
};
struct Equipment_Category__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum Equipment_Category__Enum value;
};
struct __declspec(align(8)) EquipmentSelectionGrid_EquipmentAnchorGroup__Fields {
  enum Equipment_Category__Enum Category;
  struct GameObject * Anchor;
  int32_t Count;
};
struct EquipmentSelectionGrid_EquipmentAnchorGroup {
  struct EquipmentSelectionGrid_EquipmentAnchorGroup__Class *klass;
  struct MonitorData *monitor;
  struct EquipmentSelectionGrid_EquipmentAnchorGroup__Fields fields;
};
struct EquipmentSelectionGrid_EquipmentAnchorGroup__Array {
  struct EquipmentSelectionGrid_EquipmentAnchorGroup__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct EquipmentSelectionGrid_EquipmentAnchorGroup * vector[32];
};
struct IEnumerator_1_EquipmentSelectionGrid_EquipmentAnchorGroup_ {
  struct IEnumerator_1_EquipmentSelectionGrid_EquipmentAnchorGroup___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_MenuScreen___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_MenuScreen___StaticFields {
};
struct IEnumerator_1_MenuScreen___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_MenuScreen___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_MenuScreen___VTable vtable;
};
struct List_1_MenuScreen___VTable {
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
struct List_1_MenuScreen___StaticFields {
  struct MenuScreen__Array * _emptyArray;
};
struct List_1_MenuScreen___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_MenuScreen___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_MenuScreen___VTable vtable;
};
struct EquipmentUIDetails__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentUIDetails__StaticFields {
};
struct EquipmentUIDetails__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentUIDetails__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentUIDetails__VTable vtable;
};
struct EquipmentSelectionGrid_EquipmentAnchorGroup__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentSelectionGrid_EquipmentAnchorGroup__StaticFields {
};
struct EquipmentSelectionGrid_EquipmentAnchorGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentSelectionGrid_EquipmentAnchorGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentSelectionGrid_EquipmentAnchorGroup__VTable vtable;
};
struct IEnumerator_1_EquipmentSelectionGrid_EquipmentAnchorGroup___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_EquipmentSelectionGrid_EquipmentAnchorGroup___StaticFields {
};
struct IEnumerator_1_EquipmentSelectionGrid_EquipmentAnchorGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_EquipmentSelectionGrid_EquipmentAnchorGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_EquipmentSelectionGrid_EquipmentAnchorGroup___VTable vtable;
};
struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___VTable {
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
struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___StaticFields {
  struct EquipmentSelectionGrid_EquipmentAnchorGroup__Array * _emptyArray;
};
struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_EquipmentSelectionGrid_EquipmentAnchorGroup___VTable vtable;
};
struct EquipmentSelectionGrid__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentSelectionGrid__StaticFields {
};
struct EquipmentSelectionGrid__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentSelectionGrid__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentSelectionGrid__VTable vtable;
};
struct EquipmentScreen_HintsSettings__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct EquipmentScreen_HintsSettings__StaticFields {
};
struct EquipmentScreen_HintsSettings__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentScreen_HintsSettings__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentScreen_HintsSettings__VTable vtable;
};
struct EquipmentScreen__VTable {
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
struct EquipmentScreen__StaticFields {
  struct EquipmentScreen * Instance;
};
struct EquipmentScreen__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct EquipmentScreen__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct EquipmentScreen__VTable vtable;
};
struct MenuScreenStack__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData __unknown;
  VirtualInvokeData Hide;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData PlaySoundEvent;
};
struct MenuScreenStack__StaticFields {
};
struct MenuScreenStack__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MenuScreenStack__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MenuScreenStack__VTable vtable;
};

struct MotionBlurSlider__Fields {
  struct CleverValueSlider__Fields _;
  struct MessageProvider * OffMessageProvider;
};
struct MotionBlurSlider {
  struct MotionBlurSlider__Class *klass;
  struct MonitorData *monitor;
  struct MotionBlurSlider__Fields fields;
};
struct MotionBlurSlider__VTable {
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
struct MotionBlurSlider__StaticFields {
};
struct MotionBlurSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MotionBlurSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MotionBlurSlider__VTable vtable;
};

struct MusicVolumeSlider__Fields {
  struct CleverValueSlider__Fields _;
};
struct MusicVolumeSlider {
  struct MusicVolumeSlider__Class *klass;
  struct MonitorData *monitor;
  struct MusicVolumeSlider__Fields fields;
};
struct MusicVolumeSlider__VTable {
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
struct MusicVolumeSlider__StaticFields {
};
struct MusicVolumeSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct MusicVolumeSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct MusicVolumeSlider__VTable vtable;
};

struct NameOptions__Fields {
  struct CleverMenuOptionsList__Fields _;
  struct String * m_currentlySelected;
  struct String * _FirstLetter_k__BackingField;
  struct String * _SecondLetter_k__BackingField;
  struct List_1_System_String_ * m_availableNames;
  struct List_1_System_String_ * m_unavailableNames;
};
struct NameOptions {
  struct NameOptions__Class *klass;
  struct MonitorData *monitor;
  struct NameOptions__Fields fields;
};
struct __declspec(align(8)) NameOptions_NameDatabase__Fields {
  struct List_1_System_String_ * Names;
};
struct NameOptions_NameDatabase {
  struct NameOptions_NameDatabase__Class *klass;
  struct MonitorData *monitor;
  struct NameOptions_NameDatabase__Fields fields;
};
struct NameOptions_NameDatabase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct NameOptions_NameDatabase__StaticFields {
};
struct NameOptions_NameDatabase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct NameOptions_NameDatabase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct NameOptions_NameDatabase__VTable vtable;
};
struct NameOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct NameOptions__StaticFields {
  struct NameOptions_NameDatabase * m_database;
};}