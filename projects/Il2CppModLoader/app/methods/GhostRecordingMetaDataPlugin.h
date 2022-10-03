#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GhostRecordingMetaDataPlugin {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostRecordingMetaDataPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x007E4520, void, RecordCycle, (app::GhostRecordingMetaDataPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostRecordingMetaDataPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E4690, void, OnStopRecording, (app::GhostRecordingMetaDataPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007E4890, void, ctor, (app::GhostRecordingMetaDataPlugin * this_ptr))
} // namespace app::classes::GhostRecordingMetaDataPlugin
