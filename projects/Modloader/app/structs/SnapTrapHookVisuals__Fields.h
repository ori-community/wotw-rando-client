#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct BoxCollider;
struct Transform;
struct SnapTrapHookVisuals__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* WarnTimeline;
    struct MoonTimeline* ClosingTimeline;
    struct MoonTimeline* ClosedLoopTimeline;
    struct MoonTimeline* ChewingTimeline;
    struct MoonTimeline* OpeningAfterMissedTimeline;
    struct MoonTimeline* OpeningAfterCaughtTimeline;
    struct EventTriggerAnimator* CheckTrapTrigger;
    struct EventTriggerAnimator* ChewingDoDamageEvent;
    struct EventTriggerAnimator* ActivateOriAfterCaughtEvent;
    struct BoxCollider* CatchBoundsCollider;
    struct BoxCollider* ActivationTrigger;
    struct EventTriggerAnimator* ReleaseLeashTrigger;
    struct EventTriggerAnimator* DisableLeashTrigger;
    struct EventTriggerAnimator* EnableLeashTrigger;
    struct Transform* AfterCatchSeinPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_FWDDECL)
#define IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_FWDDECL
#include <Modloader/app/structs/BoxCollider.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SnapTrapHookVisuals__Fields_FWDDECL)
#include <Modloader/app/structs/SnapTrapHookVisuals__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SnapTrapHookVisuals__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
