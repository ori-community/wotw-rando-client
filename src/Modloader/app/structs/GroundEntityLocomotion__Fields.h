#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundEntityLocomotion__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeight__Enum.h>
#include <Modloader/app/structs/Locomotion__Fields.h>
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Locomotion__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED
struct GroundEntityMovementProcessor;
struct BaseLocomotionTurningBehaviour;
struct EntityLocomotionTask;
struct LocomotionGroundMoveBehaviour;
struct LocomotionGroundMoveTimelineBehaviour;
struct EntityFallEvent;
struct GroundEntityLocomotion__Fields {
    struct Locomotion__Fields _;
    float MinimumFallDistance;
    float TargetPositionGroundSnapDistance;
    bool AdjustLookDirectionToGroundAngle;
    struct GroundEntityMovementProcessor* m_groundMovement;
    struct BaseLocomotionTurningBehaviour* TurningBehaviour;
    struct EntityLocomotionTask* IdleBehaviour;
    bool StopWalkingWhenNearLedge;
    struct LocomotionGroundMoveBehaviour* m_movementBehaviour;
    struct LocomotionGroundMoveTimelineBehaviour* m_timelineMovementBehaviour;
    struct Nullable_1_Single_ m_registeredLookDirection;
    bool m_lookDirectionLocked;
    float m_timeTargetIsOnTheSameArea;
    struct EntityFallEvent* m_fallEventCache;
    EntityWeightData_EntityWeight__Enum _Weight_k__BackingField;

    int32_t m_requestId;
    int32_t m_standingOnLedgeReqIds;
    int32_t m_standingOnLedgeReqIds2;
    int32_t m_requestIdForward;
    int32_t m_requestIdBackward;
    int32_t m_groundPositionReqId;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundEntityLocomotion__Fields_FWDDECL
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour.h>
#include <Modloader/app/structs/EntityFallEvent.h>
#include <Modloader/app/structs/EntityLocomotionTask.h>
#include <Modloader/app/structs/GroundEntityMovementProcessor.h>
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour.h>
#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour.h>
#endif
#undef IL2CPP_STRUCT_GroundEntityLocomotion__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundEntityLocomotion__Fields_FWDDECL)
#include <Modloader/app/structs/GroundEntityLocomotion__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundEntityLocomotion__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
