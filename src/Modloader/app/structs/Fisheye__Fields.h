#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Fisheye__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Fisheye__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fisheye__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED)
#define IL2CPP_STRUCT_Fisheye__Fields_DEFINED
struct Shader;
struct Material;
struct Fisheye__Fields {
    struct PostEffectsBase__Fields _;
    float strengthX;
    float strengthY;
    struct Shader* fishEyeShader;
    struct Material* fisheyeMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Fisheye__Fields_FWDDECL)
#define IL2CPP_STRUCT_Fisheye__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_Fisheye__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Fisheye__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Fisheye__Fields_FWDDECL)
#include <Modloader/app/structs/Fisheye__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Fisheye__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
