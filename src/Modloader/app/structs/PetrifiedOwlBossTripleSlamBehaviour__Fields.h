#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_DEFINED
struct MoonTimeline;
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct StateMachine_2;
struct PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates;
struct PetrifiedOwlBossTripleSlamBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* LoopTimeline;
    struct MoonTimeline* EndTimeline;
    struct MoonTimeline* StayInAirTimeline;
    int32_t TotalStomps;
    float StompDelay;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* DestructionTriggers;
    int32_t m_executedStomps;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour_TripleSlamStates.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossTripleSlamBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossTripleSlamBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
