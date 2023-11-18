#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Grayscale_1.h>
#include <Modloader/app/structs/RenderTexture.h>

namespace app::classes::UnityStandardAssets::ImageEffects::Grayscale {
    IL2CPP_REGISTER_METHOD(0x02D59DA0, void, OnRenderImage, (app::Grayscale_1 * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::Grayscale_1 * this_ptr))
} // namespace app::classes::UnityStandardAssets::ImageEffects::Grayscale
