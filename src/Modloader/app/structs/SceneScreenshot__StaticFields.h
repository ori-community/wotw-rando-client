#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneScreenshot__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneScreenshot__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshot__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_SceneScreenshot__StaticFields_DEFINED
struct Action_1_SceneMetaData_;
struct Action_2_SceneMetaData_String_;
struct List_1_SceneScreenshot_BackgroundSceneMoveData_;
struct SceneScreenshot__StaticFields {
    struct Action_1_SceneMetaData_* DeleteRoomFunction;
    struct Action_2_SceneMetaData_String_* RenameRoomFunction;
    struct List_1_SceneScreenshot_BackgroundSceneMoveData_* SceneMoveData;
    bool ShouldMoveBackgroundScenes;
    bool DisableSceneRenameDialog;
    bool CustomColoringEnabled;
    struct Color HighlightTint;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneScreenshot__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SceneScreenshot__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_SceneMetaData_.h>
#include <Modloader/app/structs/Action_2_SceneMetaData_String_.h>
#include <Modloader/app/structs/List_1_SceneScreenshot_BackgroundSceneMoveData_.h>
#endif
#undef IL2CPP_STRUCT_SceneScreenshot__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshot__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SceneScreenshot__StaticFields_FWDDECL)
#include <Modloader/app/structs/SceneScreenshot__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneScreenshot__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
