#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryShrineEndEvent.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetryShrineEndEvent_ShrineResult__Enum.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryShrineEndEvent {
    IL2CPP_REGISTER_METHOD(0x01472650, void, ctor, (app::MoonTelemetryShrineEndEvent * this_ptr, float time, app::MoonTelemetryShrineEndEvent_ShrineResult__Enum result, app::String* scene_name))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String*, get_Name, (app::MoonTelemetryShrineEndEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01472760, void, SerializeToObject, (app::MoonTelemetryShrineEndEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryShrineEndEvent
