#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlStats__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlStats__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStats__Fields_DEFINED)
#include <Modloader/app/structs/FloatFraction.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlLookState__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatFraction_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlLookState__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlStats__Fields_DEFINED
struct PetrifiedOwlStats__Fields {
    struct MonoBehaviour__Fields _;
    struct FloatFraction LeftClawHealth;
    struct FloatFraction RightClawHealth;
    struct FloatFraction LeftHornHealth;
    struct FloatFraction RightHornHealth;
    struct FloatFraction ClawStamina;
    struct FloatFraction DoubleClawChance;
    struct FloatFraction StiltGrabAgitation;
    float ClawFatigueRegen;
    float DoubleClawChancePerAttack;
    float AgitationReductionRate;
    float CurrentIdleTime;
    PetrifiedOwlLookState__Enum PetrifiedOwlLookState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStats__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlStats__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlStats__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlStats__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlStats__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlStats__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlStats__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
