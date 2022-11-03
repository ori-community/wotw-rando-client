#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::CompareVelocityCondition {
    IL2CPP_REGISTER_METHOD(0x011DEDF0, void, Awake, (app::CompareVelocityCondition * this_ptr))
    IL2CPP_REGISTER_METHOD(0x011DEE80, bool, Validate, (app::CompareVelocityCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::CompareVelocityCondition * this_ptr))
} // namespace app::classes::CompareVelocityCondition
