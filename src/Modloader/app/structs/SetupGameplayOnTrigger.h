#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupGameplayOnTrigger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupGameplayOnTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupGameplayOnTrigger_DEFINED)
#include <Modloader/app/structs/SetupGameplayOnTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_SetupGameplayOnTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_SetupGameplayOnTrigger_DEFINED
struct SetupGameplayOnTrigger__Class;
struct SetupGameplayOnTrigger {
    struct SetupGameplayOnTrigger__Class* klass;
    MonitorData* monitor;
    struct SetupGameplayOnTrigger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetupGameplayOnTrigger_FWDDECL)
#define IL2CPP_STRUCT_SetupGameplayOnTrigger_FWDDECL
#include <Modloader/app/structs/SetupGameplayOnTrigger__Class.h>
#endif
#undef IL2CPP_STRUCT_SetupGameplayOnTrigger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupGameplayOnTrigger_DEFINED) && !defined(IL2CPP_STRUCT_SetupGameplayOnTrigger_FWDDECL)
#include <Modloader/app/structs/SetupGameplayOnTrigger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupGameplayOnTrigger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
