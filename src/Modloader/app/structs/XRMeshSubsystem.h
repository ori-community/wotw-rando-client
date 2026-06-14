#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRMeshSubsystem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRMeshSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRMeshSubsystem_DEFINED)
#include <Modloader/app/structs/XRMeshSubsystem__Fields.h>
#if defined(IL2CPP_STRUCT_XRMeshSubsystem__Fields_DEFINED)
#define IL2CPP_STRUCT_XRMeshSubsystem_DEFINED
struct XRMeshSubsystem__Class;
struct XRMeshSubsystem {
    struct XRMeshSubsystem__Class* klass;
    MonitorData* monitor;
    struct XRMeshSubsystem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRMeshSubsystem_FWDDECL)
#define IL2CPP_STRUCT_XRMeshSubsystem_FWDDECL
#include <Modloader/app/structs/XRMeshSubsystem__Class.h>
#endif
#undef IL2CPP_STRUCT_XRMeshSubsystem_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRMeshSubsystem_DEFINED) && !defined(IL2CPP_STRUCT_XRMeshSubsystem_FWDDECL)
#include <Modloader/app/structs/XRMeshSubsystem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRMeshSubsystem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
