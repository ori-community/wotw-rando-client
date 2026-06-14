#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_DEFINED
struct SoundProvider;
struct SeinTransparentWallHandler__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundProvider* EnterTransparentWallSoundProvider;
    struct SoundProvider* EnterTransparentWallFirstTimeSoundProvider;
    struct SoundProvider* LeaveTransparentWallSoundProvider;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinTransparentWallHandler__Fields_FWDDECL)
#include <Modloader/app/structs/SeinTransparentWallHandler__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinTransparentWallHandler__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
