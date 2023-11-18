#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_DEFINED
struct Kickback;
struct PetrifiedOwlStats;
struct BaseAnimator;
struct PlayerStayInsideZoneTrigger;
struct TimelineEventTrigger;
struct PetrifiedOwlScreamBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float HornDestroyedScore;
    struct Kickback* ScreamKickback;
    float KickbackStrength;
    struct PetrifiedOwlStats* OwlStats;
    struct BaseAnimator* BreakHornLeftAnimator;
    struct BaseAnimator* BreakHornRightAnimator;
    struct BaseAnimator* ScreamAnimator;
    struct PlayerStayInsideZoneTrigger* ScreamAffectingZone;
    struct TimelineEventTrigger* ScreamPushEvent;
    bool m_rightHornDestructionPlayed;
    bool m_leftHornDestructionPlayed;
    struct BaseAnimator* m_hornBreakAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/PetrifiedOwlStats.h>
#include <Modloader/app/structs/PlayerStayInsideZoneTrigger.h>
#include <Modloader/app/structs/TimelineEventTrigger.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlScreamBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlScreamBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlScreamBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
