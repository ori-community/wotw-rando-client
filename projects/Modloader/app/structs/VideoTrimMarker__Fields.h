#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VideoTrimMarker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VideoTrimMarker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoTrimMarker__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VideoTrimMarker__Fields_DEFINED
struct VideoProgressBar;
struct VideoTrimMarker;
struct VideoEditor;
struct VideoTrimMarker__Fields {
    struct MonoBehaviour__Fields _;
    struct VideoProgressBar* m_progressBar;
    bool end;
    struct VideoTrimMarker* m_marker;
    struct VideoEditor* m_videoEditor;
    bool Dragging;
    bool m_timeCached;
    double m_time;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VideoTrimMarker__Fields_FWDDECL)
#define IL2CPP_STRUCT_VideoTrimMarker__Fields_FWDDECL
#include <Modloader/app/structs/VideoEditor.h>
#include <Modloader/app/structs/VideoProgressBar.h>
#include <Modloader/app/structs/VideoTrimMarker.h>
#endif
#undef IL2CPP_STRUCT_VideoTrimMarker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VideoTrimMarker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VideoTrimMarker__Fields_FWDDECL)
#include <Modloader/app/structs/VideoTrimMarker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VideoTrimMarker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
