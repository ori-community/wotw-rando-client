#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ElectricSlugEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ElectricSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricSlugEntity__Fields_DEFINED)
#include <Modloader/app/structs/SpikeSlugEntity__Fields.h>
#if defined(IL2CPP_STRUCT_SpikeSlugEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ElectricSlugEntity__Fields_DEFINED
struct GameObject;
struct ElectricSlugDamageDealer;
struct ZapTrail;
struct SpikeSlugHitReactionBehaviour;
struct SpikeSlugFallReactionBehaviour;
struct Event_1;
struct ElectricSlugEntity__Fields {
    struct SpikeSlugEntity__Fields _;
    struct GameObject* ExplosionPrefab;
    struct ElectricSlugDamageDealer* DamageDealer;
    struct ZapTrail* ZapTrailPrefab;
    float KnockOffFromRailForce;
    struct SpikeSlugHitReactionBehaviour* HitReaction;
    struct SpikeSlugFallReactionBehaviour* FallReaction;
    struct Event_1* WwiseZapEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ElectricSlugEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ElectricSlugEntity__Fields_FWDDECL
#include <Modloader/app/structs/ElectricSlugDamageDealer.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SpikeSlugFallReactionBehaviour.h>
#include <Modloader/app/structs/SpikeSlugHitReactionBehaviour.h>
#include <Modloader/app/structs/ZapTrail.h>
#endif
#undef IL2CPP_STRUCT_ElectricSlugEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ElectricSlugEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ElectricSlugEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ElectricSlugEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ElectricSlugEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
