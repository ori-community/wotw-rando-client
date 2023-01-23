#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsVideoPlayer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsVideoPlayer_DEFINED)
#include <Modloader/app/structs/WindowsVideoPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_WindowsVideoPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowsVideoPlayer_DEFINED
struct WindowsVideoPlayer__Class;
struct WindowsVideoPlayer {
    struct WindowsVideoPlayer__Class* klass;
    MonitorData* monitor;
    struct WindowsVideoPlayer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowsVideoPlayer_FWDDECL)
#define IL2CPP_STRUCT_WindowsVideoPlayer_FWDDECL
#include <Modloader/app/structs/WindowsVideoPlayer__Class.h>
#endif
#undef IL2CPP_STRUCT_WindowsVideoPlayer_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsVideoPlayer_DEFINED) && !defined(IL2CPP_STRUCT_WindowsVideoPlayer_FWDDECL)
#include <Modloader/app/structs/WindowsVideoPlayer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsVideoPlayer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
