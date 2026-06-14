#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IOptimizationTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IOptimizationTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOptimizationTask_DEFINED)
#define IL2CPP_STRUCT_IOptimizationTask_DEFINED
struct IOptimizationTask__Class;
struct IOptimizationTask {
    struct IOptimizationTask__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IOptimizationTask_FWDDECL)
#define IL2CPP_STRUCT_IOptimizationTask_FWDDECL
#include <Modloader/app/structs/IOptimizationTask__Class.h>
#endif
#undef IL2CPP_STRUCT_IOptimizationTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_IOptimizationTask_DEFINED) && !defined(IL2CPP_STRUCT_IOptimizationTask_FWDDECL)
#include <Modloader/app/structs/IOptimizationTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IOptimizationTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
