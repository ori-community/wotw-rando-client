#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDashAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDashAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashAttack__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinDashAttack_State__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinDashAttack_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinDashAttack__Fields_DEFINED
struct AnimationCurve;
struct SoundProvider;
struct SoundSource;
struct GameObject;
struct MoonAnimation;
struct HashSet_1_IAttackable_;
struct IAttackable;
struct IChargeDashAttackable;
struct SeinDashAttack__Fields {
    struct CharacterState__Fields _;
    struct AnimationCurve* DashSpeedOverTime;
    struct AnimationCurve* ChargeDashSpeedOverTime;
    float DashTime;
    float ChargeDashTime;
    float ChargeTime;
    struct SoundProvider* ChargeSound;
    struct SoundProvider* DoneChargingSound;
    struct SoundSource* ChargedSound;
    struct SoundProvider* UnChargeSound;
    struct SoundProvider* DashSound;
    struct SoundProvider* ChargeDashSound;
    struct SoundProvider* RainbowDashSound;
    struct SoundProvider* DashIntoWallSound;
    struct GameObject* ExplosionEffect;
    SeinDashAttack_State__Enum CurrentState;

    float DashDownwardSpeed;
    float OffGroundSpeed;
    int32_t Damage;
    float EnergyCost;
    struct SoundProvider* NotEnoughEnergySound;
    struct MoonAnimation* Dash;
    struct MoonAnimation* ChargeDash;
    struct MoonAnimation* GlideDash;
    struct MoonAnimation* DashIntoWall;
    struct GameObject* DashStartEffect;
    struct GameObject* DashFollowEffect;
    struct GameObject* DashFollowRainbowEffect;
    bool m_faceLeft;
    float m_stateCurrentTime;
    struct HashSet_1_IAttackable_* m_attackablesIgnore;
    bool m_stopAnimation;
    float m_lastPressTime;
    float m_lastDashTime;
    bool m_isOnGround;
    bool m_hasDashed;
    float ChargeDashTargetMaxDistance;
    float m_timeOfLastExplosionEffect;
    float m_timeWhenDashJumpHappened;
    bool m_allowNoDecelerationForThisDash;
    struct IAttackable* m_chargeDashAttackTarget;
    bool m_hasHitAttackable;
    bool m_chargeJumpWasReleased;
    struct IChargeDashAttackable* m_lastTarget;
    float SpriteRotation;
    struct Vector3 m_chargeDashDirection;
    bool m_chargeDashAtTarget;
    struct Vector3 m_chargeDashAtTargetPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDashAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDashAttack__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_IAttackable_.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/IChargeDashAttackable.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_SeinDashAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDashAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDashAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDashAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDashAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
