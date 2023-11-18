#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_DEFINED
struct Material;
struct AudioClip;
struct String;
struct Texture2D;
struct SoundPlayer;
struct OnDelegate;
struct XboxOneVideoPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct Material* Material;
    int32_t MovieWidth;
    int32_t MovieHeight;
    struct AudioClip* AudioTrack;
    bool m_IssuePluginEvent;
    struct String* m_Filename;
    struct Texture2D* m_Texture;
    struct SoundPlayer* m_MusicTrack;
    bool m_IsPlaying;
    bool m_IsPaused;
    struct OnDelegate* _OnPlaybackFinished_k__BackingField;
    int32_t m_frame;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_FWDDECL
#include <Modloader/app/structs/AudioClip.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/OnDelegate.h>
#include <Modloader/app/structs/SoundPlayer.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneVideoPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/XboxOneVideoPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneVideoPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
