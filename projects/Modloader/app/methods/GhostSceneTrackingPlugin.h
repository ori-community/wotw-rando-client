#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostSceneTrackingPlugin.h>
#include <Modloader/app/structs/GhostRecorder_GhostPluginRecordingType__Enum.h>
#include <Modloader/app/structs/RuntimeSceneMetaData.h>

namespace app::classes::GhostSceneTrackingPlugin {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostSceneTrackingPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x007E56D0, void, RecordCycle, (app::GhostSceneTrackingPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostSceneTrackingPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E56F0, app::RuntimeSceneMetaData*, GetCurrentScene, (app::GhostSceneTrackingPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::GhostSceneTrackingPlugin * this_ptr))
} // namespace app::classes::GhostSceneTrackingPlugin
