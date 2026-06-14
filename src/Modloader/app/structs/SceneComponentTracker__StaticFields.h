#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneComponentTracker__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneComponentTracker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponentTracker__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SceneComponentTracker__StaticFields_DEFINED
struct Dictionary_2_System_Type_ISceneComponentTracker_;
struct Action_1_UnityEngine_Component_;
struct SceneComponentTracker__StaticFields {
    struct Dictionary_2_System_Type_ISceneComponentTracker_* s_trackerMap;
    struct Action_1_UnityEngine_Component_* OnRegisterComponent;
    struct Action_1_UnityEngine_Component_* OnUnregisterComponent;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneComponentTracker__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SceneComponentTracker__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_ISceneComponentTracker_.h>
#endif
#undef IL2CPP_STRUCT_SceneComponentTracker__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneComponentTracker__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SceneComponentTracker__StaticFields_FWDDECL)
#include <Modloader/app/structs/SceneComponentTracker__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneComponentTracker__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
