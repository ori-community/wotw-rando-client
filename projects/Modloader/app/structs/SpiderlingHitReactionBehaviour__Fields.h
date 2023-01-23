#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_SpiderlingEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_SpiderlingEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct Event_1;
struct SpiderlingFallReactionBehaviour;
struct SpiderlingLocomotion;
struct EntityDamageEvent;
struct SpiderlingHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_SpiderlingEntity___Fields _;
    struct MoonTimeline* Hit;
    struct MoonTimeline* HitAdditive;
    struct MoonTimeline* Knockup;
    struct MoonTimeline* Knockback;
    float MinKnockbackXSpeed;
    struct Event_1* OnAnyHitEvent;
    struct MoonTimeline* m_currentTimeline;
    struct MoonTimeline* m_lastHitOnGroundTimeline;
    struct SpiderlingFallReactionBehaviour* m_fallBehaviour;
    struct SpiderlingLocomotion* m_locomotion;
    bool m_exitEarly;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    bool DebugPauseOnHit;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderlingFallReactionBehaviour.h>
#include <Modloader/app/structs/SpiderlingLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderlingHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
