#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct ReactionFallingBehaviour;
struct AirEntityLocomotion;
struct EntityDamageEvent;
struct Event_1;
struct GasballHitReactionBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* HitReaction;
    struct MoonTimeline* HitAdditive;
    struct MoonTimeline* m_currentTimeline;
    struct ReactionFallingBehaviour* m_fallBehaviour;
    struct AirEntityLocomotion* m_locomotion;
    struct EntityDamageEvent* _DamageEvent_k__BackingField;
    float KickbackMultiplier;
    float KickbackMax;
    struct Event_1* OnAnyHitEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/EntityDamageEvent.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#endif
#undef IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballHitReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GasballHitReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballHitReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
