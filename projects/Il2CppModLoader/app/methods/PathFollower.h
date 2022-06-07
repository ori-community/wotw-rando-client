#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::PathFollower {
    IL2CPP_REGISTER_METHOD(0x00446940, app::Vector3, get_WorldPosition, (app::PathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446960, float, get_WorldAngle, (app::PathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446970, bool, get_ReachedTheEnd, (app::PathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00446980, void, set_ReachedTheEnd, (app::PathFollower * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00446990, void, Reset, (app::PathFollower * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004469A0, void, UpdateFollower, (app::PathFollower * this_ptr, float dt))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::PathFollower * this_ptr))
}
