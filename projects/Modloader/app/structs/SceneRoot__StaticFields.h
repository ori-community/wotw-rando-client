#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneRoot__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneRoot__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRoot__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SceneRoot__StaticFields_DEFINED
struct Action_1_SceneRoot_;
struct SceneRoot__StaticFields {
    bool CleanUpSceneRootListsOnDestroy;
    bool SkipResourceDestroyTasks;
    bool SkipTimesliceDestroyTasks;
    struct Action_1_SceneRoot_* OnRuntimeEditorStart;
    bool SkipEnableListRefreshing;
    bool ShouldDrawWorldMapGizmos;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneRoot__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SceneRoot__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_SceneRoot_.h>
#endif
#undef IL2CPP_STRUCT_SceneRoot__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneRoot__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SceneRoot__StaticFields_FWDDECL)
#include <Modloader/app/structs/SceneRoot__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneRoot__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
