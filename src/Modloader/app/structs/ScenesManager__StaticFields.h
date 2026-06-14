#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScenesManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScenesManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager__StaticFields_DEFINED)
#include <Modloader/app/structs/SceneLoadingQueuePriorityMode__Enum.h>
#if defined(IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_DEFINED)
#define IL2CPP_STRUCT_ScenesManager__StaticFields_DEFINED
struct List_1_Moon_IRectProvider_;
struct List_1_System_Int32_;
struct ScenesManager__StaticFields {
    bool UseAggressiveOriAndCameraBlocking;
    SceneLoadingQueuePriorityMode__Enum LoadingQueuePriorityMode;

    bool PruneQueueBeforeLoading;
    bool BypassScenesManager;
    bool DoExtraSceneCleanUp;
    bool UnloadUnneededScenesWhenTeleporting;
    bool UnloadUnneededScenesWhenTeleportingAsync;
    struct List_1_Moon_IRectProvider_* m_tempRectProviderList;
    struct List_1_System_Int32_* m_tempHashList;
    bool OptimizedHashPath;
    int32_t NearbyScenesHops;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScenesManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_ScenesManager__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_IRectProvider_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#endif
#undef IL2CPP_STRUCT_ScenesManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScenesManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_ScenesManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/ScenesManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScenesManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
