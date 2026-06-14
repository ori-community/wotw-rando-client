#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetry_MaelstromEvent.h>

namespace app::classes::MoonTelemetry_MaelstromEvent {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonTelemetry_MaelstromEvent* this_ptr)
}
