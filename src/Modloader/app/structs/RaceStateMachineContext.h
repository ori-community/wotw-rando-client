#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStateMachineContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStateMachineContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_DEFINED)
#include <Modloader/app/structs/RaceStateMachineContext__Fields.h>
#if defined(IL2CPP_STRUCT_RaceStateMachineContext__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceStateMachineContext_DEFINED
struct RaceStateMachineContext__Class;
struct RaceStateMachineContext {
    struct RaceStateMachineContext__Class* klass;
    MonitorData* monitor;
    struct RaceStateMachineContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_FWDDECL)
#define IL2CPP_STRUCT_RaceStateMachineContext_FWDDECL
#include <Modloader/app/structs/RaceStateMachineContext__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceStateMachineContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_DEFINED) && !defined(IL2CPP_STRUCT_RaceStateMachineContext_FWDDECL)
#include <Modloader/app/structs/RaceStateMachineContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStateMachineContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
