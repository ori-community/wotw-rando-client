#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CompositeTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CompositeTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTask__Fields_DEFINED)
#include <Modloader/app/structs/SimpleTask__Fields.h>
#if defined(IL2CPP_STRUCT_SimpleTask__Fields_DEFINED)
#define IL2CPP_STRUCT_CompositeTask__Fields_DEFINED
struct Queue_1_Moon_ArtOptimization_IOptimizationTask_;
struct IOptimizationTask;
struct CompositeTask__Fields {
    struct SimpleTask__Fields _;
    struct Queue_1_Moon_ArtOptimization_IOptimizationTask_* m_subTasks;
    struct IOptimizationTask* m_currentTask;
    struct IOptimizationTask* m_lastEnqueuedTask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CompositeTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_CompositeTask__Fields_FWDDECL
#include <Modloader/app/structs/IOptimizationTask.h>
#include <Modloader/app/structs/Queue_1_Moon_ArtOptimization_IOptimizationTask_.h>
#endif
#undef IL2CPP_STRUCT_CompositeTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CompositeTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CompositeTask__Fields_FWDDECL)
#include <Modloader/app/structs/CompositeTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CompositeTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
