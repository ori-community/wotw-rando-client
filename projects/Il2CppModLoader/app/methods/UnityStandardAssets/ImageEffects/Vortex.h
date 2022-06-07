#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::Vortex {
    IL2CPP_REGISTER_METHOD(0x02D6B310, void, OnRenderImage, (app::Vortex * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x02D6BE60, void, ctor, (app::Vortex * this_ptr))
}
