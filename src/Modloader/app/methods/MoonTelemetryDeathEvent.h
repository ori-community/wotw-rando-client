#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryDeathEvent.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryDeathEvent {
    IL2CPP_REGISTER_METHOD(0x00418200, app::String*, get_Name, app::MoonTelemetryDeathEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0146F1C0, void, ctor, app::MoonTelemetryDeathEvent* this_ptr)
} // namespace app::classes::MoonTelemetryDeathEvent
