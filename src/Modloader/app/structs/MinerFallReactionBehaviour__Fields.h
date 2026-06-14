#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonTimeline;
struct GroundEntityLocomotion;
struct MinerFallReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct FloatAnimationParameter* FallSpeedParameter;
    struct MoonTimeline* FallTimeline;
    struct MoonTimeline* LandTimeline;
    struct GroundEntityLocomotion* m_locomotion;
    struct MoonTimeline* m_currentTimeline;
    float PreventVulnerabilityAfterLandingTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MinerFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MinerFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
