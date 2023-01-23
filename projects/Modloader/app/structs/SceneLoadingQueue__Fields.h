#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingQueue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingQueue__Fields_DEFINED
struct List_1_SceneLoadingQueue_QueueSceneToLoad_;
struct SceneLoadingQueue_QueueListComparer;
struct __declspec(align(8)) SceneLoadingQueue__Fields {
    struct List_1_SceneLoadingQueue_QueueSceneToLoad_* m_queuedScenesToLoad;
    struct SceneLoadingQueue_QueueListComparer* m_queueComparer;
    int32_t MinScenesInQueue;
    float QueuePurgeTime;
    int32_t MaxUtilityToLoad;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingQueue__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SceneLoadingQueue_QueueSceneToLoad_.h>
#include <Modloader/app/structs/SceneLoadingQueue_QueueListComparer.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingQueue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingQueue__Fields_FWDDECL)
#include <Modloader/app/structs/SceneLoadingQueue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingQueue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
