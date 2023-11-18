#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_DEFINED
struct PetrifiedOwlStats;
struct PlayerStayInsideZoneTrigger;
struct BaseAnimator;
struct PetrifiedOwlDoubleClawBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float StaminaPerAttack;
    float StaminaThreshold;
    float StaminaThresholdScore;
    float InsideTriggerScore;
    float DoubleClawChanceStatScore;
    float AnyLegHurtScore;
    struct PetrifiedOwlStats* Stats;
    struct PlayerStayInsideZoneTrigger* AttackZoneTrigger;
    struct BaseAnimator* Animator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlDoubleClawBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlDoubleClawBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlDoubleClawBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
