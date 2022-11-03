#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CC_PhotoFilter {
    IL2CPP_REGISTER_METHOD(0x03194A20, void, OnRenderImage, (app::CC_PhotoFilter * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0304C660, void, ctor, (app::CC_PhotoFilter * this_ptr))
} // namespace app::classes::CC_PhotoFilter
