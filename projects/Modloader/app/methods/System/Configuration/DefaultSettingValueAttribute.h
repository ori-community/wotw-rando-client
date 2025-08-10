#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DefaultSettingValueAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::DefaultSettingValueAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::DefaultSettingValueAttribute* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02961A50, app::String*, get_Value, app::DefaultSettingValueAttribute* this_ptr)
} // namespace app::classes::System::Configuration::DefaultSettingValueAttribute
