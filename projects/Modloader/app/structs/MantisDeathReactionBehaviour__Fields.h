#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityReactionBehaviour_1_MantisGrayboxEntity___Fields.h>
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/MantisDeathReactionBehaviour_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_EntityReactionBehaviour_1_MantisGrayboxEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_MantisDeathReactionBehaviour_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_DEFINED
struct MoonTimeline;
struct Transform;
struct GameObject;
struct DeathStartEffectSpawnSetting;
struct MantisFallReactionBehaviour;
struct MantisHitReactionBehaviour;
struct CharacterPlatformMovement;
struct GroundEntityLocomotion;
struct RootMotionProcessorData;
struct PerspectiveRotationAdjustment;
struct MantisDeathReactionBehaviour__Fields {
    struct EntityReactionBehaviour_1_MantisGrayboxEntity___Fields _;
    struct MoonTimeline* DeathLaunch;
    struct MoonTimeline* DeathLoop;
    struct MoonTimeline* DeathLand;
    struct MoonTimeline* ShakeTimeline;
    struct Transform* SpinTransform;
    struct Transform* FeetTransform;
    float FallAngleMultiplier;
    struct MoonTimeline* DrownTimeline;
    float InitialDrowningSubmersion;
    struct GameObject* SplashPrefab;
    struct DeathStartEffectSpawnSetting* DeathStartEffect;
    struct MoonTimeline* m_currentTimeline;
    struct MantisFallReactionBehaviour* m_fallBehaviour;
    struct MantisHitReactionBehaviour* m_hitReactionBehaviour;
    struct CharacterPlatformMovement* m_platformMovement;
    struct GroundEntityLocomotion* m_locomotion;
    bool m_waitingForDeath;
    struct RootMotionProcessorData* RootMotion;
    struct PerspectiveRotationAdjustment* PerspectiveRotationAdjustment;
    bool DebugPauseOnEnter;
    MantisDeathReactionBehaviour_State__Enum m_state;

    float m_initialMoveAngle;
    struct Vector2 m_initialMoveSpeed;
    bool m_startedFalling;
    float m_timeDrowning;
    struct Vector2 m_initialDrowningSpeed;
    struct EntityWeightData_EntityWeightSettings m_weightData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/CharacterPlatformMovement.h>
#include <Modloader/app/structs/DeathStartEffectSpawnSetting.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GroundEntityLocomotion.h>
#include <Modloader/app/structs/MantisFallReactionBehaviour.h>
#include <Modloader/app/structs/MantisHitReactionBehaviour.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PerspectiveRotationAdjustment.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MantisDeathReactionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/MantisDeathReactionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MantisDeathReactionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
