#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PlaneRemovedEventArgs_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PlaneRemovedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs_DEFINED)
#include <Modloader/app/structs/BoundedPlane.h>
#if defined(IL2CPP_STRUCT_BoundedPlane_DEFINED)
#define IL2CPP_STRUCT_PlaneRemovedEventArgs_DEFINED
struct XRPlaneSubsystem;
struct PlaneRemovedEventArgs {
    struct XRPlaneSubsystem* _PlaneSubsystem_k__BackingField;
    struct BoundedPlane _Plane_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs_FWDDECL)
#define IL2CPP_STRUCT_PlaneRemovedEventArgs_FWDDECL
#include <Modloader/app/structs/XRPlaneSubsystem.h>
#endif
#undef IL2CPP_STRUCT_PlaneRemovedEventArgs_INITIALIZING
#if !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs_DEFINED) && !defined(IL2CPP_STRUCT_PlaneRemovedEventArgs_FWDDECL)
#include <Modloader/app/structs/PlaneRemovedEventArgs.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PlaneRemovedEventArgs.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
