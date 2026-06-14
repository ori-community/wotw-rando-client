#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRDepthSubsystemDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRDepthSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDepthSubsystemDescriptor_DEFINED)
#include <Modloader/app/structs/XRDepthSubsystemDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_XRDepthSubsystemDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_XRDepthSubsystemDescriptor_DEFINED
struct XRDepthSubsystemDescriptor__Class;
struct XRDepthSubsystemDescriptor {
    struct XRDepthSubsystemDescriptor__Class* klass;
    MonitorData* monitor;
    struct XRDepthSubsystemDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRDepthSubsystemDescriptor_FWDDECL)
#define IL2CPP_STRUCT_XRDepthSubsystemDescriptor_FWDDECL
#include <Modloader/app/structs/XRDepthSubsystemDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_XRDepthSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRDepthSubsystemDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_XRDepthSubsystemDescriptor_FWDDECL)
#include <Modloader/app/structs/XRDepthSubsystemDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRDepthSubsystemDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
