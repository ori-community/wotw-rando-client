#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GlobalRecordingTable.h>
#include <Modloader/app/structs/GhostAnimationParameterPlugin.h>
#include <Modloader/app/structs/GhostRecorder_GhostPluginRecordingType__Enum.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/PreRecordingData.h>

namespace app::classes::GhostAnimationParameterPlugin {
    IL2CPP_REGISTER_METHOD(0x002FB9F0, app::GlobalRecordingTable*, get_GlobalRecordingTable, (app::GhostAnimationParameterPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBA00, void, set_GlobalRecordingTable, (app::GhostAnimationParameterPlugin * this_ptr, app::GlobalRecordingTable* value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStartRecording, (app::GhostAnimationParameterPlugin * this_ptr, app::PreRecordingData* pre_recording_data))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopRecording, (app::GhostAnimationParameterPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, PlayCycle, (app::GhostAnimationParameterPlugin * this_ptr, float time))
    IL2CPP_REGISTER_METHOD(0x00E130A0, void, RecordCycle, (app::GhostAnimationParameterPlugin * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::GhostRecorder_GhostPluginRecordingType__Enum, GetRecordingType, (app::GhostAnimationParameterPlugin * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RegisterAnimatorForRecording, (app::GhostAnimationParameterPlugin * this_ptr, app::MoonAnimator* animator))
    IL2CPP_REGISTER_METHOD(0x00E13330, void, ctor, (app::GhostAnimationParameterPlugin * this_ptr))
} // namespace app::classes::GhostAnimationParameterPlugin
