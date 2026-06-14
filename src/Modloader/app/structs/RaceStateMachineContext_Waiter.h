#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RaceStateMachineContext_Waiter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RaceStateMachineContext_Waiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_Waiter_DEFINED)
#include <Modloader/app/structs/RaceStateMachineContext_Waiter__Fields.h>
#if defined(IL2CPP_STRUCT_RaceStateMachineContext_Waiter__Fields_DEFINED)
#define IL2CPP_STRUCT_RaceStateMachineContext_Waiter_DEFINED
struct RaceStateMachineContext_Waiter__Class;
struct RaceStateMachineContext_Waiter {
    struct RaceStateMachineContext_Waiter__Class* klass;
    MonitorData* monitor;
    struct RaceStateMachineContext_Waiter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_Waiter_FWDDECL)
#define IL2CPP_STRUCT_RaceStateMachineContext_Waiter_FWDDECL
#include <Modloader/app/structs/RaceStateMachineContext_Waiter__Class.h>
#endif
#undef IL2CPP_STRUCT_RaceStateMachineContext_Waiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_RaceStateMachineContext_Waiter_DEFINED) && !defined(IL2CPP_STRUCT_RaceStateMachineContext_Waiter_FWDDECL)
#include <Modloader/app/structs/RaceStateMachineContext_Waiter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RaceStateMachineContext_Waiter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
