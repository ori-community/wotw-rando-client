#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpecialSettingAttribute.h>
#include <Modloader/app/structs/SpecialSetting__Enum.h>

namespace app::classes::System::Configuration::SpecialSettingAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SpecialSettingAttribute* this_ptr, app::SpecialSetting__Enum special_setting)
    IL2CPP_REGISTER_METHOD(0x01FFE2F0, app::SpecialSetting__Enum, get_SpecialSetting, app::SpecialSettingAttribute* this_ptr)
} // namespace app::classes::System::Configuration::SpecialSettingAttribute
