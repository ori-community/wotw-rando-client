#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneInspector__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneInspector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneInspector__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SceneInspector__StaticFields_DEFINED
struct SceneInspector;
struct HashSet_1_Moon_ISuspendable_;
struct Int32__Array;
struct SceneInspector__StaticFields {
    struct SceneInspector* Instance;
    struct Color BLACK_COLOR;
    struct Color BACKGROUND_COLOR;
    struct Color ENABLED_SCENE_COLOR;
    struct Color UNREADIED_SCENE_COLOR;
    struct Color ENABLING_SCENE_COLOR;
    struct Color LOADING_SCENE_COLOR;
    struct Color UNLOADING_SCENE_COLOR;
    struct Color DISABLED_SCENE_COLOR;
    struct Color DISABLING_SCENE_COLOR;
    struct Color WAITING_TO_DISABLE_COLOR;
    struct Color CHECKPOINT_OUTLINE_COLOR;
    struct Color UNREGISTERED_SCENE_COLOR;
    struct Color UNREGISTERED_SCENE_OUTLINE_COLOR;
    struct Color BLOCKING_SCENE_OUTLINE_COLOR;
    struct Color LOADING_CANCELLED_COLOR;
    struct Color NEARBY_SCENE_OUTLINE;
    struct Color NEARBY_SCENE_TO_LOAD_OUTLINE;
    struct Color CLEAR_COLOR;
    struct Color PREDICTED_CAMERA_POSITION_COLOR;
    struct Color QUEUED_SCENE_COLOR;
    struct Color SEIN_MARKER_LOCATION;
    struct HashSet_1_Moon_ISuspendable_* s_suspendablesToIgnoreForGameplay;
    struct Int32__Array* numberBits;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneInspector__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SceneInspector__StaticFields_FWDDECL
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/SceneInspector.h>
#endif
#undef IL2CPP_STRUCT_SceneInspector__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneInspector__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SceneInspector__StaticFields_FWDDECL)
#include <Modloader/app/structs/SceneInspector__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneInspector__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
