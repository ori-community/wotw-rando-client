#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_DEFINED
struct DamageBasedSoundProvider;
struct MoonAnimation;
struct Event_1;
struct SeinDamageReceiverPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct DamageBasedSoundProvider* SeinDeathSound;
    struct DamageBasedSoundProvider* SeinHurtSound;
    struct DamageBasedSoundProvider* SeinBadlyHurtSound;
    struct MoonAnimation* Hurt;
    struct MoonAnimation* HurtLightGround;
    struct MoonAnimation* HurtMidGround;
    struct MoonAnimation* HurtHeavyGround;
    struct MoonAnimation* HurtLightAir;
    struct MoonAnimation* HurtMidAir;
    struct MoonAnimation* HurtHeavyAir;
    struct MoonAnimation* Drown;
    struct Event_1* DrownInTarSoundEvent;
    struct Event_1* DrownInTarTandemSoundEvent;
    struct MoonAnimation* DrownInTar;
    struct MoonAnimation* DrownInTarTandem;
    struct MoonAnimation* DrownInTarKuTandem;
    struct MoonAnimation* HurtLightGroundBack;
    struct MoonAnimation* HurtMidGroundBack;
    struct MoonAnimation* HurtHeavyGroundBack;
    struct MoonAnimation* HurtLightAirBack;
    struct MoonAnimation* HurtMidAirBack;
    struct MoonAnimation* HurtHeavyAirBack;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_FWDDECL
#include <Modloader/app/structs/DamageBasedSoundProvider.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/MoonAnimation.h>
#endif
#undef IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDamageReceiverPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDamageReceiverPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDamageReceiverPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
