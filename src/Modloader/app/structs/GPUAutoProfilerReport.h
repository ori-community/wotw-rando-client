#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfilerReport_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_DEFINED)
#include <Modloader/app/structs/GPUAutoProfilerReport__Fields.h>
#if defined(IL2CPP_STRUCT_GPUAutoProfilerReport__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_DEFINED
struct GPUAutoProfilerReport__Class;
struct GPUAutoProfilerReport {
    struct GPUAutoProfilerReport__Class* klass;
    MonitorData* monitor;
    struct GPUAutoProfilerReport__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfilerReport_FWDDECL
#include <Modloader/app/structs/GPUAutoProfilerReport__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfilerReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfilerReport_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfilerReport.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
