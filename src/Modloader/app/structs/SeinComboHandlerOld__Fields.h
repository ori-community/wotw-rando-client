#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinComboHandlerOld__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinComboHandlerOld__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandlerOld__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_SeinComboHandlerOld__Fields_DEFINED
struct GlobalComboDefinition;
struct GameObject__Array;
struct MeleeWeapon__Array;
struct Kickback;
struct ComboInput;
struct ComboMove;
struct HashSet_1_Moon_ComboSystem_ComboMove_;
struct List_1_Moon_ComboSystem_ComboMove_;
struct List_1_Moon_ComboSystem_TorchComboMoveAdapter_;
struct Animator;
struct Transform;
struct CameraShake;
struct MeleeWeapon;
struct DamageOwner;
struct List_1_ISpiritFlameAttackable_;
struct SeinComboHandlerOld__Fields {
    struct CharacterState__Fields _;
    struct GlobalComboDefinition* ComboDefinitions;
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
    struct ComboInput* m_inputBuffer;
    struct ComboInput* m_currentInput;
    struct ComboMove* m_nextMove;
    struct HashSet_1_Moon_ComboSystem_ComboMove_* m_movesToResetOnComboEndHashSet;
    struct List_1_Moon_ComboSystem_ComboMove_* m_movesToResetOnComboEndList;
    struct List_1_Moon_ComboSystem_TorchComboMoveAdapter_* m_torchMoves;
    bool m_weaponComboInitialized;
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
    struct ComboMove* m_currentComboMove;
    struct DamageOwner* m_damageOwner;
    struct List_1_ISpiritFlameAttackable_* m_lastClosestAttackables;
    struct List_1_ISpiritFlameAttackable_* m_closestAttackables;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinComboHandlerOld__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinComboHandlerOld__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CameraShake.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/ComboMove.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/GlobalComboDefinition.h>
#include <Modloader/app/structs/HashSet_1_Moon_ComboSystem_ComboMove_.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/List_1_ISpiritFlameAttackable_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_ComboMove_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_TorchComboMoveAdapter_.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MeleeWeapon__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinComboHandlerOld__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandlerOld__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinComboHandlerOld__Fields_FWDDECL)
#include <Modloader/app/structs/SeinComboHandlerOld__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinComboHandlerOld__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
