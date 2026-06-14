#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SneezeSlugEntity___Fields.h>
#include <Modloader/app/structs/SneezeSlugBlastBehaviour_State__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SneezeSlugEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SneezeSlugBlastBehaviour_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct EventTriggerAnimator;
struct PrefabSpawner;
struct CloudAttackSettings;
struct GroundEntityLocomotion;
struct PlatformMovement;
struct BlockDamageInterruptionHandler;
struct SneezeSlugBlastBehaviour__Fields {
    struct EntityBehaviourNode_1_SneezeSlugEntity___Fields _;
    struct MoonTimeline* BlastTimeline;
    struct RootMotionProcessorData* RootMotion;
    struct EventTriggerAnimator* BlastTrigger;
    struct PrefabSpawner* BlastProjectileSpawner;
    struct CloudAttackSettings* CloudAttackSettings;
    SneezeSlugBlastBehaviour_State__Enum m_state;

    float m_timeInState;
    bool m_hasFinished;
    struct MoonTimeline* m_prevTimeline;
    struct GroundEntityLocomotion* m_locomotion;
    struct PlatformMovement* m_platformMovement;
    struct BlockDamageInterruptionHandler* m_blockingHandlerBlast;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/CloudAttackSettings.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PlatformMovement.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugBlastBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugBlastBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugBlastBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
