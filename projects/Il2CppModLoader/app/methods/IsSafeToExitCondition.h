#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IsSafeToExitCondition {
    IL2CPP_REGISTER_METHOD(0x00647810, bool, Validate, (app::IsSafeToExitCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsSafeToExitCondition * this_ptr))
} // namespace app::classes::IsSafeToExitCondition
