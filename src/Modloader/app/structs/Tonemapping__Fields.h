#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tonemapping__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tonemapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tonemapping__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/RenderTextureFormat__Enum.h>
#include <Modloader/app/structs/Tonemapping_AdaptiveTexSize__Enum.h>
#include <Modloader/app/structs/Tonemapping_TonemapperType__Enum.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Tonemapping_TonemapperType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Tonemapping_AdaptiveTexSize__Enum_DEFINED) && defined(IL2CPP_STRUCT_RenderTextureFormat__Enum_DEFINED)
#define IL2CPP_STRUCT_Tonemapping__Fields_DEFINED
struct AnimationCurve;
struct Texture2D;
struct Shader;
struct Material;
struct RenderTexture;
struct Tonemapping__Fields {
    struct PostEffectsBase__Fields _;
    Tonemapping_TonemapperType__Enum type;

    Tonemapping_AdaptiveTexSize__Enum adaptiveTextureSize;

    struct AnimationCurve* remapCurve;
    struct Texture2D* curveTex;
    float exposureAdjustment;
    float middleGrey;
    float white;
    float adaptionSpeed;
    struct Shader* tonemapper;
    bool validRenderTextureFormat;
    struct Material* tonemapMaterial;
    struct RenderTexture* rt;
    RenderTextureFormat__Enum rtFormat;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tonemapping__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tonemapping__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_Tonemapping__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tonemapping__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tonemapping__Fields_FWDDECL)
#include <Modloader/app/structs/Tonemapping__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tonemapping__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
