#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_SneezeSlugEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour_DeathState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_SneezeSlugEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour_DeathState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct OrbSpawner;
struct DeathStartEffectSpawnSetting;
struct SneezeSlugHitReactionBehaviour;
struct CharacterPlatformMovement;
struct GroundEntityLocomotion;
struct RootMotionProcessorData;
struct EventTriggerAnimator;
struct PrefabSpawner;
struct CloudAttackSettings;
struct SneezeSlugDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_SneezeSlugEntity___Fields _;
    struct MoonTimeline* LaunchTimeline;
    struct MoonTimeline* FallTimeline;
    struct MoonTimeline* LandAndExplodeTimeline;
    struct MoonTimeline* DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject* SplashPrefab;
    bool SpawnOrbs;
    struct OrbSpawner* OrbSpawner;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* ShakeTimeline;
    struct MoonTimeline* m_currentTimeline;
    struct SneezeSlugHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_waitingForDeath;
    SneezeSlugDeathReactionBehaviour_DeathState__Enum m_currentState;

    float BounceSpeedY;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct RootMotionProcessorData* RootMotion;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
    struct EventTriggerAnimator* BlastTrigger;
    struct PrefabSpawner* BlastProjectileSpawner;
    struct CloudAttackSettings* CloudAttackSettings;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CloudAttackSettings.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/OrbSpawner.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/SneezeSlugHitReactionBehaviour.h>
#endif
#undef IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SneezeSlugDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SneezeSlugDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
