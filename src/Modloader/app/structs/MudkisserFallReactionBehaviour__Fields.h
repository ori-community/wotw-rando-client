#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonTimeline;
struct VolumeEntityLocomotion;
struct CancelableAnimator;
struct MudkisserGrayboxEntity;
struct MudkisserFallReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct FloatAnimationParameter* FallSpeedParameter;
    struct MoonTimeline* EnterWaterTimeline;
    struct MoonTimeline* ExitWaterTimeline;
    struct MoonTimeline* InAirFallStartTimeline;
    struct MoonTimeline* InAirFallLoopTimeline;
    struct MoonTimeline* LandTimeline;
    struct VolumeEntityLocomotion* m_locomotion;
    struct MoonTimeline* m_currentTimeline;
    struct CancelableAnimator* m_cancelable;
    bool canCancel;
    struct MudkisserGrayboxEntity* m_mudkisserEntity;
    float PreventVulnerabilityAfterLandingTime;
    bool RotateTowardsFallingSpeed;
    float RotationSpeed;
    float MinVelocityToJumpOut;
    float MinVelocityToJumpIn;
    float ClampVelocity;
    bool m_shouldPauseLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CancelableAnimator.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MudkisserGrayboxEntity.h>
#include <Modloader/app/structs/VolumeEntityLocomotion.h>
#endif
#undef IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MudkisserFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MudkisserFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MudkisserFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
