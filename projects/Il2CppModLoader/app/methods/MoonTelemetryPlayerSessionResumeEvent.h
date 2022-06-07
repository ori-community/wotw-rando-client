#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTelemetryPlayerSessionResumeEvent {
    IL2CPP_REGISTER_METHOD(0x0146F8E0, void, ctor, (app::MoonTelemetryPlayerSessionResumeEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::String *, get_Name, (app::MoonTelemetryPlayerSessionResumeEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0146FA50, void, SerializeToObject, (app::MoonTelemetryPlayerSessionResumeEvent * this_ptr, app::JsonBuilder_Object obj))
}
