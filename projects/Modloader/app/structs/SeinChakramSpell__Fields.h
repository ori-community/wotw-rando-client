#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChakramSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChakramSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChakramSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/SeinChakramSpell_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_SeinChakramSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinChakramSpell__Fields_DEFINED
struct FloatAnimationParameter;
struct MoonAnimation;
struct MoonTimeline;
struct GameObject;
struct PrefabSpawner;
struct SoundProvider;
struct SoundSource;
struct SeinChakramSpell_BalancingData;
struct UpgradableMultiplier;
struct HorizontalPlatformMovementSettings_SpeedSet;
struct Event_1;
struct Transform;
struct ChakramProjectile;
struct IBowAttackable;
struct List_1_Moon_ComboSystem_IComboMove_;
struct SeinChakramSpell__Fields {
    struct CharacterState__Fields _;
    struct FloatAnimationParameter* AnimationAimParameter;
    struct MoonAnimation* ChakramThrow;
    struct MoonAnimation* ChakramThrowAir;
    struct MoonAnimation* ChakramCatch;
    struct MoonAnimation* ChakramCatchAir;
    struct MoonTimeline* ThrowTimeline;
    struct GameObject* Projectile;
    struct GameObject* ProjectileTrail;
    struct PrefabSpawner* ChakramCaughtPrefabSpawner;
    struct SoundProvider* ProjectileReleaseSound;
    struct SoundProvider* NotEnoughEnergySound;
    struct SoundSource* FullyChargedSoundLoop;
    struct SeinChakramSpell_BalancingData* Balancing;
    struct UpgradableMultiplier* Upgradable;
    float GroundShotDelay;
    float AirShotDelay;
    float GroundPostShotDelay;
    float AirPostShotDelay;
    float CoolDownTime;
    int32_t MaxChakrams;
    float CatchEffectSpawnDelay;
    struct LayerMask AutoAimVisionCheckMask;
    bool AutoAimEnabled;
    float AutoAimConeSize;
    struct Vector2 EnterVelocityGroundMultiplier;
    struct Vector2 EnterVelocityAirMultiplier;
    float MinAirVerticalVelocity;
    struct HorizontalPlatformMovementSettings_SpeedSet* AirHorizontalMovement;
    struct HorizontalPlatformMovementSettings_SpeedSet* GroundHorizontalMovement;
    bool ModifyGravitySetttings;
    float Gravity;
    struct Event_1* ThrowSoundEvent;
    struct Event_1* CatchSoundEvent;
    SeinChakramSpell_State__Enum m_currentState;

    bool m_facingLeftWhenShooting;
    struct Vector2 m_directionWhenShooting;
    struct Transform* m_projectileTransform;
    struct ChakramProjectile* m_projectile;
    float m_currentStateTime;
    float m_coolDownTime;
    int32_t m_currentActiveChakrams;
    struct IBowAttackable* m_currentAutoTarget;
    float m_targetAimAngle;
    struct ChakramProjectile* m_prefabChakramProjectile;
    float m_autoAimMaxDist;
    bool m_forceStopThrowAnimation;
    bool m_spriteMirrorLock;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChakramSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChakramSpell__Fields_FWDDECL
#include <Modloader/app/structs/ChakramProjectile.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet.h>
#include <Modloader/app/structs/IBowAttackable.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SeinChakramSpell_BalancingData.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpgradableMultiplier.h>
#endif
#undef IL2CPP_STRUCT_SeinChakramSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChakramSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChakramSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChakramSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChakramSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
