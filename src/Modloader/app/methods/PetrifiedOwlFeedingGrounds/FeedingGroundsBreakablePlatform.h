#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FeedingGroundsBreakablePlatform.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsBreakablePlatform {
    IL2CPP_REGISTER_METHOD(0x01784060, void, OnDisable, app::FeedingGroundsBreakablePlatform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01784600, void, PlayIdle, app::FeedingGroundsBreakablePlatform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01784640, void, StartShake, app::FeedingGroundsBreakablePlatform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01784660, void, StartBreak, app::FeedingGroundsBreakablePlatform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01784680, void, PlayBrokenIdle, app::FeedingGroundsBreakablePlatform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017846C0, void, ResetState, app::FeedingGroundsBreakablePlatform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017851A0, void, StopCurrentTimeline, app::FeedingGroundsBreakablePlatform* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01785270, void, PlayTimeline, app::FeedingGroundsBreakablePlatform* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::FeedingGroundsBreakablePlatform* this_ptr)
} // namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsBreakablePlatform
