#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_SandWormEntity___Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_SandWormEntity___Fields_DEFINED)
#define IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_DEFINED
struct MoonTimeline;
struct SandwormHitReaction;
struct DeathStartEffectSpawnSetting;
struct SandWormDeathBehaviour__Fields {
    struct EntityReactionBehaviour_1_SandWormEntity___Fields _;
    struct MoonTimeline* DeathSequence;
    float DamageForceMultiplier;
    float MaxInWaterVelocity;
    struct SandwormHitReaction* m_hitReactionBehaviour;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SandwormHitReaction.h>
#endif
#undef IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormDeathBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormDeathBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormDeathBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
