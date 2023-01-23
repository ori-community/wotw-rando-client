#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGrenadeAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGrenadeAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinGrenadeAttack_Preset__Enum.h>
#include <Modloader/app/structs/StressTestStatus__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinGrenadeAttack_Preset__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_StressTestStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinGrenadeAttack__Fields_DEFINED
struct SeinGrenadeAttack_BalancingData;
struct UpgradableMultiplier;
struct GameObject;
struct StartLoopEndEffect;
struct SeinGrenadeTrajectory;
struct AnimationCurve;
struct FloatAnimationParameter;
struct MoonAnimation;
struct SeinGrenadeAttack_ThrowInfo;
struct MoonAnimation__Array;
struct SoundProvider;
struct SoundSource;
struct List_1_IGreanade_;
struct Input_InputButtonProcessor;
struct IAttackable;
struct SeinGrenadeAttack_AutoAimSettings;
struct SeinGrenadeAttack__Fields {
    struct CharacterState__Fields _;
    SeinGrenadeAttack_Preset__Enum PresetMode;

    struct SeinGrenadeAttack_BalancingData* Balancing;
    struct UpgradableMultiplier* Upgradable;
    struct GameObject* Grenade;
    struct GameObject* GrenadeCharged;
    struct GameObject* GrenadeFractured;
    struct GameObject* GrenadeAiming;
    struct GameObject* GrenadeFailEffect;
    struct GameObject* GrenadeFractureEffect;
    struct GameObject* GrenadeBurnEffect;
    struct GameObject* ChargedHandGrenade;
    struct GameObject* m_grenadeAiming;
    struct StartLoopEndEffect* m_chargedHandGrenadeEffect;
    struct SeinGrenadeTrajectory* Trajectory;
    float TrajectorySmoothSpeed;
    float AirMovementMultiplier;
    float GroundDeceleration;
    float AirDeceleration;
    int32_t MaxSpamGrenades;
    float ThrowCooldown;
    float ProjectileSpawnDelay;
    float SafeThrowCheckDistance;
    float InitialAimStrength;
    float MaxAimStrength;
    float MaxAimStrengthTime;
    float GrenadeGravity;
    float QuickThrowAllowedPressTime;
    struct Vector2 QuickThrowAllowedAngleThresoldGround;
    struct Vector2 QuickThrowAllowedAngleThresoldAir;
    struct AnimationCurve* AutoAimAirTime;
    bool m_autoAimAllowed;
    bool m_explodeWithSecondButtonPress;
    bool ExplodeFracturedGrenadesWithSecondButtonPress;
    bool m_forceExplodeGrenadeOnCollision;
    float DelayBeforeCanManuallyExplode;
    bool AffectedByScatterShot;
    struct FloatAnimationParameter* AimAngle;
    struct MoonAnimation* Aiming;
    struct MoonAnimation* AimingTurn;
    struct SeinGrenadeAttack_ThrowInfo* Throw;
    struct MoonAnimation* WallAiming;
    struct SeinGrenadeAttack_ThrowInfo* WallThrow;
    struct MoonAnimation* AirAiming;
    struct SeinGrenadeAttack_ThrowInfo* AirThrow;
    struct MoonAnimation__Array* NotEnoughEnergyThrow;
    struct MoonAnimation__Array* NotEnoughEnergyWallThrow;
    float AimBlendAngularSpeed;
    struct SoundProvider* NotEnoughEnergySound;
    struct SoundProvider* TurnAroundAimingSound;
    struct SoundProvider* ThrowGrenadeSound;
    struct SoundProvider* StopAimingSound;
    struct SoundProvider* StartAimingSound;
    struct SoundSource* AimingSound;
    float m_lockPressingInputTime;
    bool m_isAiming;
    float m_aimDuration;
    bool m_quickThrowAssistAllowed;
    bool m_wasGroundedAfterAirAiming;
    float m_timeTillProjectileSpawn;
    struct Vector2 m_projectileSpawnVelocity;
    struct Vector2 m_aimDir;
    float m_aimStrength;
    struct Vector2 m_aimDirSmoothed;
    struct List_1_IGreanade_* m_grenades;
    float m_animationAimAngle;
    bool m_lastAimWasOnWall;
    struct SeinGrenadeAttack_ThrowInfo* m_currentThrow;
    float m_lockAimAnimationRemainingTime;
    bool m_faceLeft;
    struct Input_InputButtonProcessor* m_button;
    float MaxAimWallAnimationAngle;
    float MinAimWallAnimationAngle;
    float MaxAimGroundAnimationAngle;
    float MinAimGroundAnimationAngle;
    float m_spentEnergy;
    bool m_inputPressed;
    struct IAttackable* m_autoTarget;
    struct SeinGrenadeAttack_AutoAimSettings* AutoAim;
    StressTestStatus__Enum _StressTestStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGrenadeAttack__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/List_1_IGreanade_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/SeinGrenadeAttack_AutoAimSettings.h>
#include <Modloader/app/structs/SeinGrenadeAttack_BalancingData.h>
#include <Modloader/app/structs/SeinGrenadeAttack_ThrowInfo.h>
#include <Modloader/app/structs/SeinGrenadeTrajectory.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/StartLoopEndEffect.h>
#include <Modloader/app/structs/UpgradableMultiplier.h>
#endif
#undef IL2CPP_STRUCT_SeinGrenadeAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGrenadeAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGrenadeAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGrenadeAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGrenadeAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
