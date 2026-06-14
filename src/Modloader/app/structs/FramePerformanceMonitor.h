#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FramePerformanceMonitor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FramePerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_DEFINED)
#include <Modloader/app/structs/FramePerformanceMonitor__Fields.h>
#if defined(IL2CPP_STRUCT_FramePerformanceMonitor__Fields_DEFINED)
#define IL2CPP_STRUCT_FramePerformanceMonitor_DEFINED
struct FramePerformanceMonitor__Class;
struct FramePerformanceMonitor {
    struct FramePerformanceMonitor__Class* klass;
    MonitorData* monitor;
    struct FramePerformanceMonitor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_FWDDECL)
#define IL2CPP_STRUCT_FramePerformanceMonitor_FWDDECL
#include <Modloader/app/structs/FramePerformanceMonitor__Class.h>
#endif
#undef IL2CPP_STRUCT_FramePerformanceMonitor_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_DEFINED) && !defined(IL2CPP_STRUCT_FramePerformanceMonitor_FWDDECL)
#include <Modloader/app/structs/FramePerformanceMonitor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FramePerformanceMonitor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
