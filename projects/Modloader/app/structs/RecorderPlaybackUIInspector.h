#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPlaybackUIInspector_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPlaybackUIInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector_DEFINED)
#include <Modloader/app/structs/RecorderPlaybackUIInspector__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderPlaybackUIInspector_DEFINED
struct RecorderPlaybackUIInspector__Class;
struct RecorderPlaybackUIInspector {
    struct RecorderPlaybackUIInspector__Class* klass;
    MonitorData* monitor;
    struct RecorderPlaybackUIInspector__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector_FWDDECL)
#define IL2CPP_STRUCT_RecorderPlaybackUIInspector_FWDDECL
#include <Modloader/app/structs/RecorderPlaybackUIInspector__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderPlaybackUIInspector_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPlaybackUIInspector_FWDDECL)
#include <Modloader/app/structs/RecorderPlaybackUIInspector.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPlaybackUIInspector.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
