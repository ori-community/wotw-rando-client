#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AVProWindowsMediaFormatConverter {
    IL2CPP_REGISTER_METHOD(0x014EE790, bool, get_RequiresConversion, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::Texture*, get_OutputTexture, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C6660, int32_t, get_DisplayFrame, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03129B00, bool, get_ValidPicture, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03129B10, void, set_ValidPicture, (app::AVProWindowsMediaFormatConverter * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03129B20, void, Reset, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03129B30, app::Material*, GetConversionMaterial, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03129B40, bool, Build, (app::AVProWindowsMediaFormatConverter * this_ptr, int32_t movie_handle, int32_t width, int32_t height, app::AVProWindowsMediaPlugin_VideoFrameFormat__Enum format, bool use_b_t709, bool flip_x, bool flip_y, app::FilterMode__Enum filter_mode, app::TextureWrapMode__Enum wrap_mode))
    IL2CPP_REGISTER_METHOD(0x0312A2B0, bool, Update, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312A450, bool, UpdateTexture, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312A510, void, Dispose, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312A710, bool, CreateMaterial, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312AB70, void, CreateExternalTexture, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312ADF0, void, CreateTexture, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312B450, void, CreateRenderTexture, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312B7F0, void, DoFormatConversion, (app::AVProWindowsMediaFormatConverter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312BB30, void, CreateUVs, (app::AVProWindowsMediaFormatConverter * this_ptr, bool invert_x, bool invert_y))
    IL2CPP_REGISTER_METHOD(0x0312BCC0, void, DrawQuad, (app::Vector4 uv))
    IL2CPP_REGISTER_METHOD(0x0312BEF0, void, ctor, (app::AVProWindowsMediaFormatConverter * this_ptr))
} // namespace app::classes::AVProWindowsMediaFormatConverter
