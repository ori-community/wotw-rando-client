#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskAwaiter__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskAwaiter__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskAwaiter__Boxed_DEFINED)
#include <Modloader/app/structs/TaskAwaiter.h>
#if defined(IL2CPP_STRUCT_TaskAwaiter_DEFINED)
#define IL2CPP_STRUCT_TaskAwaiter__Boxed_DEFINED
struct TaskAwaiter__Class;
struct TaskAwaiter__Boxed {
    struct TaskAwaiter__Class* klass;
    MonitorData* monitor;
    struct TaskAwaiter fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskAwaiter__Boxed_FWDDECL)
#define IL2CPP_STRUCT_TaskAwaiter__Boxed_FWDDECL
#include <Modloader/app/structs/TaskAwaiter__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskAwaiter__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskAwaiter__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_TaskAwaiter__Boxed_FWDDECL)
#include <Modloader/app/structs/TaskAwaiter__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskAwaiter__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
