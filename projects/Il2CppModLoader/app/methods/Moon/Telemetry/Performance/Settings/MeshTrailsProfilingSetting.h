#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Performance::Settings::MeshTrailsProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3E2D0, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::MeshTrailsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E2E0, app::RenderScope__Enum *, GetScope, (app::MeshTrailsProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MeshTrailsProfilingSetting * this_ptr))
}
