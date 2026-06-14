#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindowsVideoPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindowsVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsVideoPlayer__Fields_DEFINED)
#include <Modloader/app/structs/AVProWindowsMediaMovie__Fields.h>
#if defined(IL2CPP_STRUCT_AVProWindowsMediaMovie__Fields_DEFINED)
#define IL2CPP_STRUCT_WindowsVideoPlayer__Fields_DEFINED
struct OnDelegate;
struct WindowsVideoPlayer__Fields {
    struct AVProWindowsMediaMovie__Fields _;
    struct OnDelegate* _OnPlaybackFinished_k__BackingField;
    bool _IsPaused_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindowsVideoPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_WindowsVideoPlayer__Fields_FWDDECL
#include <Modloader/app/structs/OnDelegate.h>
#endif
#undef IL2CPP_STRUCT_WindowsVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindowsVideoPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WindowsVideoPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/WindowsVideoPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindowsVideoPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
