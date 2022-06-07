#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::Posterize {
    IL2CPP_REGISTER_METHOD(0x0304CC60, void, OnRenderImage, (app::Posterize * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x0304CE50, app::String *, GetShaderName, (app::Posterize * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0304CED0, void, ctor, (app::Posterize * this_ptr))
}
