#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::SpecialSettingAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SpecialSettingAttribute * this_ptr, app::SpecialSetting__Enum special_setting))
    IL2CPP_REGISTER_METHOD(0x01FFE2F0, app::SpecialSetting__Enum, get_SpecialSetting, (app::SpecialSettingAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470A318, SpecialSettingAttribute_get_SpecialSetting__MethodInfo)
}
