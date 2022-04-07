namespace app {
struct SetDemoPlaytimeAction_Mode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum SetDemoPlaytimeAction_Mode__Enum value;
};
struct SetDemoPlaytimeAction__Fields {
  struct ActionMethod__Fields _;
  enum SetDemoPlaytimeAction_Mode__Enum m_mode;
};
struct SetDemoPlaytimeAction {
  struct SetDemoPlaytimeAction__Class *klass;
  struct MonitorData *monitor;
  struct SetDemoPlaytimeAction__Fields fields;
};
struct SetDemoPlaytimeAction__VTable {
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
struct SetDemoPlaytimeAction__StaticFields {
};
struct SetDemoPlaytimeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetDemoPlaytimeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetDemoPlaytimeAction__VTable vtable;
};

enum GameStateMachine_State__Enum : int32_t {
  GameStateMachine_State__Enum_Logos = 0,
  GameStateMachine_State__Enum_StartScreen = 1,
  GameStateMachine_State__Enum_TitleScreen = 2,
  GameStateMachine_State__Enum_Game = 3,
  GameStateMachine_State__Enum_MenuRace = 4,
  GameStateMachine_State__Enum_WatchCutscenes = 5,
  GameStateMachine_State__Enum_TrialEnd = 6,
  GameStateMachine_State__Enum_Prologue = 7,
};
struct GameStateMachine_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum GameStateMachine_State__Enum value;
};
struct SetGameModeAction__Fields {
  struct ActionMethod__Fields _;
  enum GameStateMachine_State__Enum StateToSet;
};
struct SetGameModeAction {
  struct SetGameModeAction__Class *klass;
  struct MonitorData *monitor;
  struct SetGameModeAction__Fields fields;
};
struct SetGameModeAction__VTable {
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
struct SetGameModeAction__StaticFields {
};
struct SetGameModeAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetGameModeAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetGameModeAction__VTable vtable;
};

struct SetGameModeToPrologueAction__Fields {
  struct ActionMethod__Fields _;
};
struct SetGameModeToPrologueAction {
  struct SetGameModeToPrologueAction__Class *klass;
  struct MonitorData *monitor;
  struct SetGameModeToPrologueAction__Fields fields;
};
struct SetGameModeToPrologueAction__VTable {
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
struct SetGameModeToPrologueAction__StaticFields {
};
struct SetGameModeToPrologueAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct SetGameModeToPrologueAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct SetGameModeToPrologueAction__VTable vtable;
};

