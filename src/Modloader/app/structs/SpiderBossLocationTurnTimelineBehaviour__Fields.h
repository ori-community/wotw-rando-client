#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/SpiderBossBaseBehaviour__Fields.h>
#include <Modloader/app/structs/SpiderBossLocationZone__Enum.h>
#if defined(IL2CPP_STRUCT_SpiderBossBaseBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderBossLocationZone__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_DEFINED
struct MoonTimeline;
struct SpiderBossAnimationPlayer;
struct SpiderBossLocationTurnTimelineBehaviour__Fields {
    struct SpiderBossBaseBehaviour__Fields _;
    struct MoonTimeline* StartTimeline;
    struct MoonTimeline* EndTimeline;
    struct MoonTimeline* TurnEndTimeline;
    struct MoonTimeline* TurnMoveBackEndTimeline;
    float DistanceXToMoveBack;
    struct MoonTimeline* m_currentTimeline;
    struct SpiderBossAnimationPlayer* m_animationPlayer;
    bool m_canFinish;
    SpiderBossLocationZone__Enum m_startZone;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderBossAnimationPlayer.h>
#endif
#undef IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBossLocationTurnTimelineBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBossLocationTurnTimelineBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBossLocationTurnTimelineBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
