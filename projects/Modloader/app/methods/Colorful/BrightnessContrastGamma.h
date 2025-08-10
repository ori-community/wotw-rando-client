#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BrightnessContrastGamma.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::BrightnessContrastGamma {
    IL2CPP_REGISTER_METHOD(0x0303F920, void, OnRenderImage, app::BrightnessContrastGamma* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x0303FC50, app::String*, GetShaderName, app::BrightnessContrastGamma* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0303FCD0, void, ctor, app::BrightnessContrastGamma* this_ptr)
} // namespace app::classes::Colorful::BrightnessContrastGamma
