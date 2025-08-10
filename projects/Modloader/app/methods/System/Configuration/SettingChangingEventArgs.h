#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SettingChangingEventArgs.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Configuration::SettingChangingEventArgs {
    IL2CPP_REGISTER_METHOD(
        0x02962200,
        void,
        ctor,
        app::SettingChangingEventArgs* this_ptr,
        app::String* setting_name,
        app::String* setting_class,
        app::String* setting_key,
        app::Object* new_value,
        bool cancel
    )
    IL2CPP_REGISTER_METHOD(0x02962230, app::Object*, get_NewValue, app::SettingChangingEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962260, app::String*, get_SettingClass, app::SettingChangingEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02962290, app::String*, get_SettingKey, app::SettingChangingEventArgs* this_ptr)
    IL2CPP_REGISTER_METHOD(0x029622C0, app::String*, get_SettingName, app::SettingChangingEventArgs* this_ptr)
} // namespace app::classes::System::Configuration::SettingChangingEventArgs
