#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropSlugEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropSlugEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DropSlugEnemySettings__Fields_DEFINED
struct AnimationCurve;
struct GameObject;
struct __declspec(align(8)) DropSlugEnemySettings__Fields {
    struct AnimationCurve* SpeedMultiplierOverTime;
    float Speed;
    float BelowOffset;
    float AlertRange;
    float FallRange;
    float HorizontalMaxSpeed;
    float HorizontalAcceleration;
    float ExplosionDamage;
    float ThrownGravity;
    struct GameObject* RespawnEffect;
};
#endif
#if !defined(IL2CPP_STRUCT_DropSlugEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_DropSlugEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_DropSlugEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropSlugEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DropSlugEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/DropSlugEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropSlugEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
