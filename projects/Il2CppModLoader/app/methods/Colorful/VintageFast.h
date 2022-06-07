#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::VintageFast {
    IL2CPP_REGISTER_METHOD(0x03055010, void, OnRenderImage, (app::VintageFast * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::VintageFast * this_ptr))
}
