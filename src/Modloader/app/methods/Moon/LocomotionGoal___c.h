#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LocomotionGoal_GoalStatus__Enum.h>
#include <Modloader/app/structs/LocomotionGoal_c.h>

namespace app::classes::Moon::LocomotionGoal___c {
    IL2CPP_REGISTER_METHOD(0x0110E100, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::LocomotionGoal_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__1_0, app::LocomotionGoal_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__1_1, app::LocomotionGoal_c* this_ptr, app::LocomotionGoal_GoalStatus__Enum _p0_)
} // namespace app::classes::Moon::LocomotionGoal___c
