#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinComboHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinComboHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandler__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_SeinComboHandler__Fields_DEFINED
struct SeinComboHandler_StubbedComboMove;
struct GlobalComboDefinition;
struct GameObject__Array;
struct MeleeWeapon__Array;
struct Kickback;
struct ComboInput;
struct IComboMove;
struct HashSet_1_Moon_ComboSystem_IComboMove_;
struct List_1_Moon_ComboSystem_IComboMove_;
struct List_1_ComboMoveStressTest_;
struct List_1_Moon_ComboSystem_IComboMoveProvider_;
struct List_1_ActivateCooldownRule_;
struct Animator;
struct Transform;
struct CameraShake;
struct MeleeWeapon;
struct DamageOwner;
struct SeinJumpHandler;
struct Collider__Array;
struct List_1_ISpiritFlameAttackable_;
struct SeinComboHandler__Fields {
    struct CharacterState__Fields _;
    struct SeinComboHandler_StubbedComboMove* m_analogMovement;
    struct SeinComboHandler_StubbedComboMove* m_oppositeAnalogMovement;
    struct SeinComboHandler_StubbedComboMove* m_movementAbility;
    struct SeinComboHandler_StubbedComboMove* m_attackMove;
    struct SeinComboHandler_StubbedComboMove* m_anyMove;
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
    struct IComboMove* m_nextMove;
    struct HashSet_1_Moon_ComboSystem_IComboMove_* m_movesToResetOnComboEndHashSet;
    struct List_1_Moon_ComboSystem_IComboMove_* m_movesToResetOnComboEndList;
    struct List_1_Moon_ComboSystem_IComboMove_* m_moves;
    struct List_1_ComboMoveStressTest_* m_moveTests;
    struct List_1_Moon_ComboSystem_IComboMoveProvider_* m_initialMoveProviders;
    bool m_weaponComboInitialized;
    struct List_1_ActivateCooldownRule_* m_currentCooldownRules;
    bool _ShouldModifyGravity_k__BackingField;
    bool _DamageDealtDuringLastMove_k__BackingField;
    struct Animator* m_seinAnimator;
    struct Transform* m_weaponJoint;
    struct Transform* m_rootJoint;
    struct CameraShake* m_cameraShake;
    bool m_unequipWeapon;
    float m_timeDamageTaken;
    float m_comboCooldownTimeLeft;
    float m_damageBlockedCooldownTimeLeft;
    struct MeleeWeapon* m_currentWeapon;
    struct IComboMove* m_currentComboMove;
    struct IComboMove* m_upcomingComboMove;
    struct DamageOwner* m_damageOwner;
    bool DebugOutput;
    struct SeinJumpHandler* m_jumpHandler;
    struct Collider__Array* m_tempColliders;
    struct List_1_ISpiritFlameAttackable_* m_lastClosestAttackables;
    struct List_1_ISpiritFlameAttackable_* m_closestAttackables;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinComboHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinComboHandler__Fields_FWDDECL
#include <Modloader/app/structs/Animator.h>
#include <Modloader/app/structs/CameraShake.h>
#include <Modloader/app/structs/Collider__Array.h>
#include <Modloader/app/structs/ComboInput.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject__Array.h>
#include <Modloader/app/structs/GlobalComboDefinition.h>
#include <Modloader/app/structs/HashSet_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/IComboMove.h>
#include <Modloader/app/structs/Kickback.h>
#include <Modloader/app/structs/List_1_ActivateCooldownRule_.h>
#include <Modloader/app/structs/List_1_ComboMoveStressTest_.h>
#include <Modloader/app/structs/List_1_ISpiritFlameAttackable_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMoveProvider_.h>
#include <Modloader/app/structs/List_1_Moon_ComboSystem_IComboMove_.h>
#include <Modloader/app/structs/MeleeWeapon.h>
#include <Modloader/app/structs/MeleeWeapon__Array.h>
#include <Modloader/app/structs/SeinComboHandler_StubbedComboMove.h>
#include <Modloader/app/structs/SeinJumpHandler.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SeinComboHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinComboHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinComboHandler__Fields_FWDDECL)
#include <Modloader/app/structs/SeinComboHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinComboHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
