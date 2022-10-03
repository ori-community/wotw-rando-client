#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::RootMotion::FinalIK::ConstraintRotation {
    IL2CPP_REGISTER_METHOD(0x020524D0, void, UpdateConstraint, (app::ConstraintRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::ConstraintRotation * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::ConstraintRotation * this_ptr, app::Transform* transform))
} // namespace app::classes::RootMotion::FinalIK::ConstraintRotation
