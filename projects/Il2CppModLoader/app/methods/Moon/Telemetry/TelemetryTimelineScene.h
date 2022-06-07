#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Telemetry::TelemetryTimelineScene {
    IL2CPP_REGISTER_METHOD(0x010AA7F0, void, ctor, (app::TelemetryTimelineScene * this_ptr, app::MoonTelemetrySceneEvent__Array * scene_events))
    IL2CPP_REGISTER_METHOD(0x010AAB00, void, OnGui, (app::TelemetryTimelineScene * this_ptr, app::DrawingContext context))
    IL2CPP_REGISTER_METHOD(0x010AB090, void, OnHeaderGui, (app::TelemetryTimelineScene * this_ptr, app::Rect rect))
    IL2CPP_REGISTER_METHOD(0x010AB1D0, void, OnStateZoneGui, (app::TelemetryTimelineScene * this_ptr, app::Rect rect, app::Color color))
    IL2CPP_REGISTER_METHOD(0x010AB440, app::Single__Array *, GetEventsLength, (app::TelemetryTimelineScene * this_ptr, app::MoonTelemetrySceneEvent__Array * scene_events))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InitGui, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
}
