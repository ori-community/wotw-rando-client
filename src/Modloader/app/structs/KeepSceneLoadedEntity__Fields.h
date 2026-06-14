#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_DEFINED)
#include <Modloader/app/structs/ScenesManager_SceneManagementMode__Enum.h>
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_ScenesManager_SceneManagementMode__Enum_DEFINED)
#define IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_DEFINED
struct SceneMetaData;
struct RuntimeSceneMetaData;
struct IContext;
struct KeepSceneLoadedEntity__Fields {
    struct TimelineEntity__Fields _;
    bool m_isBlockingLoad;
    struct SceneMetaData* SceneMetaData;
    bool HideSceneOnStop;
    ScenesManager_SceneManagementMode__Enum SceneMode;

    struct RuntimeSceneMetaData* m_runtimeSceneMetaData;
    bool m_isLoaded;
    struct IContext* m_context;
    struct RuntimeSceneMetaData* m_rootMetaData;
    bool m_complete;
    bool IncreaseSceneReferenceCountOnStop;
    bool UnsetPreventUnloadingOnStop;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_FWDDECL
#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData.h>
#endif
#undef IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KeepSceneLoadedEntity__Fields_FWDDECL)
#include <Modloader/app/structs/KeepSceneLoadedEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeepSceneLoadedEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
