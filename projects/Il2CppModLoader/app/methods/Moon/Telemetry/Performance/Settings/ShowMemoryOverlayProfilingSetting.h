#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::ShowMemoryOverlayProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3F7C0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::ShowMemoryOverlayProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F7D0, bool, GetState, (app::ShowMemoryOverlayProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3F8E0, void, SetState, (app::ShowMemoryOverlayProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::ShowMemoryOverlayProfilingSetting * this_ptr))
}
