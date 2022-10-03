#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::ConditionalShowAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_MethodName, (app::ConditionalShowAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_MethodName, (app::ConditionalShowAttribute * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_ReturnValue, (app::ConditionalShowAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_ReturnValue, (app::ConditionalShowAttribute * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x01669060, void, ctor, (app::ConditionalShowAttribute * this_ptr, app::String* method_name, bool return_value))
} // namespace app::classes::ConditionalShowAttribute
