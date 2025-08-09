#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JsonBuilder_Object.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::MoonTelemetrySceneEvent {
    IL2CPP_REGISTER_METHOD(
        0x01471630,
        void,
        ctor_1,
        app::MoonTelemetrySceneEvent* this_ptr,
        app::RuntimeSceneMetaData* meta_data,
        app::MoonTelemetrySceneEvent_EventSceneState__Enum event_scene_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01471780,
        void,
        ctor_2,
        app::MoonTelemetrySceneEvent* this_ptr,
        app::SceneMetaData* meta_data,
        app::MoonTelemetrySceneEvent_EventSceneState__Enum event_scene_state
    )
    IL2CPP_REGISTER_METHOD(0x006A63A0, app::String*, get_Name, app::MoonTelemetrySceneEvent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x014718E0, void, SerializeToObject, app::MoonTelemetrySceneEvent* this_ptr, app::JsonBuilder_Object obj)
} // namespace app::classes::MoonTelemetrySceneEvent
