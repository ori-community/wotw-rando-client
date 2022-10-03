#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Performance::Settings::MaskErasingFixFocusedSliceProfilingSetting {
    IL2CPP_REGISTER_METHOD(0x00E3DF90, app::ProfilingSettings_SettingType__Enum, get_SettingType, (app::MaskErasingFixFocusedSliceProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3DFA0, bool, GetState, (app::MaskErasingFixFocusedSliceProfilingSetting * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00E3E070, void, SetState, (app::MaskErasingFixFocusedSliceProfilingSetting * this_ptr, bool state))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MaskErasingFixFocusedSliceProfilingSetting * this_ptr))
} // namespace app::classes::Moon::Telemetry::Performance::Settings::MaskErasingFixFocusedSliceProfilingSetting
