#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GradientRamp.h>
#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Colorful::GradientRamp {
    IL2CPP_REGISTER_METHOD(0x03045830, void, OnRenderImage, (app::GradientRamp * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03045A10, app::String*, GetShaderName, (app::GradientRamp * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E930, void, ctor, (app::GradientRamp * this_ptr))
} // namespace app::classes::Colorful::GradientRamp
