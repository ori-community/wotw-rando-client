#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::RootMotion::FinalIK::ConstraintPositionOffset {
    IL2CPP_REGISTER_METHOD(0x02051EC0, void, UpdateConstraint, (app::ConstraintPositionOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::ConstraintPositionOffset * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::ConstraintPositionOffset * this_ptr, app::Transform * transform))
    IL2CPP_REGISTER_METHOD(0x020522F0, bool, get_positionChanged, (app::ConstraintPositionOffset * this_ptr))
}
