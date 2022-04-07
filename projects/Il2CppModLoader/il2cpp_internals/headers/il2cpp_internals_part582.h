namespace app {

struct AudioDeviceOptions__Fields {
  struct CleverMenuOptionsList__Fields _;
  struct TextBox * LabelTextBox;
  int32_t LabelMaxChars;
  int32_t ListItemMaxChars;
};
struct AudioDeviceOptions {
  struct AudioDeviceOptions__Class *klass;
  struct MonitorData *monitor;
  struct AudioDeviceOptions__Fields fields;
};
struct AudioDeviceOptions__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData Awake;
};
struct AudioDeviceOptions__StaticFields {
};
struct AudioDeviceOptions__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioDeviceOptions__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioDeviceOptions__VTable vtable;
};

struct __declspec(align(8)) AudioDeviceOptions_c_DisplayClass4_0__Fields {
  struct String * deviceName;
  uint32_t deviceId;
  struct AudioDeviceOptions * __4__this;
};
struct AudioDeviceOptions_c_DisplayClass4_0 {
  struct AudioDeviceOptions_c_DisplayClass4_0__Class *klass;
  struct MonitorData *monitor;
  struct AudioDeviceOptions_c_DisplayClass4_0__Fields fields;
};
struct AudioDeviceOptions_c_DisplayClass4_0__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct AudioDeviceOptions_c_DisplayClass4_0__StaticFields {
};
struct AudioDeviceOptions_c_DisplayClass4_0__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct AudioDeviceOptions_c_DisplayClass4_0__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct AudioDeviceOptions_c_DisplayClass4_0__VTable vtable;
};

