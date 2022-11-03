#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TelemetryHeatMap {
    IL2CPP_REGISTER_METHOD(0x00CE4AA0, void, Awake, (app::TelemetryHeatMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE4CE0, void, OnEnable, (app::TelemetryHeatMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE4EF0, void, Update, (app::TelemetryHeatMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::TelemetryHeatMap * this_ptr))
} // namespace app::classes::TelemetryHeatMap
