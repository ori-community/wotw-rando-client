#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SrpSampler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SrpSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SrpSampler_DEFINED)
#define IL2CPP_STRUCT_SrpSampler_DEFINED
struct CustomSampler;
struct Recorder;
struct SrpSampler {
    bool isRoot;
    int32_t profilerMetric;
    struct CustomSampler* cpu;
    struct CustomSampler* gpu;
    struct Recorder* cpuRecorder;
    struct Recorder* gpuRecorder;
};
#endif
#if !defined(IL2CPP_STRUCT_SrpSampler_FWDDECL)
#define IL2CPP_STRUCT_SrpSampler_FWDDECL
#include <Modloader/app/structs/CustomSampler.h>
#include <Modloader/app/structs/Recorder.h>
#endif
#undef IL2CPP_STRUCT_SrpSampler_INITIALIZING
#if !defined(IL2CPP_STRUCT_SrpSampler_DEFINED) && !defined(IL2CPP_STRUCT_SrpSampler_FWDDECL)
#include <Modloader/app/structs/SrpSampler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SrpSampler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
