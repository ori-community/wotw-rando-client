#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::ImageEffects::SunShafts {
    IL2CPP_REGISTER_METHOD(0x02D67860, bool, CheckResources, (app::SunShafts * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02D678E0, void, OnRenderImage, (app::SunShafts * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x02D68850, void, ctor, (app::SunShafts * this_ptr))
}
