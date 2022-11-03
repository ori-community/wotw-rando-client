#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Colorful::Technicolor {
    IL2CPP_REGISTER_METHOD(0x03054490, void, OnRenderImage, (app::Technicolor * this_ptr, app::RenderTexture* source, app::RenderTexture* destination))
    IL2CPP_REGISTER_METHOD(0x030547E0, app::String*, GetShaderName, (app::Technicolor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03054860, void, ctor, (app::Technicolor * this_ptr))
} // namespace app::classes::Colorful::Technicolor
