#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SkeetoDeathReaction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SkeetoDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoDeathReaction__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_SkeetoEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_SkeetoEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_SkeetoDeathReaction__Fields_DEFINED
struct MoonTimeline;
struct GameObject;
struct SkeetoFallingReactionBehaviour;
struct SkeetoHitReaction;
struct CharacterPlatformMovement;
struct SkeetoLocomotion;
struct DeathStartEffectSpawnSetting;
struct SkeetoDeathReaction__Fields {
    struct EntityReactionBehaviour_1_SkeetoEntity___Fields _;
    struct MoonTimeline* DeathStartTimeline;
    struct MoonTimeline* Death;
    struct MoonTimeline* DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject* SplashPrefab;
    struct MoonTimeline* m_currentTimeline;
    struct SkeetoFallingReactionBehaviour* m_fallReaction;
    struct SkeetoHitReaction* m_hitReaction;
    struct CharacterPlatformMovement* m_platformMovement;
    struct SkeetoLocomotion* m_locomotion;
    bool m_waitingForDeath;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    bool m_isDrowning;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
    bool m_wasCacheSerialized;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SkeetoDeathReaction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SkeetoDeathReaction__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SkeetoFallingReactionBehaviour.h>
#include <Modloader/app/structs/SkeetoHitReaction.h>
#include <Modloader/app/structs/SkeetoLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SkeetoDeathReaction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SkeetoDeathReaction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SkeetoDeathReaction__Fields_FWDDECL)
#include <Modloader/app/structs/SkeetoDeathReaction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SkeetoDeathReaction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
