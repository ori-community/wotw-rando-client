#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_DEFINED
struct MoonTimeline;
struct StateMachine_2;
struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates;
struct PetrifiedOwlBossLowFlightArena2Behaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* AirTimeline;
    bool RandomizeWings;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates* m_states;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour_LowFlightStates.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossLowFlightArena2Behaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossLowFlightArena2Behaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
