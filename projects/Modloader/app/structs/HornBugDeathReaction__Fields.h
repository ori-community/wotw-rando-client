#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HornBugDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HornBugDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_BugHornEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/HornBugDeathReaction_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_BugHornEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_HornBugDeathReaction_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_HornBugDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct DeathStartEffectSpawnSetting;
struct HornBugHitReactionBehaviour;
struct CharacterPlatformMovement;
struct Locomotion;
struct GameObject;
struct RootMotionProcessorData;
struct HornBugDeathReaction__Fields {
    struct EntityReactionBehaviour_1_BugHornEntity___Fields _;
    struct MoonTimeline* HitTimeline;
    struct MoonTimeline* FallTimeline;
    struct MoonTimeline* DeathEndTimeline;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* m_currentTimeline;
    struct HornBugHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct Locomotion* m_locomotion;
    bool m_waitingForDeath;
    HornBugDeathReaction_State__Enum m_state;

    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct MoonTimeline* DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject* SplashPrefab;
    struct RootMotionProcessorData* RootMotion;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
    float m_prevYVelocity;
    bool m_isMovingVertically;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HornBugDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_HornBugDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HornBugHitReactionBehaviour.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_HornBugDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HornBugDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HornBugDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/HornBugDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HornBugDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
