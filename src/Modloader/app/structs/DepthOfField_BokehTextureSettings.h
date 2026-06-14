#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_DEFINED)
#define IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_DEFINED
struct Texture2D;
struct DepthOfField_BokehTextureSettings {
    struct Texture2D* texture;
    float scale;
    float intensity;
    float threshold;
    float spawnHeuristic;
};
#endif
#if !defined(IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_FWDDECL)
#define IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_DEFINED) && !defined(IL2CPP_STRUCT_DepthOfField_BokehTextureSettings_FWDDECL)
#include <Modloader/app/structs/DepthOfField_BokehTextureSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DepthOfField_BokehTextureSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
