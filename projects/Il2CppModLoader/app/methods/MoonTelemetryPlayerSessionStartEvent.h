#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTelemetryPlayerSessionStartEvent {
    IL2CPP_REGISTER_METHOD(0x0146FB20, void, ctor, (app::MoonTelemetryPlayerSessionStartEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00660430, app::String *, get_Name, (app::MoonTelemetryPlayerSessionStartEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01470150, void, SerializeToObject, (app::MoonTelemetryPlayerSessionStartEvent * this_ptr, app::JsonBuilder_Object obj))
}
