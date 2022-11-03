#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::SettingsManageabilityAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SettingsManageabilityAttribute * this_ptr, app::SettingsManageability__Enum manageability))
    IL2CPP_REGISTER_METHOD(0x02962D40, app::SettingsManageability__Enum, get_Manageability, (app::SettingsManageabilityAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04725890, SettingsManageabilityAttribute_get_Manageability__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsManageabilityAttribute
