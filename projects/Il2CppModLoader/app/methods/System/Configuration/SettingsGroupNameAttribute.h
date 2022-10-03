#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::SettingsGroupNameAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SettingsGroupNameAttribute * this_ptr, app::String* group_name))
    IL2CPP_REGISTER_METHOD(0x02962BF0, app::String*, get_GroupName, (app::SettingsGroupNameAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04770C50, SettingsGroupNameAttribute_get_GroupName__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsGroupNameAttribute
