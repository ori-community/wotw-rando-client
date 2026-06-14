#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_DEFINED)
#include <Modloader/app/structs/AnimationPostprocess__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_AnimationPostprocess__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_DEFINED
struct TentacleAnimationPostprocess;
struct Vector3__Array;
struct Quaternion__Array;
struct EnvTopology;
struct CapsuleCollider__Array;
struct TentaclePhysicsPostprocess__Fields {
    struct AnimationPostprocess__Fields _;
    int32_t OrderNumber;
    struct TentacleAnimationPostprocess* Old;
    bool m_applyTargetIK;
    bool m_pullTowardsAnim;
    bool m_useParticleForces;
    bool m_applyEnvCollision;
    bool m_applyWaterResistance;
    bool m_applyBoneLen;
    bool m_applyStraightening;
    bool m_applyVeloSmoothing;
    bool m_applyKickback;
    bool m_enableAdaptiveColliders;
    bool m_validatePositions;
    bool m_applyHeadCorrection;
    bool m_applyPostPos;
    bool m_applyPostRot;
    bool m_applyPostScale;
    float AnimForce;
    float CollisionForce;
    float EnvFriction;
    float GravityForce;
    float BoneLenForce;
    float StraighteningForce;
    float VeloDamping;
    float VeloDampingWater;
    float VeloSmoothing;
    float CollisionDistNormalOut;
    float CollisionDistNormalIn;
    float CollisionDistTangent;
    float BoneLenMin;
    float BoneLenMax;
    float MaxDistFromCenter;
    float DeathAnimInfluenceDuration;
    float DeathGravityInfluenceDuration;
    float LerpPosToAnim;
    float LerpVeloToZero;
    bool DebugRenderFollowAnim;
    bool DebugRenderVelo;
    bool DebugRenderCollisions;
    bool DebugRenderAnimChain;
    bool DebugRenderIKChain;
    bool DebugRenderPostChain;
    bool DebugRefreshEnv;
    struct Vector3__Array* m_jointAnimPos;
    struct Quaternion__Array* m_jointAnimRot;
    struct Vector3__Array* m_jointPostPos;
    struct Quaternion__Array* m_jointPostRot;
    struct Vector3__Array* m_jointPostScale;
    struct Vector3__Array* m_jointParticlePos;
    struct Vector3__Array* m_jointParticleVelo;
    struct Vector3__Array* m_temp;
    float m_chainLenInv;
    struct EnvTopology* m_env;
    int32_t m_capacity;
    float m_aliveTime;
    struct Vector3 m_headStickPosition;
    float m_headTargetAngle;
    struct Vector3 m_refTarget;
    struct Vector3 m_refTargetOld;
    struct CapsuleCollider__Array* m_adaptiveCapsules;
    struct Vector3__Array* m_adaptiveCapsulesFromPos;
    struct Vector3__Array* m_adaptiveCapsulesToPos;
    int32_t m_adaptiveCapsuleCount;
    int32_t AdaptiveCapsuleRecursionDepth;
    float AdaptiveCapsuleMaxErrorDist;
    float AdaptiveCapsuleRadius;
    bool DebugAdaptiveCapsules;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_FWDDECL
#include <Modloader/app/structs/CapsuleCollider__Array.h>
#include <Modloader/app/structs/EnvTopology.h>
#include <Modloader/app/structs/Quaternion__Array.h>
#include <Modloader/app/structs/TentacleAnimationPostprocess.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentaclePhysicsPostprocess__Fields_FWDDECL)
#include <Modloader/app/structs/TentaclePhysicsPostprocess__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentaclePhysicsPostprocess__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
