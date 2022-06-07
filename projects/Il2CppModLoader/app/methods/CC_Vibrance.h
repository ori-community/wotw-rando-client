#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CC_Vibrance {
    IL2CPP_REGISTER_METHOD(0x03195930, void, OnRenderImage, (app::CC_Vibrance * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CC_Vibrance * this_ptr))
}
