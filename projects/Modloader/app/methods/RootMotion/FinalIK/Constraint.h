#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Constraint.h>

namespace app::classes::RootMotion::FinalIK::Constraint {
    IL2CPP_REGISTER_METHOD(0x02051C20, bool, get_isValid, app::Constraint* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Constraint* this_ptr)
} // namespace app::classes::RootMotion::FinalIK::Constraint
