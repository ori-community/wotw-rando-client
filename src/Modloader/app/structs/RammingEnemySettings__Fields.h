#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RammingEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RammingEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_RammingEnemySettings__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) RammingEnemySettings__Fields {
    float AlertDuration;
    float StunnedDuration;
    float RunSpeed;
    float BrakingDuration;
    float AccelerationDuration;
    float AlertRange;
    float Gravity;
    float HitWallStunSpeed;
    float KnockBackSpeed;
    float BouncingDuration;
    float KnockBackDuration;
    float RecoverTime;
    float BashSpeed;
    float RetreatSpeed;
    float RetreatDistance;
    bool CanDieToLevelUpBlast;
    struct AnimationCurve* RunningSpeedMultipliedOverTime;
    struct AnimationCurve* BrakingSpeedMultiplierOverTime;
    struct AnimationCurve* BouncingSpeedMultiplierOverTime;
};
#endif
#if !defined(IL2CPP_STRUCT_RammingEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RammingEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_RammingEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RammingEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RammingEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/RammingEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RammingEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
