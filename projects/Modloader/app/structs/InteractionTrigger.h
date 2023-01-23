#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InteractionTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InteractionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_DEFINED)
#include <Modloader/app/structs/InteractionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_InteractionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_InteractionTrigger_DEFINED
struct InteractionTrigger__Class;
struct InteractionTrigger {
    struct InteractionTrigger__Class* klass;
    MonitorData* monitor;
    struct InteractionTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InteractionTrigger_FWDDECL)
#define IL2CPP_STRUCT_InteractionTrigger_FWDDECL
#include <Modloader/app/structs/InteractionTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_InteractionTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_InteractionTrigger_DEFINED) && !defined(IL2CPP_STRUCT_InteractionTrigger_FWDDECL)
#include <Modloader/app/structs/InteractionTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InteractionTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
