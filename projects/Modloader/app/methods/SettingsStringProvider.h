#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SettingsStringProvider.h>

namespace app::classes::SettingsStringProvider {
    IL2CPP_REGISTER_METHOD(0x005A58A0, app::String*, get_On, (app::SettingsStringProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A5920, app::String*, get_Off, (app::SettingsStringProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A59A0, app::String*, GetStringValue, (app::SettingsStringProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SettingsStringProvider * this_ptr))
} // namespace app::classes::SettingsStringProvider
