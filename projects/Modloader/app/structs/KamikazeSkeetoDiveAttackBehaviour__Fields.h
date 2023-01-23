#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityBehaviourNode_1_SkeetoEntity___Fields.h>
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SkeetoEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct Transform;
struct TriggerColliderCallback;
struct EntityTargetting;
struct SphereCollider;
struct Rigidbody;
struct KamikazeSkeetoDiveAttackBehaviour__Fields {
    struct EntityBehaviourNode_1_SkeetoEntity___Fields _;
    struct MoonTimeline* FlipTimeline;
    struct EventTriggerAnimator* FlipTrigger;
    struct Vector2 ApproachTargetOffset;
    float ApproachTargetRandomDistance;
    struct MoonTimeline* AnticipationTimeline;
    float AnticipationTime;
    struct MoonTimeline* AttackTimeline;
    float DashSpeed;
    struct Transform* PegCheckRayOrigin;
    float PegRange;
    struct TriggerColliderCallback* ExplodeContactCollider;
    struct EntityTargetting* BashTarget;
    struct MoonTimeline* PeggedTimeline;
    struct SphereCollider* ClearanceRequired;
    float m_explodeTimer;
    float m_explodeDuration;
    bool ApplyDebugDamageOnAnticipation;
    bool ApplyDamageOnAttack;
    bool ApplyDamageOnPegged;
    float DelayBetweenDebugDamage;
    float m_timeToDebugDamage;
    DamageWeight__Enum DebugDamageWeight;

    KamikazeSkeetoDiveAttackBehaviour_DiveAttackState__Enum m_state;

    struct Vector3 m_targetPosition;
    struct Vector3 m_upDirection;
    struct Vector3 m_attackDirection;
    struct RaycastHit m_pegHitInfo;
    bool m_isAttackDirectionForced;
    float m_supressExplodeTriggerTimeLeft;
    struct Rigidbody* m_rigidbody;
    float _InitialDirection_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TriggerColliderCallback.h>
#endif
#undef IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KamikazeSkeetoDiveAttackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KamikazeSkeetoDiveAttackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
