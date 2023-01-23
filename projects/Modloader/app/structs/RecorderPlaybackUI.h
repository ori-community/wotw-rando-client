#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderPlaybackUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderPlaybackUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI_DEFINED)
#include <Modloader/app/structs/RecorderPlaybackUI__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderPlaybackUI__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderPlaybackUI_DEFINED
struct RecorderPlaybackUI__Class;
struct RecorderPlaybackUI {
    struct RecorderPlaybackUI__Class* klass;
    MonitorData* monitor;
    struct RecorderPlaybackUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI_FWDDECL)
#define IL2CPP_STRUCT_RecorderPlaybackUI_FWDDECL
#include <Modloader/app/structs/RecorderPlaybackUI__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderPlaybackUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderPlaybackUI_DEFINED) && !defined(IL2CPP_STRUCT_RecorderPlaybackUI_FWDDECL)
#include <Modloader/app/structs/RecorderPlaybackUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderPlaybackUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
