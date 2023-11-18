#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_DEFINED)
#include <Modloader/app/structs/DamageLayerMask__Enum.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_DamageLayerMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_DEFINED
struct ScaredySkeetoProjectileSettings__Fields {
    struct MonoBehaviour__Fields _;
    float ProjectileSpeed;
    float TurningSpeed;
    float ProjectileGravity;
    float ProjectileDamage;
    DamageWeight__Enum ProjectileDamageWeight;

    DamageLayerMask__Enum DamageLayerMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ScaredySkeetoProjectileSettings__Fields_FWDDECL)
#include <Modloader/app/structs/ScaredySkeetoProjectileSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScaredySkeetoProjectileSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
