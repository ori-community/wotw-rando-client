#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallChargeJump__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallChargeJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallChargeJump__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinWallChargeJump_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinWallChargeJump_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinWallChargeJump__Fields_DEFINED
struct MoonAnimation;
struct SoundProvider;
struct BaseAnimator;
struct HashSet_1_IAttackable_;
struct GameObject;
struct SeinWallChargeJump__Fields {
    struct CharacterState__Fields _;
    struct MoonAnimation* Charge;
    struct MoonAnimation* Jump;
    struct SoundProvider* JumpSound;
    float AntiGravityDuration;
    float HorizontalDrag;
    struct BaseAnimator* Arrow;
    int32_t Damage;
    float ChargedJumpStrength;
    SeinWallChargeJump_State__Enum m_currentState;

    float m_angularElevation;
    float m_angularElevationSpeed;
    float m_stateCurrentTime;
    float m_angleDirection;
    bool m_spriteMirrorLock;
    struct HashSet_1_IAttackable_* m_attackablesIgnore;
    struct GameObject* ExplosionEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWallChargeJump__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWallChargeJump__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_IAttackable_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinWallChargeJump__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallChargeJump__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallChargeJump__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWallChargeJump__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallChargeJump__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
