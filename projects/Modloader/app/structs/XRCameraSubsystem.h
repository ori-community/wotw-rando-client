#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRCameraSubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRCameraSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRCameraSubsystem_DEFINED)
#include <Modloader/app/structs/XRCameraSubsystem__Fields.h>
#if defined(IL2CPP_STRUCT_XRCameraSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_XRCameraSubsystem_DEFINED
struct XRCameraSubsystem__Class;
struct XRCameraSubsystem {
    struct XRCameraSubsystem__Class* klass;
    MonitorData* monitor;
    struct XRCameraSubsystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRCameraSubsystem_FWDDECL)
#define IL2CPP_STRUCT_XRCameraSubsystem_FWDDECL
#include <Modloader/app/structs/XRCameraSubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_XRCameraSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRCameraSubsystem_DEFINED) && !defined(IL2CPP_STRUCT_XRCameraSubsystem_FWDDECL)
#include <Modloader/app/structs/XRCameraSubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRCameraSubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
