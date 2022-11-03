#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::PlayerIsNotDiggingCondition {
    IL2CPP_REGISTER_METHOD(0x01427390, bool, Validate, (app::PlayerIsNotDiggingCondition * this_ptr, app::IContext* context))
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, (app::PlayerIsNotDiggingCondition * this_ptr))
} // namespace app::classes::PlayerIsNotDiggingCondition
