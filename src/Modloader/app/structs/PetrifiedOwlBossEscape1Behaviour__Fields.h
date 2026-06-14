#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_DEFINED
struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart_;
struct MoonTimeline;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct EventTriggerAnimator;
struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_;
struct PetrifiedOwlBossEscape1Behaviour_EscapePart;
struct StateMachine_2;
struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates;
struct PetrifiedOwlBossEscape1Behaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart_* EscapeParts;
    struct MoonTimeline* StayHighTimeline;
    struct MoonTimeline* JumpTimeline;
    struct MoonTimeline* FlyStartTimeline;
    struct MoonTimeline* FlyEndTimeline;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* CloudDissolveTimeline;
    struct EventTriggerAnimator* BreakArena1Event;
    struct MoonReference_1_Moon_Setups_ChangeStateOnCondition_* Arena1Ground;
    float WaitTime;
    struct CheckpointFunctionality m_checkpoint;
    struct PetrifiedOwlBossEscape1Behaviour_EscapePart* m_currentEscapePart;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/List_1_PetrifiedOwlBossEscape1Behaviour_EscapePart_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Setups_ChangeStateOnCondition_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_Escape1ComboStates.h>
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour_EscapePart.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossEscape1Behaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossEscape1Behaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
