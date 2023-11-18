#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderPlaybackUIInspector.h>
#include <Modloader/app/structs/AbilitiesData.h>
#include <Modloader/app/structs/FieldInfo_1.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::RecorderPlaybackUIInspector {
    IL2CPP_REGISTER_METHOD(0x008F7CD0, void, PlayCycle, (app::RecorderPlaybackUIInspector * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, RecordCycle, (app::RecorderPlaybackUIInspector * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, Exit, (app::RecorderPlaybackUIInspector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F7CE0, void, DrawFrameData, (app::RecorderPlaybackUIInspector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F83A0, app::FieldInfo_1*, GetFieldInfo, (app::RecorderPlaybackUIInspector * this_ptr, app::AbilitiesData* abilities_data))
    IL2CPP_REGISTER_METHOD(0x008F87E0, void, DrawValueDiffField, (app::RecorderPlaybackUIInspector * this_ptr, app::String* label, float value, float recorded_value))
    IL2CPP_REGISTER_METHOD(0x008F8B40, void, DrawValueField_1, (app::RecorderPlaybackUIInspector * this_ptr, app::String* label, float value, float recorded_value))
    IL2CPP_REGISTER_METHOD(0x008F8CC0, void, DrawValueField_2, (app::RecorderPlaybackUIInspector * this_ptr, app::String* label, app::Vector2 value, app::Vector2 recorded_value))
    IL2CPP_REGISTER_METHOD(0x008F8E50, void, DrawValueField_3, (app::RecorderPlaybackUIInspector * this_ptr, app::String* label, app::Vector3 value, app::Vector3 recorded_value))
    IL2CPP_REGISTER_METHOD(0x008F9040, void, Awake, (app::RecorderPlaybackUIInspector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9100, void, OnGUI, (app::RecorderPlaybackUIInspector * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9140, void, ctor, (app::RecorderPlaybackUIInspector * this_ptr))
} // namespace app::classes::RecorderPlaybackUIInspector
