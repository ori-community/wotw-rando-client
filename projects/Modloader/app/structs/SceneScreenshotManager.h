#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneScreenshotManager_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneScreenshotManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotManager_DEFINED)
#include <Modloader/app/structs/SceneScreenshotManager__Fields.h>
#if defined(IL2CPP_STRUCT_SceneScreenshotManager__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneScreenshotManager_DEFINED
struct SceneScreenshotManager__Class;
struct SceneScreenshotManager {
    struct SceneScreenshotManager__Class* klass;
    MonitorData* monitor;
    struct SceneScreenshotManager__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneScreenshotManager_FWDDECL)
#define IL2CPP_STRUCT_SceneScreenshotManager_FWDDECL
#include <Modloader/app/structs/SceneScreenshotManager__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneScreenshotManager_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotManager_DEFINED) && !defined(IL2CPP_STRUCT_SceneScreenshotManager_FWDDECL)
#include <Modloader/app/structs/SceneScreenshotManager.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneScreenshotManager.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
