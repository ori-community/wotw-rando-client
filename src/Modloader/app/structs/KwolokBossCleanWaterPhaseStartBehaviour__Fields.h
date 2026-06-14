#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/KwolokBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_KwolokBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct KwolokBossLocomotion_MoveRequest;
struct StateMachine_2;
struct KwolokBossCleanWaterPhaseStartBehaviour_States;
struct KwolokBossCleanWaterPhaseStartBehaviour__Fields {
    struct KwolokBossBaseBehaviour__Fields _;
    struct MoonTimeline* KeepWaterLowTimeline;
    struct MoonTimeline* BreakArenaTimeline;
    struct MoonTimeline* HitReactionTimeline;
    struct EventTriggerAnimator* KeepBodyLowWindow;
    struct KwolokBossLocomotion_MoveRequest* m_moveRequest;
    struct StateMachine_2* m_stateMachine;
    struct KwolokBossCleanWaterPhaseStartBehaviour_States* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour_States.h>
#include <Modloader/app/structs/KwolokBossLocomotion_MoveRequest.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KwolokBossCleanWaterPhaseStartBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KwolokBossCleanWaterPhaseStartBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
