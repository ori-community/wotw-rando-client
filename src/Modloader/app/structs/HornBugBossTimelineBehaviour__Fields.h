#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/HornbugBossBaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_HornbugBossBaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct RootMotionProcessorData;
struct HornBugBossTimelineBehaviour__Fields {
    struct HornbugBossBaseBehaviour__Fields _;
    struct MoonTimeline* m_timeline;
    struct EventTriggerAnimator* FlipTrigger;
    struct RootMotionProcessorData* RootMotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugBossTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugBossTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugBossTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
