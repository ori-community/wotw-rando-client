#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::GUIController {
    IL2CPP_REGISTER_METHOD(0x03163090, void, Start, (app::GUIController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03163AB0, void, Update, (app::GUIController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03163C30, float, ShaderFloat_1, (app::GUIController * this_ptr, int32_t name, float value))
    IL2CPP_REGISTER_METHOD(0x03163D20, float, ShaderFloat_2, (app::GUIController * this_ptr, int32_t name, float value, float min, float max))
    IL2CPP_REGISTER_METHOD(0x03163E20, void, UpdateContent, (app::GUIController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03163F10, void, UpdateFont, (app::GUIController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031640B0, void, UpdateShader, (app::GUIController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03164250, void, ctor, (app::GUIController * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031642D0, void, cctor, ())
}
