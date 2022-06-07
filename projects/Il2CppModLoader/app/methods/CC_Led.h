#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CC_Led {
    IL2CPP_REGISTER_METHOD(0x03193F40, void, OnRenderImage, (app::CC_Led * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03194140, void, ctor, (app::CC_Led * this_ptr))
}
