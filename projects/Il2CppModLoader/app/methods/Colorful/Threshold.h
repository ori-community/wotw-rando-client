#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::Threshold {
    IL2CPP_REGISTER_METHOD(0x030548A0, void, OnRenderImage, (app::Threshold * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03054AC0, app::String*, GetShaderName, (app::Threshold * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03054B40, void, ctor, (app::Threshold * this_ptr))
} // namespace app::classes::Colorful::Threshold
