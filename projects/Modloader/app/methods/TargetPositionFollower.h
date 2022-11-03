#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TargetPositionFollower {
    IL2CPP_REGISTER_METHOD(0x00CE3330, void, FixedUpdate, (app::TargetPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CE3340, void, UpdateFollower, (app::TargetPositionFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004C8610, void, ctor, (app::TargetPositionFollower * this_ptr))
} // namespace app::classes::TargetPositionFollower
