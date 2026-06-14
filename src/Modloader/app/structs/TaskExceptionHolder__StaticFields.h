#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_DEFINED
struct EventHandler;
struct TaskExceptionHolder__StaticFields {
    bool s_failFastOnUnobservedException;
    bool s_domainUnloadStarted;
    struct EventHandler* s_adUnloadEventHandler;
};
#endif
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_FWDDECL
#include <Modloader/app/structs/EventHandler.h>
#endif
#undef IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TaskExceptionHolder__StaticFields_FWDDECL)
#include <Modloader/app/structs/TaskExceptionHolder__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskExceptionHolder__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
