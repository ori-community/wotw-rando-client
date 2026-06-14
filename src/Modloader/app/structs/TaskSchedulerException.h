#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskSchedulerException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskSchedulerException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskSchedulerException_DEFINED)
#include <Modloader/app/structs/TaskSchedulerException__Fields.h>
#if defined(IL2CPP_STRUCT_TaskSchedulerException__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskSchedulerException_DEFINED
struct TaskSchedulerException__Class;
struct TaskSchedulerException {
    struct TaskSchedulerException__Class* klass;
    MonitorData* monitor;
    struct TaskSchedulerException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskSchedulerException_FWDDECL)
#define IL2CPP_STRUCT_TaskSchedulerException_FWDDECL
#include <Modloader/app/structs/TaskSchedulerException__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskSchedulerException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskSchedulerException_DEFINED) && !defined(IL2CPP_STRUCT_TaskSchedulerException_FWDDECL)
#include <Modloader/app/structs/TaskSchedulerException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskSchedulerException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
