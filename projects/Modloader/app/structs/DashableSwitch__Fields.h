#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DashableSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DashableSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitch__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/GuidOwner__Fields.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#define IL2CPP_STRUCT_DashableSwitch__Fields_DEFINED
struct DashableSwitchSetupHolder;
struct MoonReference_1_IStateTransitionHolder_;
struct MoonTimeline;
struct MoonReference_1_Moon_Timeline_MoonTimeline_;
struct DashableSwitch__Fields {
    struct GuidOwner__Fields _;
    struct DashableSwitchSetupHolder* SetupStates;
    struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
    bool CreateCheckpoint;
    struct CheckpointFunctionality Checkpoint;
    struct MoonTimeline* RecedeTimeline;
    bool m_isOn;
    struct MoonReference_1_Moon_Timeline_MoonTimeline_* Timeline;
    bool AllowTriggeringMultipleTimes;
    float CooldownTime;
    float m_timeLastTriggered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DashableSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_DashableSwitch__Fields_FWDDECL
#include <Modloader/app/structs/DashableSwitchSetupHolder.h>
#include <Modloader/app/structs/MoonReference_1_IStateTransitionHolder_.h>
#include <Modloader/app/structs/MoonReference_1_Moon_Timeline_MoonTimeline_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_DashableSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DashableSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DashableSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/DashableSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DashableSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
