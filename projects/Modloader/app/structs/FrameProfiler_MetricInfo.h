#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler_MetricInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler_MetricInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo_DEFINED)
#include <Modloader/app/structs/FrameProfiler_MetricInfo__Fields.h>
#if defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler_MetricInfo_DEFINED
struct FrameProfiler_MetricInfo__Class;
struct FrameProfiler_MetricInfo {
    struct FrameProfiler_MetricInfo__Class* klass;
    MonitorData* monitor;
    struct FrameProfiler_MetricInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler_MetricInfo_FWDDECL
#include <Modloader/app/structs/FrameProfiler_MetricInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler_MetricInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler_MetricInfo_FWDDECL)
#include <Modloader/app/structs/FrameProfiler_MetricInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler_MetricInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