struct TestWindowsController__Fields {
  struct MonoBehaviour__Fields _;
  struct TestWindow * TestWindow;
  struct TestWindowB * TestWindowB;
};
struct TestWindowsController {
  struct TestWindowsController__Class *klass;
  struct MonitorData *monitor;
  struct TestWindowsController__Fields fields;
};
struct Window__Fields {
  struct UIComponent__Fields _;
  bool m_willBlockInput;
  bool BlockingInput;
  struct List_1_Moon_UI_UIInteractable_ * m_interactables;
  bool m_visible;
};
struct Window {
  struct Window__Class *klass;
  struct MonitorData *monitor;
  struct Window__Fields fields;
};
enum TestWindow_State__Enum : int32_t {
  TestWindow_State__Enum_UnInitialized = 0,
  TestWindow_State__Enum_LeftMenu = 1,
  TestWindow_State__Enum_RightMenu = 2,
};
struct TestWindow_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TestWindow_State__Enum value;
};
struct TestWindow__Fields {
  struct Window__Fields _;
  struct LeftMenuManager * LeftMenuManager;
  struct ItemSelectionManager * LeftItemSelectionManager;
  struct RightMenuManager * RightMenuManager;
  struct ItemSelectionManager * RightItemSelectionManager;
  enum TestWindow_State__Enum CurrentState;
  float m_currentStateTime;
};
struct TestWindow {
  struct TestWindow__Class *klass;
  struct MonitorData *monitor;
  struct TestWindow__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_UI_UIInteractable___Fields {
  struct UIInteractable__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_UI_UIInteractable_ {
  struct List_1_Moon_UI_UIInteractable___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_UI_UIInteractable___Fields fields;
};
struct UIInteractable__Fields {
  struct UIComponent__Fields _;
  bool m_selected;
};
struct UIInteractable {
  struct UIInteractable__Class *klass;
  struct MonitorData *monitor;
  struct UIInteractable__Fields fields;
};
struct UIInteractable__Array {
  struct UIInteractable__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct UIInteractable * vector[32];
};
struct Button_1__Fields {
  struct UIInteractable__Fields _;
  struct LegacyTimelineSequence * NormalSequence;
  struct LegacyTimelineSequence * HightlightSequence;
  struct LegacyTimelineSequence * PressedSequence;
  struct LegacyTimelineSequence * DisabledSequence;
  struct Image_1 * m_image;
  struct Text_1 * m_text;
  struct InputTrigger * m_inputTrigger;
  struct Action_1_Moon_UI_UIContext_ * OnClick;
};
struct Button_1 {
  struct Button_1__Class *klass;
  struct MonitorData *monitor;
  struct Button_1__Fields fields;
};
struct __declspec(align(8)) InputTrigger__Fields {
  struct List_1_Moon_UI_InputInfo_ * m_triggers;
};
struct InputTrigger {
  struct InputTrigger__Class *klass;
  struct MonitorData *monitor;
  struct InputTrigger__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_UI_InputInfo___Fields {
  struct InputInfo__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_UI_InputInfo_ {
  struct List_1_Moon_UI_InputInfo___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_UI_InputInfo___Fields fields;
};
struct __declspec(align(8)) InputInfo__Fields {
  struct String * ActionName;
  enum Input_Button__Enum Button;
};
struct InputInfo {
  struct InputInfo__Class *klass;
  struct MonitorData *monitor;
  struct InputInfo__Fields fields;
};
struct InputInfo__Array {
  struct InputInfo__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct InputInfo * vector[32];
};
struct IEnumerator_1_Moon_UI_InputInfo_ {
  struct IEnumerator_1_Moon_UI_InputInfo___Class *klass;
  struct MonitorData *monitor;
};
struct Action_1_Moon_UI_UIContext___Fields {
  struct MulticastDelegate__Fields _;
};
struct Action_1_Moon_UI_UIContext_ {
  struct Action_1_Moon_UI_UIContext___Class *klass;
  struct MonitorData *monitor;
  struct Action_1_Moon_UI_UIContext___Fields fields;
};
struct __declspec(align(8)) UIContext__Fields {
  struct IUIComponent * m_component;
};
struct UIContext {
  struct UIContext__Class *klass;
  struct MonitorData *monitor;
  struct UIContext__Fields fields;
};
struct IUIComponent {
  struct IUIComponent__Class *klass;
  struct MonitorData *monitor;
};
struct IEnumerator_1_Moon_UI_UIInteractable_ {
  struct IEnumerator_1_Moon_UI_UIInteractable___Class *klass;
  struct MonitorData *monitor;
};
struct LeftMenuManager__Fields {
  struct MonoBehaviour__Fields _;
  struct Button_1 * ButtonA;
  struct Button_1 * ButtonB;
  struct Button_1 * ButtonC;
  struct Button_1 * ButtonD;
  struct Action * ToggleMenuCallback;
};
struct LeftMenuManager {
  struct LeftMenuManager__Class *klass;
  struct MonitorData *monitor;
  struct LeftMenuManager__Fields fields;
};
enum ItemSelectionManager_NavigationMode__Enum : int32_t {
  ItemSelectionManager_NavigationMode__Enum_Simple = 0,
  ItemSelectionManager_NavigationMode__Enum_Cage = 1,
};
struct ItemSelectionManager_NavigationMode__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum ItemSelectionManager_NavigationMode__Enum value;
};
struct ItemSelectionManager__Fields {
  struct UIInteractable__Fields _;
  struct List_1_Moon_UI_ItemSelectionManager_NavigationData_ * m_navigation;
  enum ItemSelectionManager_NavigationMode__Enum m_navigationMode;
  bool m_visualiseNavigation;
  struct List_1_Moon_UI_UIInteractable_ * m_interactables;
  struct UIInteractable * m_current;
  int32_t m_index;
};
struct ItemSelectionManager {
  struct ItemSelectionManager__Class *klass;
  struct MonitorData *monitor;
  struct ItemSelectionManager__Fields fields;
};
struct __declspec(align(8)) List_1_Moon_UI_ItemSelectionManager_NavigationData___Fields {
  struct ItemSelectionManager_NavigationData__Array * _items;
  int32_t _size;
  int32_t _version;
  struct Object * _syncRoot;
};
struct List_1_Moon_UI_ItemSelectionManager_NavigationData_ {
  struct List_1_Moon_UI_ItemSelectionManager_NavigationData___Class *klass;
  struct MonitorData *monitor;
  struct List_1_Moon_UI_ItemSelectionManager_NavigationData___Fields fields;
};
struct __declspec(align(8)) ItemSelectionManager_NavigationData__Fields {
  struct UIComponent * From;
  struct UIComponent * To;
};
struct ItemSelectionManager_NavigationData {
  struct ItemSelectionManager_NavigationData__Class *klass;
  struct MonitorData *monitor;
  struct ItemSelectionManager_NavigationData__Fields fields;
};
struct ItemSelectionManager_NavigationData__Array {
  struct ItemSelectionManager_NavigationData__Array__Class *klass;
  struct MonitorData *monitor;
  struct Il2CppArrayBounds *bounds;
  il2cpp_array_size_t max_length;
  struct ItemSelectionManager_NavigationData * vector[32];
};
struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData_ {
  struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___Class *klass;
  struct MonitorData *monitor;
};
struct RightMenuManager__Fields {
  struct MonoBehaviour__Fields _;
  struct Button_1 * ButtonA;
  struct Button_1 * ButtonB;
  struct Button_1 * ButtonC;
  struct Button_1 * ButtonD;
  struct Action * ToggleMenuCallback;
  struct Action * SwitchWindowCallback;
};
struct RightMenuManager {
  struct RightMenuManager__Class *klass;
  struct MonitorData *monitor;
  struct RightMenuManager__Fields fields;
};
enum TestWindowB_State__Enum : int32_t {
  TestWindowB_State__Enum_UnInitialized = 0,
  TestWindowB_State__Enum_Initialized = 1,
};
struct TestWindowB_State__Enum__Boxed {
  struct Enum__Class *klass;
  struct MonitorData *monitor;
  enum TestWindowB_State__Enum value;
};
struct TestWindowB__Fields {
  struct Window__Fields _;
  struct ItemSelectionManager * ItemSelectionManager;
  struct Button_1 * ButtonA;
  struct Button_1 * ButtonB;
  struct Button_1 * ButtonC;
  struct Button_1 * ButtonD;
  enum TestWindowB_State__Enum CurrentState;
  float m_currentStateTime;
};
struct TestWindowB {
  struct TestWindowB__Class *klass;
  struct MonitorData *monitor;
  struct TestWindowB__Fields fields;
};
struct InputInfo__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InputInfo__StaticFields {
};
struct InputInfo__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputInfo__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputInfo__VTable vtable;
};
struct IEnumerator_1_Moon_UI_InputInfo___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_UI_InputInfo___StaticFields {
};
struct IEnumerator_1_Moon_UI_InputInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_UI_InputInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_UI_InputInfo___VTable vtable;
};
struct List_1_Moon_UI_InputInfo___VTable {
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
struct List_1_Moon_UI_InputInfo___StaticFields {
  struct InputInfo__Array * _emptyArray;
};
struct List_1_Moon_UI_InputInfo___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_UI_InputInfo___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_UI_InputInfo___VTable vtable;
};
struct InputTrigger__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct InputTrigger__StaticFields {
};
struct InputTrigger__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct InputTrigger__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct InputTrigger__VTable vtable;
};
struct IUIComponent__VTable {
  VirtualInvokeData get_RectTransform;
  VirtualInvokeData get_Active;
  VirtualInvokeData set_Active;
};
struct IUIComponent__StaticFields {
};
struct IUIComponent__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IUIComponent__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IUIComponent__VTable vtable;
};
struct UIContext__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct UIContext__StaticFields {
};
struct UIContext__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UIContext__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UIContext__VTable vtable;
};
struct Action_1_Moon_UI_UIContext___VTable {
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
struct Action_1_Moon_UI_UIContext___StaticFields {
};
struct Action_1_Moon_UI_UIContext___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Action_1_Moon_UI_UIContext___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Action_1_Moon_UI_UIContext___VTable vtable;
};
struct Button_1__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_RectTransform;
  VirtualInvokeData get_Active;
  VirtualInvokeData set_Active;
  VirtualInvokeData Awake;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData OnUserInput;
  VirtualInvokeData get_Selected;
  VirtualInvokeData set_Selected;
  VirtualInvokeData OnUserInput_1;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnDeselected;
};
struct Button_1__StaticFields {
};
struct Button_1__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Button_1__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Button_1__VTable vtable;
};
struct UIInteractable__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_RectTransform;
  VirtualInvokeData get_Active;
  VirtualInvokeData set_Active;
  VirtualInvokeData Awake;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData OnUserInput;
  VirtualInvokeData get_Selected;
  VirtualInvokeData set_Selected;
  VirtualInvokeData __unknown;
  VirtualInvokeData __unknown_1;
  VirtualInvokeData __unknown_2;
};
struct UIInteractable__StaticFields {
};
struct UIInteractable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct UIInteractable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct UIInteractable__VTable vtable;
};
struct IEnumerator_1_Moon_UI_UIInteractable___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_UI_UIInteractable___StaticFields {
};
struct IEnumerator_1_Moon_UI_UIInteractable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_UI_UIInteractable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_UI_UIInteractable___VTable vtable;
};
struct List_1_Moon_UI_UIInteractable___VTable {
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
struct List_1_Moon_UI_UIInteractable___StaticFields {
  struct UIInteractable__Array * _emptyArray;
};
struct List_1_Moon_UI_UIInteractable___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_UI_UIInteractable___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_UI_UIInteractable___VTable vtable;
};
struct Window__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_RectTransform;
  VirtualInvokeData get_Active;
  VirtualInvokeData set_Active;
  VirtualInvokeData Awake;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
};
struct Window__StaticFields {
};
struct Window__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Window__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Window__VTable vtable;
};
struct LeftMenuManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeftMenuManager__StaticFields {
};
struct LeftMenuManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftMenuManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftMenuManager__VTable vtable;
};
struct ItemSelectionManager_NavigationData__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct ItemSelectionManager_NavigationData__StaticFields {
};
struct ItemSelectionManager_NavigationData__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ItemSelectionManager_NavigationData__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ItemSelectionManager_NavigationData__VTable vtable;
};
struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___VTable {
  VirtualInvokeData get_Current;
};
struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___StaticFields {
};
struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___VTable vtable;
};
struct List_1_Moon_UI_ItemSelectionManager_NavigationData___VTable {
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
struct List_1_Moon_UI_ItemSelectionManager_NavigationData___StaticFields {
  struct ItemSelectionManager_NavigationData__Array * _emptyArray;
};
struct List_1_Moon_UI_ItemSelectionManager_NavigationData___Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct List_1_Moon_UI_ItemSelectionManager_NavigationData___StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct List_1_Moon_UI_ItemSelectionManager_NavigationData___VTable vtable;
};
struct ItemSelectionManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_RectTransform;
  VirtualInvokeData get_Active;
  VirtualInvokeData set_Active;
  VirtualInvokeData Awake;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData OnUserInput;
  VirtualInvokeData get_Selected;
  VirtualInvokeData set_Selected;
  VirtualInvokeData OnUserInput_1;
  VirtualInvokeData OnSelected;
  VirtualInvokeData OnDeselected;
};
struct ItemSelectionManager__StaticFields {
};
struct ItemSelectionManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct ItemSelectionManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct ItemSelectionManager__VTable vtable;
};
struct RightMenuManager__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RightMenuManager__StaticFields {
};
struct RightMenuManager__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RightMenuManager__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RightMenuManager__VTable vtable;
};
struct TestWindow__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_RectTransform;
  VirtualInvokeData get_Active;
  VirtualInvokeData set_Active;
  VirtualInvokeData Awake;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
};
struct TestWindow__StaticFields {
};
struct TestWindow__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestWindow__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestWindow__VTable vtable;
};
struct TestWindowB__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
  VirtualInvokeData get_RectTransform;
  VirtualInvokeData get_Active;
  VirtualInvokeData set_Active;
  VirtualInvokeData Awake;
  VirtualInvokeData OnActivated;
  VirtualInvokeData OnDeactivated;
  VirtualInvokeData Show;
  VirtualInvokeData Hide;
};
struct TestWindowB__StaticFields {
};
struct TestWindowB__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestWindowB__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestWindowB__VTable vtable;
};
struct TestWindowsController__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct TestWindowsController__StaticFields {
  struct TestWindowsController * Instance;
};
struct TestWindowsController__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct TestWindowsController__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct TestWindowsController__VTable vtable;
};

