#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskCanceledException__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskCanceledException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskCanceledException__Fields_DEFINED)
#include <Modloader/app/structs/OperationCanceledException__Fields.h>
#if defined(IL2CPP_STRUCT_OperationCanceledException__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskCanceledException__Fields_DEFINED
struct Task;
struct TaskCanceledException__Fields {
    struct OperationCanceledException__Fields _;
    struct Task* m_canceledTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskCanceledException__Fields_FWDDECL)
#define IL2CPP_STRUCT_TaskCanceledException__Fields_FWDDECL
#include <Modloader/app/structs/Task.h>
#endif
#undef IL2CPP_STRUCT_TaskCanceledException__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskCanceledException__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TaskCanceledException__Fields_FWDDECL)
#include <Modloader/app/structs/TaskCanceledException__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskCanceledException__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
