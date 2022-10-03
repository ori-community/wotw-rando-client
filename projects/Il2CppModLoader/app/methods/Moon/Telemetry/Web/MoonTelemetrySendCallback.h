#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::Telemetry::Web::MoonTelemetrySendCallback {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResult, (app::MoonTelemetrySendCallback * this_ptr, app::Byte__Array* data))
    IL2CPP_REGISTER_METHOD(0x02E9A6F0, void, ctor, (app::MoonTelemetrySendCallback * this_ptr))
} // namespace app::classes::Moon::Telemetry::Web::MoonTelemetrySendCallback
