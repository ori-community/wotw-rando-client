#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode_1_SpiderBatEntity___Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SpiderBatEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct PrefabSpawner;
struct Transform;
struct EventTriggerAnimator;
struct AnimationCurve;
struct SpiderBatAcidSprayBehaviour__Fields {
    struct EntityBehaviourNode_1_SpiderBatEntity___Fields _;
    struct MoonTimeline* TimelineSequence;
    struct RootMotionProcessorData* RootMotion;
    bool TrackTargetWholeTime;
    struct PrefabSpawner* ProjectileSpawner;
    int32_t ProjectileDamage;
    float PushForce;
    float ProjectileSpeed;
    DamageWeight__Enum DamageWeight;

    struct Transform* ShootPoint;
    float TimeBetweenAcidShots;
    struct EventTriggerAnimator* ShootTrigger;
    struct EventTriggerAnimator* StopShootingTrigger;
    struct AnimationCurve* AngleCurve;
    bool m_isActivated;
    bool m_hasFinished;
    bool m_hasAnimationFinished;
    float m_shotTimer;
    bool m_canShoot;
    bool m_firstShot;
    float m_currentAttackTime;
    float m_currentAngle;
    struct Vector3 m_firstShotDirection;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatAcidSprayBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatAcidSprayBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatAcidSprayBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
