#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CC_Led {
    IL2CPP_REGISTER_METHOD(0x03193F40, void, OnRenderImage, (app::CC_Led * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03194140, void, ctor, (app::CC_Led * this_ptr))
} // namespace app::classes::CC_Led
