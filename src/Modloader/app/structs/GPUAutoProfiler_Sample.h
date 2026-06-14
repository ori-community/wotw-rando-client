#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler_Sample_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_DEFINED)
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Fields.h>
#if defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample_DEFINED
struct GPUAutoProfiler_Sample__Class;
struct GPUAutoProfiler_Sample {
    struct GPUAutoProfiler_Sample__Class* klass;
    MonitorData* monitor;
    struct GPUAutoProfiler_Sample__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample_FWDDECL
#include <Modloader/app/structs/GPUAutoProfiler_Sample__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler_Sample_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler_Sample.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler_Sample.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
