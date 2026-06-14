#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_DEFINED)
#include <Modloader/app/structs/DamageWeight__Enum.h>
#include <Modloader/app/structs/MeleeComboMoveTorch_State__Enum.h>
#include <Modloader/app/structs/MeleeComboMove__Fields.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_MeleeComboMove__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_DamageWeight__Enum_DEFINED) && defined(IL2CPP_STRUCT_MeleeComboMoveTorch_State__Enum_DEFINED)
#define IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_DEFINED
struct SoundProvider;
struct GameObject;
struct InstantiationRecycleHelper;
struct MoonTimeline;
struct EventTriggerAnimator;
struct DamageOwner;
struct MeleeWeaponTorch;
struct HammerTrail;
struct Damage;
struct MeleeComboMoveTorch__Fields {
    struct MeleeComboMove__Fields _;
    struct Vector2 KickbackDirection;
    DamageWeight__Enum DamageWeight;

    float NormalKickbackStrength;
    float IgnitedKickbackStrength;
    float DisableEnemyFallingDuration;
    bool IsGroundMove;
    bool StopDecentAboveGround;
    bool ModifyHorizontalMovementSettings;
    bool ModifyGravitySettings;
    float GravityStrength;
    float EnterMoveVelocityMultiplierX;
    float EnterMoveVelocityMultiplierUp;
    float EnterMoveVelocityMultiplierDown;
    float EnterMoveVelocityMultiplierUpAdd;
    float EnterMoveVelocityMultiplierDownAdd;
    struct SoundProvider* AttackSound;
    struct SoundProvider* HitSound;
    struct GameObject* BlastEffect;
    int32_t PrewarmAmount;
    struct InstantiationRecycleHelper* m_recycleHelper;
    struct MoonTimeline* AttackTimeline;
    struct EventTriggerAnimator* SpawnEffectsTrigger;
    bool m_moveHasFinished;
    struct DamageOwner* m_damageOwner;
    struct MeleeWeaponTorch* m_torchWeapon;
    bool m_inMove;
    struct HammerTrail* m_currentTrail;
    MeleeComboMoveTorch_State__Enum m_currentState;

    float m_currentStateTime;
    bool m_wasInAir;
    float m_lastHitTime;
    bool m_hasSetWeaponParent;
    struct Damage* m_damage;
    bool m_appliedSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_FWDDECL)
#define IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_FWDDECL
#include <Modloader/app/structs/Damage.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/EventTriggerAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HammerTrail.h>
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#include <Modloader/app/structs/MeleeWeaponTorch.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MeleeComboMoveTorch__Fields_FWDDECL)
#include <Modloader/app/structs/MeleeComboMoveTorch__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MeleeComboMoveTorch__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
