#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BlurOptimized.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::BlurOptimized {
    IL2CPP_REGISTER_METHOD(0x02516910, bool, CheckResources, (app::BlurOptimized * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02516960, void, OnDisable, (app::BlurOptimized * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02516A40, void, OnRenderImage, (app::BlurOptimized * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x02517190, void, ctor, (app::BlurOptimized * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::BlurOptimized
