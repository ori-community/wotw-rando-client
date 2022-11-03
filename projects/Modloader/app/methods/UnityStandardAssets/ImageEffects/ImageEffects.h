#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::ImageEffects {
    IL2CPP_REGISTER_METHOD(0x02D5A430, void, RenderDistortion, (app::Material * material, app::RenderTexture* source, app::RenderTexture* destination, float angle, app::Vector2 center, app::Vector2 radius))
    IL2CPP_REGISTER_METHOD(0x02D5A920, void, Blit, (app::RenderTexture * source, app::RenderTexture* dest))
    IL2CPP_REGISTER_METHOD(0x02D5A9D0, void, BlitWithMaterial, (app::Material * material, app::RenderTexture* source, app::RenderTexture* dest))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ImageEffects * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::ImageEffects
