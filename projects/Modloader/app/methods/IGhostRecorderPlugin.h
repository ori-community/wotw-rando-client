#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GhostRecorder.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/IGhostRecorderPlugin.h>
#include <Modloader/app/structs/PreRecordingData.h>

namespace app::classes::IGhostRecorderPlugin {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::GhostRecorder*, get_Recorder, (app::IGhostRecorderPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::GhostPlayer*, get_Player, (app::IGhostRecorderPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B6FFA0, void, InitializeFast, (app::IGhostRecorderPlugin * this_ptr, app::GhostFrame_FrameDataTypes__Enum typ))
    IL2CPP_REGISTER_METHOD(0x00B70060, void, HandleNextFrameLogicFast, (app::IGhostRecorderPlugin * this_ptr, float time, app::GhostFrame_FrameDataTypes__Enum typ))
    IL2CPP_REGISTER_METHOD(0x00B701E0, void, OnRegister_1, (app::IGhostRecorderPlugin * this_ptr, app::GhostRecorder* recorder))
    IL2CPP_REGISTER_METHOD(0x00B701F0, void, OnRegister_2, (app::IGhostRecorderPlugin * this_ptr, app::GhostPlayer* player))
    IL2CPP_REGISTER_METHOD(0x00B70200, void, OnUnregister, (app::IGhostRecorderPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B70210, int32_t, FindNextFrameFast, (app::IGhostRecorderPlugin * this_ptr, app::GhostFrame_FrameDataTypes__Enum typ))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopRecording, (app::IGhostRecorderPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartRecording, (app::IGhostRecorderPlugin * this_ptr, app::PreRecordingData* pre_recording_data))
    IL2CPP_REGISTER_METHOD(0x007E59B0, void, ctor, (app::IGhostRecorderPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01549FB0, void, Initialize, (app::IGhostRecorderPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01549EE0, void, HandleNextFrameLogic, (app::IGhostRecorderPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x02654C00, int32_t, FindNextFrame, (app::IGhostRecorderPlugin * this_ptr))
} // namespace app::classes::IGhostRecorderPlugin
