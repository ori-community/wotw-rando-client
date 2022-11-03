#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::UberShaderColor {
    IL2CPP_REGISTER_METHOD(0x0190CEA0, void, BindProperties, (app::UberShaderColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CB5CD0, app::Color, get_Color, (app::UberShaderColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190CF10, void, set_Color, (app::UberShaderColor * this_ptr, app::Color value))
    IL2CPP_REGISTER_METHOD(0x006A45A0, float, get_R, (app::UberShaderColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190CF30, void, set_R, (app::UberShaderColor * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724020, float, get_G, (app::UberShaderColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F00, void, set_G, (app::UberShaderColor * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00449EA0, float, get_b, (app::UberShaderColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F20, void, set_b, (app::UberShaderColor * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00724040, float, get_A, (app::UberShaderColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01289F40, void, set_A, (app::UberShaderColor * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x0190CF50, void, ctor_1, (app::UberShaderColor * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0190CF70, void, ctor_2, (app::UberShaderColor * this_ptr, app::Color default_color))
} // namespace app::classes::UberShaderColor
