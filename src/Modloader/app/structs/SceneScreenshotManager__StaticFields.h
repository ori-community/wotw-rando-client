#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_DEFINED
struct Action_1_SceneScreenshotManager_;
struct Action_1_System_Collections_Generic_List_1_;
struct SceneScreenshotManager;
struct List_1_SceneScreenshot_;
struct List_1_System_String_;
struct Dictionary_2_System_String_System_Boolean_;
struct HashSet_1_SceneScreenshot_;
struct SceneScreenshotManager__StaticFields {
    struct Action_1_SceneScreenshotManager_* OnAfterCreate;
    struct Action_1_SceneScreenshotManager_* OnBeforeDelete;
    struct Action_1_System_Collections_Generic_List_1_* OnScreenshotsUpdated;
    bool ShouldDesaturateScreenshots;
    bool ShouldDarkenScreenshots;
    struct SceneScreenshotManager* Instance;
    struct List_1_SceneScreenshot_* s_selectedScreenshots;
    struct List_1_SceneScreenshot_* s_selectedScreenshotsToStream;
    bool FilterBuildSettingsScenes;
    bool FilterScenes;
    struct List_1_System_String_* AreaSceneFilter;
    struct Dictionary_2_System_String_System_Boolean_* Areas;
    struct HashSet_1_SceneScreenshot_* SelectedScreenshots;
    struct HashSet_1_SceneScreenshot_* IntersectedCollection;
};
#endif
#if !defined(IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_SceneScreenshotManager_.h>
#include <Modloader/app/structs/Action_1_System_Collections_Generic_List_1_.h>
#include <Modloader/app/structs/Dictionary_2_System_String_System_Boolean_.h>
#include <Modloader/app/structs/HashSet_1_SceneScreenshot_.h>
#include <Modloader/app/structs/List_1_SceneScreenshot_.h>
#include <Modloader/app/structs/List_1_System_String_.h>
#include <Modloader/app/structs/SceneScreenshotManager.h>
#endif
#undef IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_SceneScreenshotManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/SceneScreenshotManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneScreenshotManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
