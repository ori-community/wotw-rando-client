#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinMeleeAttack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinMeleeAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMeleeAttack__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SeinMeleeAttack__Fields_DEFINED
struct GameObject__Array;
struct MeleeWeapon__Array;
struct Kickback;
struct Animator;
struct Transform;
struct CameraShake;
struct MeleeWeapon;
struct MeleeComboMove;
struct DamageOwner;
struct List_1_ActivateCooldownRule_;
struct List_1_ISpiritFlameAttackable_;
struct SeinMeleeAttack__Fields {
    struct CharacterState__Fields _;
    struct GameObject__Array* WeaponPrefabs;
    struct MeleeWeapon__Array* Weapons;
    float CooldownAfterDamageTaken;
    bool DisableRootMotionWhenNearEnemy;
    float DisableRootMotionRadius;
    struct LayerMask DisableRootMotionCollisionMask;
    float HighlightRange;
    float DamageBlockedCooldown;
    float DamageBlockedInputLockDuration;
    struct Kickback* DamageBlockedKickback;
    struct Animator* m_seinAnimator;
    struct Transform* m_weaponJoint;
    struct Transform* m_rootJoint;
    struct CameraShake* m_cameraShake;
    bool m_spriteMirrorLock;
    bool m_unequipWeapon;
    float m_timeDamageTaken;
    float m_comboCooldownTimeLeft;
    float m_damageBlockedCooldownTimeLeft;
    struct MeleeWeapon* m_currentWeapon;
    struct MeleeComboMove* m_currentComboMove;
    struct DamageOwner* m_damageOwner;
    struct List_1_ActivateCooldownRule_* m_currentCooldownRules;
    struct Vector2 m_retainedRootMotion;
    struct List_1_ISpiritFlameAttackable_* m_lastClosestAttackables;
    struct List_1_ISpiritFlameAttackable_* m_closestAttackables;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinMeleeAttack__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinMeleeAttack__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CameraShake.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/List_1_ActivateCooldownRule_.h>
#include <Modloader/app/structs/List_1_ISpiritFlameAttackable_.h>
#include <Modloader/app/structs/MeleeComboMove.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MeleeWeapon__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinMeleeAttack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinMeleeAttack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinMeleeAttack__Fields_FWDDECL)
#include <Modloader/app/structs/SeinMeleeAttack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinMeleeAttack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
