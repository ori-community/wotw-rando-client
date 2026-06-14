#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_DEFINED
struct DynamicDataResolver;
struct SnapTrapHookVisuals;
struct MoonTimeline;
struct SnapTrapHookAnimator__Fields {
    struct MonoBehaviour__Fields _;
    struct DynamicDataResolver* m_dataResolver;
    struct SnapTrapHookVisuals* Visuals;
    struct MoonTimeline* IdleAnimatorTimeline;
    struct MoonTimeline* WarnAnimatorTimeline;
    struct MoonTimeline* ClosingAnimatorTimeline;
    struct MoonTimeline* ClosedLoopAnimatorTimeline;
    struct MoonTimeline* ChewingAnimatorTimeline;
    struct MoonTimeline* OpeningAfterMissedAnimatorTimeline;
    struct MoonTimeline* OpeningAfterCaughtAnimatorTimeline;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_FWDDECL
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SnapTrapHookVisuals.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapHookAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapHookAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapHookAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
