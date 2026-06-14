#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_DEFINED
struct MoonTimeline;
struct FirewhirlBeamSpawner;
struct EventTriggerAnimator;
struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_;
struct KwolokBossLocomotion_StayAtRangeSettings;
struct StateMachine_2;
struct KwolokBossButtSlamBehaviour_States;
struct KwolokBossButtSlamBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* PositioningLoopTimeline;
    struct MoonTimeline* ButtSlamTimeline;
    struct FirewhirlBeamSpawner* BeamSpawnerR;
    struct FirewhirlBeamSpawner* BeamSpawnerL;
    struct EventTriggerAnimator* BeamSpawnEvent;
    struct EventTriggerAnimator* LookAngleFreezeWindow;
    struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_* GroundBreakStateChange;
    struct KwolokBossLocomotion_StayAtRangeSettings* StayAtRangeSettings;
    float MaxMovementSpeed;
    float AccelerationMultiplier;
    float DecelerationMultiplier;
    float PositioningTimeOut;
    float DistanceXToSlam;
    float MinumumPositioningTime;
    struct StateMachine_2* m_stateMachine;
    struct KwolokBossButtSlamBehaviour_States* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/FirewhirlBeamSpawner.h>
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour_States.h>
#include <Modloader/app/structs/KwolokBossLocomotion_StayAtRangeSettings.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Setups_ChangeStateOnCondition_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossButtSlamBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossButtSlamBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
