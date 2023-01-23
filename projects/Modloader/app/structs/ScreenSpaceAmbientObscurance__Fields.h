#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED)
#define IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_DEFINED
struct Texture2D;
struct Shader;
struct Material;
struct ScreenSpaceAmbientObscurance__Fields {
    struct PostEffectsBase__Fields _;
    float intensity;
    float radius;
    int32_t blurIterations;
    float blurFilterDistance;
    int32_t downsample;
    struct Texture2D* rand;
    struct Shader* aoShader;
    struct Material* aoMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScreenSpaceAmbientObscurance__Fields_FWDDECL)
#include <Modloader/app/structs/ScreenSpaceAmbientObscurance__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScreenSpaceAmbientObscurance__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
