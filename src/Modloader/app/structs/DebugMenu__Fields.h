#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugMenu__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugMenu__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_DebugMenu__Fields_DEFINED
struct List_1_WorldEvents_;
struct List_1_SceneMetaData_;
struct List_1_System_String_;
struct GUISkin;
struct MessageProvider;
struct String;
struct List_1_System_Int32_;
struct List_1_GoToSequenceData_;
struct List_1_AbilityType_;
struct List_1_EquipmentType_;
struct List_1_IDebugMenuPage_;
struct List_1_DebugMenu_ExternalItem_;
struct List_1_List_1_IDebugMenuItem_;
struct Dictionary_2_System_String_IDebugMenuPage_;
struct List_1_IDebugMenuItem_;
struct IDebugMenuPage;
struct UberStateVisualizationMenu;
struct HierarchyDebugMenu;
struct VolatileDebugMenuLog;
struct HierarchySuspensionTest;
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
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugMenu__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugMenu__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_IDebugMenuPage_.h>
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/HierarchyDebugMenu.h>
#include <Modloader/app/structs/HierarchySuspensionTest.h>
#include <Modloader/app/structs/IDebugMenuPage.h>
#include <Modloader/app/structs/List_1_AbilityType_.h>
#include <Modloader/app/structs/List_1_DebugMenu_ExternalItem_.h>
#include <Modloader/app/structs/List_1_EquipmentType_.h>
#include <Modloader/app/structs/List_1_GoToSequenceData_.h>
#include <Modloader/app/structs/List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/List_1_IDebugMenuPage_.h>
#include <Modloader/app/structs/List_1_List_1_IDebugMenuItem_.h>
#include <Modloader/app/structs/List_1_SceneMetaData_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/List_1_WorldEvents_.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UberStateVisualizationMenu.h>
#include <Modloader/app/structs/VolatileDebugMenuLog.h>
#endif
#undef IL2CPP_STRUCT_DebugMenu__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugMenu__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugMenu__Fields_FWDDECL)
#include <Modloader/app/structs/DebugMenu__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugMenu__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
