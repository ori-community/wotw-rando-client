#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponRifle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponRifle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponRifle__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/WeaponBase__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_WeaponRifle__Fields_DEFINED
struct Transform;
struct ParticleSystem;
struct WeaponRifle__Fields {
    struct WeaponBase__Fields _;
    struct Transform* shootFrom;
    float range;
    struct LayerMask hitLayers;
    struct ParticleSystem* muzzleFlash;
    struct ParticleSystem* muzzleSmoke;
    struct Transform* bulletHole;
    struct ParticleSystem* bulletHit;
    float smokeFadeOutSpeed;
    float smokeEmission;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponRifle__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponRifle__Fields_FWDDECL
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_WeaponRifle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponRifle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponRifle__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponRifle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponRifle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
