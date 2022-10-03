#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::System::Configuration::SettingsGroupDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SettingsGroupDescriptionAttribute * this_ptr, app::String* description))
    IL2CPP_REGISTER_METHOD(0x02962BC0, app::String*, get_Description, (app::SettingsGroupDescriptionAttribute * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047454B8, SettingsGroupDescriptionAttribute_get_Description__MethodInfo)
} // namespace app::classes::System::Configuration::SettingsGroupDescriptionAttribute
