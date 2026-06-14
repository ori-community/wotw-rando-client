#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraRenderExporter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraRenderExporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraRenderExporter_DEFINED)
#include <Modloader/app/structs/CameraRenderExporter__Fields.h>
#if defined(IL2CPP_STRUCT_CameraRenderExporter__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraRenderExporter_DEFINED
struct CameraRenderExporter__Class;
struct CameraRenderExporter {
    struct CameraRenderExporter__Class* klass;
    MonitorData* monitor;
    struct CameraRenderExporter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraRenderExporter_FWDDECL)
#define IL2CPP_STRUCT_CameraRenderExporter_FWDDECL
#include <Modloader/app/structs/CameraRenderExporter__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraRenderExporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraRenderExporter_DEFINED) && !defined(IL2CPP_STRUCT_CameraRenderExporter_FWDDECL)
#include <Modloader/app/structs/CameraRenderExporter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraRenderExporter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
