#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::WhiteBalance {
    IL2CPP_REGISTER_METHOD(0x03055540, void, Reset, (app::WhiteBalance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030555C0, void, OnRenderImage, (app::WhiteBalance * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03055740, app::String*, GetShaderName, (app::WhiteBalance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030557C0, void, ctor, (app::WhiteBalance * this_ptr))
} // namespace app::classes::Colorful::WhiteBalance
