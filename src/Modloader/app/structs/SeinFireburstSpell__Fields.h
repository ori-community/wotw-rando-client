#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFireburstSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFireburstSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFireburstSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFireburstSpell__Fields_DEFINED
struct ParticleSystem;
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct SoundSource;
struct SoundProvider;
struct FloatAnimationParameter;
struct MoonAnimation;
struct ParticleSystem_Particle__Array;
struct SeinFireburstSpell__Fields {
    struct CharacterState__Fields _;
    struct ParticleSystem* FireParticles;
    float MinAimGroundAnimationAngle;
    float MaxAimGroundAnimationAngle;
    float MaxFallSpeed;
    float GravityMultiplier;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* MoveSpeed;
    struct SoundSource* LoopingSound;
    struct SoundProvider* BeginCastingSoundProvider;
    struct SoundProvider* EndCastingSoundProvider;
    float EnergyCostPerSecond;
    struct FloatAnimationParameter* AimAngle;
    struct MoonAnimation* Air;
    struct MoonAnimation* Idle;
    struct MoonAnimation* WalkBwd;
    struct MoonAnimation* WalkFwd;
    struct MoonAnimation* AirStart;
    struct MoonAnimation* GroundStart;
    float AirStartAttackPointNormalized;
    float GroundStartAttackPointNormalized;
    float m_delayTillNextHit;
    struct ParticleSystem_Particle__Array* m_particles;
    int32_t m_particleCount;
    bool m_particlesCasting;
    bool m_playingStartAnim;
    bool m_wasOnGround;
    bool m_spellActive;
    float m_flameAngle;
    float m_animationAimAngle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFireburstSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFireburstSpell__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/ParticleSystem.h>
#include <Modloader/app/structs/ParticleSystem_Particle__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SeinFireburstSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFireburstSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFireburstSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFireburstSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFireburstSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
