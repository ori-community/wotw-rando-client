#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_DEFINED
struct FrameProfiler_MetricInfo;
struct __declspec(align(8)) FrameProfiler_FrameSample__Fields {
    int64_t NsStart;
    int64_t NsEnd;
    struct FrameProfiler_MetricInfo* Metric;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_FWDDECL
#include <Modloader/app/structs/FrameProfiler_MetricInfo.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler_FrameSample__Fields_FWDDECL)
#include <Modloader/app/structs/FrameProfiler_FrameSample__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler_FrameSample__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
