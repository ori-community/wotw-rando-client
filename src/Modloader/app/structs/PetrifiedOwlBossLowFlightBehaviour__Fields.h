#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_DEFINED
struct MoonTimeline;
struct StateMachine_2;
struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates;
struct PetrifiedOwlBossLowFlightBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* JumpTimeline;
    struct MoonTimeline* AirTimeline;
    struct MoonTimeline* LandTimeline;
    bool RandomizeWings;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossLowFlightBehaviour_LowFlightStates* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour_LowFlightStates.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
