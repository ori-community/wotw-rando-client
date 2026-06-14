#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_DEFINED)
#include <Modloader/app/structs/AkMusicPlaylistCallbackInfo__Fields.h>
#if defined(IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_DEFINED
struct AkMusicPlaylistCallbackInfo__Class;
struct AkMusicPlaylistCallbackInfo {
    struct AkMusicPlaylistCallbackInfo__Class* klass;
    MonitorData* monitor;
    struct AkMusicPlaylistCallbackInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_FWDDECL)
#define IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_FWDDECL
#include <Modloader/app/structs/AkMusicPlaylistCallbackInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_DEFINED) && !defined(IL2CPP_STRUCT_AkMusicPlaylistCallbackInfo_FWDDECL)
#include <Modloader/app/structs/AkMusicPlaylistCallbackInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMusicPlaylistCallbackInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
