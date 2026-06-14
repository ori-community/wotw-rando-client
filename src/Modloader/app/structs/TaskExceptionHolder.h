#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskExceptionHolder_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskExceptionHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder_DEFINED)
#include <Modloader/app/structs/TaskExceptionHolder__Fields.h>
#if defined(IL2CPP_STRUCT_TaskExceptionHolder__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskExceptionHolder_DEFINED
struct TaskExceptionHolder__Class;
struct TaskExceptionHolder {
    struct TaskExceptionHolder__Class* klass;
    MonitorData* monitor;
    struct TaskExceptionHolder__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder_FWDDECL)
#define IL2CPP_STRUCT_TaskExceptionHolder_FWDDECL
#include <Modloader/app/structs/TaskExceptionHolder__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskExceptionHolder_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskExceptionHolder_DEFINED) && !defined(IL2CPP_STRUCT_TaskExceptionHolder_FWDDECL)
#include <Modloader/app/structs/TaskExceptionHolder.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskExceptionHolder.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
