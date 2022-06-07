#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::Vibrance {
    IL2CPP_REGISTER_METHOD(0x03054B60, void, OnRenderImage, (app::Vibrance * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03054E50, app::String *, GetShaderName, (app::Vibrance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03054ED0, void, ctor, (app::Vibrance * this_ptr))
}
