#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::PixelMatrix {
    IL2CPP_REGISTER_METHOD(0x0304C680, void, OnRenderImage, (app::PixelMatrix * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0304C8C0, app::String *, GetShaderName, (app::PixelMatrix * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304C940, void, ctor, (app::PixelMatrix * this_ptr))
}
