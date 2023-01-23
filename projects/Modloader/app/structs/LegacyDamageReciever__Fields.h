#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyDamageReciever__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDamageReciever__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyDamageReciever__Fields_DEFINED
struct DamageOwner;
struct ActionMethod;
struct LegacyAnimator;
struct UberDelegate_1_Damage_;
struct Func_2_Damage_Boolean_;
struct Damage;
struct LegacyDamageReciever__Fields {
    struct SaveSerialize__Fields _;
    bool Activated;
    struct DamageOwner* DamageOwner;
    struct ActionMethod* DamageAction;
    struct ActionMethod* DeathAction;
    struct ActionMethod* HurtAction;
    struct LegacyAnimator* DamageAnimator;
    float MaxHealth;
    float Health;
    bool DisableWhenNoHealthLeft;
    bool DestroyWhenNoHealthLeft;
    struct UberDelegate_1_Damage_* OnDeathEvent;
    struct Func_2_Damage_Boolean_* IgnoreDamageCondition;
    bool BounceOnStomp;
    float m_stressTestDamageInterval;
    struct Damage* m_stressTestDamage;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyDamageReciever__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyDamageReciever__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Func_2_Damage_Boolean_.h>
#include <Modloader/app/structs/LegacyAnimator.h>
#include <Modloader/app/structs/UberDelegate_1_Damage_.h>
#endif
#undef IL2CPP_STRUCT_LegacyDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyDamageReciever__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyDamageReciever__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyDamageReciever__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyDamageReciever__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
