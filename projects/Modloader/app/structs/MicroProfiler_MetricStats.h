#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MicroProfiler_MetricStats_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MicroProfiler_MetricStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MetricStats_DEFINED)
#define IL2CPP_STRUCT_MicroProfiler_MetricStats_DEFINED
struct MicroProfiler_MetricStats {
    int64_t PeakFrameDuration;
    int64_t TimeInvocated;
    uint32_t InvocationsCount;
    uint32_t PeakFrameInvocationsCount;
    bool Invoked;
};
#endif
#if !defined(IL2CPP_STRUCT_MicroProfiler_MetricStats_FWDDECL)
#define IL2CPP_STRUCT_MicroProfiler_MetricStats_FWDDECL
#endif
#undef IL2CPP_STRUCT_MicroProfiler_MetricStats_INITIALIZING
#if !defined(IL2CPP_STRUCT_MicroProfiler_MetricStats_DEFINED) && !defined(IL2CPP_STRUCT_MicroProfiler_MetricStats_FWDDECL)
#include <Modloader/app/structs/MicroProfiler_MetricStats.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MicroProfiler_MetricStats.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
