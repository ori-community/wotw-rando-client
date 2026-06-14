#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_DEFINED)
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad.h>
#if defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_DEFINED
struct SceneLoadingQueue_QueueSceneToLoad__Array__Class;
struct SceneLoadingQueue_QueueSceneToLoad__Array {
    struct SceneLoadingQueue_QueueSceneToLoad__Array__Class* klass;
    MonitorData* monitor;
    Il2CppArrayBounds* bounds;
    il2cpp_array_size_t max_length;
    struct SceneLoadingQueue_QueueSceneToLoad vector[32];
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_FWDDECL
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Array__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingQueue_QueueSceneToLoad__Array_FWDDECL)
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Array.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingQueue_QueueSceneToLoad__Array.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
