#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_DEFINED
struct ActionMethod;
struct PerformingAction;
struct List_1_LegacyAttackableSwitch_AttackTypes_;
struct IDamageReciever__Array;
struct LegacyAttackableSwitch__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* OnActivate;
    struct ActionMethod* OnDeactivate;
    float ActiveTimer;
    bool Toggle;
    float ToggleDelay;
    struct Color ActivatedColor;
    struct Color DeactivatedColor;
    bool ButtonMode;
    bool DestroyProjectiles;
    int32_t BowTargetPriority;
    float m_currentTime;
    bool m_isActivated;
    struct PerformingAction* m_onActivatePerformingAction;
    bool m_wasPerforming;
    struct List_1_LegacyAttackableSwitch_AttackTypes_* Attacks;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct IDamageReciever__Array* m_damageReceivers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/IDamageReciever__Array.h>
#include <Modloader/app/structs/List_1_LegacyAttackableSwitch_AttackTypes_.h>
#include <Modloader/app/structs/PerformingAction.h>
#endif
#undef IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAttackableSwitch__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyAttackableSwitch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAttackableSwitch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
