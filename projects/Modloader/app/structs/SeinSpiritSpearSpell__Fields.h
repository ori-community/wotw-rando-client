#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_State__Enum.h>
#include <Modloader/app/structs/SurfaceMaterialType__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SurfaceMaterialType__Enum_DEFINED) && defined(IL2CPP_STRUCT_Quaternion_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_SeinSpiritSpearSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_DEFINED
struct SeinSpiritSpearSpell_BalancingData;
struct UpgradableMultiplier;
struct SerializedByteUberState;
struct Action;
struct AnimationCurve;
struct SoundPlayer;
struct Transform;
struct IAttackable;
struct Entity;
struct List_1_SeinSpiritSpearSpell_FlyingSpear_;
struct DamageOwner;
struct Damage;
struct List_1_Moon_ComboSystem_IComboMove_;
struct SeinSpiritSpearSpell__Fields {
    struct CharacterState__Fields _;
    struct SeinSpiritSpearSpell_BalancingData* Balancing;
    struct UpgradableMultiplier* Upgradable;
    struct SerializedByteUberState* ExplodingSpikeUpgradeLevel;
    float DamageAmount;
    float DamageArea;
    float Knockback;
    float Range;
    float EnergyCost;
    float JumpBackwardsDuration;
    float ChargeDuration;
    float ShootSpearDuration;
    float ImpactDuration;
    float EndDuration;
    float SettleTime;
    float RaycastEndPointPadding;
    struct Action* OnShootSpear;
    float SpearFlightDuration;
    float JumpSpeed;
    float MaxJumpSpeed;
    float JumpAngle;
    float JumpLength;
    float AttackEffectDelay;
    float StayInAirDuration;
    struct AnimationCurve* VerticalVelocityAtTheEnd;
    struct SoundPlayer* m_chargeSoundPlayer;
    struct Transform* m_chargeEffect;
    struct Transform* m_closestAttackTransform;
    struct IAttackable* m_closestAttackTarget;
    bool m_isClosestAttackTargetAnEntityTargetting;
    struct Entity* m_closestAttackTargetAsEntity;
    SurfaceMaterialType__Enum m_currentJumpingMaterial;

    struct Quaternion m_seinStartRotation;
    struct Vector3 m_jumpTargetPosition;
    struct Vector3 m_attackStartPosition;
    struct Vector3 m_attackTargetPosition;
    struct Vector3 m_initialVelocity;
    struct List_1_SeinSpiritSpearSpell_FlyingSpear_* m_spears;
    struct DamageOwner* m_damageOwner;
    struct Damage* m_damage;
    float InputMemoryDuration;
    struct Vector3 m_inputMemory;
    float m_inputMemoryTime;
    struct Vector3 _AttackPointNormal_k__BackingField;
    struct Vector3 m_smoothTargetDir;
    SeinSpiritSpearSpell_State__Enum m_currentState;

    float m_currentStateTime;
    bool killed;
    float _MoveCooldown_k__BackingField;
    float _MoveCooldownTimer_k__BackingField;
    bool _WasGroundedSinceLastExecution_k__BackingField;
    struct List_1_Moon_ComboSystem_IComboMove_* _ComboMoves_k__BackingField;
    float _ProviderCooldownTimer_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/List_1_SeinSpiritSpearSpell_FlyingSpear_.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_BalancingData.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpgradableMultiplier.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritSpearSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritSpearSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritSpearSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
