#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Bloom__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Bloom__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom__Fields_DEFINED)
#include <Modloader/app/structs/Bloom_BloomQuality__Enum.h>
#include <Modloader/app/structs/Bloom_BloomScreenBlendMode__Enum.h>
#include <Modloader/app/structs/Bloom_HDRBloomMode__Enum.h>
#include <Modloader/app/structs/Bloom_LensFlareStyle__Enum.h>
#include <Modloader/app/structs/Bloom_TweakMode__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bloom_TweakMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bloom_BloomScreenBlendMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bloom_HDRBloomMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Bloom_BloomQuality__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Bloom_LensFlareStyle__Enum_DEFINED)
#define IL2CPP_STRUCT_Bloom__Fields_DEFINED
struct Texture2D;
struct Shader;
struct Material;
struct Bloom__Fields {
    struct PostEffectsBase__Fields _;
    Bloom_TweakMode__Enum tweakMode;

    Bloom_BloomScreenBlendMode__Enum screenBlendMode;

    Bloom_HDRBloomMode__Enum hdr;

    bool doHdr;
    float sepBlurSpread;
    Bloom_BloomQuality__Enum quality;

    float bloomIntensity;
    float bloomThreshold;
    struct Color bloomThresholdColor;
    int32_t bloomBlurIterations;
    int32_t hollywoodFlareBlurIterations;
    float flareRotation;
    Bloom_LensFlareStyle__Enum lensflareMode;

    float hollyStretchWidth;
    float lensflareIntensity;
    float lensflareThreshold;
    float lensFlareSaturation;
    struct Color flareColorA;
    struct Color flareColorB;
    struct Color flareColorC;
    struct Color flareColorD;
    struct Texture2D* lensFlareVignetteMask;
    struct Shader* lensFlareShader;
    struct Material* lensFlareMaterial;
    struct Shader* screenBlendShader;
    struct Material* screenBlend;
    struct Shader* blurAndFlaresShader;
    struct Material* blurAndFlaresMaterial;
    struct Shader* brightPassFilterShader;
    struct Material* brightPassFilterMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Bloom__Fields_FWDDECL)
#define IL2CPP_STRUCT_Bloom__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Bloom__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Bloom__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Bloom__Fields_FWDDECL)
#include <Modloader/app/structs/Bloom__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Bloom__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
