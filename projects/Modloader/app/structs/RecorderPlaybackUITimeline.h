#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPlaybackUITimeline_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPlaybackUITimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline_DEFINED)
#include <Modloader/app/structs/RecorderPlaybackUITimeline__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderPlaybackUITimeline_DEFINED
struct RecorderPlaybackUITimeline__Class;
struct RecorderPlaybackUITimeline {
    struct RecorderPlaybackUITimeline__Class* klass;
    MonitorData* monitor;
    struct RecorderPlaybackUITimeline__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline_FWDDECL)
#define IL2CPP_STRUCT_RecorderPlaybackUITimeline_FWDDECL
#include <Modloader/app/structs/RecorderPlaybackUITimeline__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderPlaybackUITimeline_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPlaybackUITimeline_FWDDECL)
#include <Modloader/app/structs/RecorderPlaybackUITimeline.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPlaybackUITimeline.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
