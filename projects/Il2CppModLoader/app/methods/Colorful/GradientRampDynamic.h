#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::GradientRampDynamic {
    IL2CPP_REGISTER_METHOD(0x03045A90, void, Start, (app::GradientRampDynamic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03045AC0, void, Reset, (app::GradientRampDynamic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03045E00, void, UpdateGradientCache, (app::GradientRampDynamic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03046230, void, OnRenderImage, (app::GradientRampDynamic * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x030463E0, app::String*, GetShaderName, (app::GradientRampDynamic * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E930, void, ctor, (app::GradientRampDynamic * this_ptr))
} // namespace app::classes::Colorful::GradientRampDynamic
