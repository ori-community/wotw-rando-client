#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SMAA_GlobalSettings.h>

namespace app::classes::UnityStandardAssets::CinematicEffects::SMAA_GlobalSettings {
    IL2CPP_REGISTER_METHOD(0x0250B240, app::SMAA_GlobalSettings, get_defaultSettings, ())
}
