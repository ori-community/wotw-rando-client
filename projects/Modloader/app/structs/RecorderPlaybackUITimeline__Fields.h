#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_DEFINED
struct Recorder_1;
struct GUISkin;
struct GUIStyle;
struct List_1_System_Int32_;
struct RecorderPlaybackUITimeline__Fields {
    struct MonoBehaviour__Fields _;
    struct Recorder_1* Recorder;
    struct GUISkin* TimelineSkin;
    struct GUIStyle* m_background;
    struct GUIStyle* m_bar;
    struct GUIStyle* m_handle;
    struct GUIStyle* m_keyframe;
    bool m_isInitialised;
    struct List_1_System_Int32_* Keyframes;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_FWDDECL
#include <Modloader/app/structs/GUISkin.h>
#include <Modloader/app/structs/GUIStyle.h>
#include <Modloader/app/structs/List_1_System_Int32_.h>
#include <Modloader/app/structs/Recorder_1.h>
#endif
#undef IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderPlaybackUITimeline__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPlaybackUITimeline__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
