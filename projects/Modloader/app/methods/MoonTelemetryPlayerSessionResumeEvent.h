#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetryPlayerSessionResumeEvent.h>
#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetryPlayerSessionResumeEvent {
    IL2CPP_REGISTER_METHOD(0x0146F8E0, void, ctor, (app::MoonTelemetryPlayerSessionResumeEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String*, get_Name, (app::MoonTelemetryPlayerSessionResumeEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146FA50, void, SerializeToObject, (app::MoonTelemetryPlayerSessionResumeEvent * this_ptr, app::JsonBuilder_Object obj))
} // namespace app::classes::MoonTelemetryPlayerSessionResumeEvent
