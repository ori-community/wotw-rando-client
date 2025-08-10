#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SettingsLoadedEventArgs.h>
#include <Modloader/app/structs/SettingsProvider.h>

namespace app::classes::System::Configuration::SettingsLoadedEventArgs {
    IL2CPP_REGISTER_METHOD(0x02962C20, void, ctor, app::SettingsLoadedEventArgs* this_ptr, app::SettingsProvider* provider)
    IL2CPP_REGISTER_METHOD(0x02962C50, app::SettingsProvider*, get_Provider, app::SettingsLoadedEventArgs* this_ptr)
} // namespace app::classes::System::Configuration::SettingsLoadedEventArgs
