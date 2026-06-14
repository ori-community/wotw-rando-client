#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_DEFINED
struct GPUAutoProfilerReport_ReportSampleEntry__Array__Class;
struct GPUAutoProfilerReport_ReportSampleEntry;
struct GPUAutoProfilerReport_ReportSampleEntry__Array {
    struct GPUAutoProfilerReport_ReportSampleEntry__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct GPUAutoProfilerReport_ReportSampleEntry* vector[32];
};
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_FWDDECL
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry.h>
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_ReportSampleEntry__Array_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfilerReport_ReportSampleEntry__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
