#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::Frost {
    IL2CPP_REGISTER_METHOD(0x030438A0, void, OnRenderImage, (app::Frost * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03043AE0, app::String *, GetShaderName, (app::Frost * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03043B60, void, ctor, (app::Frost * this_ptr))
}
