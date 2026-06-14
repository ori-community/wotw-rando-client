#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KickupBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KickupBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/KickupBehaviour_KickupState__Enum.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_KickupBehaviour_KickupState__Enum_DEFINED)
#define IL2CPP_STRUCT_KickupBehaviour__Fields_DEFINED
struct MoonTimeline;
struct LegacyTimelineSequence;
struct RootMotionProcessorData;
struct Locomotion;
struct ILocomotionTurningHandler;
struct KickupBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    KickupBehaviour_KickupState__Enum State;

    struct MoonTimeline* KickupAnimatorNew;
    struct MoonTimeline* LandingAnimatorNew;
    struct LegacyTimelineSequence* KickupAnimator;
    struct LegacyTimelineSequence* LandingAnimator;
    struct RootMotionProcessorData* RootMotion;
    struct RootMotionProcessorData* LandingRootMotion;
    struct Locomotion* m_locomotion;
    struct ILocomotionTurningHandler* m_turningHandler;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KickupBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_KickupBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/ILocomotionTurningHandler.h>
#include <Modloader/app/structs/LegacyTimelineSequence.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_KickupBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_KickupBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_KickupBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/KickupBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KickupBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
