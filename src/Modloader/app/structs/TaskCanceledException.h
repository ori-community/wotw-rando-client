#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskCanceledException_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskCanceledException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskCanceledException_DEFINED)
#include <Modloader/app/structs/TaskCanceledException__Fields.h>
#if defined(IL2CPP_STRUCT_TaskCanceledException__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskCanceledException_DEFINED
struct TaskCanceledException__Class;
struct TaskCanceledException {
    struct TaskCanceledException__Class* klass;
    MonitorData* monitor;
    struct TaskCanceledException__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskCanceledException_FWDDECL)
#define IL2CPP_STRUCT_TaskCanceledException_FWDDECL
#include <Modloader/app/structs/TaskCanceledException__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskCanceledException_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskCanceledException_DEFINED) && !defined(IL2CPP_STRUCT_TaskCanceledException_FWDDECL)
#include <Modloader/app/structs/TaskCanceledException.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskCanceledException.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
