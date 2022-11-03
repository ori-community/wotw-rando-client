namespace app {
    struct SetDemoPlaytimeAction_Mode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetDemoPlaytimeAction_Mode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetDemoPlaytimeAction_Mode__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetDemoPlaytimeAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetDemoPlaytimeAction__VTable vtable;
    };

    enum class GameStateMachine_State__Enum : int32_t {
        Logos = 0x00000000,
        StartScreen = 0x00000001,
        TitleScreen = 0x00000002,
        Game = 0x00000003,
        MenuRace = 0x00000004,
        WatchCutscenes = 0x00000005,
        TrialEnd = 0x00000006,
        Prologue = 0x00000007,
    };

    struct GameStateMachine_State__Enum__Boxed {
        struct GameStateMachine_State__Enum__Class* klass;
        MonitorData* monitor;
        GameStateMachine_State__Enum value;
    };

    struct SetGameModeAction__Fields {
        struct ActionMethod__Fields _;
        GameStateMachine_State__Enum StateToSet;
    };

    struct SetGameModeAction {
        struct SetGameModeAction__Class* klass;
        MonitorData* monitor;
        struct SetGameModeAction__Fields fields;
    };

    struct GameStateMachine_State__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct GameStateMachine_State__Enum__StaticFields {
    };

    struct GameStateMachine_State__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameStateMachine_State__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameStateMachine_State__Enum__VTable vtable;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameModeAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameModeAction__VTable vtable;
    };

    struct SetGameModeToPrologueAction__Fields {
        struct ActionMethod__Fields _;
    };

    struct SetGameModeToPrologueAction {
        struct SetGameModeToPrologueAction__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct SetGameModeToPrologueAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct SetGameModeToPrologueAction__VTable vtable;
    };

    struct TestWindowsController__Fields {
        struct MonoBehaviour__Fields _;
        struct TestWindow* TestWindow;
        struct TestWindowB* TestWindowB;
    };

    struct TestWindowsController {
        struct TestWindowsController__Class* klass;
        MonitorData* monitor;
        struct TestWindowsController__Fields fields;
    };

    struct Window__Fields {
        struct UIComponent__Fields _;
        bool m_willBlockInput;
        bool BlockingInput;
        struct List_1_Moon_UI_UIInteractable_* m_interactables;
        bool m_visible;
    };

    struct Window {
        struct Window__Class* klass;
        MonitorData* monitor;
        struct Window__Fields fields;
    };

    enum class TestWindow_State__Enum : int32_t {
        UnInitialized = 0x00000000,
        LeftMenu = 0x00000001,
        RightMenu = 0x00000002,
    };

    struct TestWindow_State__Enum__Boxed {
        struct TestWindow_State__Enum__Class* klass;
        MonitorData* monitor;
        TestWindow_State__Enum value;
    };

    struct TestWindow__Fields {
        struct Window__Fields _;
        struct LeftMenuManager* LeftMenuManager;
        struct ItemSelectionManager* LeftItemSelectionManager;
        struct RightMenuManager* RightMenuManager;
        struct ItemSelectionManager* RightItemSelectionManager;
        TestWindow_State__Enum CurrentState;

        float m_currentStateTime;
    };

    struct TestWindow {
        struct TestWindow__Class* klass;
        MonitorData* monitor;
        struct TestWindow__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_UI_UIInteractable___Fields {
        struct UIInteractable__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_UI_UIInteractable_ {
        struct List_1_Moon_UI_UIInteractable___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_UI_UIInteractable___Fields fields;
    };

    struct UIInteractable__Fields {
        struct UIComponent__Fields _;
        bool m_selected;
    };

    struct UIInteractable {
        struct UIInteractable__Class* klass;
        MonitorData* monitor;
        struct UIInteractable__Fields fields;
    };

    struct Button_1__Fields {
        struct UIInteractable__Fields _;
        struct LegacyTimelineSequence* NormalSequence;
        struct LegacyTimelineSequence* HightlightSequence;
        struct LegacyTimelineSequence* PressedSequence;
        struct LegacyTimelineSequence* DisabledSequence;
        struct Image_1* m_image;
        struct Text_1* m_text;
        struct InputTrigger* m_inputTrigger;
        struct Action_1_Moon_UI_UIContext_* OnClick;
    };

    struct Button_1 {
        struct Button_1__Class* klass;
        MonitorData* monitor;
        struct Button_1__Fields fields;
    };

    struct __declspec(align(8)) InputTrigger__Fields {
        struct List_1_Moon_UI_InputInfo_* m_triggers;
    };

    struct InputTrigger {
        struct InputTrigger__Class* klass;
        MonitorData* monitor;
        struct InputTrigger__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_UI_InputInfo___Fields {
        struct InputInfo__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_UI_InputInfo_ {
        struct List_1_Moon_UI_InputInfo___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_UI_InputInfo___Fields fields;
    };

    struct __declspec(align(8)) InputInfo__Fields {
        struct String* ActionName;
        Input_Button__Enum Button;
    };

    struct InputInfo {
        struct InputInfo__Class* klass;
        MonitorData* monitor;
        struct InputInfo__Fields fields;
    };

    struct InputInfo__Array {
        struct InputInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct InputInfo* vector[32];
    };

    struct IEnumerator_1_Moon_UI_InputInfo_ {
        struct IEnumerator_1_Moon_UI_InputInfo___Class* klass;
        MonitorData* monitor;
    };

    struct Action_1_Moon_UI_UIContext___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Action_1_Moon_UI_UIContext_ {
        struct Action_1_Moon_UI_UIContext___Class* klass;
        MonitorData* monitor;
        struct Action_1_Moon_UI_UIContext___Fields fields;
    };

    struct __declspec(align(8)) UIContext__Fields {
        struct IUIComponent* m_component;
    };

    struct UIContext {
        struct UIContext__Class* klass;
        MonitorData* monitor;
        struct UIContext__Fields fields;
    };

    struct IUIComponent {
        struct IUIComponent__Class* klass;
        MonitorData* monitor;
    };

    struct UIInteractable__Array {
        struct UIInteractable__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct UIInteractable* vector[32];
    };

    struct IEnumerator_1_Moon_UI_UIInteractable_ {
        struct IEnumerator_1_Moon_UI_UIInteractable___Class* klass;
        MonitorData* monitor;
    };

    struct LeftMenuManager__Fields {
        struct MonoBehaviour__Fields _;
        struct Button_1* ButtonA;
        struct Button_1* ButtonB;
        struct Button_1* ButtonC;
        struct Button_1* ButtonD;
        struct Action* ToggleMenuCallback;
    };

    struct LeftMenuManager {
        struct LeftMenuManager__Class* klass;
        MonitorData* monitor;
        struct LeftMenuManager__Fields fields;
    };

    enum class ItemSelectionManager_NavigationMode__Enum : int32_t {
        Simple = 0x00000000,
        Cage = 0x00000001,
    };

    struct ItemSelectionManager_NavigationMode__Enum__Boxed {
        struct ItemSelectionManager_NavigationMode__Enum__Class* klass;
        MonitorData* monitor;
        ItemSelectionManager_NavigationMode__Enum value;
    };

    struct ItemSelectionManager__Fields {
        struct UIInteractable__Fields _;
        struct List_1_Moon_UI_ItemSelectionManager_NavigationData_* m_navigation;
        ItemSelectionManager_NavigationMode__Enum m_navigationMode;

        bool m_visualiseNavigation;
        struct List_1_Moon_UI_UIInteractable_* m_interactables;
        struct UIInteractable* m_current;
        int32_t m_index;
    };

    struct ItemSelectionManager {
        struct ItemSelectionManager__Class* klass;
        MonitorData* monitor;
        struct ItemSelectionManager__Fields fields;
    };

    struct __declspec(align(8)) List_1_Moon_UI_ItemSelectionManager_NavigationData___Fields {
        struct ItemSelectionManager_NavigationData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_Moon_UI_ItemSelectionManager_NavigationData_ {
        struct List_1_Moon_UI_ItemSelectionManager_NavigationData___Class* klass;
        MonitorData* monitor;
        struct List_1_Moon_UI_ItemSelectionManager_NavigationData___Fields fields;
    };

    struct __declspec(align(8)) ItemSelectionManager_NavigationData__Fields {
        struct UIComponent* From;
        struct UIComponent* To;
    };

    struct ItemSelectionManager_NavigationData {
        struct ItemSelectionManager_NavigationData__Class* klass;
        MonitorData* monitor;
        struct ItemSelectionManager_NavigationData__Fields fields;
    };

    struct ItemSelectionManager_NavigationData__Array {
        struct ItemSelectionManager_NavigationData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct ItemSelectionManager_NavigationData* vector[32];
    };

    struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData_ {
        struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___Class* klass;
        MonitorData* monitor;
    };

    struct RightMenuManager__Fields {
        struct MonoBehaviour__Fields _;
        struct Button_1* ButtonA;
        struct Button_1* ButtonB;
        struct Button_1* ButtonC;
        struct Button_1* ButtonD;
        struct Action* ToggleMenuCallback;
        struct Action* SwitchWindowCallback;
    };

    struct RightMenuManager {
        struct RightMenuManager__Class* klass;
        MonitorData* monitor;
        struct RightMenuManager__Fields fields;
    };

    enum class TestWindowB_State__Enum : int32_t {
        UnInitialized = 0x00000000,
        Initialized = 0x00000001,
    };

    struct TestWindowB_State__Enum__Boxed {
        struct TestWindowB_State__Enum__Class* klass;
        MonitorData* monitor;
        TestWindowB_State__Enum value;
    };

    struct TestWindowB__Fields {
        struct Window__Fields _;
        struct ItemSelectionManager* ItemSelectionManager;
        struct Button_1* ButtonA;
        struct Button_1* ButtonB;
        struct Button_1* ButtonC;
        struct Button_1* ButtonD;
        TestWindowB_State__Enum CurrentState;

        float m_currentStateTime;
    };

    struct TestWindowB {
        struct TestWindowB__Class* klass;
        MonitorData* monitor;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InputInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InputInfo__VTable vtable;
    };

    struct InputInfo__Array__VTable {
    };

    struct InputInfo__Array__StaticFields {
    };

    struct InputInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InputInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InputInfo__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_UI_InputInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_UI_InputInfo___StaticFields {
    };

    struct IEnumerator_1_Moon_UI_InputInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_UI_InputInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct InputInfo__Array* _emptyArray;
    };

    struct List_1_Moon_UI_InputInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_UI_InputInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InputTrigger__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IUIComponent__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UIContext__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Action_1_Moon_UI_UIContext___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Button_1__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UIInteractable__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UIInteractable__VTable vtable;
    };

    struct UIInteractable__Array__VTable {
    };

    struct UIInteractable__Array__StaticFields {
    };

    struct UIInteractable__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct UIInteractable__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct UIInteractable__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_UI_UIInteractable___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_UI_UIInteractable___StaticFields {
    };

    struct IEnumerator_1_Moon_UI_UIInteractable___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_UI_UIInteractable___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct UIInteractable__Array* _emptyArray;
    };

    struct List_1_Moon_UI_UIInteractable___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_UI_UIInteractable___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Window__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LeftMenuManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ItemSelectionManager_NavigationData__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ItemSelectionManager_NavigationData__VTable vtable;
    };

    struct ItemSelectionManager_NavigationData__Array__VTable {
    };

    struct ItemSelectionManager_NavigationData__Array__StaticFields {
    };

    struct ItemSelectionManager_NavigationData__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ItemSelectionManager_NavigationData__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ItemSelectionManager_NavigationData__Array__VTable vtable;
    };

    struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___StaticFields {
    };

    struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_Moon_UI_ItemSelectionManager_NavigationData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
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
        struct ItemSelectionManager_NavigationData__Array* _emptyArray;
    };

    struct List_1_Moon_UI_ItemSelectionManager_NavigationData___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_Moon_UI_ItemSelectionManager_NavigationData___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_Moon_UI_ItemSelectionManager_NavigationData___VTable vtable;
    };

    struct ItemSelectionManager_NavigationMode__Enum__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData CompareTo;
        VirtualInvokeData ToString_1;
        VirtualInvokeData GetTypeCode;
        VirtualInvokeData System_IConvertible_ToBoolean;
        VirtualInvokeData System_IConvertible_ToChar;
        VirtualInvokeData System_IConvertible_ToSByte;
        VirtualInvokeData System_IConvertible_ToByte;
        VirtualInvokeData System_IConvertible_ToInt16;
        VirtualInvokeData System_IConvertible_ToUInt16;
        VirtualInvokeData System_IConvertible_ToInt32;
        VirtualInvokeData System_IConvertible_ToUInt32;
        VirtualInvokeData System_IConvertible_ToInt64;
        VirtualInvokeData System_IConvertible_ToUInt64;
        VirtualInvokeData System_IConvertible_ToSingle;
        VirtualInvokeData System_IConvertible_ToDouble;
        VirtualInvokeData System_IConvertible_ToDecimal;
        VirtualInvokeData System_IConvertible_ToDateTime;
        VirtualInvokeData ToString_2;
        VirtualInvokeData System_IConvertible_ToType;
    };

    struct ItemSelectionManager_NavigationMode__Enum__StaticFields {
    };

    struct ItemSelectionManager_NavigationMode__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct ItemSelectionManager_NavigationMode__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct ItemSelectionManager_NavigationMode__Enum__VTable vtable;
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

} // namespace app
