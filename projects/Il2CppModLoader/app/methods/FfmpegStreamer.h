#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::FfmpegStreamer {
    IL2CPP_REGISTER_METHOD(0x0052A050, bool, get_PipeError, (app::FfmpegStreamer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A060, void, set_PipeError, (app::FfmpegStreamer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01254320, app::FfmpegStreamer*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x012543A0, void, set_Instance, (app::FfmpegStreamer * value))
    IL2CPP_REGISTER_METHOD(0x01254430, int32_t, get_LastPipedFrame, ())
    IL2CPP_REGISTER_METHOD(0x01254450, void, Open, (int32_t width, int32_t height, app::String* out_file, bool bake_frame_count, int32_t start_frame))
    IL2CPP_REGISTER_METHOD(0x01254530, void, Close, ())
    IL2CPP_REGISTER_METHOD(0x012546B0, void, Pipe, (app::Byte__Array * data, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x01254830, void, ctor, (app::FfmpegStreamer * this_ptr, int32_t width, int32_t height, app::String* out_file, bool bake_frame_count, int32_t start_frame))
    IL2CPP_REGISTER_METHOD(0x01254DA0, void, Send, (app::FfmpegStreamer * this_ptr, app::Byte__Array* data, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x012553E0, void, Flush_1, (app::FfmpegStreamer * this_ptr, app::Byte__Array* data, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x01255450, void, Flush_2, (app::FfmpegStreamer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01255690, void, TryCleanup, (app::FfmpegStreamer * this_ptr))
} // namespace app::classes::FfmpegStreamer
