#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/MoonTelemetrySendCallback.h>

namespace app::classes::Moon::Telemetry::Web::MoonTelemetrySendCallback {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResult, app::MoonTelemetrySendCallback* this_ptr, app::Byte__Array* data)
    IL2CPP_REGISTER_METHOD(0x02E9A6F0, void, ctor, app::MoonTelemetrySendCallback* this_ptr)
} // namespace app::classes::Moon::Telemetry::Web::MoonTelemetrySendCallback
