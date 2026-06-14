#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music_MusicTrack_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music_MusicTrack_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_MusicTrack_DEFINED)
#include <Modloader/app/structs/Music_MusicTrack__Fields.h>
#if defined(IL2CPP_STRUCT_Music_MusicTrack__Fields_DEFINED)
#define IL2CPP_STRUCT_Music_MusicTrack_DEFINED
struct Music_MusicTrack__Class;
struct Music_MusicTrack {
    struct Music_MusicTrack__Class* klass;
    MonitorData* monitor;
    struct Music_MusicTrack__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Music_MusicTrack_FWDDECL)
#define IL2CPP_STRUCT_Music_MusicTrack_FWDDECL
#include <Modloader/app/structs/Music_MusicTrack__Class.h>
#endif
#undef IL2CPP_STRUCT_Music_MusicTrack_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music_MusicTrack_DEFINED) && !defined(IL2CPP_STRUCT_Music_MusicTrack_FWDDECL)
#include <Modloader/app/structs/Music_MusicTrack.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music_MusicTrack.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
