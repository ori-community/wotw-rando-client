namespace app {
    struct GameMapTransitionManager__StaticFields {
        struct GameMapTransitionManager* Instance;
        bool WorldMapEnabled;
    };

    struct GameMapTransitionManager__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameMapTransitionManager__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameMapTransitionManager__VTable vtable;
    };

    struct GameMapUI_HintsSettings {
        struct GameObject* MessagePrefab;
        struct Transform* MessageAnchor;
        float MessageDuration;
    };

    struct GameMapUI_HintsSettings__Boxed {
        struct GameMapUI_HintsSettings__Class* klass;
        MonitorData* monitor;
        struct GameMapUI_HintsSettings fields;
    };

    enum class GameMapUI_WorldMapStates__Enum : int32_t {
        Normal = 0x00000000,
        ShowingObjective = 0x00000001,
        RevealingMap = 0x00000002,
        ShowingPedestals = 0x00000003,
        ShowingQuests = 0x00000004,
        ShowingLegend = 0x00000005,
        PlacingPins = 0x00000006,
        ShowingWorldMap = 0x00000007,
    };

    struct GameMapUI_WorldMapStates__Enum__Boxed {
        struct GameMapUI_WorldMapStates__Enum__Class* klass;
        MonitorData* monitor;
        GameMapUI_WorldMapStates__Enum value;
    };

    struct GameMapUI__Fields {
        struct MenuScreen__Fields _;
        struct MessageBox* AreaText;
        struct MessageBox* AreaCompletion;
        struct LegacyTimelineSequence* AreaCompletionIcon;
        struct ConditionUberState* DisplayShardState;
        struct ConditionUberState* DisplayLifeCellState;
        struct ConditionUberState* DisplayEnergyCellState;
        struct ConditionUberState* DisplayShardSlotState;
        struct ConditionUberState* DisplayCreepHeartsState;
        struct ConditionUberState* InDanger;
        struct MessageProvider* WarpMessageProvider;
        struct MessageProvider* QuestMessageProvider;
        struct MessageBox* InteractButtonMessage;
        struct MessageBox* InteractButtonDisabledMessage;
        struct MessageBox* WarpButtonMessage;
        struct MessageProvider* InteractDisabledMessageProvider;
        struct MessageProvider* FocusOnOriMessageProvider;
        struct MessageProvider* FocusOnObjectiveMessageProvider;
        struct MessageBox* LeftStickMessageBox;
        struct MessageBox* FilterMessageBox;
        struct GameObject* FilterGlow;
        struct GameMapPins* Pins;
        float TeleportFillObjectOffset;
        struct AreaMapUI* m_areaMap;
        bool m_shouldExitPinMode;
        bool m_showingObjective;
        struct GameMapShowObjective* _ShowObjective_k__BackingField;
        struct GameMapObjectiveIcons* _ObjectiveIcons_k__BackingField;
        struct GameMapSavePedestals* _Pedestals_k__BackingField;
        struct Vector2 m_teleportTarget;
        float TeleportProgress;
        float TeleportTime;
        float ObjectiveTextBumpTime;
        bool _IsSuspended_k__BackingField;
        SuspendableMask__Enum m_suspensionMask;

        struct GameMapUI_HintsSettings HintSettings;
        struct MessageProvider* CantTeleportMessage;
        struct MoonTimeline* FadeInTimeline;
        struct MoonTimeline* FadeOutTimeline;
        struct EventTriggerAnimator* EnableGroupTrigger;
        struct EventTriggerAnimator* DisableGroupTrigger;
        struct EventTriggerAnimator* DisableSelfTrigger;
        bool GoToOriOnOpen;
        bool m_isVisible;
        struct GameObject* BottomAreaMap;
        struct GameObject* BottomTeleporters;
        struct GameObject* BottomPins;
        struct GameObject* BottomQuests;
        struct GameObject* QuestsScreen;
        struct GameObject* FaderObject;
        struct GameObject* PinPlacementCursor;
        struct QuestIconsUI* QuestIcons;
        bool LockInput;
        struct QuestsUI* m_questsUI;
        struct Texture2D* RumorIcon;
        struct Transform* Group;
        struct Vector2 PinCursorPosition;
        struct GameObject* InteractButton;
        struct GameObject* InteractDisabledButton;
        struct GameObject* NormalModeTeleportFillGameObject;
        struct GameObject* WarpModeTeleportFillGameObject;
        MenuTabBackground__Enum Background;

        struct GameObject* m_teleportFillGameObject;
        bool m_leftOriArea;
        bool CanInterrupt;
        bool DisablePinsMode;
        bool ResetFilterOnShow;
        GameMapUI_WorldMapStates__Enum MapState;

        struct List_1_RuntimeWorldMapIcon_* TeleportTargets;
        bool m_shouldRestoreStateAfterEnteringAreaMap;
        GameMapUI_WorldMapStates__Enum m_mapStateBeforeWorldMap;

        struct ForceRefreshAnimatorContext* m_forceRefreshContext;
        struct GameObject* m_teleportTargetHighlight;
        struct GameObject* Highlight;
        struct RuntimeGameWorldArea* m_currentHighlightedArea;
        bool m_enteredSelectionArea;
        bool m_switchedModesThisFrame;
        struct MessageBox* m_currentHint;
    };

    struct GameMapUI {
        struct GameMapUI__Class* klass;
        MonitorData* monitor;
        struct GameMapUI__Fields fields;
    };

    struct GameMapUI_HintsSettings__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameMapUI_HintsSettings__StaticFields {
    };

    struct GameMapUI_HintsSettings__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameMapUI_HintsSettings__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameMapUI_HintsSettings__VTable vtable;
    };

    struct GameMapUI_WorldMapStates__Enum__VTable {
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

    struct GameMapUI_WorldMapStates__Enum__StaticFields {
    };

    struct GameMapUI_WorldMapStates__Enum__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameMapUI_WorldMapStates__Enum__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameMapUI_WorldMapStates__Enum__VTable vtable;
    };

    struct GameMapUI__VTable {
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

    struct GameMapUI__StaticFields {
        struct GameMapUI* Instance;
        bool m_pinsEnabled;
    };

    struct GameMapUI__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameMapUI__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameMapUI__VTable vtable;
    };

    struct GameMapUI_c {
        struct GameMapUI_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_RuntimeQuest_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_RuntimeQuest_Boolean_ {
        struct Func_2_RuntimeQuest_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_RuntimeQuest_Boolean___Fields fields;
    };

    struct Func_2_RuntimeQuest_Boolean___VTable {
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

    struct Func_2_RuntimeQuest_Boolean___StaticFields {
    };

    struct Func_2_RuntimeQuest_Boolean___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct Func_2_RuntimeQuest_Boolean___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct Func_2_RuntimeQuest_Boolean___VTable vtable;
    };

    struct GameMapUI_c__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameMapUI_c__StaticFields {
        struct GameMapUI_c* __9;
        struct Func_2_RuntimeQuest_Boolean_* __9__165_0;
    };

    struct GameMapUI_c__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameMapUI_c__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameMapUI_c__VTable vtable;
    };

    struct __declspec(align(8)) GameMapUI_c_DisplayClass187_0__Fields {
        struct RuntimeWorldMapIcon* runtimeWorldMapIcon;
    };

    struct GameMapUI_c_DisplayClass187_0 {
        struct GameMapUI_c_DisplayClass187_0__Class* klass;
        MonitorData* monitor;
        struct GameMapUI_c_DisplayClass187_0__Fields fields;
    };

    struct GameMapUI_c_DisplayClass187_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameMapUI_c_DisplayClass187_0__StaticFields {
    };

    struct GameMapUI_c_DisplayClass187_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameMapUI_c_DisplayClass187_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameMapUI_c_DisplayClass187_0__VTable vtable;
    };

    struct __declspec(align(8)) GameWorld_c_DisplayClass30_0__Fields {
        struct GameWorldArea* area;
    };

    struct GameWorld_c_DisplayClass30_0 {
        struct GameWorld_c_DisplayClass30_0__Class* klass;
        MonitorData* monitor;
        struct GameWorld_c_DisplayClass30_0__Fields fields;
    };

    struct GameWorld_c_DisplayClass30_0__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct GameWorld_c_DisplayClass30_0__StaticFields {
    };

    struct GameWorld_c_DisplayClass30_0__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct GameWorld_c_DisplayClass30_0__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct GameWorld_c_DisplayClass30_0__VTable vtable;
    };

    struct HasVisitedOrDiscoveredAreaCondition__Fields {
        struct Condition_1__Fields _;
        struct GameWorldArea* Area;
        bool Visited;
        struct RuntimeGameWorldArea* m_area;
    };

    struct HasVisitedOrDiscoveredAreaCondition {
        struct HasVisitedOrDiscoveredAreaCondition__Class* klass;
        MonitorData* monitor;
        struct HasVisitedOrDiscoveredAreaCondition__Fields fields;
    };

    struct HasVisitedOrDiscoveredAreaCondition__VTable {
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

    struct HasVisitedOrDiscoveredAreaCondition__StaticFields {
    };

    struct HasVisitedOrDiscoveredAreaCondition__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HasVisitedOrDiscoveredAreaCondition__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HasVisitedOrDiscoveredAreaCondition__VTable vtable;
    };

    struct HideOrShowOnWorldMap__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 Offset;
    };

    struct HideOrShowOnWorldMap {
        struct HideOrShowOnWorldMap__Class* klass;
        MonitorData* monitor;
        struct HideOrShowOnWorldMap__Fields fields;
    };

    struct HideOrShowOnWorldMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct HideOrShowOnWorldMap__StaticFields {
    };

    struct HideOrShowOnWorldMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct HideOrShowOnWorldMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct HideOrShowOnWorldMap__VTable vtable;
    };

    struct LegacyDiscoverWorldMapAreasAction__Fields {
        struct ActionMethod__Fields _;
        struct ActionMethod* OnClosedAction;
        float FadeDelay;
        float MoveDuration;
        float FadeDuration;
        struct SoundProvider* RevealSound;
        struct Transform* RevealPosition;
    };

    struct LegacyDiscoverWorldMapAreasAction {
        struct LegacyDiscoverWorldMapAreasAction__Class* klass;
        MonitorData* monitor;
        struct LegacyDiscoverWorldMapAreasAction__Fields fields;
    };

    struct LegacyDiscoverWorldMapAreasAction__VTable {
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

    struct LegacyDiscoverWorldMapAreasAction__StaticFields {
    };

    struct LegacyDiscoverWorldMapAreasAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyDiscoverWorldMapAreasAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyDiscoverWorldMapAreasAction__VTable vtable;
    };

    struct __declspec(align(8)) LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct LegacyDiscoverWorldMapAreasAction* __4__this;
        struct Vector2 _playerMapPoition_5__2;
        struct Vector2 _targetMapPosition_5__3;
        struct AreaMapCanvas* _canvas_5__4;
        float _t_5__5;
    };

    struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7 {
        struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class* klass;
        MonitorData* monitor;
        struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Fields fields;
    };

    struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__VTable {
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

    struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__StaticFields {
    };

    struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyDiscoverWorldMapAreasAction_ShowWorldMap_d_7__VTable vtable;
    };

    struct __declspec(align(8)) LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Fields {
        int32_t __1__state;
        struct Object* __2__current;
        struct AreaMapCanvas* canvas;
    };

    struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8 {
        struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Class* klass;
        MonitorData* monitor;
        struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Fields fields;
    };

    struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__VTable {
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

    struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__StaticFields {
    };

    struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct LegacyDiscoverWorldMapAreasAction_ReleaseTexture_d_8__VTable vtable;
    };

    struct MistyWoodsAreaMapCanvas__Fields {
        struct MonoBehaviour__Fields _;
        struct List_1_MistyWoodsAreaMapCanvas_CanvasItem_* Items;
    };

    struct MistyWoodsAreaMapCanvas {
        struct MistyWoodsAreaMapCanvas__Class* klass;
        MonitorData* monitor;
        struct MistyWoodsAreaMapCanvas__Fields fields;
    };

    struct __declspec(align(8)) List_1_MistyWoodsAreaMapCanvas_CanvasItem___Fields {
        struct MistyWoodsAreaMapCanvas_CanvasItem__Array* _items;
        int32_t _size;
        int32_t _version;
        struct Object* _syncRoot;
    };

    struct List_1_MistyWoodsAreaMapCanvas_CanvasItem_ {
        struct List_1_MistyWoodsAreaMapCanvas_CanvasItem___Class* klass;
        MonitorData* monitor;
        struct List_1_MistyWoodsAreaMapCanvas_CanvasItem___Fields fields;
    };

    struct __declspec(align(8)) MistyWoodsAreaMapCanvas_CanvasItem__Fields {
        struct Texture* Texture;
        struct Condition_1* Condition;
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem {
        struct MistyWoodsAreaMapCanvas_CanvasItem__Class* klass;
        MonitorData* monitor;
        struct MistyWoodsAreaMapCanvas_CanvasItem__Fields fields;
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem__Array {
        struct MistyWoodsAreaMapCanvas_CanvasItem__Array__Class* klass;
        MonitorData* monitor;
        Il2CppArrayBounds* bounds;
        il2cpp_array_size_t max_length;
        struct MistyWoodsAreaMapCanvas_CanvasItem* vector[32];
    };

    struct IEnumerator_1_MistyWoodsAreaMapCanvas_CanvasItem_ {
        struct IEnumerator_1_MistyWoodsAreaMapCanvas_CanvasItem___Class* klass;
        MonitorData* monitor;
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem__StaticFields {
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MistyWoodsAreaMapCanvas_CanvasItem__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MistyWoodsAreaMapCanvas_CanvasItem__VTable vtable;
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem__Array__VTable {
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem__Array__StaticFields {
    };

    struct MistyWoodsAreaMapCanvas_CanvasItem__Array__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MistyWoodsAreaMapCanvas_CanvasItem__Array__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MistyWoodsAreaMapCanvas_CanvasItem__Array__VTable vtable;
    };

    struct IEnumerator_1_MistyWoodsAreaMapCanvas_CanvasItem___VTable {
        VirtualInvokeData get_Current;
    };

    struct IEnumerator_1_MistyWoodsAreaMapCanvas_CanvasItem___StaticFields {
    };

    struct IEnumerator_1_MistyWoodsAreaMapCanvas_CanvasItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct IEnumerator_1_MistyWoodsAreaMapCanvas_CanvasItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct IEnumerator_1_MistyWoodsAreaMapCanvas_CanvasItem___VTable vtable;
    };

    struct List_1_MistyWoodsAreaMapCanvas_CanvasItem___VTable {
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

    struct List_1_MistyWoodsAreaMapCanvas_CanvasItem___StaticFields {
        struct MistyWoodsAreaMapCanvas_CanvasItem__Array* _emptyArray;
    };

    struct List_1_MistyWoodsAreaMapCanvas_CanvasItem___Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct List_1_MistyWoodsAreaMapCanvas_CanvasItem___StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct List_1_MistyWoodsAreaMapCanvas_CanvasItem___VTable vtable;
    };

    struct MistyWoodsAreaMapCanvas__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MistyWoodsAreaMapCanvas__StaticFields {
    };

    struct MistyWoodsAreaMapCanvas__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MistyWoodsAreaMapCanvas__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MistyWoodsAreaMapCanvas__VTable vtable;
    };

    struct MoveWorldObjectiveIcon {
        struct MoveWorldObjectiveIcon__Class* klass;
        MonitorData* monitor;
    };

    struct MoveWorldObjectiveIcon__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct MoveWorldObjectiveIcon__StaticFields {
    };

    struct MoveWorldObjectiveIcon__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct MoveWorldObjectiveIcon__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct MoveWorldObjectiveIcon__VTable vtable;
    };

    struct NewObjectiveMessageProvider__Fields {
        struct MessageProvider__Fields _;
        struct MessageProvider* NewObjective;
        struct MessageProvider* m_messageProvider;
    };

    struct NewObjectiveMessageProvider {
        struct NewObjectiveMessageProvider__Class* klass;
        MonitorData* monitor;
        struct NewObjectiveMessageProvider__Fields fields;
    };

    struct NewObjectiveMessageProvider__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData GetAllMessages;
        VirtualInvokeData GetMessages;
    };

    struct NewObjectiveMessageProvider__StaticFields {
    };

    struct NewObjectiveMessageProvider__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NewObjectiveMessageProvider__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NewObjectiveMessageProvider__VTable vtable;
    };

    struct __declspec(align(8)) NewObjectiveMessageProvider_GetMessages_d_3__Fields {
        int32_t __1__state;
        struct MessageDescriptor __2__current;
        int32_t __l__initialThreadId;
        struct NewObjectiveMessageProvider* __4__this;
    };

    struct NewObjectiveMessageProvider_GetMessages_d_3 {
        struct NewObjectiveMessageProvider_GetMessages_d_3__Class* klass;
        MonitorData* monitor;
        struct NewObjectiveMessageProvider_GetMessages_d_3__Fields fields;
    };

    struct NewObjectiveMessageProvider_GetMessages_d_3__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
        VirtualInvokeData System_Collections_Generic_IEnumerable_MessageDescriptor__GetEnumerator;
        VirtualInvokeData System_Collections_IEnumerable_GetEnumerator;
        VirtualInvokeData System_Collections_Generic_IEnumerator_MessageDescriptor__get_Current;
        VirtualInvokeData System_IDisposable_Dispose;
        VirtualInvokeData MoveNext;
        VirtualInvokeData System_Collections_IEnumerator_get_Current;
        VirtualInvokeData System_Collections_IEnumerator_Reset;
    };

    struct NewObjectiveMessageProvider_GetMessages_d_3__StaticFields {
    };

    struct NewObjectiveMessageProvider_GetMessages_d_3__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct NewObjectiveMessageProvider_GetMessages_d_3__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct NewObjectiveMessageProvider_GetMessages_d_3__VTable vtable;
    };

    struct OverworldZone__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector2 Position;
        struct CageStructureTool* Cage;
    };

    struct OverworldZone {
        struct OverworldZone__Class* klass;
        MonitorData* monitor;
        struct OverworldZone__Fields fields;
    };

    struct OverworldZone__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct OverworldZone__StaticFields {
    };

    struct OverworldZone__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct OverworldZone__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct OverworldZone__VTable vtable;
    };

    struct PositionOnWorldMap__Fields {
        struct MonoBehaviour__Fields _;
        struct Vector3 Position;
    };

    struct PositionOnWorldMap {
        struct PositionOnWorldMap__Class* klass;
        MonitorData* monitor;
        struct PositionOnWorldMap__Fields fields;
    };

    struct PositionOnWorldMap__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct PositionOnWorldMap__StaticFields {
    };

    struct PositionOnWorldMap__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct PositionOnWorldMap__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct PositionOnWorldMap__VTable vtable;
    };

    struct RemoveWorldMapIconAction__Fields {
        struct ActionMethod__Fields _;
        struct VisibleOnWorldMap* Target;
    };

    struct RemoveWorldMapIconAction {
        struct RemoveWorldMapIconAction__Class* klass;
        MonitorData* monitor;
        struct RemoveWorldMapIconAction__Fields fields;
    };

    struct RemoveWorldMapIconAction__VTable {
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

    struct RemoveWorldMapIconAction__StaticFields {
    };

    struct RemoveWorldMapIconAction__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RemoveWorldMapIconAction__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RemoveWorldMapIconAction__VTable vtable;
    };

    struct __declspec(align(8)) RepeatInvoker__Fields {
        float m_time;
        float m_duration;
        struct Action* m_method;
    };

    struct RepeatInvoker {
        struct RepeatInvoker__Class* klass;
        MonitorData* monitor;
        struct RepeatInvoker__Fields fields;
    };

    struct RepeatInvoker__VTable {
        VirtualInvokeData Equals;
        VirtualInvokeData Finalize;
        VirtualInvokeData GetHashCode;
        VirtualInvokeData ToString;
    };

    struct RepeatInvoker__StaticFields {
    };

    struct RepeatInvoker__Class {
        Il2CppClass_0 _0;
        Il2CppRuntimeInterfaceOffsetPair* interfaceOffsets;
        struct RepeatInvoker__StaticFields* static_fields;
        const Il2CppRGCTXData* rgctx_data;
        Il2CppClass_1 _1;
        struct RepeatInvoker__VTable vtable;
    };

    struct RuntimeGameWorldArea_c {
        struct RuntimeGameWorldArea_c__Class* klass;
        MonitorData* monitor;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean_ {
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_System_Collections_Generic_KeyValuePair_2_Boolean___Fields fields;
    };

    struct Func_2_Moon_SerializedBooleanUberState_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_Moon_SerializedBooleanUberState_Boolean_ {
        struct Func_2_Moon_SerializedBooleanUberState_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_Moon_SerializedBooleanUberState_Boolean___Fields fields;
    };

    struct Func_2_Moon_SerializedIntUberState_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_Moon_SerializedIntUberState_Boolean_ {
        struct Func_2_Moon_SerializedIntUberState_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_Moon_SerializedIntUberState_Boolean___Fields fields;
    };

    struct Func_2_GameWorldArea_PlayerAbilityInfo_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_GameWorldArea_PlayerAbilityInfo_Boolean_ {
        struct Func_2_GameWorldArea_PlayerAbilityInfo_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_GameWorldArea_PlayerAbilityInfo_Boolean___Fields fields;
    };

    struct Comparison_1_Moon_SerializedBooleanUberState___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Comparison_1_Moon_SerializedBooleanUberState_ {
        struct Comparison_1_Moon_SerializedBooleanUberState___Class* klass;
        MonitorData* monitor;
        struct Comparison_1_Moon_SerializedBooleanUberState___Fields fields;
    };

    struct Func_2_RuntimeWorldMapIcon_Boolean___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Func_2_RuntimeWorldMapIcon_Boolean_ {
        struct Func_2_RuntimeWorldMapIcon_Boolean___Class* klass;
        MonitorData* monitor;
        struct Func_2_RuntimeWorldMapIcon_Boolean___Fields fields;
    };

    struct Comparison_1_RuntimeWorldMapIcon___Fields {
        struct MulticastDelegate__Fields _;
    };

    struct Comparison_1_RuntimeWorldMapIcon_ {
        struct Comparison_1_RuntimeWorldMapIcon___Class* klass;
        MonitorData* monitor;
        struct Comparison_1_RuntimeWorldMapIcon___Fields fields;
    };

} // namespace app
