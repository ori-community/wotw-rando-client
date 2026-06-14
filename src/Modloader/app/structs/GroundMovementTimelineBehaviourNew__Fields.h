#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/TimelineBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_DEFINED
struct RootMotionProcessorData;
struct GroundEntityLocomotion;
struct GroundMovementTimelineBehaviourNew__Fields {
    struct TimelineBehaviourNew__Fields _;
    struct RootMotionProcessorData* RootMotion;
    struct GroundEntityLocomotion* m_locomotion;
    bool UseRootMotionAsTargetSpeed;
    bool ShouldPauseLocomotionTimelines;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundMovementTimelineBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundMovementTimelineBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
