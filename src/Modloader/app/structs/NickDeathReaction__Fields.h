#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_NickDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_NickDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_NickGrayboxEntity___Fields.h>
#include <Modloader/app/structs/NickDeathReaction_DeathState__Enum.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_NickGrayboxEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_NickDeathReaction_DeathState__Enum_DEFINED)
#define IL2CPP_STRUCT_NickDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct NickHitReactionBehaviour;
struct CharacterPlatformMovement;
struct Locomotion;
struct RootMotionProcessorData;
struct NickDeathReaction__Fields {
    struct EntityReactionBehaviour_1_NickGrayboxEntity___Fields _;
    struct MoonTimeline* HitTimeline;
    struct MoonTimeline* SpinTimeline;
    struct MoonTimeline* FallTimeline;
    struct MoonTimeline* BounceTimeline;
    struct MoonTimeline* DeathEndTimeline;
    struct MoonTimeline* Death;
    struct MoonTimeline* m_currentTimeline;
    struct NickHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct Locomotion* m_locomotion;
    bool m_waitingForDeath;
    NickDeathReaction_DeathState__Enum m_currentState;

    int32_t m_executedDeathBounces;
    int32_t MaxDeathBounces;
    float BounceSpeedY;
    float DeathKickbackMinMagnitude;
    float DeathKickbackMinBoost;
    float DeathKickbackMinUpDirection;
    struct RootMotionProcessorData* RootMotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_NickDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_NickDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/NickHitReactionBehaviour.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_NickDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_NickDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_NickDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/NickDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/NickDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
