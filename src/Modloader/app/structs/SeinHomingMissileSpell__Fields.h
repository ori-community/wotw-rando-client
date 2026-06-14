#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinHomingMissileSpell_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinHomingMissileSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_DEFINED
struct SeinHomingMissileSpell_BalancingData;
struct UpgradableMultiplier;
struct GameObject;
struct SoundProvider;
struct MoonAnimation;
struct List_1_IHomingMissileSpellAttackable_;
struct Transform;
struct Dictionary_2_IAttackable_LockOnTarget_;
struct Stack_1_IAttackable_;
struct SeinHomingMissileSpell__Fields {
    struct CharacterState__Fields _;
    struct SeinHomingMissileSpell_BalancingData* Balancing;
    struct UpgradableMultiplier* Upgradable;
    struct GameObject* HomingMissile;
    float AttackCooldown;
    struct SoundProvider* SpawnSound;
    struct MoonAnimation* HomingMissileAnimation;
    SeinHomingMissileSpell_State__Enum m_currentState;

    float m_currentStateTime;
    float m_remainingCooldown;
    struct List_1_IHomingMissileSpellAttackable_* m_closestAttackables;
    struct Transform* m_currentTargetTransform;
    float LockOnChargeUpTime;
    struct GameObject* LockedOnMarker;
    float MinTagRange;
    float MaxTagRange;
    float MaxTags;
    struct Dictionary_2_IAttackable_LockOnTarget_* m_lockOnTargets;
    struct Stack_1_IAttackable_* m_targetsToShoot;
    float m_shotDelayRemaining;
    float DelayBetweenShots;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_IAttackable_LockOnTarget_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_IHomingMissileSpellAttackable_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SeinHomingMissileSpell_BalancingData.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Stack_1_IAttackable_.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/UpgradableMultiplier.h>
#endif
#undef IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinHomingMissileSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinHomingMissileSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHomingMissileSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
