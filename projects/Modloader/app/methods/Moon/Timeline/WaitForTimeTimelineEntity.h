#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/WaitForTimeTimelineEntity.h>
#include <Modloader/app/structs/IContext.h>

namespace app::classes::Moon::Timeline::WaitForTimeTimelineEntity {
    IL2CPP_REGISTER_METHOD(0x008693A0, float, get_CurrentTime, (app::WaitForTimeTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F0F850, void, OnStartPlayback, (app::WaitForTimeTimelineEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnStopPlayback, (app::WaitForTimeTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPausePlayback, (app::WaitForTimeTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnResumePlayback, (app::WaitForTimeTimelineEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E93250, void, OnUpdateEntity, (app::WaitForTimeTimelineEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x01E93260, void, ctor, (app::WaitForTimeTimelineEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::WaitForTimeTimelineEntity
