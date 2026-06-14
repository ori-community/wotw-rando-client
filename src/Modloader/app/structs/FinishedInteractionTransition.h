#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FinishedInteractionTransition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FinishedInteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinishedInteractionTransition_DEFINED)
#include <Modloader/app/structs/FinishedInteractionTransition__Fields.h>
#if defined(IL2CPP_STRUCT_FinishedInteractionTransition__Fields_DEFINED)
#define IL2CPP_STRUCT_FinishedInteractionTransition_DEFINED
struct FinishedInteractionTransition__Class;
struct FinishedInteractionTransition {
    struct FinishedInteractionTransition__Class* klass;
    MonitorData* monitor;
    struct FinishedInteractionTransition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FinishedInteractionTransition_FWDDECL)
#define IL2CPP_STRUCT_FinishedInteractionTransition_FWDDECL
#include <Modloader/app/structs/FinishedInteractionTransition__Class.h>
#endif
#undef IL2CPP_STRUCT_FinishedInteractionTransition_INITIALIZING
#if !defined(IL2CPP_STRUCT_FinishedInteractionTransition_DEFINED) && !defined(IL2CPP_STRUCT_FinishedInteractionTransition_FWDDECL)
#include <Modloader/app/structs/FinishedInteractionTransition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FinishedInteractionTransition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
