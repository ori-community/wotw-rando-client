#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Colorful::DynamicLookup {
    IL2CPP_REGISTER_METHOD(0x03042EB0, void, OnRenderImage, (app::DynamicLookup * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x030434A0, app::String*, GetShaderName, (app::DynamicLookup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03043520, void, ctor, (app::DynamicLookup * this_ptr))
} // namespace app::classes::Colorful::DynamicLookup
