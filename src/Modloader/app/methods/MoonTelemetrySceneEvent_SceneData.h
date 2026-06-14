#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MoonTelemetrySceneEvent_EventSceneState__Enum.h>
#include <Modloader/app/structs/MoonTelemetrySceneEvent_SceneData.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>
#include <Modloader/app/structs/SceneMetaData.h>

namespace app::classes::MoonTelemetrySceneEvent_SceneData {
    IL2CPP_REGISTER_METHOD(
        0x01471B20,
        app::MoonTelemetrySceneEvent_SceneData,
        Create_1,
        app::RuntimeSceneMetaData* meta_data,
        app::MoonTelemetrySceneEvent_EventSceneState__Enum event_scene_state
    )
    IL2CPP_REGISTER_METHOD(
        0x01471BA0,
        app::MoonTelemetrySceneEvent_SceneData,
        Create_2,
        app::SceneMetaData* meta_data,
        app::MoonTelemetrySceneEvent_EventSceneState__Enum event_scene_state
    )
} // namespace app::classes::MoonTelemetrySceneEvent_SceneData
