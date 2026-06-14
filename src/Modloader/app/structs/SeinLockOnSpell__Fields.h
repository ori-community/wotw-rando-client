#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinLockOnSpell__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinLockOnSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLockOnSpell__Fields_DEFINED)
#include <Modloader/app/structs/ActiveAnimationHandle.h>
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinLockOnSpell_State__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_ActiveAnimationHandle_DEFINED) && defined(IL2CPP_STRUCT_SeinLockOnSpell_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinLockOnSpell__Fields_DEFINED
struct GameObject;
struct MoonAnimation;
struct SoundProvider;
struct Dictionary_2_IAttackable_LockOnTarget_;
struct Stack_1_LockOnTarget_;
struct SeinLockOnSpell__Fields {
    struct CharacterState__Fields _;
    struct GameObject* LockedOnMarker;
    struct GameObject* Projectile;
    float EnergyCost;
    float MinTagRange;
    float MaxTagRange;
    float MaxTags;
    float Damage;
    struct MoonAnimation* LockOnFromGround;
    float GroundRootMotionScale;
    struct MoonAnimation* LockOnFromAir;
    float AirRootMotionScale;
    struct SoundProvider* BeginTaggingSoundProvider;
    struct SoundProvider* EndTaggingSoundProvider;
    struct SoundProvider* NotEnoughEnergySoundProvider;
    struct Vector2 m_lastRootSpeed;
    struct Dictionary_2_IAttackable_LockOnTarget_* m_lockOnTargets;
    struct Stack_1_LockOnTarget_* m_targetsToShoot;
    float m_shotDelayRemaining;
    float DelayBetweenShots;
    struct ActiveAnimationHandle m_activeAnimation;
    SeinLockOnSpell_State__Enum m_currentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinLockOnSpell__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinLockOnSpell__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_IAttackable_LockOnTarget_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/Stack_1_LockOnTarget_.h>
#endif
#undef IL2CPP_STRUCT_SeinLockOnSpell__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinLockOnSpell__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinLockOnSpell__Fields_FWDDECL)
#include <Modloader/app/structs/SeinLockOnSpell__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinLockOnSpell__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
