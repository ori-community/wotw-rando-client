#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::MoonTelemetrySceneEvent {
    IL2CPP_REGISTER_METHOD(0x01471630, void, ctor_1, (app::MoonTelemetrySceneEvent * this_ptr, app::RuntimeSceneMetaData * meta_data, app::MoonTelemetrySceneEvent_EventSceneState__Enum event_scene_state))
    IL2CPP_REGISTER_METHOD(0x01471780, void, ctor_2, (app::MoonTelemetrySceneEvent * this_ptr, app::SceneMetaData * meta_data, app::MoonTelemetrySceneEvent_EventSceneState__Enum event_scene_state))
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String *, get_Name, (app::MoonTelemetrySceneEvent * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014718E0, void, SerializeToObject, (app::MoonTelemetrySceneEvent * this_ptr, app::JsonBuilder_Object obj))
}
