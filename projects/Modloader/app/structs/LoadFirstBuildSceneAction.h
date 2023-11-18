#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadFirstBuildSceneAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadFirstBuildSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction_DEFINED)
#include <Modloader/app/structs/LoadFirstBuildSceneAction__Fields.h>
#if defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction__Fields_DEFINED)
#define IL2CPP_STRUCT_LoadFirstBuildSceneAction_DEFINED
struct LoadFirstBuildSceneAction__Class;
struct LoadFirstBuildSceneAction {
    struct LoadFirstBuildSceneAction__Class* klass;
    MonitorData* monitor;
    struct LoadFirstBuildSceneAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction_FWDDECL)
#define IL2CPP_STRUCT_LoadFirstBuildSceneAction_FWDDECL
#include <Modloader/app/structs/LoadFirstBuildSceneAction__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadFirstBuildSceneAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction_DEFINED) && !defined(IL2CPP_STRUCT_LoadFirstBuildSceneAction_FWDDECL)
#include <Modloader/app/structs/LoadFirstBuildSceneAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadFirstBuildSceneAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
