#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_DEFINED)
#include <Modloader/app/structs/CharacterStatePuppet__Fields.h>
#if defined(IL2CPP_STRUCT_CharacterStatePuppet__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_DEFINED
struct SurfaceToSoundProviderMap;
struct RTPC;
struct SoundPlayer;
struct MoonAnimation;
struct SeinWallSlidePuppet__Fields {
    struct CharacterStatePuppet__Fields _;
    struct SurfaceToSoundProviderMap* WallEnterSounds;
    struct SurfaceToSoundProviderMap* WallExitSounds;
    struct SurfaceToSoundProviderMap* WallSlideDownSound;
    struct SurfaceToSoundProviderMap* WallSlideUpSound;
    struct RTPC* SlideSpeedRTPC;
    struct SoundPlayer* m_wallSlideDownSound;
    struct SoundPlayer* m_wallSlideUpSound;
    struct MoonAnimation* SlideDown;
    struct MoonAnimation* SlideUp;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_FWDDECL
#include <Modloader/app/structs/MoonAnimation.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/SurfaceToSoundProviderMap.h>
#endif
#undef IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWallSlidePuppet__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWallSlidePuppet__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWallSlidePuppet__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
