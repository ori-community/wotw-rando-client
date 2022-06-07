#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::Web::MoonTelemetryCallback {
    IL2CPP_REGISTER_METHOD(0x02E9A6F0, void, ctor, (app::MoonTelemetryCallback * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResult, (app::MoonTelemetryCallback * this_ptr, app::Byte__Array * data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnError, (app::MoonTelemetryCallback * this_ptr, app::Exception * e))
    IL2CPP_REGISTER_METHOD(0x02E9A840, app::SwaggerJSONParser *, get_Parser, (app::MoonTelemetryCallback * this_ptr))
}
