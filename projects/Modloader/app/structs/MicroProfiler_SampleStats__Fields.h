#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_DEFINED
struct MicroProfiler_MetricStats__Array;
struct MicroProfiler_StatInfo__Array;
struct MicroProfiler_MarkerInfo__Array;
struct __declspec(align(8)) MicroProfiler_SampleStats__Fields {
    struct MicroProfiler_MetricStats__Array* m_metricStats;
    struct MicroProfiler_StatInfo__Array* m_stats;
    struct MicroProfiler_MarkerInfo__Array* m_markers;
    int32_t m_frameId;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_FWDDECL
#include <Modloader/app/structs/MicroProfiler_MarkerInfo__Array.h>
#include <Modloader/app/structs/MicroProfiler_MetricStats__Array.h>
#include <Modloader/app/structs/MicroProfiler_StatInfo__Array.h>
#endif
#undef IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_SampleStats__Fields_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_SampleStats__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_SampleStats__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
