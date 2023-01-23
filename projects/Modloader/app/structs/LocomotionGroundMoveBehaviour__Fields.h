#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_DEFINED
struct LocomotionAnimation__Array;
struct LocomotionAnimation;
struct GroundEntityLocomotion;
struct LocomotionGroundMoveBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct Vector3 _TargetPosition_k__BackingField;
    float ArrivalDistance;
    float SlowDownDistance;
    struct LocomotionAnimation__Array* MovementEntries;
    struct LocomotionAnimation__Array* BackwardMovementEntries;
    float MinSpeed;
    float GreyboxMaxSpeed;
    bool GreyboxMovementOn;
    bool AutoTurn;
    bool CanMoveBackwards;
    float m_arrivalDistance;
    float m_slowDownDistance;
    struct LocomotionAnimation* m_currentAnimation;
    struct GroundEntityLocomotion* m_locomotion;
    struct ActiveAnimationHandle m_activeAnimation;
    struct Vector3 m_lastSearchedTargetPosition;
    float m_previousTraversalSpeed;
    bool m_arrivedAtTarget;
    bool m_isMovingBackwards;
    bool m_canReachTarget;
    int32_t m_canReachTargetFrameUpdated;
    bool StopChasingIntoLedgesAndSpikes;
    int32_t m_requestIdForward;
    int32_t m_requestIdBackward;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/LocomotionAnimation.h>
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
