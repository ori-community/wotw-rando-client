#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_DEFINED)
#include <Modloader/app/structs/GPUAutoProfiler__Fields.h>
#if defined(IL2CPP_STRUCT_GPUAutoProfiler__Fields_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler_DEFINED
struct GPUAutoProfiler__Class;
struct GPUAutoProfiler {
    struct GPUAutoProfiler__Class* klass;
    MonitorData* monitor;
    struct GPUAutoProfiler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler_FWDDECL
#include <Modloader/app/structs/GPUAutoProfiler__Class.h>
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
