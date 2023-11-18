#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_DEFINED
struct UWPVideoPlayer_OnPlayDelegate;
struct OnDelegate;
struct UWPVideoPlayer__StaticFields {
    struct UWPVideoPlayer_OnPlayDelegate* OnPlayXAML;
    struct OnDelegate* OnPauseXAML;
    struct OnDelegate* OnStopXAML;
    struct OnDelegate* OnXAMLFinished;
};
#endif
#if !defined(IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_FWDDECL
#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/UWPVideoPlayer_OnPlayDelegate.h>
#endif
#undef IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UWPVideoPlayer__StaticFields_FWDDECL)
#include <Modloader/app/structs/UWPVideoPlayer__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UWPVideoPlayer__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
