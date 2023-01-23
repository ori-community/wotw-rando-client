#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_DEFINED)
#include <Modloader/app/structs/TimelineBehaviourNew__Fields.h>
#include <Modloader/app/structs/VolumeType__Enum.h>
#if defined(IL2CPP_STRUCT_TimelineBehaviourNew__Fields_DEFINED) && defined(IL2CPP_STRUCT_VolumeType__Enum_DEFINED)
#define IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_DEFINED
struct RootMotionProcessorData;
struct VolumeEntityLocomotion;
struct VolumeMovementTimelineBehaviourNew__Fields {
    struct TimelineBehaviourNew__Fields _;
    VolumeType__Enum AllowedVolume;

    struct RootMotionProcessorData* RootMotion;
    struct VolumeEntityLocomotion* m_locomotion;
    bool UseRootMotionAsTargetSpeed;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_FWDDECL)
#define IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_FWDDECL
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VolumeMovementTimelineBehaviourNew__Fields_FWDDECL)
#include <Modloader/app/structs/VolumeMovementTimelineBehaviourNew__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VolumeMovementTimelineBehaviourNew__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
