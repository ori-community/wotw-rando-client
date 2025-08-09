#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/FeedingGroundsBreakableOwl.h>
#include <Modloader/app/structs/MoonTimeline.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsBreakableOwl {
    IL2CPP_REGISTER_METHOD(0x01782DA0, void, OnDisable, app::FeedingGroundsBreakableOwl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01783340, void, StartShake, app::FeedingGroundsBreakableOwl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01783360, void, PlayShakeIdle, app::FeedingGroundsBreakableOwl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017833A0, void, StartBreak, app::FeedingGroundsBreakableOwl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x017833C0, void, PlayBrokenIdle, app::FeedingGroundsBreakableOwl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01783400, void, ResetState, app::FeedingGroundsBreakableOwl* this_ptr, bool alerted)
    IL2CPP_REGISTER_METHOD(0x01783F10, void, StopCurrentTimeline, app::FeedingGroundsBreakableOwl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01783FE0, void, PlayIdle, app::FeedingGroundsBreakableOwl* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01784020, void, PlayTimeline, app::FeedingGroundsBreakableOwl* this_ptr, app::MoonTimeline* timeline)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::FeedingGroundsBreakableOwl* this_ptr)
} // namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsBreakableOwl
