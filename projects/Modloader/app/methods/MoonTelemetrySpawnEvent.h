#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetrySpawnEvent.h>
#include <Modloader/app/structs/MoonTelemetrySpawnEvent_SpawnReason__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetrySpawnEvent {
    IL2CPP_REGISTER_METHOD(0x01472DB0, void, ctor, app::MoonTelemetrySpawnEvent* this_ptr, app::MoonTelemetrySpawnEvent_SpawnReason__Enum reason)
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String*, get_Name, app::MoonTelemetrySpawnEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01472E90, void, SerializeToObject, app::MoonTelemetrySpawnEvent* this_ptr, app::JsonBuilder_Object obj)
} // namespace app::classes::MoonTelemetrySpawnEvent
