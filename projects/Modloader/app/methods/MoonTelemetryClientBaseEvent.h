#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetryClientBaseEvent.h>

namespace app::classes::MoonTelemetryClientBaseEvent {
    IL2CPP_REGISTER_METHOD(0x0146C490, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FBBE0, app::DateTime, get_Time, (app::MoonTelemetryClientBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBBF0, void, set_Time, (app::MoonTelemetryClientBaseEvent * this_ptr, app::DateTime value))
    IL2CPP_REGISTER_METHOD(0x0146C570, void, SynchronousInitialize, (app::MoonTelemetryClientBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146C670, void, AsynchronousInitialize, (app::MoonTelemetryClientBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146CFE0, void, SerializeToObject, (app::MoonTelemetryClientBaseEvent * this_ptr, app::JsonBuilder_Object obj))
    IL2CPP_REGISTER_METHOD(0x0146D460, void, ctor, (app::MoonTelemetryClientBaseEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146D550, void, cctor, ())
} // namespace app::classes::MoonTelemetryClientBaseEvent
