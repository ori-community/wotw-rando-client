#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) KamikazeSootEnemySettings__Fields {
    float InRange;
    float OutRange;
    float RollAcceleration;
    float RollDecceleration;
    float MaxRollSpeed;
    float RunAcceleration;
    float MaxRunSpeed;
    float WalkAcceleration;
    float MaxWalkSpeed;
    float Decceleration;
    float Gravity;
    float MaxFallSpeed;
    float AlertDuration;
    float RunDuration;
    float AirDeceleration;
    int32_t ExplosionDamage;
    struct GameObject* RespawnEffect;
};
#endif
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeSootEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/KamikazeSootEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeSootEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
