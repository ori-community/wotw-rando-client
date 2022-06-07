#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::Pixelate {
    IL2CPP_REGISTER_METHOD(0x0304C960, void, OnRenderImage, (app::Pixelate * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0304CBC0, app::String *, GetShaderName, (app::Pixelate * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304CC40, void, ctor, (app::Pixelate * this_ptr))
}
