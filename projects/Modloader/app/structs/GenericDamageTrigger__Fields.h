#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GenericDamageTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GenericDamageTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDamageTrigger__Fields_DEFINED)
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageType__Enum_DEFINED)
#define IL2CPP_STRUCT_GenericDamageTrigger__Fields_DEFINED
struct GenericDamageTrigger_DamageTriggerSetupHolder;
struct Condition_1;
struct MoonTimeline;
struct List_1_UnityEngine_GameObject_;
struct IUberState__Array;
struct IDamageReciever__Array;
struct GenericDamageTrigger__Fields {
    struct MonoBehaviour__Fields _;
    bool HammerStompOnly;
    int32_t _HammerPriority_k__BackingField;
    bool _HammerEnableAutoTarget_k__BackingField;
    struct GenericDamageTrigger_DamageTriggerSetupHolder* Setup;
    struct Condition_1* Condition;
    DamageType__Enum DamageType;

    struct MoonTimeline* DestructionTimeline;
    struct List_1_UnityEngine_GameObject_* _AllTargets_k__BackingField;
    struct IUberState__Array* m_affectingUberStates;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GenericDamageTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_GenericDamageTrigger__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/GenericDamageTrigger_DamageTriggerSetupHolder.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_GenericDamageTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GenericDamageTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GenericDamageTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/GenericDamageTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GenericDamageTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
