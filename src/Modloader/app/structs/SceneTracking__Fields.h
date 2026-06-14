#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneTracking__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneTracking__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTracking__Fields_DEFINED)
#include <Modloader/app/structs/SceneDeletionFlags__Enum.h>
#if defined(IL2CPP_STRUCT_SceneDeletionFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneTracking__Fields_DEFINED
struct Single__Array;
struct List_1_System_Int32_;
struct String;
struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_;
struct __declspec(align(8)) SceneTracking__Fields {
    bool TrackProgress;
    int32_t TotalProgress;
    int32_t ArtProgressInteger;
    struct Single__Array* ArtProgressValues;
    int32_t ArtPriority;
    SceneDeletionFlags__Enum SceneDeletion;

    struct List_1_System_Int32_* Areas;
    bool IsKeyScene;
    bool IsProduction;
    struct String* Comments;
    struct List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_* History;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneTracking__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneTracking__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_EditorTools_SceneTracking_SceneTrackingChange_.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneTracking__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTracking__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneTracking__Fields_FWDDECL)
#include <Modloader/app/structs/SceneTracking__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneTracking__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
