#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostTimeTrackingPlugin {
    IL2CPP_REGISTER_METHOD(0x007E9F70, void, OnStartRecording, (app::GhostTimeTrackingPlugin * this_ptr, app::PreRecordingData* pre_recording_data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostTimeTrackingPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x007E9FD0, void, RecordCycle, (app::GhostTimeTrackingPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostTimeTrackingPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::GhostTimeTrackingPlugin * this_ptr))
} // namespace app::classes::GhostTimeTrackingPlugin
