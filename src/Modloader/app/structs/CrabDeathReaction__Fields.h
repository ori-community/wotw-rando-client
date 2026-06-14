#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CrabDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CrabDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/CrabDeathReaction_DeathState__Enum.h>
#include <Modloader/app/structs/EntityReactionBehaviour_1_CrabEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_CrabEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_CrabDeathReaction_DeathState__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_CrabDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct DeathStartEffectSpawnSetting;
struct CrabHitReactionBehaviour;
struct CharacterPlatformMovement;
struct GroundEntityLocomotion;
struct RootMotionProcessorData;
struct CrabDeathReaction__Fields {
    struct EntityReactionBehaviour_1_CrabEntity___Fields _;
    struct MoonTimeline* HitTimeline;
    struct MoonTimeline* SpinTimeline;
    struct MoonTimeline* FallTimeline;
    struct MoonTimeline* BounceTimeline;
    struct MoonTimeline* DeathEndTimeline;
    struct MoonTimeline* DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject* SplashPrefab;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* ShakeTimeline;
    struct MoonTimeline* m_currentTimeline;
    struct CrabHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_waitingForDeath;
    CrabDeathReaction_DeathState__Enum m_currentState;

    int32_t m_executedDeathBounces;
    int32_t MaxDeathBounces;
    float BounceSpeedY;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct RootMotionProcessorData* RootMotion;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CrabDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_CrabDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/CrabHitReactionBehaviour.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_CrabDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_CrabDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_CrabDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/CrabDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CrabDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
