#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_DEFINED)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_DEFINED
struct RaycastHit__Array;
struct MortarEntity_AimVeloCache_Caster__StaticFields {
    float ArcMaxDuration;
    float ArcTimeStep;
    float HitTolerance;
    struct RaycastHit__Array* s_smallRaycastCache;
};
#endif
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_FWDDECL
#include <Modloader/app/structs/RaycastHit__Array.h>
#endif
#undef IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_MortarEntity_AimVeloCache_Caster__StaticFields_FWDDECL)
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Caster__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarEntity_AimVeloCache_Caster__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
