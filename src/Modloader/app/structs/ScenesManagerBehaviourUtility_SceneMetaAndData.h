#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_DEFINED)
#include <Modloader/app/structs/NearbySceneData.h>
#if defined(IL2CPP_STRUCT_NearbySceneData_DEFINED)
#define IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_DEFINED
struct RuntimeSceneMetaData;
struct ScenesManagerBehaviourUtility_SceneMetaAndData {
    struct RuntimeSceneMetaData* scene;
    struct NearbySceneData sceneData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_FWDDECL)
#define IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_FWDDECL
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManagerBehaviourUtility_SceneMetaAndData_FWDDECL)
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManagerBehaviourUtility_SceneMetaAndData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
