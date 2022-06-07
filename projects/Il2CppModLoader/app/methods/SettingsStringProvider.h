#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SettingsStringProvider {
    IL2CPP_REGISTER_METHOD(0x005A58A0, app::String *, get_On, (app::SettingsStringProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A5920, app::String *, get_Off, (app::SettingsStringProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005A59A0, app::String *, GetStringValue, (app::SettingsStringProvider * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::SettingsStringProvider * this_ptr))
}
