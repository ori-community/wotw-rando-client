#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsEffectsMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffectsMap__Fields_DEFINED)
#include <Modloader/app/structs/MaterialBasedResourceMap__Fields.h>
#if defined(IL2CPP_STRUCT_MaterialBasedResourceMap__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsEffectsMap__Fields_DEFINED
struct PhysicsEffects;
struct MaterialBasedPhysicsEffects__Array;
struct PhysicsEffectsMap__Fields {
    struct MaterialBasedResourceMap__Fields _;
    float FootstepDetailTimeGateVariation;
    float FootstepDetailDistanceGateVariation;
    struct PhysicsEffects* DefaultPhysicsEffects;
    struct MaterialBasedPhysicsEffects__Array* PhysicsEffects;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsEffectsMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsEffectsMap__Fields_FWDDECL
#include <Modloader/app/structs/MaterialBasedPhysicsEffects__Array.h>
#include <Modloader/app/structs/PhysicsEffects.h>
#endif
#undef IL2CPP_STRUCT_PhysicsEffectsMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsEffectsMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsEffectsMap__Fields_FWDDECL)
#include <Modloader/app/structs/PhysicsEffectsMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsEffectsMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
