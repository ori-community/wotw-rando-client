#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_DEFINED
struct RuntimeSceneMetaData;
struct List_1_MoonGuid_;
struct SceneLoadingQueue_QueueSceneToLoad {
    struct RuntimeSceneMetaData* Data;
    struct List_1_MoonGuid_* IncludedScenes;
    float AddTime;
    bool PreventUnloading;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_FWDDECL
#include <Modloader/app/structs/List_1_MoonGuid_.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_FWDDECL)
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
