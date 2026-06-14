#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#define IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct GroundEntityLocomotion;
struct TurtleRollBackBehaviour__Fields {
    struct EntityLocomotionTask__Fields _;
    struct MoonTimeline* TimelineSequence;
    struct RootMotionProcessorData* RootMotion;
    struct GroundEntityLocomotion* m_groundLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TurtleRollBackBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/TurtleRollBackBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TurtleRollBackBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
