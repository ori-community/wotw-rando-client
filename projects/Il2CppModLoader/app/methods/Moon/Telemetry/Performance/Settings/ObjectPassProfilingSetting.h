#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::ObjectPassProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E530, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ObjectPassProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E540, app::RenderScope__Enum *, GetScope, (app::ObjectPassProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ObjectPassProfilingSetting * this_ptr))
}
