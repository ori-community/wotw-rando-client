#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormSettings__Fields_DEFINED
struct __declspec(align(8)) MortarWormSettings__Fields {
    float HideDistance;
    float ShootDelay;
    float MinHideTime;
    float ProjectileSpeed;
    float ProjectileGravity;
    float ProjectileDamage;
    bool CanTurnAround;
    float ChargingDuration;
    float ShootingDuration;
    float WaitBetweenShots;
};
#endif
#if !defined(IL2CPP_STRUCT_MortarWormSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarWormSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MortarWormSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormSettings__Fields_FWDDECL)
#include <Modloader/app/structs/MortarWormSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
