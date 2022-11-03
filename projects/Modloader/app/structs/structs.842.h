namespace app {
    struct InstantiateUtility_InstantiationInfo {
        int32_t InstanceID;
        struct String* Name;
        float TimeSpent;
        bool Pooled;
        bool New;
        int32_t FrameNumber;
    };

    struct InstantiateUtility_InstantiationInfo__Boxed {
        struct InstantiateUtility_InstantiationInfo__Class* klass;
        MonitorData* monitor;
        struct InstantiateUtility_InstantiationInfo fields;
    };

    struct InstantiateUtility_InstantiationInfo__Array {
        struct InstantiateUtility_InstantiationInfo__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct InstantiateUtility_InstantiationInfo vector[32];
    };

    struct IEnumerator_1_InstantiateUtility_InstantiationInfo_ {
        struct IEnumerator_1_InstantiateUtility_InstantiationInfo___Class* klass;
        MonitorData* monitor;
    };

    enum class HierarchyDebugMenu_CompareType__Enum : int32_t {
        Name = 0x00000000,
        CPU = 0x00000001,
        GPU = 0x00000002,
        Count = 0x00000003,
    };

    struct HierarchyDebugMenu_CompareType__Enum__Boxed {
        struct HierarchyDebugMenu_CompareType__Enum__Class* klass;
        MonitorData* monitor;
        HierarchyDebugMenu_CompareType__Enum value;
    };

    struct __declspec(align(8)) HierarchyDebugMenu_GameObjectItem__Fields {
        HierarchyDebugMenu_CompareType__Enum m_currentSort;

        struct GameObject* Target;
        struct String* Label;
        bool MoonReady;
        struct String* MoonHidden;
        struct String* MoonHidden2;
        struct String* MoonHidden3;
        struct List_1_HierarchyDebugMenu_GameObjectItem_* Children;
        bool Expanded;
        struct List_1_UnityEngine_Component_* Components;
        struct Vector3 TargetPosition;
        struct Vector3 TargetLocalPosition;
        struct Vector3 TargetRotation;
        struct Vector3 TargetScale;
        struct HierarchySuspensionTest_PerfTestResult* PerfData;
    };

    struct HierarchyDebugMenu_GameObjectItem {
        struct HierarchyDebugMenu_GameObjectItem__Class* klass;
        MonitorData* monitor;
        struct HierarchyDebugMenu_GameObjectItem__Fields fields;
    };

    struct __declspec(align(8)) List_1_HierarchyDebugMenu_GameObjectItem___Fields {
        struct HierarchyDebugMenu_GameObjectItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_HierarchyDebugMenu_GameObjectItem_ {
        struct List_1_HierarchyDebugMenu_GameObjectItem___Class* klass;
        MonitorData* monitor;
        struct List_1_HierarchyDebugMenu_GameObjectItem___Fields fields;
    };

    struct HierarchyDebugMenu_GameObjectItem__Array {
        struct HierarchyDebugMenu_GameObjectItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HierarchyDebugMenu_GameObjectItem* vector[32];
    };

    struct IEnumerator_1_HierarchyDebugMenu_GameObjectItem_ {
        struct IEnumerator_1_HierarchyDebugMenu_GameObjectItem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) HierarchySuspensionTest_PerfTestResult__Fields {
        double CPUTime;
        double GPUTime;
    };

    struct HierarchySuspensionTest_PerfTestResult {
        struct HierarchySuspensionTest_PerfTestResult__Class* klass;
        MonitorData* monitor;
        struct HierarchySuspensionTest_PerfTestResult__Fields fields;
    };

    struct List_1_IDebugMenuItem___Array__VTable {
    };

    struct List_1_IDebugMenuItem___Array__StaticFields {
    };

    struct List_1_IDebugMenuItem___Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_IDebugMenuItem___Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_IDebugMenuItem___Array__VTable vtable;
    };

    struct IEnumerator_1_List_1_IDebugMenuItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_List_1_IDebugMenuItem___StaticFields {
    };

    struct IEnumerator_1_List_1_IDebugMenuItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_List_1_IDebugMenuItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_List_1_IDebugMenuItem___VTable vtable;
    };

    struct List_1_List_1_IDebugMenuItem___VTable {
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

    struct List_1_List_1_IDebugMenuItem___StaticFields {
        struct List_1_IDebugMenuItem___Array* _emptyArray;
    };

    struct List_1_List_1_IDebugMenuItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_List_1_IDebugMenuItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_List_1_IDebugMenuItem___VTable vtable;
    };

    struct InstantiateUtility_InstantiationInfo__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct InstantiateUtility_InstantiationInfo__StaticFields {
    };

    struct InstantiateUtility_InstantiationInfo__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InstantiateUtility_InstantiationInfo__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InstantiateUtility_InstantiationInfo__VTable vtable;
    };

    struct InstantiateUtility_InstantiationInfo__Array__VTable {
    };

    struct InstantiateUtility_InstantiationInfo__Array__StaticFields {
    };

    struct InstantiateUtility_InstantiationInfo__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct InstantiateUtility_InstantiationInfo__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct InstantiateUtility_InstantiationInfo__Array__VTable vtable;
    };

    struct IEnumerator_1_InstantiateUtility_InstantiationInfo___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_InstantiateUtility_InstantiationInfo___StaticFields {
    };

    struct IEnumerator_1_InstantiateUtility_InstantiationInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_InstantiateUtility_InstantiationInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_InstantiateUtility_InstantiationInfo___VTable vtable;
    };

    struct List_1_InstantiateUtility_InstantiationInfo___VTable {
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

    struct List_1_InstantiateUtility_InstantiationInfo___StaticFields {
        struct InstantiateUtility_InstantiationInfo__Array* _emptyArray;
    };

    struct List_1_InstantiateUtility_InstantiationInfo___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_InstantiateUtility_InstantiationInfo___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_InstantiateUtility_InstantiationInfo___VTable vtable;
    };

    struct HierarchyDebugMenu_CompareType__Enum__VTable {
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

    struct HierarchyDebugMenu_CompareType__Enum__StaticFields {
    };

    struct HierarchyDebugMenu_CompareType__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyDebugMenu_CompareType__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyDebugMenu_CompareType__Enum__VTable vtable;
    };

    struct HierarchyDebugMenu_GameObjectItem__Array__VTable {
    };

    struct HierarchyDebugMenu_GameObjectItem__Array__StaticFields {
    };

    struct HierarchyDebugMenu_GameObjectItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyDebugMenu_GameObjectItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyDebugMenu_GameObjectItem__Array__VTable vtable;
    };

    struct IEnumerator_1_HierarchyDebugMenu_GameObjectItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_HierarchyDebugMenu_GameObjectItem___StaticFields {
    };

    struct IEnumerator_1_HierarchyDebugMenu_GameObjectItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_HierarchyDebugMenu_GameObjectItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_HierarchyDebugMenu_GameObjectItem___VTable vtable;
    };

    struct List_1_HierarchyDebugMenu_GameObjectItem___VTable {
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

    struct List_1_HierarchyDebugMenu_GameObjectItem___StaticFields {
        struct HierarchyDebugMenu_GameObjectItem__Array* _emptyArray;
    };

    struct List_1_HierarchyDebugMenu_GameObjectItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_HierarchyDebugMenu_GameObjectItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_HierarchyDebugMenu_GameObjectItem___VTable vtable;
    };

    struct HierarchySuspensionTest_PerfTestResult__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchySuspensionTest_PerfTestResult__StaticFields {
    };

    struct HierarchySuspensionTest_PerfTestResult__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchySuspensionTest_PerfTestResult__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchySuspensionTest_PerfTestResult__VTable vtable;
    };

    struct HierarchyDebugMenu_GameObjectItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HierarchyDebugMenu_GameObjectItem__StaticFields {
    };

    struct HierarchyDebugMenu_GameObjectItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyDebugMenu_GameObjectItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyDebugMenu_GameObjectItem__VTable vtable;
    };

    struct HierarchyDebugMenu__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData get_Active;
        VirtualInvokeData set_Active;
        VirtualInvokeData get_Items;
        VirtualInvokeData set_Items;
        VirtualInvokeData AddMenuItem;
        VirtualInvokeData Clear;
        VirtualInvokeData GoBackMenu;
        VirtualInvokeData Reset;
        VirtualInvokeData get_Path;
        VirtualInvokeData set_Path;
        VirtualInvokeData get_Text;
        VirtualInvokeData set_Text;
        VirtualInvokeData get_HelpText;
        VirtualInvokeData set_HelpText;
        VirtualInvokeData Draw;
        VirtualInvokeData OnSelected;
        VirtualInvokeData OnSelectedUpdate;
        VirtualInvokeData OnSelectedFixedUpdate;
        VirtualInvokeData get_DynamicText;
    };

    struct HierarchyDebugMenu__StaticFields {
        struct GUIStyle* SelectedStyle;
        struct GUIStyle* Style;
        struct GUIStyle* PressedStyle;
        struct GUIStyle* SuspendedStyle;
        struct GUIStyle* DebugMenuStyle;
        struct GUIStyle* StyleEnabled;
        struct GUIStyle* StyleDisabled;
        struct GUIStyle* TimelineStyleDisabled;
        struct GUIStyle* TimelineStyleEnabled;
    };

    struct HierarchyDebugMenu__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HierarchyDebugMenu__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HierarchyDebugMenu__VTable vtable;
    };

    struct DebugMenu__Fields {
        struct SaveSerialize__Fields _;
        struct List_1_WorldEvents_* m_worldEvents;
        struct List_1_SceneMetaData_* ImportantLevels;
        struct List_1_System_String_* ImportantLevelsNames;
        struct GUISkin* Skin;
        float VerticalSpace;
        float HorizontalSpace;
        struct Vector2 m_cursorIndex;
        struct MessageProvider* ReplayGotResetMessageProvider;
        int32_t BuildID;
        struct String* EngineVersion;
        float MenuTopLeftX;
        float MenuTopLeftY;
        float MenuWidth;
        float MenuHeight;
        struct Vector2 _HelpTextPosition_k__BackingField;
        struct List_1_System_Int32_* ColumnsWidth;
        struct List_1_GoToSequenceData_* GumoSequence;
        struct List_1_AbilityType_* AbilitiesToEnableViaDebugMenu;
        struct List_1_EquipmentType_* WeaponsToEnableViaDebugMenu;
        struct List_1_EquipmentType_* SpellsToEnableViaDebugMenu;
        int64_t value;
        struct List_1_IDebugMenuPage_* m_pages;
        struct List_1_DebugMenu_ExternalItem_* m_externalItems;
        struct List_1_IDebugMenuPage_* m_debugPages;
        struct List_1_IDebugMenuPage_* m_searchPages;
        struct List_1_List_1_IDebugMenuItem_* m_tempItems;
        struct Dictionary_2_System_String_IDebugMenuPage_* m_pagesDict;
        struct List_1_IDebugMenuItem_* _AllItems_k__BackingField;
        bool m_lastDebugMenuActiveState;
        struct Vector2 m_lastIndex;
        struct Vector2 m_lastGumoSequencesIndex;
        float m_holdDelayDuration;
        float m_holdRemainingTime;
        struct IDebugMenuPage* m_currentPage;
        int32_t m_currentPageIndex;
        struct UberStateVisualizationMenu* m_uberStateVisualizationMenu;
        struct HierarchyDebugMenu* m_hierarchyDebugMenu;
        struct VolatileDebugMenuLog* m_volatileDebugMenuLog;
        bool m_searchMode;
        bool m_exitSearch;
        struct HierarchySuspensionTest* m_suspentionTest;
        bool m_requestToggleDebugMenuOff;
    };

    struct DebugMenu {
        struct DebugMenu__Class* klass;
        MonitorData* monitor;
        struct DebugMenu__Fields fields;
    };

    struct __declspec(align(8)) List_1_WorldEvents___Fields {
        struct WorldEvents__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_WorldEvents_ {
        struct List_1_WorldEvents___Class* klass;
        MonitorData* monitor;
        struct List_1_WorldEvents___Fields fields;
    };

    struct WorldEvents__Array {
        struct WorldEvents__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct WorldEvents* vector[32];
    };

    struct IEnumerator_1_WorldEvents_ {
        struct IEnumerator_1_WorldEvents___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_GoToSequenceData___Fields {
        struct GoToSequenceData__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_GoToSequenceData_ {
        struct List_1_GoToSequenceData___Class* klass;
        MonitorData* monitor;
        struct List_1_GoToSequenceData___Fields fields;
    };

    struct __declspec(align(8)) GoToSequenceData__Fields {
        struct String* SequenceName;
        struct String* HelpText;
        struct SceneMetaData* Scene;
        struct List_1_System_String_* TriggerStrings;
        struct String* SceneName;
    };

    struct GoToSequenceData {
        struct GoToSequenceData__Class* klass;
        MonitorData* monitor;
        struct GoToSequenceData__Fields fields;
    };

    struct GoToSequenceData__Array {
        struct GoToSequenceData__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct GoToSequenceData* vector[32];
    };

    struct IEnumerator_1_GoToSequenceData_ {
        struct IEnumerator_1_GoToSequenceData___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_IDebugMenuPage___Fields {
        struct IDebugMenuPage__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IDebugMenuPage_ {
        struct List_1_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
        struct List_1_IDebugMenuPage___Fields fields;
    };

    struct IDebugMenuPage {
        struct IDebugMenuPage__Class* klass;
        MonitorData* monitor;
    };

    struct IDebugMenuPage__Array {
        struct IDebugMenuPage__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IDebugMenuPage* vector[32];
    };

    struct IEnumerator_1_IDebugMenuPage_ {
        struct IEnumerator_1_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_IDebugMenuPageHandler___Fields {
        struct IDebugMenuPageHandler__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_IDebugMenuPageHandler_ {
        struct List_1_IDebugMenuPageHandler___Class* klass;
        MonitorData* monitor;
        struct List_1_IDebugMenuPageHandler___Fields fields;
    };

    struct IDebugMenuPageHandler {
        struct IDebugMenuPageHandler__Class* klass;
        MonitorData* monitor;
    };

    struct IDebugMenuPageHandler__Array {
        struct IDebugMenuPageHandler__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct IDebugMenuPageHandler* vector[32];
    };

    struct IEnumerator_1_IDebugMenuPageHandler_ {
        struct IEnumerator_1_IDebugMenuPageHandler___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) List_1_DebugMenu_ExternalItem___Fields {
        struct DebugMenu_ExternalItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_DebugMenu_ExternalItem_ {
        struct List_1_DebugMenu_ExternalItem___Class* klass;
        MonitorData* monitor;
        struct List_1_DebugMenu_ExternalItem___Fields fields;
    };

    struct DebugMenu_ExternalItem {
        struct IDebugMenuExternalItem* External;
        struct IDebugMenuItem* Item;
    };

    struct DebugMenu_ExternalItem__Boxed {
        struct DebugMenu_ExternalItem__Class* klass;
        MonitorData* monitor;
        struct DebugMenu_ExternalItem fields;
    };

    struct IDebugMenuExternalItem {
        struct IDebugMenuExternalItem__Class* klass;
        MonitorData* monitor;
    };

    struct DebugMenu_ExternalItem__Array {
        struct DebugMenu_ExternalItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct DebugMenu_ExternalItem vector[32];
    };

    struct IEnumerator_1_DebugMenu_ExternalItem_ {
        struct IEnumerator_1_DebugMenu_ExternalItem___Class* klass;
        MonitorData* monitor;
    };

    struct __declspec(align(8)) Dictionary_2_System_String_IDebugMenuPage___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_String_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IDebugMenuPage_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IDebugMenuPage_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_String_IDebugMenuPage_ {
        struct Dictionary_2_System_String_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_String_IDebugMenuPage___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage_ {
        int32_t hashCode;
        int32_t next;
        struct String* key;
        struct IDebugMenuPage* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_String_IDebugMenuPage_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_String_IDebugMenuPage___Fields {
        struct Dictionary_2_System_String_IDebugMenuPage_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IDebugMenuPage_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_String_IDebugMenuPage___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_String_IDebugMenuPage___Fields {
        struct Dictionary_2_System_String_IDebugMenuPage_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IDebugMenuPage_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_String_IDebugMenuPage___Fields fields;
    };

    struct ICollection_1_IDebugMenuPage_ {
        struct ICollection_1_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_String_IDebugMenuPage_ {
        struct String* key;
        struct IDebugMenuPage* value;
    };

    struct KeyValuePair_2_System_String_IDebugMenuPage___Boxed {
        struct KeyValuePair_2_System_String_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_String_IDebugMenuPage_ fields;
    };

    struct KeyValuePair_2_System_String_IDebugMenuPage___Array {
        struct KeyValuePair_2_System_String_IDebugMenuPage___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_String_IDebugMenuPage_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_String_IDebugMenuPage_ {
        struct IEnumerator_1_KeyValuePair_2_System_String_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_IDebugMenuPage_ {
        struct IEnumerable_1_IDebugMenuPage___Class* klass;
        MonitorData* monitor;
    };

    struct UberStateVisualizationMenu__Fields {
        struct MonoBehaviour__Fields _;
        bool _Active_k__BackingField;
        struct List_1_List_1_IDebugMenuItem_* _Items_k__BackingField;
        struct String* _Path_k__BackingField;
        struct String* _Text_k__BackingField;
        struct String* _HelpText_k__BackingField;
        struct Func_1_String_* _DynamicText_k__BackingField;
        struct IUberStateVisualizationView* view;
    };

    struct UberStateVisualizationMenu {
        struct UberStateVisualizationMenu__Class* klass;
        MonitorData* monitor;
        struct UberStateVisualizationMenu__Fields fields;
    };

    struct IUberStateVisualizationView {
        struct IUberStateVisualizationView__Class* klass;
        MonitorData* monitor;
    };

    struct VolatileDebugMenuLog__Fields {
        struct MonoBehaviour__Fields _;
        struct String* _Path_k__BackingField;
        struct String* _Text_k__BackingField;
        struct String* _HelpText_k__BackingField;
        struct Func_1_String_* _DynamicText_k__BackingField;
        bool _Active_k__BackingField;
        struct List_1_List_1_IDebugMenuItem_* _Items_k__BackingField;
        struct GUISkin* Skin;
        float m_holdSpeed;
        float m_holdAccumulation;
        float m_holdDelayDuration;
        float m_holdRemainingTime;
        int32_t m_selectionIndex;
        int32_t m_maxIndex;
    };

    struct VolatileDebugMenuLog {
        struct VolatileDebugMenuLog__Class* klass;
        MonitorData* monitor;
        struct VolatileDebugMenuLog__Fields fields;
    };

    enum class HierarchySuspensionTest_State__Enum : int32_t {
        Idle = 0x00000000,
        MeasureBaseline = 0x00000001,
        Prepare = 0x00000002,
        Process = 0x00000003,
        Post = 0x00000004,
    };

    struct HierarchySuspensionTest_State__Enum__Boxed {
        struct HierarchySuspensionTest_State__Enum__Class* klass;
        MonitorData* monitor;
        HierarchySuspensionTest_State__Enum value;
    };

    struct __declspec(align(8)) HierarchySuspensionTest__Fields {
        HierarchySuspensionTest_State__Enum CurrentState;

        struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_* Results;
        float m_stateCurrentTime;
        struct List_1_HierarchyDebugMenu_GameObjectItem_* m_objectsToScan;
        struct HierarchyDebugMenu_GameObjectItem* m_scanRoot;
        struct HierarchyDebugMenu_GameObjectItem* m_currentItem;
        int32_t m_microProfilerStartFrameIndex;
        int32_t m_microProfilerEndFrameIndex;
        struct HierarchySuspensionTest_PerfTestResult* m_baselinePerf;
        bool m_running;
        int32_t m_originalVSyncValue;
        float m_originalDynamicResScalingValue;
    };

    struct HierarchySuspensionTest {
        struct HierarchySuspensionTest__Class* klass;
        MonitorData* monitor;
        struct HierarchySuspensionTest__Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Fields {
        struct Int32__Array* buckets;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult___Array* entries;
        int32_t count;
        int32_t version;
        int32_t freeList;
        int32_t freeCount;
        struct IEqualityComparer_1_System_Int32_* comparer;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_HierarchySuspensionTest_PerfTestResult_* keys;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_HierarchySuspensionTest_PerfTestResult_* values;
        struct Object* _syncRoot;
    };

    struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ {
        struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Fields fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult_ {
        int32_t hashCode;
        int32_t next;
        int32_t key;
        struct HierarchySuspensionTest_PerfTestResult* value;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult___Boxed {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult_ fields;
    };

    struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult___Array {
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct Dictionary_2_TKey_TValue_Entry_System_Int32_HierarchySuspensionTest_PerfTestResult_ vector[32];
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_KeyCollection_System_Int32_HierarchySuspensionTest_PerfTestResult___Fields {
        struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_HierarchySuspensionTest_PerfTestResult_ {
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_KeyCollection_System_Int32_HierarchySuspensionTest_PerfTestResult___Fields fields;
    };

    struct __declspec(align(8)) Dictionary_2_TKey_TValue_ValueCollection_System_Int32_HierarchySuspensionTest_PerfTestResult___Fields {
        struct Dictionary_2_System_Int32_HierarchySuspensionTest_PerfTestResult_* dictionary;
    };

    struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_HierarchySuspensionTest_PerfTestResult_ {
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
        struct Dictionary_2_TKey_TValue_ValueCollection_System_Int32_HierarchySuspensionTest_PerfTestResult___Fields fields;
    };

    struct HierarchySuspensionTest_PerfTestResult__Array {
        struct HierarchySuspensionTest_PerfTestResult__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct HierarchySuspensionTest_PerfTestResult* vector[32];
    };

    struct IEnumerator_1_HierarchySuspensionTest_PerfTestResult_ {
        struct IEnumerator_1_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
    };

    struct ICollection_1_HierarchySuspensionTest_PerfTestResult_ {
        struct ICollection_1_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
    };

    struct KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ {
        int32_t key;
        struct HierarchySuspensionTest_PerfTestResult* value;
    };

    struct KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Boxed {
        struct KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
        struct KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ fields;
    };

    struct KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Array {
        struct KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ vector[32];
    };

    struct IEnumerator_1_KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult_ {
        struct IEnumerator_1_KeyValuePair_2_System_Int32_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
    };

    struct IEnumerable_1_HierarchySuspensionTest_PerfTestResult_ {
        struct IEnumerable_1_HierarchySuspensionTest_PerfTestResult___Class* klass;
        MonitorData* monitor;
    };

    struct WorldEvents__Array__VTable {
    };

    struct WorldEvents__Array__StaticFields {
    };

} // namespace app