struct CleverMenuItemGroupBase__Fields {
  struct MonoBehaviour__Fields _;
  struct Action * OnBackPressed;
  bool _IsSuspended_k__BackingField;
  enum SuspendableMask__Enum m_suspensionMask;
};
struct CleverMenuItemGroupBase {
  struct CleverMenuItemGroupBase__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItemGroupBase__Fields fields;
};
struct CleverValueSlider__Fields {
  struct CleverMenuItemGroupBase__Fields _;
  struct CleverMenuItem * CleverMenuItem;
  struct SoundProvider * ChangeVolumeUpSound;
  struct SoundProvider * ChangeVolumeDownSound;
  float MinValue;
  float MaxValue;
  float DefaultValue;
  float m_step;
  struct MessageBox__Array * NavigateMessageBoxes;
  struct MessageProvider * ActivateNavigateMessageProvider;
  struct MessageProvider * DeactivateNavigateMessageProvider;
  struct BaseAnimator * HighlightAnimator;
  struct Transform * SliderDot;
  struct Transform * SliderBackground;
  struct Transform * SliderDefaultValueBar;
  float MinX;
  float MaxX;
  bool SnapSliderAroundDefault;
  bool ForceDefaultToCenter;
  struct SoundPlayer * m_soundPlayer;
  struct TextBox * ValueTextBox;
  struct Rect m_sliderRect;
  float m_defaultValueSnapRange;
  bool m_isActive;
  bool _IsVisible_k__BackingField;
  bool m_isHighlightVisible;
  float m_holdRemainingTime;
  float m_holdAccelerationTime;
  bool m_isDragged;
};
struct CleverValueSlider {
  struct CleverValueSlider__Class *klass;
  struct MonitorData *monitor;
  struct CleverValueSlider__Fields fields;
};
enum MenuTabBackground__Enum : int32_t {
  MenuTabBackground__Enum_Dark = 0,
  MenuTabBackground__Enum_Clear = 1,
  MenuTabBackground__Enum_Black = 2,
};
struct MenuTabBackground__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum MenuTabBackground__Enum value;
};
struct CleverValueSliderHideMenu__Fields {
  struct CleverValueSlider__Fields _;
  struct List_1_LegacyTransparencyAnimator_ * ItemsToHide;
  struct LegacyTransparencyAnimator * ExternalTransparencyAnimator;
  struct CleverValueSlider * PairedSlider;
  struct CleverMenuItemSelectionManager * SelectionManager;
  bool m_backgroundDisabled;
  float m_backgroundFadeTimer;
  bool DisableInput;
  enum MenuTabBackground__Enum m_originalBackgroundMode;
};
struct CleverValueSliderHideMenu {
  struct CleverValueSliderHideMenu__Class *klass;
  struct MonitorData *monitor;
  struct CleverValueSliderHideMenu__Fields fields;
};
struct BrightnessVolumeSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct BrightnessVolumeSlider {
  struct BrightnessVolumeSlider__Class *klass;
  struct MonitorData *monitor;
  struct BrightnessVolumeSlider__Fields fields;
};
struct CleverMenuItemGroup__Fields {
  struct CleverMenuItemGroupBase__Fields _;
  struct CleverMenuItemGroup * Root;
  struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem_ * Options;
  struct CleverMenuItemSelectionManager * SelectionManager;
  struct Event_1 * OnExpandSound;
  struct Event_1 * OnCollapseSound;
  struct Event_1 * OnChangeSelectionSound;
  bool ExpandOnHighlight;
  struct Condition_1 * CanBeEnteredCondition;
  struct LegacyTransparencyAnimator * HighlightAnimator;
  bool SuspendOnActivated;
  bool SelectOnEnable;
  bool m_playChangeSound;
  bool m_isFrozen;
  struct HashSet_1_Moon_ISuspendable_ * m_suspendablesIgnore;
};
struct CleverMenuItemGroup {
  struct CleverMenuItemGroup__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItemGroup__Fields fields;
};
struct __declspec(align(8)) List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Fields {
  struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem_ {
  struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Fields fields;
};
struct __declspec(align(8)) CleverMenuItemGroup_CleverMenuItemGroupItem__Fields {
  struct CleverMenuItem * MenuItem;
  struct CleverMenuItemGroupBase * ItemGroup;
};
struct CleverMenuItemGroup_CleverMenuItemGroupItem {
  struct CleverMenuItemGroup_CleverMenuItemGroupItem__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItemGroup_CleverMenuItemGroupItem__Fields fields;
};
struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array {
  struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CleverMenuItemGroup_CleverMenuItemGroupItem * vector[32];
};
struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem_ {
  struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class *klass;
  struct MonitorData *monitor;
};
struct CleverMenuItemGroup_CleverMenuItemGroupItem__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CleverMenuItemGroup_CleverMenuItemGroupItem__StaticFields {
};
struct CleverMenuItemGroup_CleverMenuItemGroupItem__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverMenuItemGroup_CleverMenuItemGroupItem__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverMenuItemGroup_CleverMenuItemGroupItem__VTable vtable;
};
struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields {
};
struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable vtable;
};
struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable {
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
struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields {
  struct CleverMenuItemGroup_CleverMenuItemGroupItem__Array * _emptyArray;
};
struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CleverMenuItemGroup_CleverMenuItemGroupItem___VTable vtable;
};
struct CleverMenuItemGroup__VTable {
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
};
struct CleverMenuItemGroup__StaticFields {
};
struct CleverMenuItemGroup__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverMenuItemGroup__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverMenuItemGroup__VTable vtable;
};
struct CleverMenuItemGroupBase__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_Mask;
  VirtualInvokeData set_Mask;
  VirtualInvokeData get_IsSuspended;
  VirtualInvokeData set_IsSuspended;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
  VirtualInvokeData __unknown_3;
  VirtualInvokeData __unknown_4;
  VirtualInvokeData __unknown_5;
  VirtualInvokeData __unknown_6;
  VirtualInvokeData Awake;
  VirtualInvokeData __unknown_7;
  VirtualInvokeData __unknown_8;
};
struct CleverMenuItemGroupBase__StaticFields {
};
struct CleverMenuItemGroupBase__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverMenuItemGroupBase__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverMenuItemGroupBase__VTable vtable;
};
struct CleverValueSlider__VTable {
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
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData get_NormalizedValue;
  VirtualInvokeData set_NormalizedValue;
  VirtualInvokeData get_NormalizedDefaultValue;
  VirtualInvokeData get_MouseDragStepParameter;
  VirtualInvokeData GetValueToDisplay;
  VirtualInvokeData ApplyValueOnSliderReleased;
  VirtualInvokeData UpdateStep;
};
struct CleverValueSlider__StaticFields {
};
struct CleverValueSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverValueSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverValueSlider__VTable vtable;
};
struct CleverValueSliderHideMenu__VTable {
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
struct CleverValueSliderHideMenu__StaticFields {
};
struct CleverValueSliderHideMenu__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverValueSliderHideMenu__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverValueSliderHideMenu__VTable vtable;
};
struct BrightnessVolumeSlider__VTable {
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
struct BrightnessVolumeSlider__StaticFields {
};
struct BrightnessVolumeSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct BrightnessVolumeSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct BrightnessVolumeSlider__VTable vtable;
};

