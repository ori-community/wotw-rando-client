#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UnityVideoPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UnityVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityVideoPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_UnityVideoPlayer__Fields_DEFINED
struct OnDelegate;
struct VideoPlayer;
struct String;
struct UnityVideoPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct OnDelegate* _OnPlaybackFinished_k__BackingField;
    bool _IsPlaying_k__BackingField;
    bool _IsPaused_k__BackingField;
    struct VideoPlayer* VideoPlayer;
    struct String* m_filePath;
    bool m_imGuiRegistered;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UnityVideoPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_UnityVideoPlayer__Fields_FWDDECL
#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/VideoPlayer.h>
#endif
#undef IL2CPP_STRUCT_UnityVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UnityVideoPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UnityVideoPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/UnityVideoPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UnityVideoPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
