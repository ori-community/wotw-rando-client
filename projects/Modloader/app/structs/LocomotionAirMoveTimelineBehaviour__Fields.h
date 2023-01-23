#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionAirMoveBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionAirMoveBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_DEFINED
struct LocomotionTimelineAnimation__Array;
struct LocomotionTimelineAnimation;
struct LocomotionAirMoveTimelineBehaviour__Fields {
    struct LocomotionAirMoveBehaviour__Fields _;
    struct LocomotionTimelineAnimation__Array* TimelineMovementEntries;
    struct LocomotionTimelineAnimation__Array* TimelineBackwardMovementEntries;
    struct LocomotionTimelineAnimation* m_currentTimelineAnimation;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LocomotionTimelineAnimation.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionAirMoveTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionAirMoveTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
