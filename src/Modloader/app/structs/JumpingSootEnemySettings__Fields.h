#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_DEFINED
struct GameObject;
struct __declspec(align(8)) JumpingSootEnemySettings__Fields {
    float ChargeRange;
    float JumpHeight;
    float ShortJumpHeight;
    float JumpDistance;
    float StompAttackDistance;
    float Gravity;
    float MaxFallSpeed;
    float SphereCastRadius;
    struct LayerMask SphereCastMask;
    float ChargingDuration;
    float StunnedDuration;
    float ThrownDrag;
    int32_t GroundStompDamage;
    float ExplosionDamage;
    bool HasStompExplosion;
    struct GameObject* RespawnEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpingSootEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/JumpingSootEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpingSootEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
