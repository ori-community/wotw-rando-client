#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KickupDeathBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KickupDeathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupDeathBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/KickupDeathBehaviour_KickupState__Enum.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_KickupDeathBehaviour_KickupState__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_KickupDeathBehaviour__Fields_DEFINED
struct LegacyTimelineSequence;
struct MoonTimeline;
struct MoonAnimation;
struct RootMotionProcessorData;
struct Locomotion;
struct KickupDeathBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    KickupDeathBehaviour_KickupState__Enum State;

    struct LegacyTimelineSequence* KickupAnimator;
    struct LegacyTimelineSequence* LandingAnimator;
    struct MoonTimeline* KickupAnimatorNew;
    struct MoonTimeline* LandingAnimatorNew;
    struct MoonAnimation* FallingLoop;
    struct RootMotionProcessorData* RootMotion;
    struct RootMotionProcessorData* LandingRootMotion;
    struct Locomotion* m_locomotion;
    struct ActiveAnimationHandle m_fallingAnim;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KickupDeathBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KickupDeathBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_KickupDeathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupDeathBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KickupDeathBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KickupDeathBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KickupDeathBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
