#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTransition_DEFINED)
#include <Modloader/app/structs/InteractionTransition__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionTransition_DEFINED
struct InteractionTransition__Class;
struct InteractionTransition {
    struct InteractionTransition__Class* klass;
    MonitorData* monitor;
    struct InteractionTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionTransition_FWDDECL)
#define IL2CPP_STRUCT_InteractionTransition_FWDDECL
#include <Modloader/app/structs/InteractionTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTransition_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTransition_FWDDECL)
#include <Modloader/app/structs/InteractionTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
