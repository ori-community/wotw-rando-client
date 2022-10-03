#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Colorful::CrossStitch {
    IL2CPP_REGISTER_METHOD(0x030420F0, void, OnRenderImage, (app::CrossStitch * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x03042420, app::String*, GetShaderName, (app::CrossStitch * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030424A0, void, ctor, (app::CrossStitch * this_ptr))
} // namespace app::classes::Colorful::CrossStitch
