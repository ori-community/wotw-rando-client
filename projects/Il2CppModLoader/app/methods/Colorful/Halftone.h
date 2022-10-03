#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::Halftone {
    IL2CPP_REGISTER_METHOD(0x03046A50, void, OnRenderImage, (app::Halftone * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03046FF0, app::Vector4, CMYKRot, (app::Halftone * this_ptr, float angle))
    IL2CPP_REGISTER_METHOD(0x030470D0, app::String*, GetShaderName, (app::Halftone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03047150, void, ctor, (app::Halftone * this_ptr))
} // namespace app::classes::Colorful::Halftone
