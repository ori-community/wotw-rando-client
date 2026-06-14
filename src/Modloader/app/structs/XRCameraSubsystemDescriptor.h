#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRCameraSubsystemDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRCameraSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRCameraSubsystemDescriptor_DEFINED)
#include <Modloader/app/structs/XRCameraSubsystemDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_XRCameraSubsystemDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_XRCameraSubsystemDescriptor_DEFINED
struct XRCameraSubsystemDescriptor__Class;
struct XRCameraSubsystemDescriptor {
    struct XRCameraSubsystemDescriptor__Class* klass;
    MonitorData* monitor;
    struct XRCameraSubsystemDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRCameraSubsystemDescriptor_FWDDECL)
#define IL2CPP_STRUCT_XRCameraSubsystemDescriptor_FWDDECL
#include <Modloader/app/structs/XRCameraSubsystemDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_XRCameraSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRCameraSubsystemDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_XRCameraSubsystemDescriptor_FWDDECL)
#include <Modloader/app/structs/XRCameraSubsystemDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRCameraSubsystemDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
