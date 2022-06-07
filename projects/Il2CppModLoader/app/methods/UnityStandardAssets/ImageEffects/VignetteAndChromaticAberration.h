#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::VignetteAndChromaticAberration {
    IL2CPP_REGISTER_METHOD(0x02D6B3C0, bool, CheckResources, (app::VignetteAndChromaticAberration * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D6B440, void, OnRenderImage, (app::VignetteAndChromaticAberration * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x02D6BE20, void, ctor, (app::VignetteAndChromaticAberration * this_ptr))
}
