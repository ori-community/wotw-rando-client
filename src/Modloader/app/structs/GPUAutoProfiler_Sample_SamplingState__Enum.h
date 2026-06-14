#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_DEFINED)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_DEFINED
enum class GPUAutoProfiler_Sample_SamplingState__Enum : int32_t {
    Queued = 0x00000000,
    Idle = 0x00000001,
    Cooldown = 0x00000002,
    Sampling = 0x00000003,
    Done = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_FWDDECL)
#define IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_DEFINED) && !defined(IL2CPP_STRUCT_GPUAutoProfiler_Sample_SamplingState__Enum_FWDDECL)
#include <Modloader/app/structs/GPUAutoProfiler_Sample_SamplingState__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GPUAutoProfiler_Sample_SamplingState__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
