#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::DefaultSettingValueAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::DefaultSettingValueAttribute * this_ptr, app::String * value))
    IL2CPP_REGISTER_METHOD(0x02961A50, app::String *, get_Value, (app::DefaultSettingValueAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047294B8, DefaultSettingValueAttribute_get_Value__MethodInfo)
}
