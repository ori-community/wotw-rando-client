#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NoiseAndGrain__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NoiseAndGrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndGrain__Fields_DEFINED)
#include <Modloader/app/structs/FilterMode__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_FilterMode__Enum_DEFINED)
#define IL2CPP_STRUCT_NoiseAndGrain__Fields_DEFINED
struct Texture2D;
struct Shader;
struct Material;
struct NoiseAndGrain__Fields {
    struct PostEffectsBase__Fields _;
    float intensityMultiplier;
    float generalIntensity;
    float blackIntensity;
    float whiteIntensity;
    float midGrey;
    bool dx11Grain;
    float softness;
    bool monochrome;
    struct Vector3 intensities;
    struct Vector3 tiling;
    float monochromeTiling;
    FilterMode__Enum filterMode;

    struct Texture2D* noiseTexture;
    struct Shader* noiseShader;
    struct Material* noiseMaterial;
    struct Shader* dx11NoiseShader;
    struct Material* dx11NoiseMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NoiseAndGrain__Fields_FWDDECL)
#define IL2CPP_STRUCT_NoiseAndGrain__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_NoiseAndGrain__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NoiseAndGrain__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NoiseAndGrain__Fields_FWDDECL)
#include <Modloader/app/structs/NoiseAndGrain__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NoiseAndGrain__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
