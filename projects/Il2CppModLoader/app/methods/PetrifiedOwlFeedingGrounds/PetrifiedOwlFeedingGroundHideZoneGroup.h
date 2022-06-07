#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundHideZoneGroup {
    IL2CPP_REGISTER_METHOD(0x014DF140, bool, PositionInside, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x014DF390, app::PetrifiedOwlFeedingGroundHideZone *, GetZoneIfPositionInside, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x014DF530, void, Start, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DF830, void, ctor, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr))
}