struct CleverMenuItemGroupBase_c {
  struct CleverMenuItemGroupBase_c__Class *klass;
  struct MonitorData *monitor;
};
struct CleverMenuItemGroupBase_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CleverMenuItemGroupBase_c__StaticFields {
  struct CleverMenuItemGroupBase_c * __9;
  struct Action * __9__24_0;
};
struct CleverMenuItemGroupBase_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverMenuItemGroupBase_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverMenuItemGroupBase_c__VTable vtable;
};

struct CleverMenuItemTooltip__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageProvider * Tooltip;
};
struct CleverMenuItemTooltip {
  struct CleverMenuItemTooltip__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItemTooltip__Fields fields;
};
struct CleverMenuItemTooltip__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CleverMenuItemTooltip__StaticFields {
};
struct CleverMenuItemTooltip__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverMenuItemTooltip__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverMenuItemTooltip__VTable vtable;
};

struct CleverMenuItemTooltipController__Fields {
  struct MonoBehaviour__Fields _;
  struct CleverMenuItemSelectionManager * Selection;
  struct List_1_CleverMenuItemGroupBase_ * AdditionalValidActiveSelection;
  struct CleverMenuItemSelectionManager * UpdateWhenPressed;
  struct MessageBox * Tooltip;
};
struct CleverMenuItemTooltipController {
  struct CleverMenuItemTooltipController__Class *klass;
  struct MonitorData *monitor;
  struct CleverMenuItemTooltipController__Fields fields;
};
struct __declspec(align(8)) List_1_CleverMenuItemGroupBase___Fields {
  struct CleverMenuItemGroupBase__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_CleverMenuItemGroupBase_ {
  struct List_1_CleverMenuItemGroupBase___Class *klass;
  struct MonitorData *monitor;
  struct List_1_CleverMenuItemGroupBase___Fields fields;
};
struct CleverMenuItemGroupBase__Array {
  struct CleverMenuItemGroupBase__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct CleverMenuItemGroupBase * vector[32];
};
struct IEnumerator_1_CleverMenuItemGroupBase_ {
  struct IEnumerator_1_CleverMenuItemGroupBase___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_CleverMenuItemGroupBase___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_CleverMenuItemGroupBase___StaticFields {
};
struct IEnumerator_1_CleverMenuItemGroupBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_CleverMenuItemGroupBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_CleverMenuItemGroupBase___VTable vtable;
};
struct List_1_CleverMenuItemGroupBase___VTable {
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
struct List_1_CleverMenuItemGroupBase___StaticFields {
  struct CleverMenuItemGroupBase__Array * _emptyArray;
};
struct List_1_CleverMenuItemGroupBase___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_CleverMenuItemGroupBase___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_CleverMenuItemGroupBase___VTable vtable;
};
struct CleverMenuItemTooltipController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct CleverMenuItemTooltipController__StaticFields {
};
struct CleverMenuItemTooltipController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CleverMenuItemTooltipController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CleverMenuItemTooltipController__VTable vtable;
};

