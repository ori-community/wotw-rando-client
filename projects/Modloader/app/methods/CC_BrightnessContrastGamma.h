#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CC_BrightnessContrastGamma.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::CC_BrightnessContrastGamma {
    IL2CPP_REGISTER_METHOD(0x031928D0, void, OnRenderImage, (app::CC_BrightnessContrastGamma * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03192CE0, void, ctor, (app::CC_BrightnessContrastGamma * this_ptr))
} // namespace app::classes::CC_BrightnessContrastGamma
