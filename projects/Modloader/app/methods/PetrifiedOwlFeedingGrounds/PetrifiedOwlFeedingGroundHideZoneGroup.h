#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZoneGroup.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundHideZoneGroup {
    IL2CPP_REGISTER_METHOD(0x014DF140, bool, PositionInside, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x014DF390, app::PetrifiedOwlFeedingGroundHideZone*, GetZoneIfPositionInside, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x014DF530, void, Start, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DF830, void, ctor, (app::PetrifiedOwlFeedingGroundHideZoneGroup * this_ptr))
} // namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundHideZoneGroup
