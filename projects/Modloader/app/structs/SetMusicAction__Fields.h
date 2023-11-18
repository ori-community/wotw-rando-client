#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetMusicAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetMusicAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMusicAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED)
#define IL2CPP_STRUCT_SetMusicAction__Fields_DEFINED
struct MusicZone;
struct SoundProvider;
struct SetMusicAction__Fields {
    struct ActionMethod__Fields _;
    struct MusicZone* MusicZone;
    struct SoundProvider* Music;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetMusicAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetMusicAction__Fields_FWDDECL
#include <Modloader/app/structs/MusicZone.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_SetMusicAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetMusicAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetMusicAction__Fields_FWDDECL)
#include <Modloader/app/structs/SetMusicAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetMusicAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
