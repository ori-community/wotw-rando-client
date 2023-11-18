#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_DEFINED)
#define IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_DEFINED
struct GameObject;
struct MoonTimeline;
struct HornbugBossHitReactionsBehaviour_Reaction {
    struct GameObject* DamageReceiver;
    struct MoonTimeline* StandAlone;
    struct MoonTimeline* Additive;
    float HeavyDamageMultiplier;
};
#endif
#if !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_FWDDECL)
#define IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_DEFINED) && !defined(IL2CPP_STRUCT_HornbugBossHitReactionsBehaviour_Reaction_FWDDECL)
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornbugBossHitReactionsBehaviour_Reaction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
