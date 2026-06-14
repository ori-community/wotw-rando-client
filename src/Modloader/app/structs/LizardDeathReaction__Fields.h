#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/EntityReactionBehaviour_1_LizardEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/LizardDeathReaction_DeathState__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_LizardEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_LizardDeathReaction_DeathState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_LizardDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct DeathStartEffectSpawnSetting;
struct KamikazeLizardExplosion;
struct GameObject;
struct LizardHitReactionBehaviour;
struct CharacterPlatformMovement;
struct GroundEntityLocomotion;
struct RootMotionProcessorData;
struct Transform;
struct LizardDeathReaction__Fields {
    struct EntityReactionBehaviour_1_LizardEntity___Fields _;
    struct MoonTimeline* LaunchTimeline;
    struct MoonTimeline* SpinTimeline;
    struct MoonTimeline* LandTimeline;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct KamikazeLizardExplosion* ExplosionPrefab;
    float ExplosionDamageAmound;
    DamageWeight__Enum ExplosionDamageWeight;

    struct MoonTimeline* DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject* SplashPrefab;
    struct MoonTimeline* m_currentTimeline;
    struct LizardHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_waitingForDeath;
    LizardDeathReaction_DeathState__Enum m_currentState;

    float BounceSpeedY;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    bool m_startedFalling;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
    struct RootMotionProcessorData* DrowningRootMotion;
    struct GameObject* FireDeathEffect;
    struct Transform* m_fireDeathEffectInstance;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/KamikazeLizardExplosion.h>
#include <Modloader/app/structs/LizardHitReactionBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LizardDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/LizardDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
