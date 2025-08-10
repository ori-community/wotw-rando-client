#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/RecorderPlaybackUI.h>
#include <Modloader/app/structs/Recorder_1.h>

namespace app::classes::RecorderPlaybackUI {
    IL2CPP_REGISTER_METHOD(0x008F4A40, void, ResetStatics, )
    IL2CPP_REGISTER_METHOD(0x0040B220, app::Recorder_1*, get_Recorder, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00675C60, bool, get_DoBlast, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F4C80, void, set_DoBlast, app::RecorderPlaybackUI* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x008F4C90, void, FixedUpdate, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F4DC0, void, Update, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5610, void, NextKeyframe, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5720, void, PreviousKeyframe, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5840, void, GoToKeyframe, app::RecorderPlaybackUI* this_ptr, int32_t keyframe)
    IL2CPP_REGISTER_METHOD(0x00608720, void, SetSpeed, app::RecorderPlaybackUI* this_ptr, int32_t speed)
    IL2CPP_REGISTER_METHOD(0x00608710, int32_t, GetSpeed, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5B30, void, TogglePlaying, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5B50, void, Play, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5B60, void, Stop, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5B70, void, HideUi, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5CF0, void, ToggleTimeline, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x005D6880, bool, IsUIVisible, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5EA0, void, DoExit, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F5F60, void, IncreaseSpeed, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F6020, void, DecreaseSpeed, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F6030, void, UpdateTimeScale, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F62C0, void, Awake, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F7080, app::IEnumerator*, Start, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F71D0, void, JumpToFrame, app::RecorderPlaybackUI* this_ptr, int32_t frame_index)
    IL2CPP_REGISTER_METHOD(0x008F72C0, void, ctor, app::RecorderPlaybackUI* this_ptr)
    IL2CPP_REGISTER_METHOD(0x008F7650, void, cctor, )
} // namespace app::classes::RecorderPlaybackUI
