#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTelemetryRacesStartEvent {
    IL2CPP_REGISTER_METHOD(0x01471130, void, ctor, (app::MoonTelemetryRacesStartEvent * this_ptr, app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x01471220, app::MoonTelemetryRacesStartEvent_RaceID__Enum, ParseName, (app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String *, get_Name, (app::MoonTelemetryRacesStartEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01471530, void, SerializeToObject, (app::MoonTelemetryRacesStartEvent * this_ptr, app::JsonBuilder_Object obj))
}
