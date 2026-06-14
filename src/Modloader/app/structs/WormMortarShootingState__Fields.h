#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WormMortarShootingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WormMortarShootingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormMortarShootingState__Fields_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/WormState__Fields.h>
#if defined(IL2CPP_STRUCT_WormState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_WormMortarShootingState__Fields_DEFINED
struct MortarWormDirectionalAnimations;
struct PrefabSpawner;
struct SoundSource;
struct ProjectileSpawner;
struct WormMortarShootingState__Fields {
    struct WormState__Fields _;
    struct MortarWormDirectionalAnimations* m_shoot;
    struct PrefabSpawner* m_shootEffect;
    struct SoundSource* m_shootSound;
    struct ProjectileSpawner* m_projectileSpawner;
    float m_shootDelay;
    float m_projectileDamage;
    struct Vector3 m_projectileAnimationPosition;
    bool m_hasShot;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WormMortarShootingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_WormMortarShootingState__Fields_FWDDECL
#include <Modloader/app/structs/MortarWormDirectionalAnimations.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_WormMortarShootingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WormMortarShootingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WormMortarShootingState__Fields_FWDDECL)
#include <Modloader/app/structs/WormMortarShootingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WormMortarShootingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
