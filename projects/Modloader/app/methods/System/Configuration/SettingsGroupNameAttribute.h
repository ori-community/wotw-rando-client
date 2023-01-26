#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsGroupNameAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsGroupNameAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::SettingsGroupNameAttribute * this_ptr, app::String* group_name))
    IL2CPP_REGISTER_METHOD(0x02962BF0, app::String*, get_GroupName, (app::SettingsGroupNameAttribute * this_ptr))
} // namespace app::classes::System::Configuration::SettingsGroupNameAttribute
