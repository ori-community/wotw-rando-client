#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ITask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ITask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITask_DEFINED)
#define IL2CPP_STRUCT_ITask_DEFINED
struct ITask__Class;
struct ITask {
    struct ITask__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ITask_FWDDECL)
#define IL2CPP_STRUCT_ITask_FWDDECL
#include <Modloader/app/structs/ITask__Class.h>
#endif
#undef IL2CPP_STRUCT_ITask_INITIALIZING
#if !defined(IL2CPP_STRUCT_ITask_DEFINED) && !defined(IL2CPP_STRUCT_ITask_FWDDECL)
#include <Modloader/app/structs/ITask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ITask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
