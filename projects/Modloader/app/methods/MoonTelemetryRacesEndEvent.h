#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetryRacesEndEvent.h>
#include <Modloader/app/structs/ITrialData.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>

namespace app::classes::MoonTelemetryRacesEndEvent {
    IL2CPP_REGISTER_METHOD(0x01470E30, void, ctor, (app::MoonTelemetryRacesEndEvent * this_ptr, float time, int32_t place, app::ITrialData* data))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String*, get_Name, (app::MoonTelemetryRacesEndEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01470F60, void, SerializeToObject, (app::MoonTelemetryRacesEndEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryRacesEndEvent
