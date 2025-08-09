#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationPropertyCollection.h>
#include <Modloader/app/structs/SettingElement.h>
#include <Modloader/app/structs/SettingValueElement.h>
#include <Modloader/app/structs/SettingsSerializeAs__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingElement {
    IL2CPP_REGISTER_METHOD(0x029623B0, void, ctor_1, app::SettingElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029623E0, void, ctor_2, app::SettingElement* this_ptr, app::String* name, app::SettingsSerializeAs__Enum serialize_as)
    IL2CPP_REGISTER_METHOD(0x02962410, app::String*, get_Name, app::SettingElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962440, void, set_Name, app::SettingElement* this_ptr, app::String* value)
    IL2CPP_REGISTER_METHOD(0x02962470, app::ConfigurationPropertyCollection*, get_Properties, app::SettingElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029624A0, app::SettingsSerializeAs__Enum, get_SerializeAs, app::SettingElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029624D0, void, set_SerializeAs, app::SettingElement* this_ptr, app::SettingsSerializeAs__Enum value)
    IL2CPP_REGISTER_METHOD(0x02962500, app::SettingValueElement*, get_Value, app::SettingElement* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962530, void, set_Value, app::SettingElement* this_ptr, app::SettingValueElement* value)
} // namespace app::classes::System::Configuration::SettingElement
