#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LensDistortionBlur__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LensDistortionBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensDistortionBlur__Fields_DEFINED)
#include <Modloader/app/structs/BaseEffect__Fields.h>
#include <Modloader/app/structs/LensDistortionBlur_QualityPreset__Enum.h>
#if defined(IL2CPP_STRUCT_BaseEffect__Fields_DEFINED) && defined(IL2CPP_STRUCT_LensDistortionBlur_QualityPreset__Enum_DEFINED)
#define IL2CPP_STRUCT_LensDistortionBlur__Fields_DEFINED
struct LensDistortionBlur__Fields {
    struct BaseEffect__Fields _;
    LensDistortionBlur_QualityPreset__Enum Quality;

    int32_t Samples;
    float Distortion;
    float CubicDistortion;
    float Scale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LensDistortionBlur__Fields_FWDDECL)
#define IL2CPP_STRUCT_LensDistortionBlur__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LensDistortionBlur__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LensDistortionBlur__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LensDistortionBlur__Fields_FWDDECL)
#include <Modloader/app/structs/LensDistortionBlur__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LensDistortionBlur__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
