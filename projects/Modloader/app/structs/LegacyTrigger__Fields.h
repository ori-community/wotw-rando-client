#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED
struct ActionMethod;
struct MoonTimeline;
struct Condition_1;
struct Action;
struct Action_1_LegacyTrigger_;
struct LegacyTrigger__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* ActionToRun;
    struct MoonTimeline* TimelineToRun;
    bool StopOnRestoreCheckpoint;
    bool Active;
    struct Condition_1* Condition;
    float Delay;
    bool DontTriggerWhileRunning;
    bool TriggerOnce;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    float Expiration;
    bool CreateCheckpointBeforeTriggering;
    struct Action* OnTriggerActivatedCallback;
    struct Action_1_LegacyTrigger_* OnTriggerActivatedCallbackTrigger;
    float m_activeTime;
    int32_t _AmountOfTimesActivated_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTrigger__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Action_1_LegacyTrigger_.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LegacyTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
