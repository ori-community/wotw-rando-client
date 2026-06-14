#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PerformanceMonitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceMonitor_DEFINED)
#include <Modloader/app/structs/PerformanceMonitor__Fields.h>
#if defined(IL2CPP_STRUCT_PerformanceMonitor__Fields_DEFINED)
#define IL2CPP_STRUCT_PerformanceMonitor_DEFINED
struct PerformanceMonitor__Class;
struct PerformanceMonitor {
    struct PerformanceMonitor__Class* klass;
    MonitorData* monitor;
    struct PerformanceMonitor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PerformanceMonitor_FWDDECL)
#define IL2CPP_STRUCT_PerformanceMonitor_FWDDECL
#include <Modloader/app/structs/PerformanceMonitor__Class.h>
#endif
#undef IL2CPP_STRUCT_PerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_PerformanceMonitor_DEFINED) && !defined(IL2CPP_STRUCT_PerformanceMonitor_FWDDECL)
#include <Modloader/app/structs/PerformanceMonitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PerformanceMonitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
