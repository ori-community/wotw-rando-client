#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_DEFINED)
#include <Modloader/app/structs/XRPlaneSubsystemDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_XRPlaneSubsystemDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_DEFINED
struct XRPlaneSubsystemDescriptor__Class;
struct XRPlaneSubsystemDescriptor {
    struct XRPlaneSubsystemDescriptor__Class* klass;
    MonitorData* monitor;
    struct XRPlaneSubsystemDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_FWDDECL)
#define IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_FWDDECL
#include <Modloader/app/structs/XRPlaneSubsystemDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_XRPlaneSubsystemDescriptor_FWDDECL)
#include <Modloader/app/structs/XRPlaneSubsystemDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRPlaneSubsystemDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
