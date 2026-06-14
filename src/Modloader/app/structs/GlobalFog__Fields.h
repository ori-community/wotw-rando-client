#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalFog__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalFog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalFog__Fields_DEFINED)
#include <Modloader/app/structs/PostEffectsBase__Fields.h>
#if defined(IL2CPP_STRUCT_PostEffectsBase__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalFog__Fields_DEFINED
struct Shader;
struct Material;
struct GlobalFog__Fields {
    struct PostEffectsBase__Fields _;
    bool distanceFog;
    bool excludeFarPixels;
    bool useRadialDistance;
    bool heightFog;
    float height;
    float heightDensity;
    float startDistance;
    struct Shader* fogShader;
    struct Material* fogMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalFog__Fields_FWDDECL)
#define IL2CPP_STRUCT_GlobalFog__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#endif
#undef IL2CPP_STRUCT_GlobalFog__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalFog__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GlobalFog__Fields_FWDDECL)
#include <Modloader/app/structs/GlobalFog__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalFog__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
