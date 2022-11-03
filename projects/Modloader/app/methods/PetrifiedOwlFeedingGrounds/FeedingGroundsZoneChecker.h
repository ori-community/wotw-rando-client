#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsZoneChecker {
    IL2CPP_REGISTER_METHOD(0x014DEF10, bool, IsInsideZone, (app::FeedingGroundsZoneChecker * this_ptr, app::PetrifiedOwlFeedingGroundsState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00735B10, void, ctor, (app::FeedingGroundsZoneChecker * this_ptr))
} // namespace app::classes::PetrifiedOwlFeedingGrounds::FeedingGroundsZoneChecker
