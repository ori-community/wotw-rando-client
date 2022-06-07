#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::SeinOnClimbableWallCondition {
    IL2CPP_REGISTER_METHOD(0x008AF1E0, bool, Validate, (app::SeinOnClimbableWallCondition * this_ptr, app::IContext * context))
    IL2CPP_REGISTER_METHOD(0x008AF400, bool, IsSafeTestPassed, (app::SeinOnClimbableWallCondition * this_ptr, app::PlatformBehaviour * behaviour))
    IL2CPP_REGISTER_METHOD(0x00597BB0, void, ctor, (app::SeinOnClimbableWallCondition * this_ptr))
}
