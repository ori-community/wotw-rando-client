#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TaskNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TaskNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskNode_DEFINED)
#include <Modloader/app/structs/TaskNode__Fields.h>
#if defined(IL2CPP_STRUCT_TaskNode__Fields_DEFINED)
#define IL2CPP_STRUCT_TaskNode_DEFINED
struct TaskNode__Class;
struct TaskNode {
    struct TaskNode__Class* klass;
    MonitorData* monitor;
    struct TaskNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TaskNode_FWDDECL)
#define IL2CPP_STRUCT_TaskNode_FWDDECL
#include <Modloader/app/structs/TaskNode__Class.h>
#endif
#undef IL2CPP_STRUCT_TaskNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_TaskNode_DEFINED) && !defined(IL2CPP_STRUCT_TaskNode_FWDDECL)
#include <Modloader/app/structs/TaskNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TaskNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
