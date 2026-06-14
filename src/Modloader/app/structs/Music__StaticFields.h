#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Music__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Music__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Music__StaticFields_DEFINED
struct List_1_Core_Music_Layer_;
struct List_1_Core_Music_MusicTrack_;
struct Music__StaticFields {
    struct List_1_Core_Music_Layer_* m_musicLayers;
    struct List_1_Core_Music_MusicTrack_* CurrentTracks;
    bool Mute;
};
#endif
#if !defined(IL2CPP_STRUCT_Music__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Music__StaticFields_FWDDECL
#include <Modloader/app/structs/List_1_Core_Music_Layer_.h>
#include <Modloader/app/structs/List_1_Core_Music_MusicTrack_.h>
#endif
#undef IL2CPP_STRUCT_Music__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Music__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Music__StaticFields_FWDDECL)
#include <Modloader/app/structs/Music__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Music__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
