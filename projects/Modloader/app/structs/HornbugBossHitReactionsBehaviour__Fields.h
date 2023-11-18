#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_DEFINED
struct HornbugBossHitReactionsBehaviour_Reaction__Array;
struct AnimationAdditiveStrengthContext;
struct ContextSet;
struct MoonTimeline;
struct HornbugBossHitReactionsBehaviour__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct HornbugBossHitReactionsBehaviour_Reaction__Array* Reactions;
    struct AnimationAdditiveStrengthContext* m_additiveStrengthContext;
    struct ContextSet* m_timelineContext;
    struct MoonTimeline* m_stopOnExit;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/AnimationAdditiveStrengthContext.h>
#include <Modloader/app/structs/ContextSet.h>
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
