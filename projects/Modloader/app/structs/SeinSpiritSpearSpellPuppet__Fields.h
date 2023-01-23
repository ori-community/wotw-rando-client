#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_DEFINED
struct GameObject;
struct MoonAnimation;
struct SoundProvider;
struct SeinSpiritSpearSpellPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct GameObject* JumpEffectPrefab;
    struct GameObject* ChargeEffectPrefab;
    struct GameObject* AttackEffectPrefab;
    struct GameObject* ExplosionImpactEffectPrefab;
    struct GameObject* SimpleImpactEffectPrefab;
    struct MoonAnimation* CharacterJump;
    struct MoonAnimation* CharacterCharge;
    struct MoonAnimation* CharacterEnd;
    struct SoundProvider* JumpSound;
    struct SoundProvider* ChargeSound;
    struct SoundProvider* AttackSound;
    struct SoundProvider* ImpactSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinSpiritSpearSpellPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinSpiritSpearSpellPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinSpiritSpearSpellPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
