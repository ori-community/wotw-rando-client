#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserShooterEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserShooterEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserShooterEntity__Fields_DEFINED
struct LaserBeam;
struct DamageDealer;
struct Transform;
struct LaserShooterEntity__Fields {
    struct EnemyEntity__Fields _;
    struct LaserBeam* LaserBeam;
    struct DamageDealer* LaserBeamDamageDealer;
    struct Transform* Rotation;
    bool LaserOn;
    bool ProjectilesOn;
    int32_t LaserAttackDamage;
    float LaserAttackFollowSpeed;
    float ProjectileDamage;
    float ProjectileAttackFollowSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserShooterEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LaserShooterEntity__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/LaserBeam.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LaserShooterEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserShooterEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LaserShooterEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LaserShooterEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserShooterEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
