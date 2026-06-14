#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_DEFINED
struct SceneMetaData;
struct LoadFirstBuildSceneAction__Fields {
    struct ActionMethod__Fields _;
    struct SceneMetaData* SceneMetaData;
    struct SceneMetaData* VeryFirstScene;
    float FadeDuration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_FWDDECL
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_FWDDECL)
#include <Modloader/app/structs/LoadFirstBuildSceneAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadFirstBuildSceneAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
