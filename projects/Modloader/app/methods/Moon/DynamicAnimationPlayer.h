#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DynamicAnimationPlayer.h>
#include <Modloader/app/structs/AnimationPlayer.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/TimelineEntityRecord.h>

namespace app::classes::Moon::DynamicAnimationPlayer {
    IL2CPP_REGISTER_METHOD(0x01BAA050, void, Clone, (app::DynamicAnimationPlayer * this_ptr, app::AnimationPlayer* player))
    IL2CPP_REGISTER_METHOD(0x01BAA3C0, void, OnActiveAnimationStopEvent, (app::DynamicAnimationPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BAA3F0, bool, HasFinished, (app::DynamicAnimationPlayer * this_ptr, int32_t event_id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SynchronizeData, (app::DynamicAnimationPlayer * this_ptr, app::MoonTimeline* timeline, app::TimelineEntityRecord* record))
    IL2CPP_REGISTER_METHOD(0x01BAA410, bool, ApproximateEvent, (app::DynamicAnimationPlayer * this_ptr, int32_t evt, float* time))
    IL2CPP_REGISTER_METHOD(0x00F59B40, void, ctor, (app::DynamicAnimationPlayer * this_ptr))
} // namespace app::classes::Moon::DynamicAnimationPlayer
