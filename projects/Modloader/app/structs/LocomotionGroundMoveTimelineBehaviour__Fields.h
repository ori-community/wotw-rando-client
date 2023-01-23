#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/LocomotionGroundMoveBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionGroundMoveBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_DEFINED
struct LocomotionTimelineAnimation__Array;
struct LocomotionTimelineAnimation;
struct LocomotionGroundMoveTimelineBehaviour__Fields {
    struct LocomotionGroundMoveBehaviour__Fields _;
    struct LocomotionTimelineAnimation__Array* TimelineMovementEntries;
    struct LocomotionTimelineAnimation__Array* TimelineBackwardMovementEntries;
    struct LocomotionTimelineAnimation* m_currentTimelineAnimation;
    bool m_isTimelinePlaybackPaused;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LocomotionTimelineAnimation.h>
#include <Modloader/app/structs/LocomotionTimelineAnimation__Array.h>
#endif
#undef IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionGroundMoveTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionGroundMoveTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
