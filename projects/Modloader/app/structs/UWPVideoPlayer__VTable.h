#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UWPVideoPlayer__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UWPVideoPlayer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPVideoPlayer__VTable_DEFINED)
#define IL2CPP_STRUCT_UWPVideoPlayer__VTable_DEFINED
struct UWPVideoPlayer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Play;
    VirtualInvokeData Pause;
    VirtualInvokeData Stop;
    VirtualInvokeData get_OnPlaybackFinished;
    VirtualInvokeData set_OnPlaybackFinished;
    VirtualInvokeData set_Filename;
    VirtualInvokeData get_IsPlaying;
    VirtualInvokeData get_IsPaused;
};
#endif
#if !defined(IL2CPP_STRUCT_UWPVideoPlayer__VTable_FWDDECL)
#define IL2CPP_STRUCT_UWPVideoPlayer__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_UWPVideoPlayer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPVideoPlayer__VTable_DEFINED) && !defined(IL2CPP_STRUCT_UWPVideoPlayer__VTable_FWDDECL)
#include <Modloader/app/structs/UWPVideoPlayer__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UWPVideoPlayer__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
