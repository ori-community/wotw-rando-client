#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_DEFINED
struct GameObject;
struct AnimationCurve;
struct __declspec(align(8)) LegacySwarmEnemySettings__Fields {
    float Acceleration;
    float Decceleration;
    float Speed;
    struct GameObject* Child;
    float AlertRange;
    float Gravity;
    float JumpDelay;
    float JumpStrength;
    struct AnimationCurve* MoveCurve;
    float MaxFallSpeed;
};
#endif
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacySwarmEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/LegacySwarmEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacySwarmEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
