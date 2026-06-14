#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GasballDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GasballDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED)
#define IL2CPP_STRUCT_GasballDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct EventTriggerAnimator;
struct GameObject;
struct DeathStartEffectSpawnSetting;
struct AirEntityLocomotion;
struct GasballDeathReaction__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* DeathTimeline;
    struct EventTriggerAnimator* ExplosionTrigger;
    struct MoonTimeline* InstantKillTimeline;
    struct EventTriggerAnimator* InstantKillExplosionTrigger;
    struct GameObject* ExplosionPrefab;
    float ExplosionDamage;
    DamageWeight__Enum DamageWeight;

    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    bool m_useInstantDeath;
    struct MoonTimeline* m_currentTimeline;
    struct AirEntityLocomotion* m_locomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GasballDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_GasballDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/AirEntityLocomotion.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_GasballDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GasballDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GasballDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/GasballDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GasballDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
