#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetrySendRequest.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Telemetry::Web::MoonTelemetrySendRequest {
    IL2CPP_REGISTER_METHOD(0x02E9A910, void, ctor, app::MoonTelemetrySendRequest* this_ptr, app::String* body)
}
