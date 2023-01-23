#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Color__Array.h>
#include <Modloader/app/structs/Gradient.h>

namespace app::classes::Frameworks::Shader {
    IL2CPP_REGISTER_METHOD(0x01643ED0, void, ConvertColorsToTexture, (app::Texture2D * texture, app::Color__Array* gradient))
    IL2CPP_REGISTER_METHOD(0x01643F90, void, ConvertGradientToTexture, (app::Texture2D * texture, app::Gradient* gradient, int32_t resolution))
    IL2CPP_REGISTER_METHOD(0x01644150, void, ConvertLerpedGradientToTexture, (app::Texture2D * texture, app::Gradient* gradient_a, app::Gradient* gradient_b, float time, int32_t resolution))
    IL2CPP_REGISTER_METHOD(0x01644480, app::Gradient*, ConvertTextureToGradient, (app::Texture2D * texture))
    IL2CPP_REGISTER_METHOD(0x016448D0, void, cctor, ())
} // namespace app::classes::Frameworks::Shader
