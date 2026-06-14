#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionUtils__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionUtils__StaticFields_DEFINED)
#define IL2CPP_STRUCT_LocomotionUtils__StaticFields_DEFINED
struct RaycastHit__Array;
struct LocomotionUtils__StaticFields {
    bool DisableGroundEntityStickToSurface;
    bool DisableStatickEntitySnapToGround;
    struct RaycastHit__Array* HitCache;
};
#endif
#if !defined(IL2CPP_STRUCT_LocomotionUtils__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionUtils__StaticFields_FWDDECL
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionUtils__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionUtils__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionUtils__StaticFields_FWDDECL)
#include <Modloader/app/structs/LocomotionUtils__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionUtils__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
