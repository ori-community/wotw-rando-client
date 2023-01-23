#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MoonTelemetryShrineStartEvent.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MoonTelemetryShrineStartEvent_ShrineID__Enum.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>

namespace app::classes::MoonTelemetryShrineStartEvent {
    IL2CPP_REGISTER_METHOD(0x01472910, void, ctor, (app::MoonTelemetryShrineStartEvent * this_ptr, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x01472A00, app::MoonTelemetryShrineStartEvent_ShrineID__Enum, ParseName, (app::String * scene_name))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::String*, get_Name, (app::MoonTelemetryShrineStartEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01472CB0, void, SerializeToObject, (app::MoonTelemetryShrineStartEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryShrineStartEvent
