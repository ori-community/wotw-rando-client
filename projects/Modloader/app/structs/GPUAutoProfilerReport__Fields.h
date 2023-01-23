#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_DEFINED
struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfilerReport_ReportSampleEntry_;
struct GPUAutoProfilerReport_ReportBaselineData;
struct List_1_Moon_Profile_Metric_;
struct __declspec(align(8)) GPUAutoProfilerReport__Fields {
    struct List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfilerReport_ReportSampleEntry_* Samples;
    struct GPUAutoProfilerReport_ReportBaselineData* Baseline;
    struct GPUAutoProfilerReport_ReportBaselineData* Lightspeed;
    struct GPUAutoProfilerReport_ReportBaselineData* FTLSpeed;
    struct List_1_Moon_Profile_Metric_* Metrics;
};
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_FWDDECL
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportBaselineData.h>
#include <Modloader/app/structs/List_1_Moon_Profile_Metric_.h>
#include <Modloader/app/structs/List_1_Moon_Telemetry_Performance_profilers_GPUAutoProfilerReport_ReportSampleEntry_.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfilerReport__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfilerReport__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
