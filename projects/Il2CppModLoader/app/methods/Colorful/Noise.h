#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::Noise {
    IL2CPP_REGISTER_METHOD(0x0304C090, void, Update, (app::Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304C120, void, OnRenderImage, (app::Noise * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0304C350, app::String *, GetShaderName, (app::Noise * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304C3D0, void, ctor, (app::Noise * this_ptr))
}
