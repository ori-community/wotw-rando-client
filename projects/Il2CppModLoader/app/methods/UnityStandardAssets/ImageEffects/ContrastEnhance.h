#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::ContrastEnhance {
    IL2CPP_REGISTER_METHOD(0x0251DAC0, bool, CheckResources, (app::ContrastEnhance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0251DB20, void, OnRenderImage, (app::ContrastEnhance * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0251E1C0, void, ctor, (app::ContrastEnhance * this_ptr))
}
