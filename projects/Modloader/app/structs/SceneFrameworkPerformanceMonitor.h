#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_DEFINED)
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor__Fields.h>
#if defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_DEFINED
struct SceneFrameworkPerformanceMonitor__Class;
struct SceneFrameworkPerformanceMonitor {
    struct SceneFrameworkPerformanceMonitor__Class* klass;
    MonitorData* monitor;
    struct SceneFrameworkPerformanceMonitor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_FWDDECL)
#define IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_FWDDECL
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_DEFINED) && !defined(IL2CPP_STRUCT_SceneFrameworkPerformanceMonitor_FWDDECL)
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFrameworkPerformanceMonitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
