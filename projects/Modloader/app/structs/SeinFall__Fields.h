#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFall__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFall__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/RaycastHit.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_RaycastHit_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED)
#define IL2CPP_STRUCT_SeinFall__Fields_DEFINED
struct MoonAnimation;
struct LandPrediction;
struct SurfaceToSoundProviderMap;
struct SoundProvider;
struct FloatAnimationParameter;
struct CameraShake;
struct MaterialBasedSeinEffectsMap;
struct Func_1_Boolean_;
struct CharacterTimelineTurning;
struct SeinFall__Fields {
    struct CharacterState__Fields _;
    float FallingSpeedForSound;
    float GroundLandImpulsePerUnitsOfSpeed;
    float GroundLandMaxImpulse;
    float HeavyLandSpeedThreshold;
    float HeavyLandLockInputDuration;
    float LongFallLandThreashold;
    float LongFallLandLockInputDuration;
    struct MoonAnimation* LongFallLandAnimation;
    struct LandPrediction* LongFallPrediction;
    float TurnAnimUninterruptibleDuration;
    struct MoonAnimation* IdleAnimation;
    struct SurfaceToSoundProviderMap* LandingSound;
    struct SoundProvider* LongLandSound;
    struct SoundProvider* LongRollLandSound;
    struct MoonAnimation* MovingAnimation;
    struct FloatAnimationParameter* FallSpeed;
    struct CameraShake* LongFallShake;
    struct MaterialBasedSeinEffectsMap* EffectsMap;
    bool m_hasPlayedFallSound;
    bool m_hasStoppedFallSound;
    float m_ignoreLandTime;
    float m_ignoreFallTime;
    bool m_startedLongFall;
    bool m_cachedIsOnGround;
    struct RaycastHit m_predictionHit;
    struct ActiveAnimationHandle m_heavyLandActiveAnimation;
    bool m_lastFrameFaceLeft;
    bool m_playingTurnAnim;
    bool m_interruptingTurnAnim;
    float m_turnAnimNormalizedTime;
    struct Func_1_Boolean_* s_shouldFallKeepPlaying;
    struct Func_1_Boolean_* s_shouldFallIdleKeepPlaying;
    struct Func_1_Boolean_* s_shouldLongFallKeepPlaying;
    struct CharacterTimelineTurning* m_currentTurning;
    bool _WantsToFaceLeft_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFall__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFall__Fields_FWDDECL
#include <Modloader/app/structs/CameraShake.h>
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/LandPrediction.h>
#include <Modloader/app/structs/MaterialBasedSeinEffectsMap.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SeinFall__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFall__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFall__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFall__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFall__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
