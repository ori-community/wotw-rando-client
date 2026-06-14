#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeShotSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeShotSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeShotSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinChargeShotSpell_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinChargeShotSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinChargeShotSpell__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct SoundSource;
struct AnimationCurve;
struct Transform;
struct SpiritShotProjectile;
struct MoonAnimation;
struct SeinChargeShotSpell__Fields {
    struct CharacterState__Fields _;
    bool DisableWallJump;
    float MinDamage;
    float MaxDamage;
    float MaxDamageChargeTime;
    float MinDamageProjectileScale;
    float MaxDamageProjectileScale;
    float MinDamageEnergyCost;
    float MaxDamageEnergyCost;
    float MinDamageCameraShakeStrength;
    float MaxDamageCameraShakeStrength;
    float ChargeStartDelay;
    float AirShotDelay;
    float CoolDown;
    float Speed;
    bool StopInAir;
    struct GameObject* Projectile;
    struct SoundProvider* ProjectileReleaseSound;
    struct SoundProvider* NotEnoughEnergySound;
    struct SoundSource* ChargingSoundLoop;
    struct SoundSource* FullyChargedSoundLoop;
    struct AnimationCurve* SlowdownCurve;
    bool ShootAwayFromWall;
    SeinChargeShotSpell_State__Enum m_currentState;

    float m_currentProjectileDamage;
    float m_currentProjectileScale;
    float m_currentCameraShakeStrength;
    float m_currentChargeTime;
    float m_chargeStartHealth;
    float m_chargeCostPerSecond;
    float m_energyAvailable;
    float m_energySpendStep;
    bool m_facingLeftWhenShooting;
    struct Transform* m_projectileTransform;
    struct SpiritShotProjectile* m_projectile;
    float m_currentStateTime;
    float m_coolDownTime;
    struct MoonAnimation* ChargeShotStart;
    struct MoonAnimation* ChargeShotHold;
    struct MoonAnimation* ChargeShotRecoil;
    struct MoonAnimation* ChargeShotAir;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeShotSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeShotSpell__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/SpiritShotProjectile.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeShotSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeShotSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeShotSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeShotSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeShotSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
