#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BendGoal.h>

namespace app::classes::RootMotion::Demos::BendGoal {
    IL2CPP_REGISTER_METHOD(0x0220B8C0, void, Start, (app::BendGoal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0220B960, void, LateUpdate, (app::BendGoal * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0136E200, void, ctor, (app::BendGoal * this_ptr))
} // namespace app::classes::RootMotion::Demos::BendGoal
