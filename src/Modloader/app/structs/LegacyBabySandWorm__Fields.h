#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyBabySandWorm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyBabySandWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBabySandWorm__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_LegacyBabySandWorm__Fields_DEFINED
struct GameObject;
struct List_1_UnityEngine_Vector3_;
struct LineRenderer;
struct SphereCollider;
struct Rigidbody;
struct ParticleSystem;
struct DamageDealer;
struct List_1_LegacyBabySandWorm_PositionHistoryEntry_;
struct LegacyBabySandWorm__Fields {
    struct MonoBehaviour__Fields _;
    float Acceleration;
    float Deceleration;
    float TurnRate;
    float MovementSpeedMax;
    float DistanceFromTargetToCommit;
    float CommitFacingTargetAngle;
    float SpeedOnceCommitedMultiplier;
    float DivedBackIntoSandWaitTime;
    float PreCommitPauseTime;
    int32_t NumberOfSegments;
    float SegmentLength;
    struct GameObject* DeathEffectPrefab;
    struct GameObject* TrailEffect;
    struct LayerMask CollisionMask;
    struct Vector2 JumpOutOfSandKickMinMax;
    struct Vector2 JumpOutOfSandKickDistanceMinMax;
    float WormToWormAttractiveForce;
    float PreChaseLaunchTime;
    float LaunchForce;
    struct List_1_UnityEngine_Vector3_* m_segmentPositions;
    struct LineRenderer* m_lineRenderer;
    float m_speed;
    bool m_commited;
    struct SphereCollider* m_collider;
    struct Rigidbody* m_rigidbody;
    float m_backInSandTimer;
    struct ParticleSystem* m_TrailEffect;
    float m_preCommitPauseTimer;
    bool m_accelerate;
    float m_preChaseTimer;
    struct DamageDealer* m_damageDealer;
    struct List_1_LegacyBabySandWorm_PositionHistoryEntry_* PositionHistory;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyBabySandWorm__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyBabySandWorm__Fields_FWDDECL
#include <Modloader/app/structs/DamageDealer.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LineRenderer.h>
#include <Modloader/app/structs/List_1_LegacyBabySandWorm_PositionHistoryEntry_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Vector3_.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#endif
#undef IL2CPP_STRUCT_LegacyBabySandWorm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBabySandWorm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyBabySandWorm__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyBabySandWorm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyBabySandWorm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
