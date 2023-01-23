#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct ProjectileSpawner;
struct RootMotionProcessorData;
struct GroundEntityLocomotion;
struct LizardSpitAttackBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    struct MoonTimeline* ProjectileShootTimeline;
    struct EventTriggerAnimator* ShootTrigger;
    float DamageAmount;
    float DelayBetweenShoots;
    struct ProjectileSpawner* ProjectileSpawner;
    struct RootMotionProcessorData* RootMotion;
    float m_lastShootTime;
    struct GroundEntityLocomotion* m_locomotion;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardSpitAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardSpitAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardSpitAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
