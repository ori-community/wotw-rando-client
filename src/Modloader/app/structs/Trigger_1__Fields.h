#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Trigger_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Trigger_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trigger_1__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_Trigger_1__Fields_DEFINED
struct MoonTimeline;
struct Condition_1;
struct Action;
struct Action_1_Trigger_;
struct Trigger_1__Fields {
    struct Condition_1__Fields _;
    struct MoonTimeline* TimelineToRun;
    bool Active;
    struct Condition_1* Condition;
    float Delay;
    bool DontTriggerWhileRunning;
    bool TriggerOnce;
    bool _IsSuspended_k__BackingField;
    float Expiration;
    bool CreateCheckpointBeforeTriggering;
    struct CheckpointFunctionality Checkpoint;
    struct Action* OnTriggerActivatedCallback;
    struct Action_1_Trigger_* OnTriggerActivatedCallbackTrigger;
    float m_activeTime;
    SuspendableMask__Enum m_suspensionMask;

    int32_t _AmountOfTimesActivated_k__BackingField;
    bool _IsTriggered_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Trigger_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_Trigger_1__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Trigger_.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_Trigger_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Trigger_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Trigger_1__Fields_FWDDECL)
#include <Modloader/app/structs/Trigger_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Trigger_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
