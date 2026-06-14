#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_DEFINED)
#include <Modloader/app/structs/CharacterState__Fields.h>
#include <Modloader/app/structs/SeinChargeJumpLegacy_State__Enum.h>
#if defined(IL2CPP_STRUCT_CharacterState__Fields_DEFINED) && defined(IL2CPP_STRUCT_SeinChargeJumpLegacy_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_DEFINED
struct MoonAnimation;
struct SoundProvider;
struct DamageOwner;
struct HashSet_1_IAttackable_;
struct GameObject;
struct Action_1_Single_;
struct SeinChargeJumpLegacy__Fields {
    struct CharacterState__Fields _;
    struct MoonAnimation* Jump;
    struct SoundProvider* JumpSound;
    float JumpDuration;
    struct DamageOwner* m_damageOwner;
    SeinChargeJumpLegacy_State__Enum CurrentState;

    float m_stateCurrentTime;
    struct HashSet_1_IAttackable_* m_attackablesIgnore;
    struct GameObject* ExplosionEffect;
    int32_t Damage;
    float ChargingTime;
    float ChargedJumpStrength;
    struct Action_1_Single_* OnJumpEvent;
    float Deceleration;
    int32_t m_superJumpedEnemies;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/HashSet_1_IAttackable_.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinChargeJumpLegacy__Fields_FWDDECL)
#include <Modloader/app/structs/SeinChargeJumpLegacy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinChargeJumpLegacy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
