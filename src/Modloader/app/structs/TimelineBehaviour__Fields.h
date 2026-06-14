#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_TimelineBehaviour__Fields_DEFINED
struct LegacyTimelineSequence;
struct RootMotionProcessorData;
struct Locomotion;
struct TimelineBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    struct LegacyTimelineSequence* _TimelineSequence_k__BackingField;
    float _AnimationSpeed_k__BackingField;
    bool nonInterruptable;
    bool stopMovement;
    struct RootMotionProcessorData* RootMotion;
    struct Locomotion* m_groundLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_TimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
