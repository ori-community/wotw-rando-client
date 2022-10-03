#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Web::MoonTelemetryWebConfig {
    IL2CPP_REGISTER_METHOD(0x02E9AC10, bool, get_IsInited, ())
    IL2CPP_REGISTER_METHOD(0x02E9ACC0, app::String*, get_UNITY_VERSION, ())
    IL2CPP_REGISTER_METHOD(0x02E9AD60, void, set_UNITY_VERSION, (app::String * value))
    IL2CPP_REGISTER_METHOD(0x02E9AE10, app::Dictionary_2_System_String_System_String_*, get_HEADERS, ())
    IL2CPP_REGISTER_METHOD(0x02E9AEB0, void, set_HEADERS, (app::Dictionary_2_System_String_System_String_ * value))
    IL2CPP_REGISTER_METHOD(0x02E9AF60, void, Init, (app::WebImpl__Enum impl))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartThreadHandler, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopThreadhandler, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::MoonTelemetryWebConfig * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
} // namespace app::classes::Moon::Telemetry::Web::MoonTelemetryWebConfig
