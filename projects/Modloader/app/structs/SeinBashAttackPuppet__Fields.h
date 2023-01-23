#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_DEFINED
struct SoundProvider;
struct GameObject;
struct MoonAnimation__Array;
struct MoonAnimation;
struct SeinBashAttackPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct SoundProvider* BashEndSound;
    struct SoundProvider* BashLoopSound;
    struct SoundProvider* BashStartSound;
    struct SoundProvider* StationaryBashSound;
    struct SoundProvider* UpgradedBashEndSound;
    struct SoundProvider* UpgradedBashLoopSound;
    struct SoundProvider* UpgradedBashStartSound;
    struct SoundProvider* UpgradedStationaryBashSound;
    struct GameObject* BashFromFx;
    struct GameObject* BashOffFx;
    struct GameObject* BashReleaseEffect;
    struct GameObject* NoBashTargetEffect;
    struct MoonAnimation__Array* BashChargeSet;
    struct MoonAnimation__Array* BashJumpSet;
    struct MoonAnimation__Array* SwimBashChargeSet;
    struct MoonAnimation__Array* SwimBashJumpSet;
    struct MoonAnimation* BackFlip;
    struct MoonAnimation__Array* BashJumpTurnSet;
    struct MoonAnimation__Array* SwimBashJumpTurnSet;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinBashAttackPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinBashAttackPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinBashAttackPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
