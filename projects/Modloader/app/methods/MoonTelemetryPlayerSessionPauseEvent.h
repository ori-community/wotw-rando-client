#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryPlayerSessionPauseEvent.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryPlayerSessionPauseEvent {
    IL2CPP_REGISTER_METHOD(0x002FBC00, app::String*, get_Name, app::MoonTelemetryPlayerSessionPauseEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0146F810, void, ctor, app::MoonTelemetryPlayerSessionPauseEvent* this_ptr)
} // namespace app::classes::MoonTelemetryPlayerSessionPauseEvent
