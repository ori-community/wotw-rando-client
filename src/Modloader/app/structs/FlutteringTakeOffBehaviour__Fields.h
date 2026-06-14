#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_DEFINED
struct MoonVector3;
struct MoonTimeline;
struct RootMotionProcessorData;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct StateMachine_2;
struct FlutteringTakeOffBehaviour_States;
struct AirEntityLocomotion;
struct FlutteringTakeOffBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonVector3* TargetPosition;
    struct MoonTimeline* TurnStartTimeline;
    struct MoonTimeline* StartTimeline;
    struct RootMotionProcessorData* StartRootMotion;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* TurnTriggers;
    float FlutteringHeight;
    float Speed;
    int32_t TakeOffSlamDamage;
    DamageWeight__Enum TakeOffSlamWeight;

    struct List_1_Moon_Timeline_EventTriggerAnimator_* TakeOffSlamTriggers;
    struct StateMachine_2* m_stateMachine;
    struct FlutteringTakeOffBehaviour_States* m_states;
    struct MoonTimeline* m_currentTimeline;
    struct AirEntityLocomotion* m_airLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/FlutteringTakeOffBehaviour_States.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlutteringTakeOffBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/FlutteringTakeOffBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlutteringTakeOffBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
