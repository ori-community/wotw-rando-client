#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UnityStandardAssets::ImageEffects::SepiaTone {
    IL2CPP_REGISTER_METHOD(0x02D62DA0, void, OnRenderImage, (app::SepiaTone * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SepiaTone * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::SepiaTone
