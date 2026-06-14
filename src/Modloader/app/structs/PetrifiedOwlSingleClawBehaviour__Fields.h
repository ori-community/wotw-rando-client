#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour_ClawType__Enum.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour_ClawType__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_DEFINED
struct PetrifiedOwlStats;
struct BaseAnimator;
struct GameObject;
struct PlayerStayInsideZoneTrigger;
struct TimelineEventTrigger;
struct VectorAnimationParameter;
struct MoonAnimator;
struct PetrifiedOwlSingleClawBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float StaminaPerAttack;
    float StaminaThreshold;
    float StaminaThresholdScore;
    float StayInsideTriggerScore;
    float ClawHurtScore;
    PetrifiedOwlSingleClawBehaviour_ClawType__Enum Claw;

    struct PetrifiedOwlStats* Stats;
    struct BaseAnimator* AttackAnimator;
    struct GameObject* OwlAnimator;
    struct PlayerStayInsideZoneTrigger* AttackZoneTrigger;
    struct PlayerStayInsideZoneTrigger* IKPointClampZone;
    struct TimelineEventTrigger* IKUpdateEvent;
    struct VectorAnimationParameter* AttackTargetParameter;
    float ClawIKFollowPointOffsetZ;
    struct MoonAnimator* m_owlAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#include <Modloader/app/structs/VectorAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlSingleClawBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlSingleClawBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
