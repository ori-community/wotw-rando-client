#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInteractable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractable_DEFINED)
#define IL2CPP_STRUCT_IInteractable_DEFINED
struct IInteractable__Class;
struct IInteractable {
    struct IInteractable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInteractable_FWDDECL)
#define IL2CPP_STRUCT_IInteractable_FWDDECL
#include <Modloader/app/structs/IInteractable__Class.h>
#endif
#undef IL2CPP_STRUCT_IInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractable_DEFINED) && !defined(IL2CPP_STRUCT_IInteractable_FWDDECL)
#include <Modloader/app/structs/IInteractable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInteractable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
