#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::ConstraintPosition {
    IL2CPP_REGISTER_METHOD(0x02051CC0, void, UpdateConstraint, (app::ConstraintPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::ConstraintPosition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::ConstraintPosition * this_ptr, app::Transform* transform))
} // namespace app::classes::RootMotion::FinalIK::ConstraintPosition
