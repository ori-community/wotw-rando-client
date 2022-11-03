#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GhostUberStatePlugin {
    IL2CPP_REGISTER_METHOD(0x007EC420, void, OnStartRecording, (app::GhostUberStatePlugin * this_ptr, app::PreRecordingData* pre_recording_data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopRecording, (app::GhostUberStatePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostUberStatePlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (app::GhostUberStatePlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostUberStatePlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordStateChange, (app::GhostUberStatePlugin * this_ptr, app::IGenericUberState* state, float value))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::GhostUberStatePlugin * this_ptr))
} // namespace app::classes::GhostUberStatePlugin
