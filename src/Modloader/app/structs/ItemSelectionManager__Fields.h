#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ItemSelectionManager__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ItemSelectionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemSelectionManager__Fields_DEFINED)
#include <Modloader/app/structs/ItemSelectionManager_NavigationMode__Enum.h>
#include <Modloader/app/structs/UIInteractable__Fields.h>
#if defined(IL2CPP_STRUCT_UIInteractable__Fields_DEFINED) && defined(IL2CPP_STRUCT_ItemSelectionManager_NavigationMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ItemSelectionManager__Fields_DEFINED
struct List_1_Moon_UI_ItemSelectionManager_NavigationData_;
struct List_1_Moon_UI_UIInteractable_;
struct UIInteractable;
struct ItemSelectionManager__Fields {
    struct UIInteractable__Fields _;
    struct List_1_Moon_UI_ItemSelectionManager_NavigationData_* m_navigation;
    ItemSelectionManager_NavigationMode__Enum m_navigationMode;

    bool m_visualiseNavigation;
    struct List_1_Moon_UI_UIInteractable_* m_interactables;
    struct UIInteractable* m_current;
    int32_t m_index;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ItemSelectionManager__Fields_FWDDECL)
#define IL2CPP_STRUCT_ItemSelectionManager__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_UI_ItemSelectionManager_NavigationData_.h>
#include <Modloader/app/structs/List_1_Moon_UI_UIInteractable_.h>
#include <Modloader/app/structs/UIInteractable.h>
#endif
#undef IL2CPP_STRUCT_ItemSelectionManager__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ItemSelectionManager__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ItemSelectionManager__Fields_FWDDECL)
#include <Modloader/app/structs/ItemSelectionManager__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ItemSelectionManager__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
