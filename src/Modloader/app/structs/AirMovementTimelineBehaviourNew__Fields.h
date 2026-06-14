#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/TimelineBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_DEFINED
struct RootMotionProcessorData;
struct AirEntityLocomotion;
struct AirMovementTimelineBehaviourNew__Fields {
    struct TimelineBehaviourNew__Fields _;
    struct RootMotionProcessorData* RootMotion;
    struct AirEntityLocomotion* m_locomotion;
    bool UseRootMotionAsTargetSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AirMovementTimelineBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/AirMovementTimelineBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AirMovementTimelineBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
