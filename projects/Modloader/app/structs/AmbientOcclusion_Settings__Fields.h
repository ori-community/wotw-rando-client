#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_DEFINED)
#include <Modloader/app/structs/AmbientOcclusion_OcclusionSource__Enum.h>
#include <Modloader/app/structs/AmbientOcclusion_SampleCount__Enum.h>
#if defined(IL2CPP_STRUCT_AmbientOcclusion_SampleCount__Enum_DEFINED) && defined(IL2CPP_STRUCT_AmbientOcclusion_OcclusionSource__Enum_DEFINED)
#define IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_DEFINED
struct __declspec(align(8)) AmbientOcclusion_Settings__Fields {
    float intensity;
    float radius;
    AmbientOcclusion_SampleCount__Enum sampleCount;

    int32_t sampleCountValue;
    bool downsampling;
    bool ambientOnly;
    AmbientOcclusion_OcclusionSource__Enum occlusionSource;

    bool debug;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_FWDDECL)
#define IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AmbientOcclusion_Settings__Fields_FWDDECL)
#include <Modloader/app/structs/AmbientOcclusion_Settings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AmbientOcclusion_Settings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
