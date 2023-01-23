#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_DEFINED
struct MoonAnimation;
struct SoundProvider;
struct IGhostGenericSoundPlayer;
struct SeinFeatherFlapPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct MoonAnimation* LeafAttack;
    struct MoonAnimation* LeafAttackAir;
    struct SoundProvider* LeafAttackSound;
    struct SoundProvider* LeafWindSound;
    struct SoundProvider* LeafKnockbackSound;
    struct MoonAnimation* LeafDeploy;
    struct MoonAnimation* LeafAttackGroundResolve;
    struct MoonAnimation* LeafLeafAttack;
    struct MoonAnimation* LeafLeafAttackAir;
    struct IGhostGenericSoundPlayer* ParachuteLoop;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_FWDDECL
#include <Modloader/app/structs/IGhostGenericSoundPlayer.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinFeatherFlapPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinFeatherFlapPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinFeatherFlapPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
