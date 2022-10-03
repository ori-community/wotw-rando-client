#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FfmpegCommandLineBuilder {
    IL2CPP_REGISTER_METHOD(0x0099AE60, app::FfmpegCommandLineBuilder*, WithPixelFormatBGRA, (app::FfmpegCommandLineBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099AF00, app::FfmpegCommandLineBuilder*, WithPixelFormatYUC420P, (app::FfmpegCommandLineBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099AFA0, app::FfmpegCommandLineBuilder*, WithVideoBitrate, (app::FfmpegCommandLineBuilder * this_ptr, app::String* bitrate))
    IL2CPP_REGISTER_METHOD(0x0099AFB0, app::FfmpegCommandLineBuilder*, WithVideoCodec, (app::FfmpegCommandLineBuilder * this_ptr, app::String* codec))
    IL2CPP_REGISTER_METHOD(0x0099AFC0, app::FfmpegCommandLineBuilder*, WithUrl, (app::FfmpegCommandLineBuilder * this_ptr, app::String* url))
    IL2CPP_REGISTER_METHOD(0x0099AFD0, app::FfmpegCommandLineBuilder*, WithResolution, (app::FfmpegCommandLineBuilder * this_ptr, int32_t width, int32_t height))
    IL2CPP_REGISTER_METHOD(0x0099AFE0, app::FfmpegCommandLineBuilder*, WithPixelFormat, (app::FfmpegCommandLineBuilder * this_ptr, app::String* pixel_format))
    IL2CPP_REGISTER_METHOD(0x0099AFA0, app::FfmpegCommandLineBuilder*, WithMP4Bitrate, (app::FfmpegCommandLineBuilder * this_ptr, app::String* bitrate))
    IL2CPP_REGISTER_METHOD(0x0099AFF0, app::FfmpegCommandLineBuilder*, WithFileFormat, (app::FfmpegCommandLineBuilder * this_ptr, app::String* file_format))
    IL2CPP_REGISTER_METHOD(0x0099B000, app::FfmpegCommandLineBuilder*, WithThreads, (app::FfmpegCommandLineBuilder * this_ptr, int32_t threads))
    IL2CPP_REGISTER_METHOD(0x0099B010, app::FfmpegCommandLineBuilder*, WithReport, (app::FfmpegCommandLineBuilder * this_ptr, bool do_report))
    IL2CPP_REGISTER_METHOD(0x0099B020, app::FfmpegCommandLineBuilder*, WithFramerate, (app::FfmpegCommandLineBuilder * this_ptr, int32_t framerate))
    IL2CPP_REGISTER_METHOD(0x0099B0E0, app::FfmpegCommandLineBuilder*, WithOutputFile, (app::FfmpegCommandLineBuilder * this_ptr, app::String* out_file))
    IL2CPP_REGISTER_METHOD(0x0099B0F0, app::String*, BuildCommandLine, (app::FfmpegCommandLineBuilder * this_ptr, bool do_prores, bool bake_frame_count, int32_t start_frame))
    IL2CPP_REGISTER_METHODINFO(0x047722B0, FfmpegCommandLineBuilder_BuildCommandLine__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0099B590, void, ctor, (app::FfmpegCommandLineBuilder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0099B670, void, cctor, ())
} // namespace app::classes::FfmpegCommandLineBuilder
