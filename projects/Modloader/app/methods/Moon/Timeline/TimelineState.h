#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Single_.h>
#include <Modloader/app/structs/ITimelineStateObserver.h>
#include <Modloader/app/structs/TimelineState.h>

namespace app::classes::Moon::Timeline::TimelineState {
    IL2CPP_REGISTER_METHOD(0x01E8CC30, bool, get_InPreviewMode, )
    IL2CPP_REGISTER_METHOD(0x01E8CCD0, void, set_InPreviewMode, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8CD80, bool, get_IsOriAnimatorDrivingOri, )
    IL2CPP_REGISTER_METHOD(0x01E8CE20, void, set_IsOriAnimatorDrivingOri, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8CED0, bool, get_ShouldTimelineAnimateCamera, )
    IL2CPP_REGISTER_METHOD(0x01E8CF70, void, set_ShouldTimelineAnimateCamera, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8D020, float, get_CurrentTime, )
    IL2CPP_REGISTER_METHOD(0x01E8D0C0, void, set_CurrentTime, float value)
    IL2CPP_REGISTER_METHOD(0x01E8D170, bool, get_IsPlaying, )
    IL2CPP_REGISTER_METHOD(0x01E8D210, void, set_IsPlaying, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8D2C0, bool, get_ClipStructureUpdated, )
    IL2CPP_REGISTER_METHOD(0x01E8D360, void, set_ClipStructureUpdated, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8D420, bool, get_HierarchyUpdated, )
    IL2CPP_REGISTER_METHOD(0x01E8D4C0, void, set_HierarchyUpdated, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8D570, bool, get_UndoRedoPerformed, )
    IL2CPP_REGISTER_METHOD(0x01E8D610, void, set_UndoRedoPerformed, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8D6C0, bool, get_IsScrubbing, )
    IL2CPP_REGISTER_METHOD(0x01E8D760, void, set_IsScrubbing, bool value)
    IL2CPP_REGISTER_METHOD(0x01E8D810, void, add_OnPreviewablesSampledCallback, app::Action_1_Single_* value)
    IL2CPP_REGISTER_METHOD(0x01E8D950, void, remove_OnPreviewablesSampledCallback, app::Action_1_Single_* value)
    IL2CPP_REGISTER_METHOD(0x01E8DA90, void, add_OnTimelineStateChangeCallback, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01E8DBD0, void, remove_OnTimelineStateChangeCallback, app::Action* value)
    IL2CPP_REGISTER_METHOD(0x01E8DD10, float, get_MotionBlurScale, )
    IL2CPP_REGISTER_METHOD(0x01E8DEB0, void, set_MotionBlurScale, float value)
    IL2CPP_REGISTER_METHOD(0x01E8DF60, void, AddObserver, app::ITimelineStateObserver* observer)
    IL2CPP_REGISTER_METHOD(0x01E8E180, void, RemoveObserver, app::ITimelineStateObserver* observer)
    IL2CPP_REGISTER_METHOD(0x01E8E240, void, OnPreviewablesSampled, float time)
    IL2CPP_REGISTER_METHOD(0x01E8E4D0, void, OnPreviewablesEnter, )
    IL2CPP_REGISTER_METHOD(0x01E8E710, void, OnPreviewablesExit, )
    IL2CPP_REGISTER_METHOD(0x01E8E950, void, OnTimelineStateChange, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::TimelineState* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01E8EA30, void, cctor, )
} // namespace app::classes::Moon::Timeline::TimelineState
