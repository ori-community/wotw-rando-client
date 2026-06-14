#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music_Layer_Track__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music_Layer_Track__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer_Track__Fields_DEFINED)
#define IL2CPP_STRUCT_Music_Layer_Track__Fields_DEFINED
struct SoundProvider;
struct Music_MusicTrack;
struct __declspec(align(8)) Music_Layer_Track__Fields {
    struct SoundProvider* SoundProvider;
    struct Music_MusicTrack* m_musicTrack;
    float FadeInDuration;
    float FadeOutDuration;
};
#endif
#if !defined(IL2CPP_STRUCT_Music_Layer_Track__Fields_FWDDECL)
#define IL2CPP_STRUCT_Music_Layer_Track__Fields_FWDDECL
#include <Modloader/app/structs/Music_MusicTrack.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_Music_Layer_Track__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_Layer_Track__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Music_Layer_Track__Fields_FWDDECL)
#include <Modloader/app/structs/Music_Layer_Track__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music_Layer_Track__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
