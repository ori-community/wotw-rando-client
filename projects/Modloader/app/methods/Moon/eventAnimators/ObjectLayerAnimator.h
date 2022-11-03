#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::Moon::eventAnimators::ObjectLayerAnimator {
    IL2CPP_REGISTER_METHOD(0x00F2CAF0, void, OnStartPlayback, (app::ObjectLayerAnimator * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x00F2CBF0, void, OnUpdateEntity, (app::ObjectLayerAnimator * this_ptr, float delta_time))
    IL2CPP_REGISTER_METHOD(0x00F2CCF0, void, OnStopPlayback, (app::ObjectLayerAnimator * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F2CD10, void, SynchronizeData, (app::ObjectLayerAnimator * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x00773A00, void, ctor, (app::ObjectLayerAnimator * this_ptr))
} // namespace app::classes::Moon::eventAnimators::ObjectLayerAnimator
