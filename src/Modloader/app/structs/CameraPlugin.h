#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CameraPlugin_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CameraPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPlugin_DEFINED)
#include <Modloader/app/structs/CameraPlugin__Fields.h>
#if defined(IL2CPP_STRUCT_CameraPlugin__Fields_DEFINED)
#define IL2CPP_STRUCT_CameraPlugin_DEFINED
struct CameraPlugin__Class;
struct CameraPlugin {
    struct CameraPlugin__Class* klass;
    MonitorData* monitor;
    struct CameraPlugin__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CameraPlugin_FWDDECL)
#define IL2CPP_STRUCT_CameraPlugin_FWDDECL
#include <Modloader/app/structs/CameraPlugin__Class.h>
#endif
#undef IL2CPP_STRUCT_CameraPlugin_INITIALIZING
#if !defined(IL2CPP_STRUCT_CameraPlugin_DEFINED) && !defined(IL2CPP_STRUCT_CameraPlugin_FWDDECL)
#include <Modloader/app/structs/CameraPlugin.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CameraPlugin.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
