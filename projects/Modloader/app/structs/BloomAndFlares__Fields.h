#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BloomAndFlares__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BloomAndFlares__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomAndFlares__Fields_DEFINED)
#include <Modloader/app/structs/BloomScreenBlendMode__Enum.h>
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/HDRBloomMode__Enum.h>
#include <Modloader/app/structs/LensflareStyle34__Enum.h>
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/TweakMode34__Enum.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_TweakMode34__Enum_DEFINED) && defined(IL2CPP_STRUCT_BloomScreenBlendMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_HDRBloomMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_LensflareStyle34__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_BloomAndFlares__Fields_DEFINED
struct Texture2D;
struct Shader;
struct Material;
struct BloomAndFlares__Fields {
    struct PostEffectsBase__Fields _;
    TweakMode34__Enum tweakMode;

    BloomScreenBlendMode__Enum screenBlendMode;

    HDRBloomMode__Enum hdr;

    bool doHdr;
    float sepBlurSpread;
    float useSrcAlphaAsMask;
    float bloomIntensity;
    float bloomThreshold;
    int32_t bloomBlurIterations;
    bool lensflares;
    int32_t hollywoodFlareBlurIterations;
    LensflareStyle34__Enum lensflareMode;

    float hollyStretchWidth;
    float lensflareIntensity;
    float lensflareThreshold;
    struct Color flareColorA;
    struct Color flareColorB;
    struct Color flareColorC;
    struct Color flareColorD;
    struct Texture2D* lensFlareVignetteMask;
    struct Shader* lensFlareShader;
    struct Material* lensFlareMaterial;
    struct Shader* vignetteShader;
    struct Material* vignetteMaterial;
    struct Shader* separableBlurShader;
    struct Material* separableBlurMaterial;
    struct Shader* addBrightStuffOneOneShader;
    struct Material* addBrightStuffBlendOneOneMaterial;
    struct Shader* screenBlendShader;
    struct Material* screenBlend;
    struct Shader* hollywoodFlaresShader;
    struct Material* hollywoodFlaresMaterial;
    struct Shader* brightPassFilterShader;
    struct Material* brightPassFilterMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BloomAndFlares__Fields_FWDDECL)
#define IL2CPP_STRUCT_BloomAndFlares__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_BloomAndFlares__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BloomAndFlares__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BloomAndFlares__Fields_FWDDECL)
#include <Modloader/app/structs/BloomAndFlares__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BloomAndFlares__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
