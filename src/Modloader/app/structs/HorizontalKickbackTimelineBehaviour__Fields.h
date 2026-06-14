#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_DEFINED
struct MoonTimeline;
struct RootMotionProcessorData;
struct Locomotion;
struct ILocomotionTurningHandler;
struct IActiveAnimation;
struct DynamicDataResolver;
struct HorizontalKickbackTimelineBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* KickBackAnimation;
    struct MoonTimeline* KickBackAirAnimation;
    struct MoonTimeline* KickForwardAnimation;
    struct MoonTimeline* KickForwardAirAnimation;
    struct RootMotionProcessorData* RootMotion;
    int32_t AnimationPriority;
    bool RestartAnimationForEachExecution;
    bool m_isInReaction;
    struct Locomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
    struct IActiveAnimation* m_animationState;
    bool m_playingAirAnimation;
    struct DynamicDataResolver* m_dataResolver;
    struct MoonTimeline* m_currentTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/IActiveAnimation.h>
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HorizontalKickbackTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HorizontalKickbackTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HorizontalKickbackTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
