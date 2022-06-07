#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CC_BrightnessContrastGamma {
    IL2CPP_REGISTER_METHOD(0x031928D0, void, OnRenderImage, (app::CC_BrightnessContrastGamma * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03192CE0, void, ctor, (app::CC_BrightnessContrastGamma * this_ptr))
}
