#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlFeedingGrounds::FeedingGroundsBreakablePlatform {
    IL2CPP_REGISTER_METHOD(0x01784060, void, OnDisable, (app::FeedingGroundsBreakablePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01784600, void, PlayIdle, (app::FeedingGroundsBreakablePlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0474FA38, FeedingGroundsBreakablePlatform_PlayIdle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01784640, void, StartShake, (app::FeedingGroundsBreakablePlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04783BF8, FeedingGroundsBreakablePlatform_StartShake__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01784660, void, StartBreak, (app::FeedingGroundsBreakablePlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047650F8, FeedingGroundsBreakablePlatform_StartBreak__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01784680, void, PlayBrokenIdle, (app::FeedingGroundsBreakablePlatform * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04710468, FeedingGroundsBreakablePlatform_PlayBrokenIdle__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x017846C0, void, ResetState, (app::FeedingGroundsBreakablePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x017851A0, void, StopCurrentTimeline, (app::FeedingGroundsBreakablePlatform * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01785270, void, PlayTimeline, (app::FeedingGroundsBreakablePlatform * this_ptr, app::MoonTimeline * timeline))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::FeedingGroundsBreakablePlatform * this_ptr))
}
