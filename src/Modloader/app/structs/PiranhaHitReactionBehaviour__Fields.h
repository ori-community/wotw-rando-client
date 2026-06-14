#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityHitReactionBehaviour_1_PiranhaEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityHitReactionBehaviour_1_PiranhaEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct Event_1;
struct SwimmingLocomotion;
struct EntityDamageEvent;
struct PiranhaHitReactionBehaviour__Fields {
    struct EntityHitReactionBehaviour_1_PiranhaEntity___Fields _;
    struct MoonTimeline* Hit;
    struct MoonTimeline* ShakeTimeline;
    struct Event_1* OnAnyHitEvent;
    struct MoonTimeline* m_currentTimeline;
    struct SwimmingLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SwimmingLocomotion.h>
#endif
#undef IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PiranhaHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PiranhaHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PiranhaHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
