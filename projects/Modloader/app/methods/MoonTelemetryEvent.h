#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/JsonBuilder_Slot.h>
#include <Modloader/app/structs/MoonTelemetryEvent.h>

namespace app::classes::MoonTelemetryEvent {
    IL2CPP_REGISTER_METHOD(0x02EA01A0, void, Serialize, app::MoonTelemetryEvent* this_ptr, app::JsonBuilder_Slot slot)
    IL2CPP_REGISTER_METHOD(0x02EA0290, void, SerializeToObject, app::MoonTelemetryEvent* this_ptr, app::JsonBuilder_Object obj)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::MoonTelemetryEvent* this_ptr)
} // namespace app::classes::MoonTelemetryEvent
