#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::UnityStandardAssets::CinematicEffects::SMAA_TemporalSettings {
    IL2CPP_REGISTER_METHOD(0x0010E100, bool, UseTemporal, (app::SMAA_TemporalSettings__Boxed * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0250B510, app::SMAA_TemporalSettings, get_defaultSettings, ())
}
