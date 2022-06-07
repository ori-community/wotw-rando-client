#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CC_Grayscale {
    IL2CPP_REGISTER_METHOD(0x03193990, void, OnRenderImage, (app::CC_Grayscale * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03193C80, void, ctor, (app::CC_Grayscale * this_ptr))
}
