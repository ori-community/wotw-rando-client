#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Colorful::RGBSplit {
    IL2CPP_REGISTER_METHOD(0x0304CEF0, void, OnRenderImage, (app::RGBSplit * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x0304D160, app::String*, GetShaderName, (app::RGBSplit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RGBSplit * this_ptr))
} // namespace app::classes::Colorful::RGBSplit
