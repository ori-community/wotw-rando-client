#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IInteractionTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IInteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionTransition_DEFINED)
#define IL2CPP_STRUCT_IInteractionTransition_DEFINED
struct IInteractionTransition__Class;
struct IInteractionTransition {
    struct IInteractionTransition__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IInteractionTransition_FWDDECL)
#define IL2CPP_STRUCT_IInteractionTransition_FWDDECL
#include <Modloader/app/structs/IInteractionTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_IInteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_IInteractionTransition_DEFINED) && !defined(IL2CPP_STRUCT_IInteractionTransition_FWDDECL)
#include <Modloader/app/structs/IInteractionTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IInteractionTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
