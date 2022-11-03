#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::WaitTimelineEntity {
    IL2CPP_REGISTER_METHOD(0x008693A0, float, get_CurrentTime, (app::WaitTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0F850, void, OnStartPlayback, (app::WaitTimelineEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::WaitTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (app::WaitTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (app::WaitTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E93250, void, OnUpdateEntity, (app::WaitTimelineEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E93580, void, ctor, (app::WaitTimelineEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::WaitTimelineEntity
