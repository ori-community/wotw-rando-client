#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_DEFINED)
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Fields.h>
#if defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_DEFINED
struct GPUAutoProfilerReport_ReportSampleEntry__Class;
struct GPUAutoProfilerReport_ReportSampleEntry {
    struct GPUAutoProfilerReport_ReportSampleEntry__Class* klass;
    MonitorData* monitor;
    struct GPUAutoProfilerReport_ReportSampleEntry__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_FWDDECL
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
