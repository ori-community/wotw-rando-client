#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinJumpShotSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinJumpShotSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJumpShotSpell__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinJumpShotSpell_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinJumpShotSpell_State__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_SeinJumpShotSpell__Fields_DEFINED
struct SoundProvider;
struct GameObject;
struct MoonAnimation;
struct IAttackable;
struct SeinJumpShotSpell__Fields {
    struct CharacterState__Fields _;
    bool DisappearOnEnemyHit;
    float ActiveTime;
    float ShieldActiveTime;
    float EnergyCost;
    float Damage;
    float DamageRadius;
    float BounceStrength;
    float BounceAngle;
    struct SoundProvider* NotEnoughEnergySound;
    struct SoundProvider* ActivateSound;
    struct SoundProvider* DeactivateSound;
    struct SoundProvider* BounceSound;
    struct SoundProvider* RicochetSound;
    struct GameObject* Shield;
    struct MoonAnimation* Jump;
    SeinJumpShotSpell_State__Enum m_currentState;

    float m_activeTimeLeft;
    float m_shieldActiveTimeLeft;
    struct GameObject* m_shield;
    float m_shieldRotationDirection;
    struct IAttackable* m_closestAttackable;
    float m_flyTowardsEnemyRemainingTime;
    float FlyTowardsEnemyDuration;
    float FlyTowardsEnemySpeed;
    float FlyJumpSpeed;
    struct Vector2 m_flyTowardsPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinJumpShotSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinJumpShotSpell__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IAttackable.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinJumpShotSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinJumpShotSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinJumpShotSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinJumpShotSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinJumpShotSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
