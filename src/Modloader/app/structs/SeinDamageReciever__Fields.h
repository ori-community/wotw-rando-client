#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDamageReciever__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDamageReciever__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SeinDamageReciever__Fields_DEFINED
struct CapsuleCollider;
struct Rigidbody;
struct Action_1_Damage_;
struct Dictionary_2_DamageType_System_Single_;
struct List_1_DamageType_;
struct Entity;
struct GameObject;
struct HorizontalPlatformMovementSettings_SpeedMultiplierSet;
struct DamageBasedPrefabProvider;
struct SeinDamageReciever__Fields {
    struct CharacterState__Fields _;
    float BadlyHurtAmount;
    bool IsImmortal;
    bool DebugImmortalMode;
    bool _IsDrowning_k__BackingField;
    bool m_kickbackEnabled;
    int32_t m_lastRoundedHeath;
    DamageWeight__Enum m_damageWeight;

    struct ActiveAnimationHandle m_activeAnim;
    struct CapsuleCollider* m_receiverCollider;
    struct Rigidbody* m_rigidbody;
    struct Action_1_Damage_* OnTakeDamage;
    struct Action_1_Damage_* OnKickback;
    struct Dictionary_2_DamageType_System_Single_* m_invicibilityTimeByDamageType;
    struct List_1_DamageType_* m_currentInvincibilityDamageTypes;
    float LightKickGravityMultiplier;
    float MediumKickGravityMultiplier;
    float HeavyKickGravityMultiplier;
    float HurtDropPickupSpeed;
    float m_invincibleTimeRemaining;
    float m_invincibleToEnemiesTimeRemaining;
    float m_invincibleOnRespawnTimeRemaining;
    float m_invincibleToEnemyEntityTimeRemaining;
    struct Entity* m_ignoredEnemyEntity;
    bool m_died;
    struct GameObject* GameOverScreen;
    float TouchDamageSpeedTransfer;
    float TouchDamageSpeedTransferUpModifier;
    float TouchDamageSpeedTransferDownModifier;
    float DefaultHurtDuration;
    float VeryLightHurtDuration;
    float LightHurtDuration;
    float MediumHurtDuration;
    float HeavyHurtDuration;
    float HeavierHurtDuration;
    struct Vector2 DefaultSpeedDir;
    struct Vector2 VeryLightSpeedDir;
    struct Vector2 LightSpeedDir;
    struct Vector2 MediumSpeedDir;
    struct Vector2 HeavySpeedDir;
    struct Vector2 HeavierSpeedDir;
    float DefaultHurtSpeed;
    float VeryLightHurtSpeeds;
    float LightHurtSpeed;
    float MediumHurtSpeed;
    float HeavyHurtSpeed;
    float HeavierHurtSpeed;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* MoveSpeed;
    struct HorizontalPlatformMovementSettings_SpeedMultiplierSet* LongKickMoveSpeed;
    float GravityMultiplier;
    struct GameObject* HurtEffect;
    struct GameObject* HurtDropPickup;
    float m_hurtTimeRemaining;
    struct GameObject* KillFader;
    float DeathDuration;
    float OneLifeDeathDuration;
    float SpawnDuration;
    float DeathFadeInDuration;
    float DeathFadeOutDuration;
    struct DamageBasedPrefabProvider* DeathEffectProvider;
    int32_t m_serializationFiller;
    bool m_isLeached;
    struct Vector3 m_lastLeachPosition;
    bool m_isPinned;
    struct Vector3 m_lastPinPosition;
    bool m_isRavage;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDamageReciever__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDamageReciever__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Damage_.h>
#include <Modloader/app/structs/CapsuleCollider.h>
#include <Modloader/app/structs/DamageBasedPrefabProvider.h>
#include <Modloader/app/structs/Dictionary_2_DamageType_System_Single_.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedMultiplierSet.h>
#include <Modloader/app/structs/List_1_DamageType_.h>
#include <Modloader/app/structs/Rigidbody.h>
#endif
#undef IL2CPP_STRUCT_SeinDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDamageReciever__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDamageReciever__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDamageReciever__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDamageReciever__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
