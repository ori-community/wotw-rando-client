#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_DEFINED)
#define IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_DEFINED
struct List_1_FramePerformanceMonitor_PerformanceEntry_;
struct FramePerformanceMonitor_PerformanceFrameData {
    int32_t m_frame;
    float m_duration;
    struct List_1_FramePerformanceMonitor_PerformanceEntry_* m_entries;
    bool m_garbageCollection;
    float m_lastGarbageCollectionTime;
};
#endif
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_FWDDECL)
#define IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_FWDDECL
#include <Modloader/app/structs/List_1_FramePerformanceMonitor_PerformanceEntry_.h>
#endif
#undef IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_DEFINED) && !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceFrameData_FWDDECL)
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceFrameData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
