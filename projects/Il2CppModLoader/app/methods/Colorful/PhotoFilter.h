#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::PhotoFilter {
    IL2CPP_REGISTER_METHOD(0x0304C3F0, void, OnRenderImage, (app::PhotoFilter * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0304C5E0, app::String *, GetShaderName, (app::PhotoFilter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304C660, void, ctor, (app::PhotoFilter * this_ptr))
}
