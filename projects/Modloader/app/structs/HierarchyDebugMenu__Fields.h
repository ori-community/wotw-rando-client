#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyDebugMenu__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyDebugMenu__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_HierarchyDebugMenu__Fields_DEFINED
struct List_1_List_1_IDebugMenuItem_;
struct Dictionary_2_System_Int32_System_Boolean_;
struct List_1_InstantiateUtility_InstantiationInfo_;
struct String;
struct GameObject;
struct HierarchyDebugMenu_GameObjectItem;
struct Func_1_String_;
struct GUISkin;
struct List_1_HierarchyDebugMenu_GameObjectItem_;
struct HierarchyDebugMenu__Fields {
    struct MonoBehaviour__Fields _;
    struct List_1_List_1_IDebugMenuItem_* _Items_k__BackingField;
    struct Rect m_menuRect;
    float m_holdDelayDuration;
    float m_holdRemainingTime;
    struct Dictionary_2_System_Int32_System_Boolean_* m_expandedStateCache;
    int32_t m_lastSelected;
    int32_t m_lastSelectionIndex;
    struct List_1_InstantiateUtility_InstantiationInfo_* m_instantiationData;
    struct String* _Path_k__BackingField;
    struct String* _Text_k__BackingField;
    struct String* _HelpText_k__BackingField;
    struct Rect m_fullScreenRect;
    struct GameObject* m_poolsGroup;
    struct GameObject* m_sceneGroup;
    int32_t m_frameCount;
    bool m_usingSteppingTool;
    float m_startHoldTime;
    bool m_rightStickTilted;
    bool m_rightStickHorizontalTilted;
    int32_t m_instantiationSelectionIndex;
    struct HierarchyDebugMenu_GameObjectItem* m_objectToPing;
    int32_t m_pingIndex;
    bool m_grabObject;
    struct Func_1_String_* _DynamicText_k__BackingField;
    float m_holdSpeed;
    float m_holdAccumulation;
    struct GUISkin* Skin;
    int32_t ShowAboveCount;
    int32_t ShowBelowCount;
    struct List_1_HierarchyDebugMenu_GameObjectItem_* m_items;
    int32_t m_selectionIndex;
    int32_t m_componentSelectionIndex;
    int32_t m_maxIndex;
    struct HierarchyDebugMenu_GameObjectItem* m_selected;
    bool m_active;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu__Fields_FWDDECL)
#define IL2CPP_STRUCT_HierarchyDebugMenu__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_Int32_System_Boolean_.h>
#include <Modloader/app/structs/Func_1_String_.h>
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HierarchyDebugMenu_GameObjectItem.h>
#include <Modloader/app/structs/List_1_HierarchyDebugMenu_GameObjectItem_.h>
#include <Modloader/app/structs/List_1_InstantiateUtility_InstantiationInfo_.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HierarchyDebugMenu__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyDebugMenu__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyDebugMenu__Fields_FWDDECL)
#include <Modloader/app/structs/HierarchyDebugMenu__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyDebugMenu__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
