#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneScreenshotExporter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneScreenshotExporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotExporter_DEFINED)
#include <Modloader/app/structs/SceneScreenshotExporter__Fields.h>
#if defined(IL2CPP_STRUCT_SceneScreenshotExporter__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneScreenshotExporter_DEFINED
struct SceneScreenshotExporter__Class;
struct SceneScreenshotExporter {
    struct SceneScreenshotExporter__Class* klass;
    MonitorData* monitor;
    struct SceneScreenshotExporter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneScreenshotExporter_FWDDECL)
#define IL2CPP_STRUCT_SceneScreenshotExporter_FWDDECL
#include <Modloader/app/structs/SceneScreenshotExporter__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneScreenshotExporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneScreenshotExporter_DEFINED) && !defined(IL2CPP_STRUCT_SceneScreenshotExporter_FWDDECL)
#include <Modloader/app/structs/SceneScreenshotExporter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneScreenshotExporter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
