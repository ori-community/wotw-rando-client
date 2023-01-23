#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetryPlayerSessionStartEvent.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>

namespace app::classes::MoonTelemetryPlayerSessionStartEvent {
    IL2CPP_REGISTER_METHOD(0x0146FB20, void, ctor, (app::MoonTelemetryPlayerSessionStartEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::String*, get_Name, (app::MoonTelemetryPlayerSessionStartEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01470150, void, SerializeToObject, (app::MoonTelemetryPlayerSessionStartEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryPlayerSessionStartEvent
