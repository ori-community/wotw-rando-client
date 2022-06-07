#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Colorful::HueFocus {
    IL2CPP_REGISTER_METHOD(0x03047190, void, OnRenderImage, (app::HueFocus * this_ptr, app::RenderTexture * source, app::RenderTexture * destination))
    IL2CPP_REGISTER_METHOD(0x03047450, app::String *, GetShaderName, (app::HueFocus * this_ptr))
    IL2CPP_REGISTER_METHOD(0x030474D0, void, ctor, (app::HueFocus * this_ptr))
}
