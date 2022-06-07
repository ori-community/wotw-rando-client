#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::Kuwahara {
    IL2CPP_REGISTER_METHOD(0x03047D10, void, OnRenderImage, (app::Kuwahara * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03047F80, app::String *, GetShaderName, (app::Kuwahara * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03048000, void, ctor, (app::Kuwahara * this_ptr))
}
