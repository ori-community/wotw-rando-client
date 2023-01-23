#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music_MusicTrack__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music_MusicTrack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_MusicTrack__Fields_DEFINED)
#define IL2CPP_STRUCT_Music_MusicTrack__Fields_DEFINED
struct SoundDescriptor;
struct SoundPlayer;
struct Action;
struct __declspec(align(8)) Music_MusicTrack__Fields {
    struct SoundDescriptor* SoundDescriptor;
    struct SoundPlayer* SoundPlayer;
    int32_t ReferenceCount;
    float FadeInDuration;
    float FadeOutDuration;
    float WWiseFadeOutDurection;
    struct Action* m_soundToNull;
};
#endif
#if !defined(IL2CPP_STRUCT_Music_MusicTrack__Fields_FWDDECL)
#define IL2CPP_STRUCT_Music_MusicTrack__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/SoundDescriptor.h>
#include <Modloader/app/structs/SoundPlayer.h>
#endif
#undef IL2CPP_STRUCT_Music_MusicTrack__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_MusicTrack__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Music_MusicTrack__Fields_FWDDECL)
#include <Modloader/app/structs/Music_MusicTrack__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music_MusicTrack__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
