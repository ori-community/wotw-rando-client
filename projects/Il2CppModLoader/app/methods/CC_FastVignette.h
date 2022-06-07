#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CC_FastVignette {
    IL2CPP_REGISTER_METHOD(0x03193430, void, OnRenderImage, (app::CC_FastVignette * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03193640, void, ctor, (app::CC_FastVignette * this_ptr))
}
