#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct MoonFloat;
struct MoonVector3;
struct MoonTimeline;
struct EventTriggerAnimator;
struct PrefabSpawner;
struct SandWormEntity;
struct SandWormLocomotion;
struct SandWormShootingBehaviourNew__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* ShootTarget;
    struct MoonFloat* MinDistanceToTarget;
    struct MoonVector3* EdgePosition;
    struct MoonVector3* EdgePositionNormal;
    struct MoonTimeline* ShootingTimeline;
    struct EventTriggerAnimator* ShootingEvent;
    struct PrefabSpawner* ProjectileSpawner;
    float ProjectileSpeed;
    float ProjectileGravity;
    int32_t ProjectileDamage;
    float ProjectileTravelTime;
    bool ShootOnce;
    float RotationRate;
    struct SandWormEntity* m_wormEntity;
    struct SandWormLocomotion* m_locomotion;
    struct Vector2 m_projectileSpeed;
    bool m_lookAtTarget;
    float m_originalHeadRotationSpeedScale;
    struct Vector3 m_edgePositionNormal;
    bool m_isBlocking;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonVector3.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SandWormEntity.h>
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormShootingBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormShootingBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormShootingBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
