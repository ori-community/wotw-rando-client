#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatHitReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatHitReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_SpiderBatEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_SpiderBatEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBatHitReaction__Fields_DEFINED
struct MoonTimeline;
struct Event_1;
struct EntityDamageEvent;
struct SpiderBatHitReaction__Fields {
    struct EntityHitReactionBehaviour_1_SpiderBatEntity___Fields _;
    struct MoonTimeline* IdleTimeline;
    struct MoonTimeline* HitForwardTimeline;
    struct MoonTimeline* HitBackwardTimeline;
    struct MoonTimeline* HitAdditiveTimeline;
    struct Event_1* OnAnyHitEvent;
    struct MoonTimeline* m_currentTimeline;
    bool m_exitEarly;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatHitReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatHitReaction__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatHitReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatHitReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatHitReaction__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatHitReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatHitReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
