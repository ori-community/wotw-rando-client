#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskAwaiter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskAwaiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_TaskAwaiter_DEFINED
struct Task;
struct TaskAwaiter {
    struct Task* m_task;
};
#endif
#if !defined(IL2CPP_STRUCT_TaskAwaiter_FWDDECL)
#define IL2CPP_STRUCT_TaskAwaiter_FWDDECL
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_TaskAwaiter_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED) && !defined(IL2CPP_STRUCT_TaskAwaiter_FWDDECL)
#include <Modloader/app/structs/TaskAwaiter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskAwaiter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
