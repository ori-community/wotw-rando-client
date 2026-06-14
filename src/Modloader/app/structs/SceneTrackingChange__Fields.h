#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneTrackingChange__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneTrackingChange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTrackingChange__Fields_DEFINED)
#include <Modloader/app/structs/SceneDeletionFlags__Enum.h>
#if defined(IL2CPP_STRUCT_SceneDeletionFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneTrackingChange__Fields_DEFINED
struct List_1_System_Int32_;
struct String;
struct __declspec(align(8)) SceneTrackingChange__Fields {
    int32_t TotalProgress;
    int32_t ArtProgressInteger;
    SceneDeletionFlags__Enum SceneDeletion;

    struct List_1_System_Int32_* Areas;
    bool IsKeyScene;
    bool IsProduction;
    struct String* Comments;
    struct String* Timestamp;
    struct String* Author;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneTrackingChange__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneTrackingChange__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_SceneTrackingChange__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneTrackingChange__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneTrackingChange__Fields_FWDDECL)
#include <Modloader/app/structs/SceneTrackingChange__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneTrackingChange__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
