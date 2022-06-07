#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonInput {
    IL2CPP_REGISTER_METHOD(0x0145B130, bool, get_anyKeyDown, ())
    IL2CPP_REGISTER_METHOD(0x0145B180, bool, get_anyKey, ())
    IL2CPP_REGISTER_METHOD(0x0145B1D0, app::Vector3, get_mousePosition, ())
    IL2CPP_REGISTER_METHOD(0x0145B250, float, GetAxis, (app::String * axis_name))
    IL2CPP_REGISTER_METHOD(0x0145B2A0, bool, GetMouseButton, (int32_t button))
    IL2CPP_REGISTER_METHOD(0x0145B2F0, bool, GetButton, (app::String * button_name))
    IL2CPP_REGISTER_METHOD(0x0145B340, bool, GetButtonDown, (app::String * button_name))
    IL2CPP_REGISTER_METHOD(0x0145B390, bool, GetKey, (app::KeyCode__Enum key_code))
    IL2CPP_REGISTER_METHODINFO(0x04760B00, MoonInput_GetKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0145B3E0, bool, GetKeyDown_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0145B430, bool, GetKeyDown_2, (app::KeyCode__Enum key_code))
    IL2CPP_REGISTER_METHOD(0x0145B480, bool, GetKeyUp_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x0145B4D0, bool, GetKeyUp_2, (app::KeyCode__Enum key_code))
    IL2CPP_REGISTER_METHOD(0x0145B520, bool, GetMouseButtonUp, (int32_t button))
    IL2CPP_REGISTER_METHOD(0x0145B570, bool, GetMouseButtonDown, (int32_t button))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonInput * this_ptr))
}
