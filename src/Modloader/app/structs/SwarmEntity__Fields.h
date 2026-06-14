#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwarmEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwarmEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntity__Fields_DEFINED)
#include <Modloader/app/structs/EnemyEntity__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EnemyEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SwarmEntity__Fields_DEFINED
struct Transform;
struct GameObject;
struct MoonTimeline;
struct RTPC;
struct AnimationCurve;
struct List_1_SwarmAgent_;
struct SwarmNestEntity;
struct SwarmSuspendWhenOutOfFrustrum;
struct SwarmEntity__Fields {
    struct EnemyEntity__Fields _;
    struct Transform* SwarmAllowedAreas;
    struct Transform* AfterAttackTarget;
    struct GameObject* SwarmAgentPrefab;
    struct Transform* SwarmAgentsTransform;
    struct MoonTimeline* HitTimeline;
    float PatrolSpeed;
    float TargetFollowSpeed;
    float AttackSpeed;
    float AttackOvershootDistance;
    float AfterAttackTimeout;
    float AttackSpinSpeed;
    float HealthPerSwarmMember;
    int32_t MinigunAttackBullets;
    bool MinigunAttackDieOnAttack;
    float MinigunAttackShootTimeout;
    float MinigunAttackShootSpeed;
    float MinigunAttackTimeBetweenBullets;
    float MinigunAttackAngleBetweenShots;
    float ChainAttackCircleStartSize;
    float ChainAttackCircleMaxSize;
    float ChainAttackMinCircleGrowSpeed;
    float ChainAttackMaxCircleGrowSpeed;
    float ChainAttackCircleSpeed;
    float ChainAttackInitSpeed;
    float ChainAttackDuration;
    float ChainAttackAnticipationTime;
    float ChainAttackLaunchAgentTime;
    float ChainAttackAnticipationInternalIdleFequency;
    float ChainAttackAnticipationInternalIdleShift;
    float ChainAttackAnticipationInternalIdleAmplitude;
    float ChainAttackInternalIdleFequency;
    float ChainAttackInternalIdleShift;
    float ChainAttackInternalIdleAmplitude;
    bool AgentsRegroupingEnabled;
    float AgentsRegroupingAllowedDistance;
    float AgentsRegroupingForce;
    float MinAgentScale;
    float MaxAgentScale;
    float AgentInternalIdleFequency;
    float AgentInternalIdleShift;
    float AgentInternalIdleAmplitude;
    struct RTPC* SwarmCountRTPC;
    struct AnimationCurve* ScaleBySpeed;
    struct LayerMask GroundMask;
    float SpinParameter;
    struct Vector3 LockedTarget;
    struct List_1_SwarmAgent_* m_swarmAgents;
    float m_swapTargetTimer;
    float m_randomizeTargetTimer;
    bool m_initiated;
    bool m_wasAttacked;
    struct SwarmNestEntity* m_swarmNestEntity;
    struct Vector3 m_initPos;
    bool m_initPosCached;
    float m_recentlyKilledAgentsHealthAmount;
    float m_unlockKillingTimer;
    float m_totalDamageLeftThisAttack;
    float m_totalHealthLeft;
    int32_t m_numberOfAgents;
    struct SwarmSuspendWhenOutOfFrustrum* SwarmSuspendWhenOutOfFrustrum;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwarmEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwarmEntity__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_SwarmAgent_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SwarmNestEntity.h>
#include <Modloader/app/structs/SwarmSuspendWhenOutOfFrustrum.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SwarmEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwarmEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwarmEntity__Fields_FWDDECL)
#include <Modloader/app/structs/SwarmEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwarmEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
