#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UIInteractable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UIInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIInteractable_DEFINED)
#include <Modloader/app/structs/UIInteractable__Fields.h>
#if defined(IL2CPP_STRUCT_UIInteractable__Fields_DEFINED)
#define IL2CPP_STRUCT_UIInteractable_DEFINED
struct UIInteractable__Class;
struct UIInteractable {
    struct UIInteractable__Class* klass;
    MonitorData* monitor;
    struct UIInteractable__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UIInteractable_FWDDECL)
#define IL2CPP_STRUCT_UIInteractable_FWDDECL
#include <Modloader/app/structs/UIInteractable__Class.h>
#endif
#undef IL2CPP_STRUCT_UIInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UIInteractable_DEFINED) && !defined(IL2CPP_STRUCT_UIInteractable_FWDDECL)
#include <Modloader/app/structs/UIInteractable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UIInteractable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
