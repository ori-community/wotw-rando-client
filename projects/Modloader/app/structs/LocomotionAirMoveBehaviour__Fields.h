#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_DEFINED
struct LocomotionAnimation__Array;
struct SteeringForces;
struct LocomotionAnimation;
struct AirEntityLocomotion;
struct LocomotionAirMoveBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    float ArrivalDistance;
    float SlowDownDistance;
    struct LocomotionAnimation__Array* MovementEntries;
    bool UseSteeringForces;
    struct SteeringForces* SteeringForces;
    bool AvoidSimilarEntities;
    float AvoidanceDistanceToSimilarEntities;
    float AvoidanceScaleToSimilarEntities;
    bool DrawAvoidSimilarEntitiesGizmo;
    float m_arrivalDistance;
    float m_slowDownDistance;
    struct LocomotionAnimation* m_currentAnimation;
    struct AirEntityLocomotion* m_locomotion;
    struct ActiveAnimationHandle m_activeAnimation;
    struct Vector3 m_lastSearchedTargetPosition;
    float m_previousTraversalSpeed;
    bool m_arrivedAtTarget;
    struct Vector3 _TargetPosition_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/LocomotionAnimation.h>
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#include <Modloader/app/structs/SteeringForces.h>
#endif
#undef IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionAirMoveBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionAirMoveBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
