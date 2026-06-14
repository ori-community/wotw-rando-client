#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/TraversalBehaviour__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_TraversalBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_DEFINED
struct LocomotionTimelineAnimation__Array;
struct LocomotionTimelineAnimation;
struct LocomotionAnimation__Array;
struct LocomotionAnimation;
struct VolumeEntityLocomotion;
struct IActiveAnimation;
struct LocomotionVolumeMoveTimelineBehaviour__Fields {
    struct TraversalBehaviour__Fields _;
    struct LocomotionTimelineAnimation__Array* TimelineMovementEntries;
    struct LocomotionTimelineAnimation__Array* TimelineBackwardMovementEntries;
    struct LocomotionTimelineAnimation* m_currentTimelineAnimation;
    float ArrivalDistance;
    float SlowDownDistance;
    struct LocomotionAnimation__Array* MovementEntries;
    float MinSpeed;
    float GreyboxMaxSpeed;
    bool GreyboxMovementOn;
    float m_arrivalDistance;
    float m_slowDownDistance;
    struct LocomotionAnimation* m_currentAnimation;
    struct VolumeEntityLocomotion* m_locomotion;
    struct IActiveAnimation* m_activeAnimation;
    struct Vector3 m_lastSearchedTargetPosition;
    float m_previousTraversalSpeed;
    bool m_arrivedAtTarget;
    struct Vector3 _TargetPosition_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/LocomotionAnimation.h>
#include <Modloader/app/structs/LocomotionAnimation__Array.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionVolumeMoveTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionVolumeMoveTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionVolumeMoveTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
