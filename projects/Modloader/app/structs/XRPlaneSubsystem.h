#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRPlaneSubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRPlaneSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRPlaneSubsystem_DEFINED)
#include <Modloader/app/structs/XRPlaneSubsystem__Fields.h>
#if defined(IL2CPP_STRUCT_XRPlaneSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_XRPlaneSubsystem_DEFINED
struct XRPlaneSubsystem__Class;
struct XRPlaneSubsystem {
    struct XRPlaneSubsystem__Class* klass;
    MonitorData* monitor;
    struct XRPlaneSubsystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRPlaneSubsystem_FWDDECL)
#define IL2CPP_STRUCT_XRPlaneSubsystem_FWDDECL
#include <Modloader/app/structs/XRPlaneSubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_XRPlaneSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRPlaneSubsystem_DEFINED) && !defined(IL2CPP_STRUCT_XRPlaneSubsystem_FWDDECL)
#include <Modloader/app/structs/XRPlaneSubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRPlaneSubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
