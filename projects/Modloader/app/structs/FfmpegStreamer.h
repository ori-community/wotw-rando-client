#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FfmpegStreamer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FfmpegStreamer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FfmpegStreamer_DEFINED)
#include <Modloader/app/structs/FfmpegStreamer__Fields.h>
#if defined(IL2CPP_STRUCT_FfmpegStreamer__Fields_DEFINED)
#define IL2CPP_STRUCT_FfmpegStreamer_DEFINED
struct FfmpegStreamer__Class;
struct FfmpegStreamer {
    struct FfmpegStreamer__Class* klass;
    MonitorData* monitor;
    struct FfmpegStreamer__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FfmpegStreamer_FWDDECL)
#define IL2CPP_STRUCT_FfmpegStreamer_FWDDECL
#include <Modloader/app/structs/FfmpegStreamer__Class.h>
#endif
#undef IL2CPP_STRUCT_FfmpegStreamer_INITIALIZING
#if !defined(IL2CPP_STRUCT_FfmpegStreamer_DEFINED) && !defined(IL2CPP_STRUCT_FfmpegStreamer_FWDDECL)
#include <Modloader/app/structs/FfmpegStreamer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FfmpegStreamer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
