#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_DEFINED
struct MoonAnimator;
struct MoonTimeline;
struct PetrifiedOwlFeedingGroundsPOwlController__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonAnimator* PetrifiedOwlAnimator;
    struct MoonTimeline* RevealAnimationTimeline;
    struct MoonTimeline* EatAnimationTimeline;
    struct MoonTimeline* IdleAnimationTimeline;
    struct MoonTimeline* FreezeAnimationTimeline;
    struct MoonTimeline* KillTakeOffAnimationTimeline;
    struct MoonTimeline* KillFlyAnimationTimeline;
    struct MoonTimeline* LandProfileAnimationTimeline;
    struct Vector3 KillFlyPositiionOffset;
    struct Vector3 LandProfileLocalPositiion;
    struct Vector3 m_initPosition;
    PetrifiedOwlFeedingGroundsPOwlController_PetrifiedOwlFeedingGroundsPOwlState__Enum m_state;

    float m_stateTime;
    bool m_initiated;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlFeedingGroundsPOwlController__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundsPOwlController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
