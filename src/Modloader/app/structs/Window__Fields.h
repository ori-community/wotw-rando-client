#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Window__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Window__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Window__Fields_DEFINED)
#include <Modloader/app/structs/UIComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UIComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_Window__Fields_DEFINED
struct List_1_Moon_UI_UIInteractable_;
struct Window__Fields {
    struct UIComponent__Fields _;
    bool m_willBlockInput;
    bool BlockingInput;
    struct List_1_Moon_UI_UIInteractable_* m_interactables;
    bool m_visible;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Window__Fields_FWDDECL)
#define IL2CPP_STRUCT_Window__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_UI_UIInteractable_.h>
#endif
#undef IL2CPP_STRUCT_Window__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Window__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Window__Fields_FWDDECL)
#include <Modloader/app/structs/Window__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Window__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
