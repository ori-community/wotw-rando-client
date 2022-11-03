#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::SettingChangingEventArgs {
    IL2CPP_REGISTER_METHOD(0x02962200, void, ctor, (app::SettingChangingEventArgs * this_ptr, app::String* setting_name, app::String* setting_class, app::String* setting_key, app::Object* new_value, bool cancel))
    IL2CPP_REGISTER_METHODINFO(0x04718510, SettingChangingEventArgs__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962230, app::Object*, get_NewValue, (app::SettingChangingEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D230, SettingChangingEventArgs_get_NewValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962260, app::String*, get_SettingClass, (app::SettingChangingEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04727F70, SettingChangingEventArgs_get_SettingClass__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02962290, app::String*, get_SettingKey, (app::SettingChangingEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04761170, SettingChangingEventArgs_get_SettingKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029622C0, app::String*, get_SettingName, (app::SettingChangingEventArgs * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04778410, SettingChangingEventArgs_get_SettingName__MethodInfo)
} // namespace app::classes::System::Configuration::SettingChangingEventArgs
