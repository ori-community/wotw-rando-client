#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LagoonContactSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LagoonContactSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonContactSwitch__Fields_DEFINED)
#include <Modloader/app/structs/PlayerCollisionTrigger__Fields.h>
#if defined(IL2CPP_STRUCT_PlayerCollisionTrigger__Fields_DEFINED)
#define IL2CPP_STRUCT_LagoonContactSwitch__Fields_DEFINED
struct LagoonContactSwitchDoors;
struct MoonTimeline;
struct EventTriggerAnimator;
struct SerializedBooleanUberState;
struct DesiredUberStateBool;
struct Condition_1;
struct LagoonContactSwitch__Fields {
    struct PlayerCollisionTrigger__Fields _;
    struct LagoonContactSwitchDoors* ConnectedDoors;
    struct MoonTimeline* Activate;
    struct MoonTimeline* ActivatedLoop;
    struct MoonTimeline* Deactivate;
    struct MoonTimeline* DeactivatedLoop;
    struct MoonTimeline* Touch;
    struct EventTriggerAnimator* OpenDoors;
    struct EventTriggerAnimator* CloseDoors;
    struct MoonTimeline* m_currentTimeline;
    struct SerializedBooleanUberState* State;
    struct DesiredUberStateBool* PuzzleSolvedState;
    bool CloseDoorWhenPuzzleSolved;
    struct Condition_1* PuzzleSolvedCondition;
    float ActiveDuration;
    bool Toggle;
    float ToggleDelay;
    bool m_isTouched;
    float m_currentTime;
    bool m_activated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LagoonContactSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_LagoonContactSwitch__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DesiredUberStateBool.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/LagoonContactSwitchDoors.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#endif
#undef IL2CPP_STRUCT_LagoonContactSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LagoonContactSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LagoonContactSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/LagoonContactSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LagoonContactSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
