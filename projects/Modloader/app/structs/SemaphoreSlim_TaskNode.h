#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SemaphoreSlim_TaskNode_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SemaphoreSlim_TaskNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_TaskNode_DEFINED)
#include <Modloader/app/structs/SemaphoreSlim_TaskNode__Fields.h>
#if defined(IL2CPP_STRUCT_SemaphoreSlim_TaskNode__Fields_DEFINED)
#define IL2CPP_STRUCT_SemaphoreSlim_TaskNode_DEFINED
struct SemaphoreSlim_TaskNode__Class;
struct SemaphoreSlim_TaskNode {
    struct SemaphoreSlim_TaskNode__Class* klass;
    MonitorData* monitor;
    struct SemaphoreSlim_TaskNode__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_TaskNode_FWDDECL)
#define IL2CPP_STRUCT_SemaphoreSlim_TaskNode_FWDDECL
#include <Modloader/app/structs/SemaphoreSlim_TaskNode__Class.h>
#endif
#undef IL2CPP_STRUCT_SemaphoreSlim_TaskNode_INITIALIZING
#if !defined(IL2CPP_STRUCT_SemaphoreSlim_TaskNode_DEFINED) && !defined(IL2CPP_STRUCT_SemaphoreSlim_TaskNode_FWDDECL)
#include <Modloader/app/structs/SemaphoreSlim_TaskNode.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SemaphoreSlim_TaskNode.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
