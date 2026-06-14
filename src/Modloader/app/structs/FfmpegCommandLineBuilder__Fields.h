#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_DEFINED)
#define IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_DEFINED
struct String;
struct __declspec(align(8)) FfmpegCommandLineBuilder__Fields {
    int32_t m_threads;
    bool m_doReport;
    struct String* m_fileFormat;
    struct String* m_mp4PixelFormat;
    int32_t m_width;
    int32_t m_height;
    struct String* m_url;
    struct String* m_mp4VideoCodec;
    struct String* m_mp4VideoBitrate;
    struct String* m_outputFile;
    struct String* m_proresCodec;
    struct String* m_proresPixelFormat;
    int32_t m_proresQscale;
    struct String* m_proresProfile;
};
#endif
#if !defined(IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_FWDDECL)
#define IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FfmpegCommandLineBuilder__Fields_FWDDECL)
#include <Modloader/app/structs/FfmpegCommandLineBuilder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FfmpegCommandLineBuilder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
