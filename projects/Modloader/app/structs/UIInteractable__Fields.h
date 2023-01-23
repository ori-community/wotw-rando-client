#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIInteractable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIInteractable__Fields_DEFINED)
#include <Modloader/app/structs/UIComponent__Fields.h>
#if defined(IL2CPP_STRUCT_UIComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_UIInteractable__Fields_DEFINED
struct UIInteractable__Fields {
    struct UIComponent__Fields _;
    bool m_selected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIInteractable__Fields_FWDDECL)
#define IL2CPP_STRUCT_UIInteractable__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UIInteractable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIInteractable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UIInteractable__Fields_FWDDECL)
#include <Modloader/app/structs/UIInteractable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIInteractable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
