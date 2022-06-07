#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlFeedingGrounds::FeedingGroundsZoneChecker {
    IL2CPP_REGISTER_METHOD(0x014DEF10, bool, IsInsideZone, (app::FeedingGroundsZoneChecker * this_ptr, app::PetrifiedOwlFeedingGroundsState__Enum state))
    IL2CPP_REGISTER_METHOD(0x00735B10, void, ctor, (app::FeedingGroundsZoneChecker * this_ptr))
}
