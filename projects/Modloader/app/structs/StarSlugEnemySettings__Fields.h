#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StarSlugEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StarSlugEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_StarSlugEnemySettings__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct __declspec(align(8)) StarSlugEnemySettings__Fields {
    float WalkSpeed;
    struct AnimationCurve* WalkSpeedMultiplier;
    float ProjectileSpeed;
    struct GameObject* Projectile;
    float BashedSlugSpeed;
    struct GameObject* ShootEffect;
    bool SpawnProjectileOnDeath;
};
#endif
#if !defined(IL2CPP_STRUCT_StarSlugEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_StarSlugEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_StarSlugEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StarSlugEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StarSlugEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/StarSlugEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StarSlugEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
