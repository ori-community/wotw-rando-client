#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FrameProfiler__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FrameProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FrameProfiler__StaticFields_DEFINED
struct List_1_FrameProfiler_MetricInfo_;
struct Int32__Array;
struct FrameProfiler;
struct FrameProfiler__StaticFields {
    struct List_1_FrameProfiler_MetricInfo_* s_metrics;
    struct Int32__Array* s_metricIndices;
    int32_t MetricCount;
    int32_t HistoryLength;
    struct FrameProfiler* Instance;
};
#endif
#if !defined(IL2CPP_STRUCT_FrameProfiler__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FrameProfiler__StaticFields_FWDDECL
#include <Modloader/app/structs/FrameProfiler.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/List_1_FrameProfiler_MetricInfo_.h>
#endif
#undef IL2CPP_STRUCT_FrameProfiler__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FrameProfiler__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FrameProfiler__StaticFields_FWDDECL)
#include <Modloader/app/structs/FrameProfiler__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FrameProfiler__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
