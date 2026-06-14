#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode__Fields.h>
#include <Modloader/app/structs/LizardJumpOverBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_LizardJumpOverBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct GroundEntityLocomotion;
struct PlatformMovement;
struct BlockDamageInterruptionHandler;
struct LizardJumpOverBehaviour__Fields {
    struct EntityBehaviourNode__Fields _;
    float JumpDistance;
    float JumpHeight;
    float LandingRealtiveHeightMin;
    float LandingRealtiveHeightMax;
    bool OnlyIfTargetFacingEntity;
    struct MoonTimeline* LaunchTimeline;
    struct EventTriggerAnimator* DisableDamageDealerTrigger;
    struct MoonTimeline* LandTimeline;
    struct Vector3 m_landingPoint;
    struct GroundEntityLocomotion* m_groundLocomotion;
    struct PlatformMovement* m_platformMovement;
    struct MoonTimeline* m_currentTimeline;
    bool m_startedFalling;
    LizardJumpOverBehaviour_State__Enum m_state;

    bool m_areDamageDealersDisabled;
    struct BlockDamageInterruptionHandler* m_blockingHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformMovement.h>
#endif
#undef IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardJumpOverBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LizardJumpOverBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardJumpOverBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
