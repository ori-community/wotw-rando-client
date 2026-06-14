#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MultiplatformVideoPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MultiplatformVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplatformVideoPlayer_DEFINED)
#include <Modloader/app/structs/MultiplatformVideoPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_MultiplatformVideoPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_MultiplatformVideoPlayer_DEFINED
struct MultiplatformVideoPlayer__Class;
struct MultiplatformVideoPlayer {
    struct MultiplatformVideoPlayer__Class* klass;
    MonitorData* monitor;
    struct MultiplatformVideoPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MultiplatformVideoPlayer_FWDDECL)
#define IL2CPP_STRUCT_MultiplatformVideoPlayer_FWDDECL
#include <Modloader/app/structs/MultiplatformVideoPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_MultiplatformVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_MultiplatformVideoPlayer_DEFINED) && !defined(IL2CPP_STRUCT_MultiplatformVideoPlayer_FWDDECL)
#include <Modloader/app/structs/MultiplatformVideoPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MultiplatformVideoPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
