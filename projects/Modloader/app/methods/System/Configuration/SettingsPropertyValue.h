#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsProperty.h>
#include <Modloader/app/structs/SettingsPropertyValue.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingsPropertyValue {
    IL2CPP_REGISTER_METHOD(0x01FFDB70, void, ctor, app::SettingsPropertyValue* this_ptr, app::SettingsProperty* property)
    IL2CPP_REGISTER_METHOD(0x01FFDBA0, bool, get_Deserialized, app::SettingsPropertyValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDBD0, void, set_Deserialized, app::SettingsPropertyValue* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FFDC00, bool, get_IsDirty, app::SettingsPropertyValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDC30, void, set_IsDirty, app::SettingsPropertyValue* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x01FFDC60, app::String*, get_Name, app::SettingsPropertyValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDC90, app::SettingsProperty*, get_Property, app::SettingsPropertyValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDCC0, app::Object*, get_PropertyValue, app::SettingsPropertyValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDCF0, void, set_PropertyValue, app::SettingsPropertyValue* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01FFDD20, app::Object*, get_SerializedValue, app::SettingsPropertyValue* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01FFDD50, void, set_SerializedValue, app::SettingsPropertyValue* this_ptr, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x01FFDD80, bool, get_UsingDefaultValue, app::SettingsPropertyValue* this_ptr)
} // namespace app::classes::System::Configuration::SettingsPropertyValue
