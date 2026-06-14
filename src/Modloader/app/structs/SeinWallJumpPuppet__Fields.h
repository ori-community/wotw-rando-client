#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_DEFINED
struct TextureAnimationWithTransitions__Array;
struct SurfaceToSoundProviderMap;
struct MoonAnimation__Array;
struct Event_1__Array;
struct MoonAnimation;
struct Single__Array;
struct SeinWallJumpPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct TextureAnimationWithTransitions__Array* TowardsAnimation;
    struct SurfaceToSoundProviderMap* WallJumpSound;
    struct MoonAnimation__Array* EdgeJump;
    struct MoonAnimation__Array* Regular;
    struct MoonAnimation__Array* Towards;
    struct MoonAnimation__Array* AwayAnimations;
    struct Event_1__Array* AwaySFX;
    struct MoonAnimation__Array* AwayFlipTurnAnimations;
    struct MoonAnimation* GenericJumpFlip;
    struct Single__Array* JumpAwayGenericTimes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_FWDDECL
#include <Modloader/app/structs/Event_1__Array.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/Single__Array.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#include <Modloader/app/structs/TextureAnimationWithTransitions__Array.h>
#endif
#undef IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallJumpPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWallJumpPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallJumpPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
