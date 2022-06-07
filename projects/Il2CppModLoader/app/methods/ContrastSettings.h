#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ContrastSettings {
    IL2CPP_REGISTER_METHOD(0x00863E90, float, get_DebugOverrideContrast, (app::ContrastSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00863EA0, void, set_DebugOverrideContrast, (app::ContrastSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011E7CC0, float, get_EffectiveContrast, (app::ContrastSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00573170, float, get_DebugOverrideBrightness, (app::ContrastSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FDC10, void, set_DebugOverrideBrightness, (app::ContrastSettings * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x011E7D70, float, get_EffectiveBrightness, (app::ContrastSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011E7E20, app::ContrastSettings *, Clone, (app::ContrastSettings * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DA5B0, void, CopyFrom, (app::ContrastSettings * this_ptr, app::ContrastSettings * settings_contrast))
    IL2CPP_REGISTER_METHOD(0x00858E20, void, ctor, (app::ContrastSettings * this_ptr))
}
