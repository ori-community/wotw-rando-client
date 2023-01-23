#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/PetrifiedOwlFeedingGroundHideZone.h>

namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundHideZone {
    IL2CPP_REGISTER_METHOD(0x0132AA40, void, Start, (app::PetrifiedOwlFeedingGroundHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0132AA40, void, FixedUpdate, (app::PetrifiedOwlFeedingGroundHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x014DF000, void, OnDrawGizmos, (app::PetrifiedOwlFeedingGroundHideZone * this_ptr))
    IL2CPP_REGISTER_METHOD(0x012E09A0, void, ctor, (app::PetrifiedOwlFeedingGroundHideZone * this_ptr))
} // namespace app::classes::PetrifiedOwlFeedingGrounds::PetrifiedOwlFeedingGroundHideZone
