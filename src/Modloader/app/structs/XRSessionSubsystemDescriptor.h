#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRSessionSubsystemDescriptor_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRSessionSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRSessionSubsystemDescriptor_DEFINED)
#include <Modloader/app/structs/XRSessionSubsystemDescriptor__Fields.h>
#if defined(IL2CPP_STRUCT_XRSessionSubsystemDescriptor__Fields_DEFINED)
#define IL2CPP_STRUCT_XRSessionSubsystemDescriptor_DEFINED
struct XRSessionSubsystemDescriptor__Class;
struct XRSessionSubsystemDescriptor {
    struct XRSessionSubsystemDescriptor__Class* klass;
    MonitorData* monitor;
    struct XRSessionSubsystemDescriptor__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRSessionSubsystemDescriptor_FWDDECL)
#define IL2CPP_STRUCT_XRSessionSubsystemDescriptor_FWDDECL
#include <Modloader/app/structs/XRSessionSubsystemDescriptor__Class.h>
#endif
#undef IL2CPP_STRUCT_XRSessionSubsystemDescriptor_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRSessionSubsystemDescriptor_DEFINED) && !defined(IL2CPP_STRUCT_XRSessionSubsystemDescriptor_FWDDECL)
#include <Modloader/app/structs/XRSessionSubsystemDescriptor.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRSessionSubsystemDescriptor.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
