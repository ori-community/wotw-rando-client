#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::ShadowsMidtonesHighlights {
    IL2CPP_REGISTER_METHOD(0x030523E0, void, OnRenderImage, (app::ShadowsMidtonesHighlights * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x030528B0, app::String *, GetShaderName, (app::ShadowsMidtonesHighlights * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03052930, void, ctor, (app::ShadowsMidtonesHighlights * this_ptr))
}
