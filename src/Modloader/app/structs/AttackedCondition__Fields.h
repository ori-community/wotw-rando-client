#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AttackedCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AttackedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackedCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_AttackedCondition__Fields_DEFINED
struct List_1_AttackableSwitch_AttackTypes_;
struct IDamageReciever__Array;
struct AttackedCondition__Fields {
    struct Condition_1__Fields _;
    struct List_1_AttackableSwitch_AttackTypes_* Attacks;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    bool m_damageReceived;
    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AttackedCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_AttackedCondition__Fields_FWDDECL
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/List_1_AttackableSwitch_AttackTypes_.h>
#endif
#undef IL2CPP_STRUCT_AttackedCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AttackedCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AttackedCondition__Fields_FWDDECL)
#include <Modloader/app/structs/AttackedCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AttackedCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
