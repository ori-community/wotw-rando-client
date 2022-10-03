#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::PlayerDistanceCondition {
    IL2CPP_REGISTER_METHOD(0x0140E680, bool, Validate, (app::PlayerDistanceCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x008A2C20, void, ctor, (app::PlayerDistanceCondition * this_ptr))
} // namespace app::classes::PlayerDistanceCondition
