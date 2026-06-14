#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_DEFINED)
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler__Fields.h>
#if defined(IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_DEFINED
struct GPUAutoProfiler_SamplingHandler__Class;
struct GPUAutoProfiler_SamplingHandler {
    struct GPUAutoProfiler_SamplingHandler__Class* klass;
    MonitorData* monitor;
    struct GPUAutoProfiler_SamplingHandler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_FWDDECL
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler_SamplingHandler_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler_SamplingHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
