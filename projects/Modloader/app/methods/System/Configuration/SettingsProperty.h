#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsProperty.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingsAttributeDictionary.h>
#include <Modloader/app/structs/SettingsProvider.h>
#include <Modloader/app/structs/SettingsSerializeAs__Enum.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Configuration::SettingsProperty {
    IL2CPP_REGISTER_METHOD(0x02962D70, void, ctor_1, (app::SettingsProperty * this_ptr, app::SettingsProperty* property_to_copy))
    IL2CPP_REGISTER_METHOD(0x02962DA0, void, ctor_2, (app::SettingsProperty * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x02962DD0, void, ctor_3, (app::SettingsProperty * this_ptr, app::String* name, app::Type* property_type, app::SettingsProvider* provider, bool is_read_only, app::Object* default_value, app::SettingsSerializeAs__Enum serialize_as, app::SettingsAttributeDictionary* attributes, bool throw_on_error_deserializing, bool throw_on_error_serializing))
    IL2CPP_REGISTER_METHOD(0x02962E00, app::SettingsAttributeDictionary*, get_Attributes, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962E30, app::Object*, get_DefaultValue, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962E60, void, set_DefaultValue, (app::SettingsProperty * this_ptr, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x02962E90, bool, get_IsReadOnly, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962EC0, void, set_IsReadOnly, (app::SettingsProperty * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x02962EF0, app::String*, get_Name, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962F20, void, set_Name, (app::SettingsProperty * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x02962F50, app::Type*, get_PropertyType, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962F80, void, set_PropertyType, (app::SettingsProperty * this_ptr, app::Type* value))
    IL2CPP_REGISTER_METHOD(0x02962FB0, app::SettingsProvider*, get_Provider, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02962FE0, void, set_Provider, (app::SettingsProperty * this_ptr, app::SettingsProvider* value))
    IL2CPP_REGISTER_METHOD(0x02963010, app::SettingsSerializeAs__Enum, get_SerializeAs, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02963040, void, set_SerializeAs, (app::SettingsProperty * this_ptr, app::SettingsSerializeAs__Enum value))
    IL2CPP_REGISTER_METHOD(0x02963070, bool, get_ThrowOnErrorDeserializing, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x029630A0, void, set_ThrowOnErrorDeserializing, (app::SettingsProperty * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x029630D0, bool, get_ThrowOnErrorSerializing, (app::SettingsProperty * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02963100, void, set_ThrowOnErrorSerializing, (app::SettingsProperty * this_ptr, bool value))
} // namespace app::classes::System::Configuration::SettingsProperty
