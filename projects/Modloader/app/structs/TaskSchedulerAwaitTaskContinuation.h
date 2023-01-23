#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_DEFINED)
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation__Fields.h>
#if defined(IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_DEFINED
struct TaskSchedulerAwaitTaskContinuation__Class;
struct TaskSchedulerAwaitTaskContinuation {
    struct TaskSchedulerAwaitTaskContinuation__Class* klass;
    MonitorData* monitor;
    struct TaskSchedulerAwaitTaskContinuation__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_FWDDECL)
#define IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_FWDDECL
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_DEFINED) && !defined(IL2CPP_STRUCT_TaskSchedulerAwaitTaskContinuation_FWDDECL)
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskSchedulerAwaitTaskContinuation.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
