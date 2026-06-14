#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FishEnemySettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FishEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_FishEnemySettings__Fields_DEFINED
struct AnimationCurve;
struct __declspec(align(8)) FishEnemySettings__Fields {
    struct AnimationCurve* IdleSpeedOverDistance;
    struct AnimationCurve* AttackDistanceOverTime;
    struct AnimationCurve* AttackAngleOverTime;
    struct AnimationCurve* SwimSpeedOverTime;
    float EnterSwimRange;
    float ExitSwimRange;
    float AttackRange;
    float MaxSwimDistance;
    float MinSwimDuration;
    float IdleSpeed;
    float SwimSpeed;
    float AttackSpeed;
    float Gravity;
    float IdleTurnSpeed;
    float SwimTurnSpeed;
    float AttackDuration;
    float BounceDuration;
    float BashDuration;
    float BashSpeed;
};
#endif
#if !defined(IL2CPP_STRUCT_FishEnemySettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_FishEnemySettings__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#undef IL2CPP_STRUCT_FishEnemySettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FishEnemySettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FishEnemySettings__Fields_FWDDECL)
#include <Modloader/app/structs/FishEnemySettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FishEnemySettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
