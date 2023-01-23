#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskContinuation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskContinuation_DEFINED)
#define IL2CPP_STRUCT_TaskContinuation_DEFINED
struct TaskContinuation__Class;
struct TaskContinuation {
    struct TaskContinuation__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TaskContinuation_FWDDECL)
#define IL2CPP_STRUCT_TaskContinuation_FWDDECL
#include <Modloader/app/structs/TaskContinuation__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskContinuation_DEFINED) && !defined(IL2CPP_STRUCT_TaskContinuation_FWDDECL)
#include <Modloader/app/structs/TaskContinuation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskContinuation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
