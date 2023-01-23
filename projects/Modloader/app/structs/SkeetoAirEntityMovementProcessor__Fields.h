#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MovementProcessor__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MovementProcessor__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_DEFINED
struct Transform;
struct SphereCollider;
struct SteeringForces;
struct CharacterPlatformMovement;
struct ILocomotionTurningHandler;
struct Rigidbody;
struct SkeetoAirEntityMovementProcessor__Fields {
    struct MovementProcessor__Fields _;
    struct Transform* LocomotionRotationTransform;
    struct Transform* FeetTransform;
    struct LayerMask GroundMask;
    bool UseObstacleHitAvoidance;
    struct LayerMask AvoidanceObstaclesMask;
    struct SphereCollider* HitBoxCollider;
    float CheckDistance;
    float MinDistanceToObstacle;
    struct SteeringForces* AvoidanceSteeringForces;
    struct Transform* SteeringForcesOrigin;
    bool m_applyNoise;
    struct CharacterPlatformMovement* m_platformMovement;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct Transform* m_rotationTransform;
    struct Vector2 m_surfaceAverageNormal;
    struct RaycastHit m_hit;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_lastPosition;
    float m_CurrentObstacleAvoidanceStrength;
    float m_accelerationMultiplier;
    float m_decelerationMultiplier;
    struct EntityWeightData_EntityWeightSettings WeightSettings;
    EntityWeightData_EntityWeight__Enum m_entityWeight;

    int32_t m_sphereCastClientID;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/SteeringForces.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoAirEntityMovementProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoAirEntityMovementProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
