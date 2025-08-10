#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsGroupDescriptionAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsGroupDescriptionAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::SettingsGroupDescriptionAttribute* this_ptr, app::String* description)
    IL2CPP_REGISTER_METHOD(0x02962BC0, app::String*, get_Description, app::SettingsGroupDescriptionAttribute* this_ptr)
} // namespace app::classes::System::Configuration::SettingsGroupDescriptionAttribute
