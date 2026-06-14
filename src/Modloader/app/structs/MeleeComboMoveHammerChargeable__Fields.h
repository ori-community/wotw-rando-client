#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMoveHammerBase__Fields.h>
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MeleeComboMoveHammerBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_MeleeComboMoveHammerChargeable_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_DEFINED
struct HorizontalPlatformMovementSettings_SpeedSet;
struct HammerComboMoveChargable_BalancingData;
struct GameObject;
struct SoundProvider;
struct MoonTimeline;
struct EventTriggerAnimator__Array;
struct HammerTrail;
struct Damage;
struct MeleeComboMoveHammerChargeable__Fields {
    struct MeleeComboMoveHammerBase__Fields _;
    float PrepareDuration;
    float GravityStrength;
    struct HorizontalPlatformMovementSettings_SpeedSet* ChargedAttackMovementSettings;
    float AnimationSpeedMultiplier;
    float DisableEnemyFallingDuration;
    struct HammerComboMoveChargable_BalancingData* Balancing;
    DamageWeight__Enum NormalAttackWeight;

    struct Vector2 NormalAttackKickbackDirection;
    float NormalAttackKickbackStrength;
    DamageWeight__Enum ChargedAttackWeight;

    struct Vector2 ChargedAttackKickbackDirection;
    float ChargedAttackKickbackStrength;
    float ChargedHitCameraShake;
    float ChargedAttackEnergyCost;
    bool InvincibleDuringTheChargedAttack;
    bool EnableGroundCollisionForChargedAttack;
    struct GameObject* ShockWave;
    struct GameObject* ChargeAttackShockWave;
    struct GameObject* GroundMissShockWave;
    struct GameObject* ChargingEffect;
    struct GameObject* BlockEffect;
    float CollisionSpeedTreshold;
    struct SoundProvider* AttackSound;
    struct SoundProvider* HitSound;
    struct SoundProvider* FullyChargedSound;
    struct SoundProvider* NotEnoughEnergySound;
    struct SoundProvider* GroundHitSound;
    struct SoundProvider* ChargedGroundHitSound;
    struct MoonTimeline* PrepareTimeline;
    struct MoonTimeline* ChargeHoldTimeline;
    struct MoonTimeline* ChargedAttackTimeline;
    struct MoonTimeline* NormalAttackTimeline;
    struct MoonTimeline* ChargeHitResolveTimeline;
    struct EventTriggerAnimator__Array* SpawnEffectsTrigger;
    MeleeComboMoveHammerChargeable_State__Enum m_currentState;

    struct HammerTrail* m_currentTrail;
    bool m_doChargedAttack;
    struct Damage* m_damage;
    bool _Charged_k__BackingField;
    struct GameObject* m_chargingEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/EventTriggerAnimator__Array.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HammerComboMoveChargable_BalancingData.h>
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveHammerChargeable__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveHammerChargeable__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
