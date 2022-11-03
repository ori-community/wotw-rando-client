#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Colorful::FastVignette {
    IL2CPP_REGISTER_METHOD(0x030435A0, void, OnRenderImage, (app::FastVignette * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x030437F0, app::String*, GetShaderName, (app::FastVignette * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03043870, void, ctor, (app::FastVignette * this_ptr))
} // namespace app::classes::Colorful::FastVignette
