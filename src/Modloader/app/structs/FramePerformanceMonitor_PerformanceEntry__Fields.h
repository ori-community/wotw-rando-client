#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_DEFINED
struct List_1_FramePerformanceMonitor_PerformanceEntry_;
struct String;
struct __declspec(align(8)) FramePerformanceMonitor_PerformanceEntry__Fields {
    struct List_1_FramePerformanceMonitor_PerformanceEntry_* Children;
    float StartTime;
    struct String* m_label;
    float Duration;
};
#endif
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_FWDDECL)
#define IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_FWDDECL
#include <Modloader/app/structs/List_1_FramePerformanceMonitor_PerformanceEntry_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FramePerformanceMonitor_PerformanceEntry__Fields_FWDDECL)
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FramePerformanceMonitor_PerformanceEntry__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
