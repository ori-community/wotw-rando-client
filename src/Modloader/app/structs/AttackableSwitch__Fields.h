#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackableSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackableSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackableSwitch__Fields_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#include <Modloader/app/structs/GuidOwner__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_GuidOwner__Fields_DEFINED) && defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AttackableSwitch__Fields_DEFINED
struct AttackableSwitchSetupHolder;
struct MoonReference_1_IStateTransitionHolder_;
struct StateChangeDefinition;
struct MoonTimeline;
struct List_1_AttackableSwitch_AttackTypes_;
struct Action_1_Damage_;
struct IDamageReciever__Array;
struct AttackableSwitch__Fields {
    struct GuidOwner__Fields _;
    struct AttackableSwitchSetupHolder* SetupStates;
    struct MoonReference_1_IStateTransitionHolder_* LinkedSetup;
    struct StateChangeDefinition* OnActivate;
    struct StateChangeDefinition* OnDeactivate;
    float ActiveTimer;
    bool Toggle;
    float ToggleDelay;
    float ActiveDelay;
    bool ButtonMode;
    bool DestroyProjectiles;
    bool CreateCheckpoint;
    struct CheckpointFunctionality Checkpoint;
    bool TriggerOnlyIfUberNotFulfilled;
    bool BowTargetable;
    float m_currentTime;
    bool m_activated;
    bool m_wasPerforming;
    struct MoonTimeline* m_activateTransition;
    struct MoonTimeline* m_deactivateTransition;
    struct List_1_AttackableSwitch_AttackTypes_* Attacks;
    bool m_useNewDataStructure;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct Action_1_Damage_* m_damageReceived;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttackableSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttackableSwitch__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/AttackableSwitchSetupHolder.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/List_1_AttackableSwitch_AttackTypes_.h>
#include <Modloader/app/structs/MoonReference_1_IStateTransitionHolder_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/StateChangeDefinition.h>
#endif
#undef IL2CPP_STRUCT_AttackableSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackableSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttackableSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/AttackableSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackableSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