struct IAlignable {
  struct IAlignable__Class *klass;
  struct MonitorData *monitor;
};
struct IAlignable__VTable {
  VirtualInvokeData GetRealTextBoxLocalRect;
};
struct IAlignable__StaticFields {
};
struct IAlignable__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct IAlignable__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct IAlignable__VTable vtable;
};

struct Vignette__Fields {
  struct MonoBehaviour__Fields _;
  struct LegacyAnimator * SeinHurt;
};
struct Vignette {
  struct Vignette__Class *klass;
  struct MonitorData *monitor;
  struct Vignette__Fields fields;
};
struct Vignette__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct Vignette__StaticFields {
};
struct Vignette__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct Vignette__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct Vignette__VTable vtable;
};

struct WatchCutsceneAction__Fields {
  struct ActionMethod__Fields _;
};
struct WatchCutsceneAction {
  struct WatchCutsceneAction__Class *klass;
  struct MonitorData *monitor;
  struct WatchCutsceneAction__Fields fields;
};
struct WatchCutsceneAction__VTable {
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
struct WatchCutsceneAction__StaticFields {
};
struct WatchCutsceneAction__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct WatchCutsceneAction__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct WatchCutsceneAction__VTable vtable;
};

struct LeftMenuManager_c {
  struct LeftMenuManager_c__Class *klass;
  struct MonitorData *monitor;
};
struct LeftMenuManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct LeftMenuManager_c__StaticFields {
  struct LeftMenuManager_c * __9;
  struct Action * __9__11_0;
};
struct LeftMenuManager_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct LeftMenuManager_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct LeftMenuManager_c__VTable vtable;
};

struct RightMenuManager_c {
  struct RightMenuManager_c__Class *klass;
  struct MonitorData *monitor;
};
struct RightMenuManager_c__VTable {
  VirtualInvokeData Equals;
  VirtualInvokeData Finalize;
  VirtualInvokeData GetHashCode;
  VirtualInvokeData ToString;
};
struct RightMenuManager_c__StaticFields {
  struct RightMenuManager_c * __9;
  struct Action * __9__12_0;
  struct Action * __9__12_1;
};
struct RightMenuManager_c__Class {
  struct Il2CppClass_0 _0;
  Il2CppRuntimeInterfaceOffsetPair *interfaceOffsets;
  struct RightMenuManager_c__StaticFields *static_fields;
  const Il2CppRGCTXData *rgctx_data;
  struct Il2CppClass_1 _1;
  struct RightMenuManager_c__VTable vtable;
};

struct UWPIdentityUI__Fields {
  struct MonoBehaviour__Fields _;
  struct MessageBox * Username;
  struct GameObject * Group;
  struct String * m_username;
};
struct UWPIdentityUI {
  struct UWPIdentityUI__Class *klass;
  struct MonitorData *monitor;
  struct UWPIdentityUI__Fields fields;
};}