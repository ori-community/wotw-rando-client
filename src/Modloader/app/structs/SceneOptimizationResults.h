#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneOptimizationResults_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneOptimizationResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOptimizationResults_DEFINED)
#include <Modloader/app/structs/SceneOptimizationResults__Fields.h>
#if defined(IL2CPP_STRUCT_SceneOptimizationResults__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneOptimizationResults_DEFINED
struct SceneOptimizationResults__Class;
struct SceneOptimizationResults {
    struct SceneOptimizationResults__Class* klass;
    MonitorData* monitor;
    struct SceneOptimizationResults__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneOptimizationResults_FWDDECL)
#define IL2CPP_STRUCT_SceneOptimizationResults_FWDDECL
#include <Modloader/app/structs/SceneOptimizationResults__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneOptimizationResults_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOptimizationResults_DEFINED) && !defined(IL2CPP_STRUCT_SceneOptimizationResults_FWDDECL)
#include <Modloader/app/structs/SceneOptimizationResults.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneOptimizationResults.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
