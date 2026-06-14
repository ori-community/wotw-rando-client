#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinGlidePuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinGlidePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlidePuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinGlidePuppet__Fields_DEFINED
struct SoundProvider;
struct MoonAnimation;
struct FloatAnimationParameter;
struct MoonTimeline;
struct CharacterTimelineTurning;
struct IGhostGenericSoundPlayer;
struct SeinGlidePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct SoundProvider* OpenParachuteSound;
    struct SoundProvider* CloseParachuteSound;
    struct SoundProvider* TurnLeftRightSound;
    struct SoundProvider* ParachuteLoopSound;
    struct MoonAnimation* Glide;
    struct MoonAnimation* LeafDeploy;
    struct FloatAnimationParameter* GlideSpeed;
    struct MoonAnimation* GlideTurn;
    struct MoonTimeline* GlideTurnTimeline;
    struct CharacterTimelineTurning* GlideTurnTimelineSetup;
    struct IGhostGenericSoundPlayer* ParachuteLoop;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinGlidePuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinGlidePuppet__Fields_FWDDECL
#include <Modloader/app/structs/CharacterTimelineTurning.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#include <Modloader/app/structs/IGhostGenericSoundPlayer.h>
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinGlidePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinGlidePuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinGlidePuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinGlidePuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinGlidePuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