struct CloseOptionScreenAction__Fields {
  struct ActionMethod__Fields _;
};
struct CloseOptionScreenAction {
  struct CloseOptionScreenAction__Class *klass;
  struct MonitorData *monitor;
  struct CloseOptionScreenAction__Fields fields;
};
struct CloseOptionScreenAction__VTable {
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
struct CloseOptionScreenAction__StaticFields {
};
struct CloseOptionScreenAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CloseOptionScreenAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CloseOptionScreenAction__VTable vtable;
};

struct CompleteGameAction__Fields {
  struct ActionMethod__Fields _;
};
struct CompleteGameAction {
  struct CompleteGameAction__Class *klass;
  struct MonitorData *monitor;
  struct CompleteGameAction__Fields fields;
};
struct CompleteGameAction__VTable {
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
struct CompleteGameAction__StaticFields {
};
struct CompleteGameAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct CompleteGameAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct CompleteGameAction__VTable vtable;
};

struct ContrastVolumeSlider__Fields {
  struct CleverValueSliderHideMenu__Fields _;
};
struct ContrastVolumeSlider {
  struct ContrastVolumeSlider__Class *klass;
  struct MonitorData *monitor;
  struct ContrastVolumeSlider__Fields fields;
};
struct ContrastVolumeSlider__VTable {
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
struct ContrastVolumeSlider__StaticFields {
};
struct ContrastVolumeSlider__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ContrastVolumeSlider__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ContrastVolumeSlider__VTable vtable;
};

