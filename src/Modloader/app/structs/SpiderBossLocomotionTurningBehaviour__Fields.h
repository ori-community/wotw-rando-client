#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BaseLocomotionTurningBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BaseLocomotionTurningBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_DEFINED
struct SpiderBossLocationTimelineSet;
struct MoonTimeline;
struct List_1_SpiderBossLocationZone_;
struct ReadyToFinishAnimator;
struct SpiderBossLocomotionTurningBehaviour__Fields {
    struct BaseLocomotionTurningBehaviour__Fields _;
    struct SpiderBossLocationTimelineSet* Turns;
    struct MoonTimeline* m_currentTurnAnimation;
    struct List_1_SpiderBossLocationZone_* BypassTurningZones;
    struct ReadyToFinishAnimator* m_finishAnimator;
    bool m_canFinish;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/List_1_SpiderBossLocationZone_.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReadyToFinishAnimator.h>
#include <Modloader/app/structs/SpiderBossLocationTimelineSet.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLocomotionTurningBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLocomotionTurningBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLocomotionTurningBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
