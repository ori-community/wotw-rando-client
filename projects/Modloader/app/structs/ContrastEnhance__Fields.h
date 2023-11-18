#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ContrastEnhance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ContrastEnhance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastEnhance__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED)
#define IL2CPP_STRUCT_ContrastEnhance__Fields_DEFINED
struct Material;
struct Shader;
struct ContrastEnhance__Fields {
    struct PostEffectsBase__Fields _;
    float intensity;
    float threshold;
    struct Material* separableBlurMaterial;
    struct Material* contrastCompositeMaterial;
    float blurSpread;
    struct Shader* separableBlurShader;
    struct Shader* contrastCompositeShader;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ContrastEnhance__Fields_FWDDECL)
#define IL2CPP_STRUCT_ContrastEnhance__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_ContrastEnhance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ContrastEnhance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ContrastEnhance__Fields_FWDDECL)
#include <Modloader/app/structs/ContrastEnhance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ContrastEnhance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
