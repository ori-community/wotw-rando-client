#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumetricConfig__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumetricConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricConfig__Fields_DEFINED)
#include <Modloader/app/structs/IntRange.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#include <Modloader/app/structs/VolumetricConfig_BufferPrecision__Enum.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_VolumetricConfig_BufferPrecision__Enum_DEFINED) && defined(IL2CPP_STRUCT_IntRange_DEFINED)
#define IL2CPP_STRUCT_VolumetricConfig__Fields_DEFINED
struct Material;
struct VolumetricConfig__Fields {
    struct ScriptableObject__Fields _;
    bool Enabled;
    float MieScatteringFactor;
    float RayAmount;
    float ExtinctionCoeff;
    float MaxPixelIntensity;
    bool EnableNoise;
    float NoiseSpeed;
    float NoiseSize;
    float NoiseStrength;
    float CameraRayMarchingStepSize;
    float LightRayMarchingStepSinceSize;
    float BlendingSpeed;
    VolumetricConfig_BufferPrecision__Enum Resolution;

    bool DoBlurPass;
    bool useSliceRange;
    struct IntRange sliceRange;
    struct Material* RenderMaterial;
    struct Material* DepthComposeMaterial;
    struct Material* LightComposeMaterial;
    struct Material* LightBlurMaterial;
    struct Material* LightTemporalBlend;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumetricConfig__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumetricConfig__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#endif
#undef IL2CPP_STRUCT_VolumetricConfig__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumetricConfig__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumetricConfig__Fields_FWDDECL)
#include <Modloader/app/structs/VolumetricConfig__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumetricConfig__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
