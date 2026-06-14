#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskFactory_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskFactory_DEFINED)
#include <Modloader/app/structs/TaskFactory__Fields.h>
#if defined(IL2CPP_STRUCT_TaskFactory__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskFactory_DEFINED
struct TaskFactory__Class;
struct TaskFactory {
    struct TaskFactory__Class* klass;
    MonitorData* monitor;
    struct TaskFactory__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskFactory_FWDDECL)
#define IL2CPP_STRUCT_TaskFactory_FWDDECL
#include <Modloader/app/structs/TaskFactory__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskFactory_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskFactory_DEFINED) && !defined(IL2CPP_STRUCT_TaskFactory_FWDDECL)
#include <Modloader/app/structs/TaskFactory.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskFactory.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
