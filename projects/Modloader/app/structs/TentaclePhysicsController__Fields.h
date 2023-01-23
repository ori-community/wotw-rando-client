#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TentaclePhysicsController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TentaclePhysicsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePhysicsController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/TentacleAnimatedSettings.h>
#include <Modloader/app/structs/TentaclePhysicsController_RigidBodyPropertiesCache.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_TentaclePhysicsController_RigidBodyPropertiesCache_DEFINED) && defined(IL2CPP_STRUCT_TentacleAnimatedSettings_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_TentaclePhysicsController__Fields_DEFINED
struct TentacleEntity;
struct Transform__Array;
struct Rigidbody__Array;
struct Collider__Array;
struct Vector3__Array;
struct TentacleAnimationPostprocess;
struct Transform;
struct AttachJointSettings;
struct ConfigurableJoint__Array;
struct Single__Array;
struct Rigidbody;
struct TentacleInterestPoint;
struct AnimationCurve;
struct ConfigurableJoint;
struct WaterZone;
struct TentaclePhysicsController__Fields {
    struct MonoBehaviour__Fields _;
    bool InstanceEnabled;
    struct TentacleEntity* m_tentacleEntity;
    struct Transform__Array* boneTransforms;
    struct Rigidbody__Array* damageReceiverBodies;
    struct Collider__Array* CachedColliders;
    struct Vector3__Array* m_forces;
    struct Vector3__Array* m_torques;
    struct TentaclePhysicsController_RigidBodyPropertiesCache rbCache;
    struct TentacleAnimationPostprocess* animationPostprocess;
    struct Transform* referenceOriginPoint;
    struct Transform* referenceTargetPoint;
    struct Transform* targetPoint;
    struct Transform* jawEnd;
    struct TentacleAnimatedSettings DefaultSettings;
    float CapsuleRadius;
    struct AttachJointSettings* JointSettings;
    struct ConfigurableJoint__Array* CachedJoints;
    struct Vector3__Array* InitialJointAnchors;
    struct Vector3__Array* InitialJointConnectedAnchors;
    struct Vector3__Array* m_stretchedAnchors;
    int32_t Iterations;
    float pressure;
    float waterFriction;
    float startTimeout;
    struct Transform__Array* startTimeoutObjects;
    struct Vector3 ReferenceOverridePosition;
    struct Single__Array* m_initialBoneLengths;
    struct Vector3__Array* m_reprojectedPositions;
    struct Rigidbody* headRigidbody;
    float headPositionAlignmentToAnimation;
    struct Vector3 m_startPos;
    struct Vector3 m_targetPos;
    struct Vector3 m_referenceTangent;
    struct Vector3 m_referenceNormal;
    struct Vector3 m_targetTangent;
    struct Vector3 m_targetNormal;
    float m_targetTangentScaling;
    float m_headTargetAngle;
    bool m_headSticked;
    struct Vector3 m_headStickPosition;
    float m_headStickAngle;
    struct Vector3 m_LockedReferencePosition;
    struct Vector3 m_oldReferenceTarget;
    struct Vector3 m_referenceTarget;
    bool attachToPhysics;
    struct AttachJointSettings* stickSettings;
    float physicsUnstickDelay;
    float stickPushForce;
    float stickedSpeedLimit;
    float stickedAngularFrictionK;
    float stickDepth;
    struct TentacleInterestPoint* m_interestPoint;
    float m_ignoreStickCollisionsDelay;
    struct AnimationCurve* kickbackCurve;
    struct Vector3 m_kickbackVector;
    float kickbackHeadDistance;
    float kickbackSegmentDistance;
    float kickbackSegmentForce;
    float m_kickbackTime;
    int32_t m_kickbackJoint;
    struct Single__Array* m_kickbackCoeffs;
    float m_unStickTime;
    struct Transform* m_stickTransform;
    struct Vector3 m_stickAnchor;
    struct Rigidbody* m_stickRigidbody;
    struct ConfigurableJoint* m_stickJoint;
    struct Collider__Array* m_stickColliders;
    bool m_activated1;
    struct WaterZone* m_water;
    struct TentacleAnimatedSettings CurrentSettings;
    struct Vector3 m_headAnimatedStickDirection;
    int32_t KickbackJointFalloff;
    bool DebugKickback;
    bool m_isKinematic;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TentaclePhysicsController__Fields_FWDDECL)
#define IL2CPP_STRUCT_TentaclePhysicsController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/AttachJointSettings.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/ConfigurableJoint.h>
#include <Modloader/app/structs/ConfigurableJoint__Array.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/Rigidbody__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/TentacleAnimationPostprocess.h>
#include <Modloader/app/structs/TentacleEntity.h>
#include <Modloader/app/structs/TentacleInterestPoint.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Transform__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#include <Modloader/app/structs/WaterZone.h>
#endif
#undef IL2CPP_STRUCT_TentaclePhysicsController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TentaclePhysicsController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TentaclePhysicsController__Fields_FWDDECL)
#include <Modloader/app/structs/TentaclePhysicsController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TentaclePhysicsController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
