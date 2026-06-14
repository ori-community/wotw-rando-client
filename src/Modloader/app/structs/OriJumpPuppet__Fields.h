#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriJumpPuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriJumpPuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_OriJumpPuppet__Fields_DEFINED
struct GameObject;
struct SurfaceToSoundProviderMap;
struct MoonAnimation;
struct MoonAnimation__Array;
struct MoonTimeline;
struct CharacterTimelineTurning;
struct OriJumpPuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct GameObject* JumpParticleEffect;
    struct SurfaceToSoundProviderMap* JumpSoundProvider;
    struct SurfaceToSoundProviderMap* FlipJumpSoundProvider;
    struct SurfaceToSoundProviderMap* SpinJumpSoundProvider;
    struct MoonAnimation* Backflip;
    struct MoonAnimation* CrouchJump;
    struct MoonAnimation__Array* Jump;
    struct MoonAnimation__Array* JumpIdle;
    struct MoonAnimation* WallSlideJump;
    struct MoonAnimation* ActiveSpringJump;
    struct MoonAnimation* PassiveSpringJump;
    struct MoonAnimation__Array* JumpFlipTransitions;
    struct MoonAnimation* CrouchJumpFlipTransition;
    struct MoonAnimation* WallJumpFlipTransition;
    struct MoonAnimation* BackflipJumpFlipTransition;
    struct MoonAnimation* CrouchJumpDown;
    struct MoonAnimation* GenericJumpFlip;
    struct MoonTimeline* GenericJumpFlipTimeline;
    struct CharacterTimelineTurning* GenericJumpFlipTimelineSetup;
    float BackFlipGenericTime;
    float FirstRunJumpGenericTime;
    float SecondRunJumpGenericTime;
    float ThirdRunJumpGenericTime;
    float CrouchJumpGenericTime;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriJumpPuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriJumpPuppet__Fields_FWDDECL
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonAnimation__Array.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_OriJumpPuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriJumpPuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriJumpPuppet__Fields_FWDDECL)
#include <Modloader/app/structs/OriJumpPuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriJumpPuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