struct __declspec(align(8)) ControlItem__Fields {
  struct KeyCode__Enum__Array * DefaultKeyCodes;
  struct KeyCode__Enum__Array * CurrentKeyCodes;
  struct Dictionary_2_System_Int32_UnityEngine_KeyCode_ * ChangingKeyCodes;
  bool Changed;
  struct CommandBinding * CommandBinding;
};
struct ControlItem {
  struct ControlItem__Class *klass;
  struct MonitorData *monitor;
  struct ControlItem__Fields fields;
};
struct __declspec(align(8)) Dictionary_2_System_Int32_UnityEngine_KeyCode___Fields {
  struct Int32__Array * buckets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___Array * entries;
  int32_t count;
  int32_t version;
  int32_t freeList;
  int32_t freeCount;
  struct IEqualityComparer_1_System_Int32_ * comparer;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode_ * keys;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode_ * values;
  struct Object * _syncRoot;
};
struct Dictionary_2_System_Int32_UnityEngine_KeyCode_ {
  struct Dictionary_2_System_Int32_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_System_Int32_UnityEngine_KeyCode___Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode_ {
  int32_t hashCode;
  int32_t next;
  int32_t key;
  enum KeyCode__Enum value;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___Boxed {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode_ fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___Array {
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode_ vector[32];
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_KeyCode_ * dictionary;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode_ {
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___Fields fields;
};
struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___Fields {
  struct Dictionary_2_System_Int32_UnityEngine_KeyCode_ * dictionary;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode_ {
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___Fields fields;
};
struct IEnumerator_1_UnityEngine_KeyCode_ {
  struct IEnumerator_1_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
};
struct ICollection_1_UnityEngine_KeyCode_ {
  struct ICollection_1_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
};
struct KeyValuePair_2_System_Int32_UnityEngine_KeyCode_ {
  int32_t key;
  enum KeyCode__Enum value;
};
struct KeyValuePair_2_System_Int32_UnityEngine_KeyCode___Boxed {
  struct KeyValuePair_2_System_Int32_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
  struct KeyValuePair_2_System_Int32_UnityEngine_KeyCode_ fields;
};
struct KeyValuePair_2_System_Int32_UnityEngine_KeyCode___Array {
  struct KeyValuePair_2_System_Int32_UnityEngine_KeyCode___Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct KeyValuePair_2_System_Int32_UnityEngine_KeyCode_ vector[32];
};
struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_KeyCode_ {
  struct IEnumerator_1_KeyValuePair_2_System_Int32_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerable_1_UnityEngine_KeyCode_ {
  struct IEnumerable_1_UnityEngine_KeyCode___Class *klass;
  struct MonitorData *monitor;
};
enum KeybindingCommandMapAsset_CommandBindingEnum__Enum : int32_t {
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Up = 0,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Down = 1,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Left = 2,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Right = 3,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Interact = 4,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Ability1 = 5,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Ability2 = 6,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Ability3 = 7,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Dash = 8,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Burrow = 9,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Bash = 10,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_GrabRock = 11,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Grapple = 12,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Glide = 13,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Jump = 14,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_DialogueAdvance = 15,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_DialogueOption1 = 16,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_DialogueOption2 = 17,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_DialogueExit = 18,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_OpenMapsAndShards = 19,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Pause = 20,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_ToggleWeaponWheel = 21,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuUp = 22,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuDown = 23,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuLeft = 24,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuRight = 25,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuNextPage = 26,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuPreviousPage = 27,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Select = 28,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Back = 29,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_Close = 30,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapUp = 31,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapDown = 32,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapLeft = 33,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapRight = 34,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapZoomIn = 35,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapZoomOut = 36,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapDetails = 37,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapFilterDetails = 38,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapFocusOri = 39,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MapFocusObjective = 40,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_LeaderboardCycleLeft = 41,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_LeaderboardCycleRight = 42,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_LeaderboardCycleFilter = 43,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_SignInToXBoxLive = 44,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_OpenAreaMap = 45,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuCycleFilter = 46,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuClose = 47,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuBack = 48,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_MenuSelect = 49,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_OpenInventory = 50,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_OpenWorldMap = 51,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_OpenShards = 52,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_DialogueOption3 = 53,
  KeybindingCommandMapAsset_CommandBindingEnum__Enum_COUNT = 54,
};
struct KeybindingCommandMapAsset_CommandBindingEnum__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum KeybindingCommandMapAsset_CommandBindingEnum__Enum value;
};
struct __declspec(align(8)) CommandBinding__Fields {
  struct MessageProvider * CommandDisplayName;
  struct MessageProvider * CommandKeyToken;
  enum KeybindingCommandMapAsset_CommandBindingEnum__Enum Command;
  bool CanLeftClickBind;
};
struct CommandBinding {
  struct CommandBinding__Class *klass;
  struct MonitorData *monitor;
  struct CommandBinding__Fields fields;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___StaticFields {
};
struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_KeyCode___VTable vtable;
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___VTable {
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
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___StaticFields {
};
struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_UnityEngine_KeyCode___VTable vtable;
};
struct IEnumerator_1_UnityEngine_KeyCode___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_UnityEngine_KeyCode___StaticFields {
};
struct IEnumerator_1_UnityEngine_KeyCode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_UnityEngine_KeyCode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_UnityEngine_KeyCode___VTable vtable;
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___VTable {
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
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___StaticFields {
};
struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_UnityEngine_KeyCode___VTable vtable;
};
struct ICollection_1_UnityEngine_KeyCode___VTable {
  VirtualInvokeData get_Count;
  VirtualInvokeData get_IsReadOnly;
  VirtualInvokeData Add;
  VirtualInvokeData Clear;
  VirtualInvokeData Contains;
  VirtualInvokeData CopyTo;
  VirtualInvokeData Remove;
};
struct ICollection_1_UnityEngine_KeyCode___StaticFields {
};
struct ICollection_1_UnityEngine_KeyCode___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ICollection_1_UnityEngine_KeyCode___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ICollection_1_UnityEngine_KeyCode___VTable vtable;
};}