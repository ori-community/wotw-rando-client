#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/ReactionFallingBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ReactionFallingBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_DEFINED
struct SpikeSlugEntity;
struct EnemyPlatformMovement;
struct SpikeSlugFallReactionBehaviour__Fields {
    struct ReactionFallingBehaviour__Fields _;
    float ImpactSpringForce;
    int32_t MaxAmountOfGroundBounces;
    bool ZeroGravityAngleMidAir;
    float GravityChangeDelay;
    float GravityChangeRate;
    float m_fallTime;
    struct SpikeSlugEntity* m_spikeSlugEntity;
    struct EnemyPlatformMovement* m_platformMovement;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/EnemyPlatformMovement.h>
#include <Modloader/app/structs/SpikeSlugEntity.h>
#endif
#undef IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpikeSlugFallReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
