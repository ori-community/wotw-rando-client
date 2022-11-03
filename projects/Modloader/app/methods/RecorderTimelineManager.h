#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::RecorderTimelineManager {
    IL2CPP_REGISTER_METHOD(0x008FA1E0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x003FC830, int32_t, get_OutputFrameCount, (app::RecorderTimelineManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C5130, void, set_OutputFrameCount, (app::RecorderTimelineManager * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x008FA280, void, SetTimeline, (app::RecorderTimelineManager * this_ptr, app::GameObject* timeline))
    IL2CPP_REGISTER_METHOD(0x008FA390, void, Awake, (app::RecorderTimelineManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FA4E0, void, Start, (app::RecorderTimelineManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FA6F0, void, OnRecorderAwake, (app::RecorderTimelineManager * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742988, RecorderTimelineManager_OnRecorderAwake__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x008FA7A0, void, Update, (app::RecorderTimelineManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FA970, void, FixedUpdate, (app::RecorderTimelineManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FAA30, app::AsyncRenderCapture*, StartOutputTestScreenShot, (int32_t max_frame_count, app::Action_1_Int32_* on_complete, bool hide_u_i, bool show_frame_count, int32_t start_frame))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::RecorderTimelineManager * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008FAD70, void, cctor, ())
} // namespace app::classes::RecorderTimelineManager
