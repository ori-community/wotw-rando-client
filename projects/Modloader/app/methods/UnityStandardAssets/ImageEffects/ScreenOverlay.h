#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RenderTexture.h>
#include <Modloader/app/structs/ScreenOverlay.h>

namespace app::classes::UnityStandardAssets::ImageEffects::ScreenOverlay {
    IL2CPP_REGISTER_METHOD(0x02516910, bool, CheckResources, app::ScreenOverlay* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D60D00, void, OnRenderImage, app::ScreenOverlay* this_ptr, app::RenderTexture* source, app::RenderTexture* destination)
    IL2CPP_REGISTER_METHOD(0x02D60F20, void, ctor, app::ScreenOverlay* this_ptr)
} // namespace app::classes::UnityStandardAssets::ImageEffects::ScreenOverlay
