#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IVideoPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVideoPlayer_DEFINED)
#define IL2CPP_STRUCT_IVideoPlayer_DEFINED
struct IVideoPlayer__Class;
struct IVideoPlayer {
    struct IVideoPlayer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IVideoPlayer_FWDDECL)
#define IL2CPP_STRUCT_IVideoPlayer_FWDDECL
#include <Modloader/app/structs/IVideoPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_IVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_IVideoPlayer_DEFINED) && !defined(IL2CPP_STRUCT_IVideoPlayer_FWDDECL)
#include <Modloader/app/structs/IVideoPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IVideoPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
