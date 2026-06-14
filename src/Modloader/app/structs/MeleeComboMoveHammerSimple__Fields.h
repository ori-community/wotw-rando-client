#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMoveHammerBase__Fields.h>
#include <Modloader/app/structs/MeleeComboMoveHammerSimple_States__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MeleeComboMoveHammerSimple_States__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_DEFINED
struct HorizontalPlatformMovementSettings_SpeedSet;
struct HammerComboMoveSimple_BalancingData;
struct GameObject;
struct SoundProvider;
struct MoonTimeline;
struct EventTriggerAnimator;
struct HammerTrail;
struct Damage;
struct MeleeComboMoveHammerSimple__Fields {
    struct MeleeComboMoveHammerBase__Fields _;
    bool ModifyHorizontalMovementSettings;
    bool UseSpeedSets;
    struct HorizontalPlatformMovementSettings_SpeedSet* AirSpeedSet;
    struct HorizontalPlatformMovementSettings_SpeedSet* GroundSpeedSet;
    bool ModifyGravitySettings;
    float GravityStrength;
    float EnterMoveVelocityMultiplierX;
    float EnterMoveVelocityMultiplierUp;
    float EnterMoveVelocityMultiplierDown;
    float EnterMoveVelocityMultiplierUpAdd;
    float EnterMoveVelocityMultiplierDownAdd;
    struct HammerComboMoveSimple_BalancingData* Balancing;
    DamageWeight__Enum DamageWeight;

    float CameraShake;
    float DisableEnemyFallingDuration;
    struct Vector2 KickbackDirection;
    float KickbackStrength;
    struct GameObject* ShockWave;
    bool ParentShockwaveToOri;
    struct GameObject* GroundHitEffect;
    float GroundCollisionSpeedThreshold;
    struct GameObject* BlockEffect;
    struct SoundProvider* HitSound;
    struct SoundProvider* AttackSound;
    struct SoundProvider* GroundHitSound;
    struct MoonTimeline* PrepareAttackTimeline;
    float PrepareDuration;
    struct MoonTimeline* AttackTimeline;
    struct MoonTimeline* GroundHitResolveTimeline;
    float GroundHitToIdleTransitionTime;
    struct EventTriggerAnimator* SpawnEffectsTrigger;
    float AnimationSpeedMultiplier;
    float AttackEndSpeedUp;
    float BlendSpeed;
    struct HammerTrail* m_currentTrail;
    bool m_active;
    float m_idleTransitionTimer;
    bool m_finalizeComboAfterResolve;
    MeleeComboMoveHammerSimple_States__Enum m_currentState;

    float m_desiredBlendValue;
    bool m_speedUpSet;
    bool m_canExecuteNextMove;
    bool m_nextMoveRegisteredBeforeWindow;
    bool m_registeredMoveSoundPlayed;
    bool m_canSkipGroundMiss;
    float m_lastTimeUsed;
    struct Damage* m_damage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HammerComboMoveSimple_BalancingData.h>
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveHammerSimple__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveHammerSimple__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveHammerSimple__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
