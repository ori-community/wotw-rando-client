#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarSpitBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarSpitBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_MortarEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_MortarEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_MortarSpitBehaviour__Fields_DEFINED
struct MortarSpitAttackSettings;
struct ProjectileSpawner;
struct Transform;
struct MoonTimeline;
struct EventTriggerAnimator;
struct MortarSpitBehaviour__Fields {
    struct EntityBehaviourNode_1_MortarEntity___Fields _;
    struct MortarSpitAttackSettings* m_settings;
    struct ProjectileSpawner* m_spitSpawner;
    struct Transform* m_animatedSpawnLocationTransform;
    struct MoonTimeline* m_spitTimeline_Forward;
    struct EventTriggerAnimator* m_spawnProjectileEvent_Forward;
    struct MoonTimeline* m_spitTimeline_Up;
    struct EventTriggerAnimator* m_spawnProjectileEvent_Up;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarSpitBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MortarSpitBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MortarSpitAttackSettings.h>
#include <Modloader/app/structs/ProjectileSpawner.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MortarSpitBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarSpitBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MortarSpitBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MortarSpitBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarSpitBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
