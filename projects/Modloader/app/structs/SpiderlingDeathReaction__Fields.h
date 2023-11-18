#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour__Fields.h>
#include <Modloader/app/structs/SpiderlingDeathReaction_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderlingDeathReaction_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct CharacterPlatformMovement;
struct SpiderlingLocomotion;
struct DeathStartEffectSpawnSetting;
struct SpiderlingDeathReaction__Fields {
    struct EntityReactionBehaviour__Fields _;
    struct MoonTimeline* DeathKnockupAndLoopTimeline;
    struct MoonTimeline* AdditiveDeathStartTimeline;
    struct MoonTimeline* BurrowTimeline;
    struct MoonTimeline* BounceTimeline;
    struct MoonTimeline* LandShakeTimeline;
    struct MoonTimeline* m_currentTimeline;
    struct CharacterPlatformMovement* m_platformMovement;
    struct SpiderlingLocomotion* m_locomotion;
    bool m_startedFalling;
    SpiderlingDeathReaction_State__Enum m_state;

    struct Vector2 m_lastFallingVelocity;
    int32_t m_bunceCount;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    float WallAndCeilingKnockup;
    float MinYSpeedForKnockup;
    float BounceStrength;
    int32_t MaxBounces;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SpiderlingLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderlingDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderlingDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderlingDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
