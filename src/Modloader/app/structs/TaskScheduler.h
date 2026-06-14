#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskScheduler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskScheduler_DEFINED)
#include <Modloader/app/structs/TaskScheduler__Fields.h>
#if defined(IL2CPP_STRUCT_TaskScheduler__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskScheduler_DEFINED
struct TaskScheduler__Class;
struct TaskScheduler {
    struct TaskScheduler__Class* klass;
    MonitorData* monitor;
    struct TaskScheduler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskScheduler_FWDDECL)
#define IL2CPP_STRUCT_TaskScheduler_FWDDECL
#include <Modloader/app/structs/TaskScheduler__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskScheduler_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskScheduler_DEFINED) && !defined(IL2CPP_STRUCT_TaskScheduler_FWDDECL)
#include <Modloader/app/structs/TaskScheduler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskScheduler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
