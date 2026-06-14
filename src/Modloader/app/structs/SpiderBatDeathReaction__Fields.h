#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct DeathStartEffectSpawnSetting;
struct ReactionFallingBehaviour;
struct CharacterPlatformMovement;
struct SpiderBatDeathReaction__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* DeathStartTimeline;
    struct MoonTimeline* Death;
    float DeathDamageForceMultiplier;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* m_currentTimeline;
    struct ReactionFallingBehaviour* m_fallReaction;
    struct CharacterPlatformMovement* m_platformMovement;
    bool m_waitingForDeath;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/ReactionFallingBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
