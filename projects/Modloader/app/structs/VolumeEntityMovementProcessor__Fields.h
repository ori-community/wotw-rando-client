#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/MovementProcessor__Fields.h>
#include <Modloader/app/structs/NavigationType__Enum.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MovementProcessor__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_NavigationType__Enum_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED)
#define IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_DEFINED
struct MovementSettings;
struct Transform;
struct CharacterPlatformMovement;
struct ILocomotionTurningHandler;
struct Rigidbody;
struct Entity;
struct SphereCollider;
struct EntityFallEvent;
struct VolumeEntityMovementProcessor__Fields {
    struct MovementProcessor__Fields _;
    struct MovementSettings* AirMovementSettings;
    struct MovementSettings* WaterMovementSettings;
    struct MovementSettings* SandMovementSettings;
    struct MovementSettings* m_currentSettings;
    struct Vector3 WaterExitPos;
    struct Vector3 WaterEnterPos;
    struct Vector3 AirExitPos;
    struct Vector3 AirEnterPos;
    NavigationType__Enum PrevNavigationArea;

    NavigationType__Enum CurrentNavigationArea;

    bool CanFly;
    bool CanSwim;
    bool CanDig;
    float Gravity;
    float MaxFallSpeed;
    float AirAcceleration;
    float AirDeceleration;
    float GroundAcceleration;
    float GroundDeceleration;
    struct Transform* LocomotionRotationTransform;
    struct Transform* FeetTransform;
    struct LayerMask GroundMask;
    struct CharacterPlatformMovement* m_platformMovement;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct Vector2 m_surfaceAverageNormal;
    struct RaycastHit m_hit;
    struct Rigidbody* m_rigidbody;
    struct Vector3 m_lastPosition;
    bool ShouldUpdateRotation;
    bool ShouldUpdateRotationInAir;
    float RotationSpeed;
    float RotationLimit;
    float TargetAirRotation;
    int32_t m_gravityDisableCounter;
    struct Entity* m_entity;
    bool StickToSurfaces;
    float NormalRaysSeparation;
    float MaxSurfaceDistance;
    struct Vector3 prevPos;
    struct Vector3 prevSpeed;
    float MinFallTimeToAirDeceleration;
    float FreeMovementVelocityRotationInfluence;
    bool UseFreeMovementObstacleHitAvoidance;
    struct LayerMask AvoidanceObstaclesMask;
    struct SphereCollider* HitBoxCollider;
    float CheckDistance;
    float MinDistanceToObstacle;
    bool m_isObstacleAvoidanceDisabled;
    float m_CurrentObstacleAvoidanceStrength;
    bool DebugLogVelocity;
    struct EntityFallEvent* m_fallEventCache;
    int32_t UpdateAngleRate;
    int32_t UpdateAreaTypeRate;
    int32_t CollisionAvoidenceRate;
    int32_t m_delayUpdateAngle;
    int32_t m_delayUpdateAreaType;
    int32_t m_delayCollisionAvoidence;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityFallEvent.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/MovementSettings.h>
#include <Modloader/app/structs/Rigidbody.h>
#include <Modloader/app/structs/SphereCollider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumeEntityMovementProcessor__Fields_FWDDECL)
#include <Modloader/app/structs/VolumeEntityMovementProcessor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeEntityMovementProcessor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
