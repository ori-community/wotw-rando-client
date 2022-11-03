#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::MoonTelemetryAbilityChangeEvent {
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String*, get_Name, (app::MoonTelemetryAbilityChangeEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01466630, void, SerializeToObject, (app::MoonTelemetryAbilityChangeEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x01466860, void, ctor, (app::MoonTelemetryAbilityChangeEvent * this_ptr))
} // namespace app::classes::MoonTelemetryAbilityChangeEvent
