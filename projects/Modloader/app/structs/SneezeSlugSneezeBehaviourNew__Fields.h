#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SneezeSlugEntity___Fields.h>
#include <Modloader/app/structs/SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SneezeSlugEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_DEFINED
struct MoonFloat;
struct MoonTimeline;
struct EventTriggerAnimator;
struct RootMotionProcessorData;
struct PrefabSpawner;
struct CloudAttackSettings;
struct SneezeAttackSettings;
struct Transform;
struct MoonBool;
struct BlockDamageInterruptionHandler;
struct SneezeSlugSneezeBehaviourNew__Fields {
    struct EntityBehaviourNode_1_SneezeSlugEntity___Fields _;
    SneezeSlugSneezeBehaviourNew_SneezeEffectType__Enum SneezeType;

    struct MoonFloat* AnimationSpeed;
    struct MoonTimeline* TimelineSequence;
    struct EventTriggerAnimator* TurnTrigger;
    struct RootMotionProcessorData* RootMotion;
    struct PrefabSpawner* ProjectileSpawner;
    struct CloudAttackSettings* CloudAttackSettings;
    float ProjectileGravity;
    struct SneezeAttackSettings* ProjectileDamageSettings;
    float ProjectileArcHeight;
    struct EventTriggerAnimator* ShootTrigger;
    struct Transform* ShootPointFront;
    struct Transform* ShootPointBack;
    float MinimumDistanceToArcProjectile;
    float ProjectileRangeWhenNoTarget;
    struct MoonFloat* MinHorizontalAimDistance;
    struct MoonFloat* MaxAimDistance;
    struct MoonBool* CommitToInitialTargetPosition;
    struct MoonFloat* RecoilForce;
    struct MoonFloat* LedgeCheckDistance;
    struct MoonFloat* LedgeCheckDepth;
    bool m_hasFinished;
    struct Vector3 m_shootTargetPos;
    float m_ledgeCheckDistance;
    float m_ledgeCheckDepth;
    struct BlockDamageInterruptionHandler* m_blockingHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/BlockDamageInterruptionHandler.h>
#include <Modloader/app/structs/CloudAttackSettings.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonBool.h>
#include <Modloader/app/structs/MoonFloat.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/SneezeAttackSettings.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugSneezeBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugSneezeBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugSneezeBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
