#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::IsTrialCondition {
    IL2CPP_REGISTER_METHOD(0x00647D20, bool, Validate, (app::IsTrialCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::IsTrialCondition * this_ptr))
} // namespace app::classes::IsTrialCondition
