#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#include <Modloader/app/structs/VignetteAndChromaticAberration_AberrationMode__Enum.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_VignetteAndChromaticAberration_AberrationMode__Enum_DEFINED)
#define IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_DEFINED
struct Shader;
struct Material;
struct VignetteAndChromaticAberration__Fields {
    struct PostEffectsBase__Fields _;
    VignetteAndChromaticAberration_AberrationMode__Enum mode;

    float intensity;
    float chromaticAberration;
    float axialAberration;
    float blur;
    float blurSpread;
    float luminanceDependency;
    float blurDistance;
    struct Shader* vignetteShader;
    struct Shader* separableBlurShader;
    struct Shader* chromAberrationShader;
    struct Material* m_VignetteMaterial;
    struct Material* m_SeparableBlurMaterial;
    struct Material* m_ChromAberrationMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_FWDDECL)
#define IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VignetteAndChromaticAberration__Fields_FWDDECL)
#include <Modloader/app/structs/VignetteAndChromaticAberration__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VignetteAndChromaticAberration__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
