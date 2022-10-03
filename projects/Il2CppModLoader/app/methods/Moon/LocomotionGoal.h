#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::Moon::LocomotionGoal {
    IL2CPP_REGISTER_METHOD(0x0110DC40, void, ctor, (app::LocomotionGoal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0110DF70, void, End, (app::LocomotionGoal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0110E010, void, Update, (app::LocomotionGoal * this_ptr, float dt))
} // namespace app::classes::Moon::LocomotionGoal
