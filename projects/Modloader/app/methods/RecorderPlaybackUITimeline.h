#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RecorderPlaybackUITimeline.h>

namespace app::classes::RecorderPlaybackUITimeline {
    IL2CPP_REGISTER_METHOD(0x008F92D0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FCE30, bool, get_IsInitialised, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9350, int32_t, get_TotalFrames, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9400, int32_t, get_CurrentFrame, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9420, int32_t, KeyframeBack, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9500, int32_t, KeyframeForward, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F95E0, int32_t, GetKeyframe, (app::RecorderPlaybackUITimeline * this_ptr, int32_t keyframe))
    IL2CPP_REGISTER_METHOD(0x008F9690, void, Start, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F96A0, void, Initialise, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008F9970, void, OnDestory, (app::RecorderPlaybackUITimeline * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecorderPlaybackUITimeline * this_ptr))
} // namespace app::classes::RecorderPlaybackUITimeline
