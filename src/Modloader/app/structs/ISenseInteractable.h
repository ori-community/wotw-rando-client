#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISenseInteractable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISenseInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISenseInteractable_DEFINED)
#define IL2CPP_STRUCT_ISenseInteractable_DEFINED
struct ISenseInteractable__Class;
struct ISenseInteractable {
    struct ISenseInteractable__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISenseInteractable_FWDDECL)
#define IL2CPP_STRUCT_ISenseInteractable_FWDDECL
#include <Modloader/app/structs/ISenseInteractable__Class.h>
#endif
#undef IL2CPP_STRUCT_ISenseInteractable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISenseInteractable_DEFINED) && !defined(IL2CPP_STRUCT_ISenseInteractable_FWDDECL)
#include <Modloader/app/structs/ISenseInteractable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISenseInteractable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
