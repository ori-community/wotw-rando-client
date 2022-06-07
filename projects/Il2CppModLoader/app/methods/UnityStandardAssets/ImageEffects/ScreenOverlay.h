#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::ScreenOverlay {
    IL2CPP_REGISTER_METHOD(0x02516910, bool, CheckResources, (app::ScreenOverlay * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D60D00, void, OnRenderImage, (app::ScreenOverlay * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x02D60F20, void, ctor, (app::ScreenOverlay * this_ptr))
}
