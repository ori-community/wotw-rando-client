#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonTelemetryPlayerSessionEndEvent {
    IL2CPP_REGISTER_METHOD(0x0146F610, void, ctor, (app::MoonTelemetryPlayerSessionEndEvent * this_ptr, app::RestartReason__Enum restart_reason, float session_duration))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_Name, (app::MoonTelemetryPlayerSessionEndEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146F710, void, SerializeToObject, (app::MoonTelemetryPlayerSessionEndEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryPlayerSessionEndEvent
