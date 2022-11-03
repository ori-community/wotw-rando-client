#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::Timeline::SceneEntity {
    IL2CPP_REGISTER_METHOD(0x007835D0, void, OnUpdateEntity, (app::SceneEntity * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x007836E0, void, OnStartPlayback, (app::SceneEntity * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00783800, void, OnStopPlayback, (app::SceneEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00783820, bool, HasFinished, (app::SceneEntity * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x00783940, bool, ApproximateEvent, (app::SceneEntity * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x00783A70, void, SynchronizeData, (app::SceneEntity * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00783C50, void, ctor, (app::SceneEntity * this_ptr))
} // namespace app::classes::Moon::Timeline::SceneEntity
