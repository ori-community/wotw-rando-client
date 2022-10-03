#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MoonTelemetryEvent {
    IL2CPP_REGISTER_METHOD(0x02EA01A0, void, Serialize, (app::MoonTelemetryEvent * this_ptr, app::JsonBuilder_Slot slot))
    IL2CPP_REGISTER_METHOD(0x02EA0290, void, SerializeToObject, (app::MoonTelemetryEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonTelemetryEvent * this_ptr))
} // namespace app::classes::MoonTelemetryEvent
