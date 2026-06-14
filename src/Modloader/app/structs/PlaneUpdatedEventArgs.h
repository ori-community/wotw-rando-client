#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaneUpdatedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaneUpdatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs_DEFINED)
#include <Modloader/app/structs/BoundedPlane.h>
#if defined(IL2CPP_STRUCT_BoundedPlane_DEFINED)
#define IL2CPP_STRUCT_PlaneUpdatedEventArgs_DEFINED
struct XRPlaneSubsystem;
struct PlaneUpdatedEventArgs {
    struct XRPlaneSubsystem* _PlaneSubsystem_k__BackingField;
    struct BoundedPlane _Plane_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_PlaneUpdatedEventArgs_FWDDECL
#include <Modloader/app/structs/XRPlaneSubsystem.h>
#endif
#undef IL2CPP_STRUCT_PlaneUpdatedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_PlaneUpdatedEventArgs_FWDDECL)
#include <Modloader/app/structs/PlaneUpdatedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaneUpdatedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
