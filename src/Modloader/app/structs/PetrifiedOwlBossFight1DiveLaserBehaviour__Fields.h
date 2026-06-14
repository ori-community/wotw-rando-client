#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/PetrifiedOwlBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_PetrifiedOwlBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_DEFINED
struct MoonTimeline;
struct StateMachine_2;
struct PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates;
struct Enum__Array;
struct PetrifiedOwlBossFight1DiveLaserBehaviour__Fields {
    struct PetrifiedOwlBossBaseBehaviour__Fields _;
    struct MoonTimeline* TimelineBackground;
    struct MoonTimeline* TimelineWait;
    struct MoonTimeline* TimelineAttack;
    float AttackDelay;
    bool m_isMirrored;
    struct StateMachine_2* m_stateMachine;
    struct PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates* m_states;
    struct Enum__Array* Entries;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Enum__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour_DiveLaserStates.h>
#include <Modloader/app/structs/StateMachine_2.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlBossFight1DiveLaserBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlBossFight1DiveLaserBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
