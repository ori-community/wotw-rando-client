#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmAgent__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAgent__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SwarmAgent__Fields_DEFINED
struct MoonTimeline;
struct Transform;
struct SwarmEntity;
struct Rigidbody;
struct SphereCollider;
struct StateMachine_2;
struct DamageDealer;
struct DamageReceiver;
struct EntityTargetting;
struct IDamageResolver;
struct Damage;
struct Action_1_SwarmAgent_;
struct SwarmAgent_States;
struct SwarmAgent__Fields {
    struct MonoBehaviour__Fields _;
    float FollowSpeed;
    float DeathTimer;
    struct LayerMask GroundMask;
    struct MoonTimeline* HitFlashTimeline;
    struct Transform* AliveGraphics;
    struct Transform* DeadGraphics;
    float MaxXRotationAmount;
    float MaxYRotationAmount;
    float VelocityXMultiplier;
    float VelocityYMultiplier;
    float KnockbackForce;
    float KnockbackScale;
    float DeathRotateSpeed;
    struct SwarmEntity* m_swarmEntity;
    struct Transform* m_target;
    struct Rigidbody* m_rigidbody;
    struct SphereCollider* m_sphereCollider;
    float m_internalIdleFreqX;
    float m_internalIdleFreqY;
    float m_internalIdleShiftX;
    float m_internalIdleShiftY;
    struct Vector3 m_idleTargetPosition;
    struct Vector3 m_idleTargetDelta;
    struct StateMachine_2* m_stateMachine;
    struct DamageDealer* m_damageDealer;
    struct DamageReceiver* m_damageReceiver;
    struct EntityTargetting* m_entityTargetting;
    struct IDamageResolver* m_damageResolver;
    struct Vector3 m_attackTarget;
    struct Transform* m_afterAttackTarget;
    struct Vector3 m_initAttackPosition;
    float m_executuionTimer;
    float m_deathExecutionTimer;
    struct Vector3 m_initLocalScale;
    struct Vector3 m_lastPosition;
    struct RaycastHit m_raycastHit;
    struct Damage* m_killedDamage;
    float m_maxTrackingDistance;
    struct Vector3 m_knockBackTargetPos;
    struct Vector2 m_velocity;
    bool m_positionUpdatedThisFrame;
    bool m_deathDirectionRight;
    bool m_headbackEarlyInAttack;
    float m_headbackEarlyInAttackDuration;
    float m_internalIdleAmplitude;
    float m_attackDuration;
    bool m_isPreMiniGunAttack;
    struct Vector3 m_deathDirectionPosition;
    struct Transform* m_initTarget;
    float m_speedScale;
    struct Transform* m_visuals;
    struct Action_1_SwarmAgent_* chainAttackAction;
    float m_circleSpeed;
    float m_circleSize;
    float m_circleGrowSpeed;
    float m_stateTime;
    float m_initSpeed;
    struct Vector3 m_chainTargetPosition;
    struct SwarmAgent_States* State;
    float m_internalIdleAmplitudeMax;
    float m_raycastTimer;
    struct Vector3 m_visualsLerpScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmAgent__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmAgent__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_SwarmAgent_.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/EntityTargetting.h>
#include <Modloader/app/structs/IDamageResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/StateMachine_2.h>
#include <Modloader/app/structs/SwarmAgent_States.h>
#include <Modloader/app/structs/SwarmEntity.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SwarmAgent__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmAgent__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmAgent__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmAgent__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmAgent__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
