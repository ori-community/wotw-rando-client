#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_DEFINED)
#define IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_DEFINED
struct SceneMetaData;
struct UberAtlasExclusions_SceneExclusion {
    struct SceneMetaData* Meta;
    bool ExcludeFromLayerDownsampling;
    bool ExcludeFromDofDownsampling;
};
#endif
#if !defined(IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_FWDDECL)
#define IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_FWDDECL
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_DEFINED) && !defined(IL2CPP_STRUCT_UberAtlasExclusions_SceneExclusion_FWDDECL)
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberAtlasExclusions_SceneExclusion.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
