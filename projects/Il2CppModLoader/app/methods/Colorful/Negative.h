#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::Negative {
    IL2CPP_REGISTER_METHOD(0x0304BE50, void, OnRenderImage, (app::Negative * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0304C010, app::String *, GetShaderName, (app::Negative * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B5D320, void, ctor, (app::Negative * this_ptr))
}
