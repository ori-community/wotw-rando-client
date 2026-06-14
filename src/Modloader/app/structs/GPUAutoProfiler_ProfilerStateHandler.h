#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_DEFINED
struct GPUAutoProfiler_ProfilerStateHandler__Class;
struct GPUAutoProfiler_ProfilerStateHandler {
    struct GPUAutoProfiler_ProfilerStateHandler__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_FWDDECL
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerStateHandler__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler_ProfilerStateHandler_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerStateHandler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler_ProfilerStateHandler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
