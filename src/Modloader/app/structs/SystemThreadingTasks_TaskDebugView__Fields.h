#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_DEFINED)
#define IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_DEFINED
struct Task;
struct __declspec(align(8)) SystemThreadingTasks_TaskDebugView__Fields {
    struct Task* m_task;
};
#endif
#if !defined(IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_FWDDECL)
#define IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_FWDDECL
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SystemThreadingTasks_TaskDebugView__Fields_FWDDECL)
#include <Modloader/app/structs/SystemThreadingTasks_TaskDebugView__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SystemThreadingTasks_TaskDebugView__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
