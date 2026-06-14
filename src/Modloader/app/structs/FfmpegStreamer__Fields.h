#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FfmpegStreamer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FfmpegStreamer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FfmpegStreamer__Fields_DEFINED)
#define IL2CPP_STRUCT_FfmpegStreamer__Fields_DEFINED
struct Process;
struct SortedList;
struct NamedPipeServerStream;
struct __declspec(align(8)) FfmpegStreamer__Fields {
    struct Process* m_process;
    int32_t m_lastPipedFrame;
    struct SortedList* m_frameQueue;
    struct NamedPipeServerStream* m_pipe;
    bool _PipeError_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_FfmpegStreamer__Fields_FWDDECL)
#define IL2CPP_STRUCT_FfmpegStreamer__Fields_FWDDECL
#include <Modloader/app/structs/NamedPipeServerStream.h>
#include <Modloader/app/structs/Process.h>
#include <Modloader/app/structs/SortedList.h>
#endif
#undef IL2CPP_STRUCT_FfmpegStreamer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FfmpegStreamer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FfmpegStreamer__Fields_FWDDECL)
#include <Modloader/app/structs/FfmpegStreamer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FfmpegStreamer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
