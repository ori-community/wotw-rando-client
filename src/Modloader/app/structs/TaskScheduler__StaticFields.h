#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskScheduler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskScheduler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskScheduler__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TaskScheduler__StaticFields_DEFINED
struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_;
struct TaskScheduler;
struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_;
struct Object;
struct TaskScheduler__StaticFields {
    struct ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_* s_activeTaskSchedulers;
    struct TaskScheduler* s_defaultTaskScheduler;
    int32_t s_taskSchedulerIdCounter;
    struct EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_* _unobservedTaskException;
    struct Object* _unobservedTaskExceptionLockObject;
};
#endif
#if !defined(IL2CPP_STRUCT_TaskScheduler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TaskScheduler__StaticFields_FWDDECL
#include <Modloader/app/structs/ConditionalWeakTable_2_System_Threading_Tasks_TaskScheduler_System_Object_.h>
#include <Modloader/app/structs/EventHandler_1_System_Threading_Tasks_UnobservedTaskExceptionEventArgs_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/TaskScheduler.h>
#endif
#undef IL2CPP_STRUCT_TaskScheduler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskScheduler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TaskScheduler__StaticFields_FWDDECL)
#include <Modloader/app/structs/TaskScheduler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskScheduler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
